/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/
/****************************************************************************
*
* This file is used to wrap the three different versions of the DUT
* block called "DFT_compute". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"DFT_compute_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_DFT_compute)

#define BDW_AUTO_KNOWN 1 


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef DFT_compute
#define DFT_compute DFT_compute_rtl
#	include	"DFT_compute_rtl.cpp"
#undef DFT_compute


#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"DFT_compute_coware.h"
#else
#include	"DFT_compute_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "DFT_compute_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"../DFT_compute.cpp"


#define		DFT_compute_INTERNAL


#include	"DFT_compute_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
DFT_compute_cycsim* (*DFT_compute_cycsim_factory_p)() = 0;

#define MAX_SIMCONFIG_LENGTH 128

#if BDW_WRITEFSDB == 1

#if defined(NC_SYSTEMC) && defined(BDW_NCSC_VER) && BDW_NCSC_VER > 102
#include "fsdb_nc_mix.h"
#else
#if SYSTEMC_VERSION >= 20120701
#include "fsdb_osci.h"
#else
#include "fsdb_trace_file.h"
#endif
#endif 
#if BDW_USE_SCV
#include "scv.h"
#include "scv_tr_fsdb.h"
#endif

#endif /* BDW_WRITEFSDB */

inline void esc_open_fsdb_trace( const char *file_name = "systemc" );
inline void esc_close_fsdb_trace();
inline void esc_close_fsdb_scv_trace();

// The following threads are used to connect structured ports to the actual
// RTL ports
void DFT_compute_wrapper::thread_i_real_data_man()
{
   i_real_data_man = i_real.data.read().man;
}
void DFT_compute_wrapper::thread_i_real_data_exp()
{
   i_real_data_exp = i_real.data.read().exp;
}
void DFT_compute_wrapper::thread_i_real_data_sign()
{
   i_real_data_sign = i_real.data.read().sign;
}
void DFT_compute_wrapper::thread_o_dft_real_data()
{
   cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 > tmp;
   tmp.man = o_dft_real_data_man.read();
   tmp.exp = o_dft_real_data_exp.read();
   tmp.sign = o_dft_real_data_sign.read();
   o_dft_real.data.write(tmp);
}
void DFT_compute_wrapper::thread_o_dft_imag_data()
{
   cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 > tmp;
   tmp.man = o_dft_imag_data_man.read();
   tmp.exp = o_dft_imag_data_exp.read();
   tmp.sign = o_dft_imag_data_sign.read();
   o_dft_imag.data.write(tmp);
}


const char * DFT_compute_wrapper::simConfigName()
{
	static char defineBuf[MAX_SIMCONFIG_LENGTH];
	const char *simConfig = NULL;
	if ( qbhGetDefine( "BDW_SIM_CONFIG", defineBuf, MAX_SIMCONFIG_LENGTH ) == qbhOK )
	{
		simConfig = defineBuf;
	}
	else
	{
		simConfig = getenv( "BDW_SIM_CONFIG" );
	}

	if ( simConfig == NULL )
	{
		esc_report_error( esc_fatal, "BDW_SIM_CONFIG needs to be set" );
	}

	return simConfig;
}

enum DFT_compute_wrapper::Representation DFT_compute_wrapper::lookupRepresentation( const char* instName )
{
	const char *simConfig = simConfigName();

	if ( simConfig == NULL )
		return BDWRep_None;

	Representation result;

	qbhProjectHandle hProj;
	qbhError err = qbhGetCurrentProject( &hProj );
	if ( err == qbhErrorNoProject )
	{
		err = qbhOpenProject( "project.tcl", &hProj );

		if ( err != qbhOK )
		{
			esc_report_error( esc_fatal, "could not open project file %s",
							  "project.tcl" );
			return BDWRep_None;
		}
	}

	int iresult = 0;
	err = qbhGetRepresentation(hProj, "DFT_compute", simConfig, instName, &iresult );
	result = (Representation)iresult;

	if ( err == qbhOK )
		return result;

	// If this module isn't mentioned in the simConfig, assume it's behavioral.
	if ( err == qbhErrorNotFound ) {
		return BDWRep_Behavioral;
	} else if ( err == qbhErrorBadInstName ) {
		if (instName && *instName) {
			const char* leaf = strrchr( instName, '.' ) + 1;
			esc_report_error( esc_warning, "Instance names were specified for module '%s' in simConfig '%s', but they did not "
			                    "match the actal instance names in the RTL.  Try '%s' or '%s'. Simulating '%s' as BEH.\n",
								 "DFT_compute", simConfig, instName, leaf,  "DFT_compute" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void DFT_compute_wrapper::InitInstances(  )
{
    enum DFT_compute_wrapper::Representation rep =
		DFT_compute_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "DFT_compute" );
	esc_log_representation( "DFT_compute", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    DFT_compute_cosim0 = new DFT_compute_cosim( "DFT_compute" );

		    DFT_compute_cosim0->i_clk(i_clk);
		    DFT_compute_cosim0->i_rst(i_rst);
		    DFT_compute_cosim0->i_real_busy(i_real.busy);
		    DFT_compute_cosim0->i_real_vld(i_real.vld);
		    DFT_compute_cosim0->i_real_data_man(i_real_data_man);
		    DFT_compute_cosim0->i_real_data_exp(i_real_data_exp);
		    DFT_compute_cosim0->i_real_data_sign(i_real_data_sign);
		    DFT_compute_cosim0->o_dft_real_busy(o_dft_real.busy);
		    DFT_compute_cosim0->o_dft_real_vld(o_dft_real.vld);
		    DFT_compute_cosim0->o_dft_real_data_man(o_dft_real_data_man);
		    DFT_compute_cosim0->o_dft_real_data_exp(o_dft_real_data_exp);
		    DFT_compute_cosim0->o_dft_real_data_sign(o_dft_real_data_sign);
		    DFT_compute_cosim0->o_dft_imag_busy(o_dft_imag.busy);
		    DFT_compute_cosim0->o_dft_imag_vld(o_dft_imag.vld);
		    DFT_compute_cosim0->o_dft_imag_data_man(o_dft_imag_data_man);
		    DFT_compute_cosim0->o_dft_imag_data_exp(o_dft_imag_data_exp);
		    DFT_compute_cosim0->o_dft_imag_data_sign(o_dft_imag_data_sign);

			break;
		case BDWRep_RTL_HDL:
		    DFT_compute_cosim0 = new DFT_compute_cosim( "DFT_compute" );

		    DFT_compute_cosim0->i_clk(i_clk);
		    DFT_compute_cosim0->i_rst(i_rst);
		    DFT_compute_cosim0->i_real_busy(i_real.busy);
		    DFT_compute_cosim0->i_real_vld(i_real.vld);
		    DFT_compute_cosim0->i_real_data_man(i_real_data_man);
		    DFT_compute_cosim0->i_real_data_exp(i_real_data_exp);
		    DFT_compute_cosim0->i_real_data_sign(i_real_data_sign);
		    DFT_compute_cosim0->o_dft_real_busy(o_dft_real.busy);
		    DFT_compute_cosim0->o_dft_real_vld(o_dft_real.vld);
		    DFT_compute_cosim0->o_dft_real_data_man(o_dft_real_data_man);
		    DFT_compute_cosim0->o_dft_real_data_exp(o_dft_real_data_exp);
		    DFT_compute_cosim0->o_dft_real_data_sign(o_dft_real_data_sign);
		    DFT_compute_cosim0->o_dft_imag_busy(o_dft_imag.busy);
		    DFT_compute_cosim0->o_dft_imag_vld(o_dft_imag.vld);
		    DFT_compute_cosim0->o_dft_imag_data_man(o_dft_imag_data_man);
		    DFT_compute_cosim0->o_dft_imag_data_exp(o_dft_imag_data_exp);
		    DFT_compute_cosim0->o_dft_imag_data_sign(o_dft_imag_data_sign);

			break;
        case BDWRep_CYC_HDL:
            if ( DFT_compute_cycsim_factory_p )
                DFT_compute_cycsim0 = DFT_compute_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module DFT_compute");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"DFT_compute\"");

		    DFT_compute_cycsim0->i_clk(i_clk);
		    DFT_compute_cycsim0->i_rst(i_rst);
		    DFT_compute_cycsim0->i_real_busy(i_real.busy);
		    DFT_compute_cycsim0->i_real_vld(i_real.vld);
		    DFT_compute_cycsim0->i_real_data_man(i_real_data_man);
		    DFT_compute_cycsim0->i_real_data_exp(i_real_data_exp);
		    DFT_compute_cycsim0->i_real_data_sign(i_real_data_sign);
		    DFT_compute_cycsim0->o_dft_real_busy(o_dft_real.busy);
		    DFT_compute_cycsim0->o_dft_real_vld(o_dft_real.vld);
		    DFT_compute_cycsim0->o_dft_real_data_man(o_dft_real_data_man);
		    DFT_compute_cycsim0->o_dft_real_data_exp(o_dft_real_data_exp);
		    DFT_compute_cycsim0->o_dft_real_data_sign(o_dft_real_data_sign);
		    DFT_compute_cycsim0->o_dft_imag_busy(o_dft_imag.busy);
		    DFT_compute_cycsim0->o_dft_imag_vld(o_dft_imag.vld);
		    DFT_compute_cycsim0->o_dft_imag_data_man(o_dft_imag_data_man);
		    DFT_compute_cycsim0->o_dft_imag_data_exp(o_dft_imag_data_exp);
		    DFT_compute_cycsim0->o_dft_imag_data_sign(o_dft_imag_data_sign);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_DFT_compute)
		case BDWRep_RTL_C:
		    DFT_compute_rtl0 = new DFT_compute_rtl( "DFT_compute" );

		    DFT_compute_rtl0->i_clk(i_clk);
		    DFT_compute_rtl0->i_rst(i_rst);
		    DFT_compute_rtl0->i_real_busy(i_real.busy);
		    DFT_compute_rtl0->i_real_vld(i_real.vld);
		    DFT_compute_rtl0->i_real_data_man(i_real_data_man);
		    DFT_compute_rtl0->i_real_data_exp(i_real_data_exp);
		    DFT_compute_rtl0->i_real_data_sign(i_real_data_sign);
		    DFT_compute_rtl0->o_dft_real_busy(o_dft_real.busy);
		    DFT_compute_rtl0->o_dft_real_vld(o_dft_real.vld);
		    DFT_compute_rtl0->o_dft_real_data_man(o_dft_real_data_man);
		    DFT_compute_rtl0->o_dft_real_data_exp(o_dft_real_data_exp);
		    DFT_compute_rtl0->o_dft_real_data_sign(o_dft_real_data_sign);
		    DFT_compute_rtl0->o_dft_imag_busy(o_dft_imag.busy);
		    DFT_compute_rtl0->o_dft_imag_vld(o_dft_imag.vld);
		    DFT_compute_rtl0->o_dft_imag_data_man(o_dft_imag_data_man);
		    DFT_compute_rtl0->o_dft_imag_data_exp(o_dft_imag_data_exp);
		    DFT_compute_rtl0->o_dft_imag_data_sign(o_dft_imag_data_sign);


			{
			const char *simConfig = DFT_compute_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
#endif
		case BDWRep_Behavioral:
		    DFT_compute0 = new DFT_compute( "DFT_compute" );

		    DFT_compute0->i_clk(i_clk);
		    DFT_compute0->i_rst(i_rst);
		    DFT_compute0->i_real.busy(i_real.busy);
		    DFT_compute0->i_real.vld(i_real.vld);
		    DFT_compute0->i_real.data(i_real.data);
		    DFT_compute0->o_dft_real.busy(o_dft_real.busy);
		    DFT_compute0->o_dft_real.vld(o_dft_real.vld);
		    DFT_compute0->o_dft_real.data(o_dft_real.data);
		    DFT_compute0->o_dft_imag.busy(o_dft_imag.busy);
		    DFT_compute0->o_dft_imag.vld(o_dft_imag.vld);
		    DFT_compute0->o_dft_imag.data(o_dft_imag.data);


			{
			const char *simConfig = DFT_compute_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
		case BDWRep_None:
		default:
			esc_report_error( esc_error, "No representation could be determined for simulating instance %s. Please make sure that you used the right name string in the module constructor",
							  name() );
			break;
	}
}

void DFT_compute_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		SC_METHOD(thread_i_real_data_man);
		  sensitive << i_real.data;
		SC_METHOD(thread_i_real_data_exp);
		  sensitive << i_real.data;
		SC_METHOD(thread_i_real_data_sign);
		  sensitive << i_real.data;
		SC_METHOD(thread_o_dft_real_data);
		  sensitive << o_dft_real_data_man;
		  sensitive << o_dft_real_data_exp;
		  sensitive << o_dft_real_data_sign;
		SC_METHOD(thread_o_dft_imag_data);
		  sensitive << o_dft_imag_data_man;
		  sensitive << o_dft_imag_data_exp;
		  sensitive << o_dft_imag_data_sign;

	}
}

void DFT_compute_wrapper::start_of_simulation()
{

#include <DFT_compute_trace.h>

    esc_multiple_writers_warning();
}

void DFT_compute_wrapper::CloseTrace()
{
	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
	esc_close_vcd_trace();
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		esc_close_fsdb_trace();
		if ( esc_trace_is_enabled( esc_trace_scv ) ) {
			esc_close_fsdb_scv_trace();
		}
	}
}

void DFT_compute_wrapper::end_of_simulation()
{
	CloseTrace();
}



void DFT_compute_wrapper::DeleteInstances()
{
    if (DFT_compute0)
    {
        delete DFT_compute0;
        DFT_compute0 = 0;
    }
    if (DFT_compute_cosim0)
    {
        delete DFT_compute_cosim0;
        DFT_compute_cosim0 = 0;
    }
    if (DFT_compute_cycsim0)
    {
        delete DFT_compute_cycsim0;
        DFT_compute_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_DFT_compute)
    if (DFT_compute_rtl0)
    {
        delete DFT_compute_rtl0;
        DFT_compute_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports
void DFT_compute_wrapper_r::thread_i_real_data()
{
   cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 > tmp;
   tmp.man = i_real_data_man.read();
   tmp.exp = i_real_data_exp.read();
   tmp.sign = i_real_data_sign.read();
   i_real_data.write(tmp);
}
void DFT_compute_wrapper_r::thread_o_dft_real_data_man()
{
   o_dft_real_data_man = o_dft_real_data.read().man;
}
void DFT_compute_wrapper_r::thread_o_dft_real_data_exp()
{
   o_dft_real_data_exp = o_dft_real_data.read().exp;
}
void DFT_compute_wrapper_r::thread_o_dft_real_data_sign()
{
   o_dft_real_data_sign = o_dft_real_data.read().sign;
}
void DFT_compute_wrapper_r::thread_o_dft_imag_data_man()
{
   o_dft_imag_data_man = o_dft_imag_data.read().man;
}
void DFT_compute_wrapper_r::thread_o_dft_imag_data_exp()
{
   o_dft_imag_data_exp = o_dft_imag_data.read().exp;
}
void DFT_compute_wrapper_r::thread_o_dft_imag_data_sign()
{
   o_dft_imag_data_sign = o_dft_imag_data.read().sign;
}


const char * DFT_compute_wrapper_r::simConfigName()
{
	static char defineBuf[MAX_SIMCONFIG_LENGTH];
	const char *simConfig = NULL;
	if ( qbhGetDefine( "BDW_SIM_CONFIG", defineBuf, MAX_SIMCONFIG_LENGTH ) == qbhOK )
	{
		simConfig = defineBuf;
	}
	else
	{
		simConfig = getenv( "BDW_SIM_CONFIG" );
	}

	if ( simConfig == NULL )
	{
		esc_report_error( esc_fatal, "BDW_SIM_CONFIG needs to be set" );
	}

	return simConfig;
}

enum DFT_compute_wrapper_r::Representation DFT_compute_wrapper_r::lookupRepresentation( const char* instName )
{
	const char *simConfig = simConfigName();

	if ( simConfig == NULL )
		return BDWRep_None;

	Representation result;

	qbhProjectHandle hProj;
	qbhError err = qbhGetCurrentProject( &hProj );
	if ( err == qbhErrorNoProject )
	{
		err = qbhOpenProject( "project.tcl", &hProj );

		if ( err != qbhOK )
		{
			esc_report_error( esc_fatal, "could not open project file %s",
							  "project.tcl" );
			return BDWRep_None;
		}
	}

	int iresult = 0;
	err = qbhGetRepresentation(hProj, "DFT_compute", simConfig, instName, &iresult );
	result = (Representation)iresult;

	if ( err == qbhOK )
		return result;

	// If this module isn't mentioned in the simConfig, assume it's behavioral.
	if ( err == qbhErrorNotFound )
		return BDWRep_Behavioral;

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void DFT_compute_wrapper_r::InitInstances()
{
    enum DFT_compute_wrapper_r::Representation rep =
		DFT_compute_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "DFT_compute" );
	esc_log_representation( "DFT_compute", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    DFT_compute_cosim0 = new DFT_compute_cosim( "DFT_compute" );

		    DFT_compute_cosim0->i_clk(i_clk);
		    DFT_compute_cosim0->i_rst(i_rst);
		    DFT_compute_cosim0->i_real_busy(i_real_busy);
		    DFT_compute_cosim0->i_real_vld(i_real_vld);
		    DFT_compute_cosim0->i_real_data_man(i_real_data_man);
		    DFT_compute_cosim0->i_real_data_exp(i_real_data_exp);
		    DFT_compute_cosim0->i_real_data_sign(i_real_data_sign);
		    DFT_compute_cosim0->o_dft_real_busy(o_dft_real_busy);
		    DFT_compute_cosim0->o_dft_real_vld(o_dft_real_vld);
		    DFT_compute_cosim0->o_dft_real_data_man(o_dft_real_data_man);
		    DFT_compute_cosim0->o_dft_real_data_exp(o_dft_real_data_exp);
		    DFT_compute_cosim0->o_dft_real_data_sign(o_dft_real_data_sign);
		    DFT_compute_cosim0->o_dft_imag_busy(o_dft_imag_busy);
		    DFT_compute_cosim0->o_dft_imag_vld(o_dft_imag_vld);
		    DFT_compute_cosim0->o_dft_imag_data_man(o_dft_imag_data_man);
		    DFT_compute_cosim0->o_dft_imag_data_exp(o_dft_imag_data_exp);
		    DFT_compute_cosim0->o_dft_imag_data_sign(o_dft_imag_data_sign);

			break;
		case BDWRep_RTL_HDL:
		    DFT_compute_cosim0 = new DFT_compute_cosim( "DFT_compute" );

		    DFT_compute_cosim0->i_clk(i_clk);
		    DFT_compute_cosim0->i_rst(i_rst);
		    DFT_compute_cosim0->i_real_busy(i_real_busy);
		    DFT_compute_cosim0->i_real_vld(i_real_vld);
		    DFT_compute_cosim0->i_real_data_man(i_real_data_man);
		    DFT_compute_cosim0->i_real_data_exp(i_real_data_exp);
		    DFT_compute_cosim0->i_real_data_sign(i_real_data_sign);
		    DFT_compute_cosim0->o_dft_real_busy(o_dft_real_busy);
		    DFT_compute_cosim0->o_dft_real_vld(o_dft_real_vld);
		    DFT_compute_cosim0->o_dft_real_data_man(o_dft_real_data_man);
		    DFT_compute_cosim0->o_dft_real_data_exp(o_dft_real_data_exp);
		    DFT_compute_cosim0->o_dft_real_data_sign(o_dft_real_data_sign);
		    DFT_compute_cosim0->o_dft_imag_busy(o_dft_imag_busy);
		    DFT_compute_cosim0->o_dft_imag_vld(o_dft_imag_vld);
		    DFT_compute_cosim0->o_dft_imag_data_man(o_dft_imag_data_man);
		    DFT_compute_cosim0->o_dft_imag_data_exp(o_dft_imag_data_exp);
		    DFT_compute_cosim0->o_dft_imag_data_sign(o_dft_imag_data_sign);

			break;
        case BDWRep_CYC_HDL:
            if ( DFT_compute_cycsim_factory_p )
                DFT_compute_cycsim0 = DFT_compute_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module DFT_compute");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"DFT_compute\"");

		    DFT_compute_cycsim0->i_clk(i_clk);
		    DFT_compute_cycsim0->i_rst(i_rst);
		    DFT_compute_cycsim0->i_real_busy(i_real_busy);
		    DFT_compute_cycsim0->i_real_vld(i_real_vld);
		    DFT_compute_cycsim0->i_real_data_man(i_real_data_man);
		    DFT_compute_cycsim0->i_real_data_exp(i_real_data_exp);
		    DFT_compute_cycsim0->i_real_data_sign(i_real_data_sign);
		    DFT_compute_cycsim0->o_dft_real_busy(o_dft_real_busy);
		    DFT_compute_cycsim0->o_dft_real_vld(o_dft_real_vld);
		    DFT_compute_cycsim0->o_dft_real_data_man(o_dft_real_data_man);
		    DFT_compute_cycsim0->o_dft_real_data_exp(o_dft_real_data_exp);
		    DFT_compute_cycsim0->o_dft_real_data_sign(o_dft_real_data_sign);
		    DFT_compute_cycsim0->o_dft_imag_busy(o_dft_imag_busy);
		    DFT_compute_cycsim0->o_dft_imag_vld(o_dft_imag_vld);
		    DFT_compute_cycsim0->o_dft_imag_data_man(o_dft_imag_data_man);
		    DFT_compute_cycsim0->o_dft_imag_data_exp(o_dft_imag_data_exp);
		    DFT_compute_cycsim0->o_dft_imag_data_sign(o_dft_imag_data_sign);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_DFT_compute)
		case BDWRep_RTL_C:
		    DFT_compute_rtl0 = new DFT_compute_rtl( "DFT_compute" );

		    DFT_compute_rtl0->i_clk(i_clk);
		    DFT_compute_rtl0->i_rst(i_rst);
		    DFT_compute_rtl0->i_real_busy(i_real_busy);
		    DFT_compute_rtl0->i_real_vld(i_real_vld);
		    DFT_compute_rtl0->i_real_data_man(i_real_data_man);
		    DFT_compute_rtl0->i_real_data_exp(i_real_data_exp);
		    DFT_compute_rtl0->i_real_data_sign(i_real_data_sign);
		    DFT_compute_rtl0->o_dft_real_busy(o_dft_real_busy);
		    DFT_compute_rtl0->o_dft_real_vld(o_dft_real_vld);
		    DFT_compute_rtl0->o_dft_real_data_man(o_dft_real_data_man);
		    DFT_compute_rtl0->o_dft_real_data_exp(o_dft_real_data_exp);
		    DFT_compute_rtl0->o_dft_real_data_sign(o_dft_real_data_sign);
		    DFT_compute_rtl0->o_dft_imag_busy(o_dft_imag_busy);
		    DFT_compute_rtl0->o_dft_imag_vld(o_dft_imag_vld);
		    DFT_compute_rtl0->o_dft_imag_data_man(o_dft_imag_data_man);
		    DFT_compute_rtl0->o_dft_imag_data_exp(o_dft_imag_data_exp);
		    DFT_compute_rtl0->o_dft_imag_data_sign(o_dft_imag_data_sign);


			{
			const char *simConfig = DFT_compute_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
#endif
		case BDWRep_Behavioral:
		    DFT_compute0 = new DFT_compute( "DFT_compute" );

		    DFT_compute0->i_clk(i_clk);
		    DFT_compute0->i_rst(i_rst);
		    DFT_compute0->i_real.busy(i_real_busy);
		    DFT_compute0->i_real.vld(i_real_vld);
		    DFT_compute0->i_real.data(i_real_data);
		    DFT_compute0->o_dft_real.busy(o_dft_real_busy);
		    DFT_compute0->o_dft_real.vld(o_dft_real_vld);
		    DFT_compute0->o_dft_real.data(o_dft_real_data);
		    DFT_compute0->o_dft_imag.busy(o_dft_imag_busy);
		    DFT_compute0->o_dft_imag.vld(o_dft_imag_vld);
		    DFT_compute0->o_dft_imag.data(o_dft_imag_data);


			{
			const char *simConfig = DFT_compute_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
		case BDWRep_None:
		default:
			esc_report_error( esc_error, "No representation could be determined for simulating instance %s. Please make sure that you used the right name string in the module constructor",
							  name() );
			break;
	}
}

void DFT_compute_wrapper_r::InitThreads()
{
	if ( isBEH() ) 
	{
		SC_METHOD(thread_i_real_data);
		  sensitive << i_real_data_man;
		  sensitive << i_real_data_exp;
		  sensitive << i_real_data_sign;
		SC_METHOD(thread_o_dft_real_data_man);
		  sensitive << o_dft_real_data;
		SC_METHOD(thread_o_dft_real_data_exp);
		  sensitive << o_dft_real_data;
		SC_METHOD(thread_o_dft_real_data_sign);
		  sensitive << o_dft_real_data;
		SC_METHOD(thread_o_dft_imag_data_man);
		  sensitive << o_dft_imag_data;
		SC_METHOD(thread_o_dft_imag_data_exp);
		  sensitive << o_dft_imag_data;
		SC_METHOD(thread_o_dft_imag_data_sign);
		  sensitive << o_dft_imag_data;

	}
}

void DFT_compute_wrapper_r::start_of_simulation()
{

#include <DFT_compute_trace.h>

    esc_multiple_writers_warning();
}

void DFT_compute_wrapper_r::CloseTrace()
{
	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
	esc_close_vcd_trace();
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		esc_close_fsdb_trace();
		if ( esc_trace_is_enabled( esc_trace_scv ) ) {
			esc_close_fsdb_scv_trace();
		}
	}
}

void DFT_compute_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void DFT_compute_wrapper_r::DeleteInstances()
{
    if (DFT_compute0)
    {
        delete DFT_compute0;
        DFT_compute0 = 0;
    }
    if (DFT_compute_cosim0)
    {
        delete DFT_compute_cosim0;
        DFT_compute_cosim0 = 0;
    }
    if (DFT_compute_cycsim0)
    {
        delete DFT_compute_cycsim0;
        DFT_compute_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_DFT_compute)
    if (DFT_compute_rtl0)
    {
        delete DFT_compute_rtl0;
        DFT_compute_rtl0 = 0;
    }
#endif
}

#if BDW_WRITEFSDB == 1

inline void esc_open_fsdb_trace( const char *file_name  )
{
	sc_trace_file *fsdb_file;
#if ( defined(NC_SYSTEMC) && defined(BDW_NCSC_VER) && BDW_NCSC_VER > 102 ) || SYSTEMC_VERSION >= 20120701
    fsdbDumpfile(file_name);
    esc_set_trace_file( fsdb_file, esc_trace_fsdb );
# else

	// SystemC suffixes .fsdb to filenames automatically. Make sure
	// that doesn't get tacked onto a filename that already has the suffix.
	if ( strrchr( file_name, '.' ) != NULL )
	{
		char *trunc_file_name = new char[strlen(file_name)+1];
		strcpy( trunc_file_name, file_name );

		fsdb_file = new fsdb_trace_file( trunc_file_name );
		esc_set_trace_file( fsdb_file, esc_trace_fsdb );

		delete trunc_file_name;
	}
	else
	{
		fsdb_file = new fsdb_trace_file( file_name );
		esc_set_trace_file( fsdb_file, esc_trace_fsdb );
	}
#endif

//
// Novas's SystemC wrapper doesn't have a way to set the time unit as of SystemC 2.1v1.
//
//		((fsdb_trace_file*)fsdb_file)->sc_set_fsdb_time_unit( -12 );
}

inline void esc_close_fsdb_trace()
{
#if ! ((defined(NC_SYSTEMC) &&  defined(BDW_NCSC_VER) && BDW_NCSC_VER > 102) || SYSTEMC_VERSION >= 20120701)
	fsdb_trace_file * fsdb_file =
		(fsdb_trace_file *)esc_trace_file( esc_trace_fsdb );

	if ( fsdb_file != NULL )
	{
		fsdb_file->CloseFile();
		delete fsdb_file;
		esc_set_trace_file( NULL, esc_trace_fsdb );
	}
#endif
}

#else

inline void esc_open_fsdb_trace( const char *file_name )
{
}

inline void esc_close_fsdb_trace()
{
}

#endif

#if BDW_USE_SCV && BDW_WRITEFSDB == 1
static scv_tr_db* local_fsdb_scv_db = 0;

inline void esc_open_fsdb_scv_trace( const char *file_name  )
{
	// Start SCV logging to FSDB if there is not already a database setup.
    if (!esc_get_scv_tr_db() && esc_trace_is_enabled(esc_trace_scv) )
	{
		scv_startup();
		scv_tr_fsdb_init();

		char* scv_file_name = new char[strlen(file_name) + 1];
		strcpy( scv_file_name, file_name );
		char* fsdb_suffix = strstr( scv_file_name, ".fsdb" );
		if (fsdb_suffix)
			*fsdb_suffix = 0;
		local_fsdb_scv_db = new scv_tr_db(scv_file_name);

		delete [] scv_file_name;
		esc_set_scv_tr_db(local_fsdb_scv_db);
		scv_tr_db::set_default_db(local_fsdb_scv_db);
		local_fsdb_scv_db->set_recording(true);
	}
}

inline void esc_close_fsdb_scv_trace()
{
    if ( local_fsdb_scv_db && (local_fsdb_scv_db == esc_get_scv_tr_db() ) ) 
	{
		delete local_fsdb_scv_db;
		local_fsdb_scv_db = 0;
		esc_set_scv_tr_db(0);
	}
}
#else 
inline void esc_open_fsdb_scv_trace( const char *file_name  )
{
}

inline void esc_close_fsdb_scv_trace()
{
}

#endif

class DFT_compute_wrapper_fsdb_opener {
public:
	DFT_compute_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static DFT_compute_wrapper_fsdb_opener
  DFT_compute_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"../DFT_compute.cpp"

#define		DFT_compute_INTERNAL


#include	"DFT_compute_wrap.h"

const char * DFT_compute_wrapper::simConfigName()
{
  return "";
}

enum DFT_compute_wrapper::Representation DFT_compute_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void DFT_compute_wrapper::InitInstances( sc_core::sc_module_name n )
{
	DFT_compute0 = new DFT_compute( "DFT_compute" );

	DFT_compute0->i_clk(i_clk);
	DFT_compute0->i_rst(i_rst);
	DFT_compute0->i_real.busy(i_real.busy);
	DFT_compute0->i_real.vld(i_real.vld);
	DFT_compute0->i_real.data(i_real.data);
	DFT_compute0->o_dft_real.busy(o_dft_real.busy);
	DFT_compute0->o_dft_real.vld(o_dft_real.vld);
	DFT_compute0->o_dft_real.data(o_dft_real.data);
	DFT_compute0->o_dft_imag.busy(o_dft_imag.busy);
	DFT_compute0->o_dft_imag.vld(o_dft_imag.vld);
	DFT_compute0->o_dft_imag.data(o_dft_imag.data);

}

void DFT_compute_wrapper::InitThreads()
{
}

void DFT_compute_wrapper::CloseTrace()
{
}

void DFT_compute_wrapper::DeleteInstances()
{
    if (DFT_compute0)
    {
        delete DFT_compute0;
        DFT_compute0 = 0;
    }
}

void DFT_compute_wrapper::start_of_simulation()
{
}

void DFT_compute_wrapper::end_of_simulation()
{
}



inline void esc_open_fsdb_trace( const char *file_name )
{
}

inline void esc_close_fsdb_trace()
{
}


inline void esc_open_fsdb_scv_trace( const char *file_name  )
{
}

inline void esc_close_fsdb_scv_trace()
{
}

class DFT_compute_wrapper_fsdb_opener {
public:
	DFT_compute_wrapper_fsdb_opener() {
	}
};

static DFT_compute_wrapper_fsdb_opener
  DFT_compute_wrapper_fsdb_opener_inst;

#endif

#endif
