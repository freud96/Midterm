/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _DFT_COMPUTE_WRAP_INCLUDED_
#define _DFT_COMPUTE_WRAP_INCLUDED_


/* Save ioConfig define values for parent module and define those for this module's ioConfigs. */


#if defined(CYNTHVLG) 

#include <systemc.h>

#define DFT_compute_wrapper DFT_compute

/* This is the section that is seen during processing by cynthVLG of a module
 * that instantiates the module defined by this wrapper.
 */
SC_MODULE(DFT_compute)
{
public:
	sc_in< bool > i_clk;
	sc_in< bool > i_rst;
	sc_out< bool > i_real_busy;
	sc_in< bool > i_real_vld;
	sc_in< sc_uint< 23 > > i_real_data_man;
	sc_in< sc_uint< 8 > > i_real_data_exp;
	sc_in< sc_uint< 1 > > i_real_data_sign;
	sc_in< bool > o_dft_real_busy;
	sc_out< bool > o_dft_real_vld;
	sc_out< sc_uint< 23 > > o_dft_real_data_man;
	sc_out< sc_uint< 8 > > o_dft_real_data_exp;
	sc_out< sc_uint< 1 > > o_dft_real_data_sign;
	sc_in< bool > o_dft_imag_busy;
	sc_out< bool > o_dft_imag_vld;
	sc_out< sc_uint< 23 > > o_dft_imag_data_man;
	sc_out< sc_uint< 8 > > o_dft_imag_data_exp;
	sc_out< sc_uint< 1 > > o_dft_imag_data_sign;

	SC_CTOR(DFT_compute);
};

#elif defined(CYNTHHL) || defined(BDW_EXTRACT)

/* This is the section seen during processing by cynthHL or bdw_extract of a module 
 * that instantiates the module defined by this wrapper.
 */
#include <systemc.h>

#include "cynw_cm_float_int.h"
#include "cynw_p2p.h"
#include "cyn_enums.h"


#define DFT_compute_wrapper DFT_compute

/* Only port declarations are required for nested modules.
 */
SC_MODULE(DFT_compute)
{
public:
	sc_in< bool > i_clk;
	sc_in< bool > i_rst;
	cynw::cynw_p2p_base_in <cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 >, CYN::cyn_enum <(int)1 > > i_real;
	cynw::cynw_p2p_base_out <cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 >, CYN::cyn_enum <(int)1 > > o_dft_real;
	cynw::cynw_p2p_base_out <cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 >, CYN::cyn_enum <(int)1 > > o_dft_imag;


	SC_HAS_PROCESS(DFT_compute);
    	DFT_compute_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("DFT_compute")) );
};

#else

#include <esc.h>


/* This is the section seen during processing by gcc either when the module
 * itself is compiled, or when a module that instantiates it is compiled.
 */

struct DFT_compute;
struct DFT_compute_cosim;
struct DFT_compute_cycsim;
struct DFT_compute_rtl;

#ifdef BDW_COWARE
#include	"DFT_compute_coware.h"
#endif

#include "cynw_cm_float_int.h"
#include "cynw_p2p.h"
#include "cyn_enums.h"


// Declaration of wrapper with BEH level ports

SC_MODULE(DFT_compute_wrapper)
{
public:

	sc_in< bool > i_clk;
	sc_in< bool > i_rst;
	cynw::cynw_p2p_base_in <cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 >, CYN::cyn_enum <(int)1 > > i_real;
	cynw::cynw_p2p_base_out <cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 >, CYN::cyn_enum <(int)1 > > o_dft_real;
	cynw::cynw_p2p_base_out <cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 >, CYN::cyn_enum <(int)1 > > o_dft_imag;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 23 > > i_real_data_man;
    sc_signal< sc_uint< 8 > > i_real_data_exp;
    sc_signal< sc_uint< 1 > > i_real_data_sign;
    sc_signal< sc_uint< 23 > > o_dft_real_data_man;
    sc_signal< sc_uint< 8 > > o_dft_real_data_exp;
    sc_signal< sc_uint< 1 > > o_dft_real_data_sign;
    sc_signal< sc_uint< 23 > > o_dft_imag_data_man;
    sc_signal< sc_uint< 8 > > o_dft_imag_data_exp;
    sc_signal< sc_uint< 1 > > o_dft_imag_data_sign;

    
	enum Representation { BDWRep_None, BDWRep_Behavioral, BDWRep_RTL_C, BDWRep_RTL_HDL, BDWRep_Gates, BDWRep_CYC_HDL };
	static const char * simConfigName();
	static Representation lookupRepresentation( const char* instName );
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

	void CloseTrace();
	void start_of_simulation();
	void end_of_simulation();


    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_i_real_data_man();
    void thread_i_real_data_exp();
    void thread_i_real_data_sign();
    void thread_o_dft_real_data();
    void thread_o_dft_imag_data();


	SC_HAS_PROCESS(DFT_compute_wrapper);

    	DFT_compute_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("DFT_compute")) )
		: sc_module(name)
		  ,i_clk("i_clk")
		  	,i_rst("i_rst")
		  	,i_real("i_real")
		  	,o_dft_real("o_dft_real")
		  	,o_dft_imag("o_dft_imag")
		  	

		  ,DFT_compute0(0), DFT_compute_cosim0(0), DFT_compute_rtl0(0), DFT_compute_cycsim0(0)
		

    {
        InitInstances( );
		InitThreads();
    }


    // destructor
    ~DFT_compute_wrapper()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( DFT_compute_wrapper::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( DFT_compute_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( DFT_compute_wrapper::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( DFT_compute_wrapper::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( DFT_compute_wrapper::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	DFT_compute* behModule() { return DFT_compute0; }
	DFT_compute_cosim* cosimModule() { return DFT_compute_cosim0; }
	DFT_compute_cycsim* cycsimModule() { return DFT_compute_cycsim0; }
	DFT_compute_rtl* rtlModule() { return DFT_compute_rtl0; }

	DFT_compute* DFT_compute0;
	DFT_compute_cosim* DFT_compute_cosim0;
	DFT_compute_rtl* DFT_compute_rtl0;
	DFT_compute_cycsim* DFT_compute_cycsim0;
};

// Declaration of wrapper with RTL level ports

SC_MODULE(DFT_compute_wrapper_r)
{
public:

	sc_in< bool > i_clk;
	sc_in< bool > i_rst;
	sc_out< bool > i_real_busy;
	sc_in< bool > i_real_vld;
	sc_in< sc_uint< 23 > > i_real_data_man;
	sc_in< sc_uint< 8 > > i_real_data_exp;
	sc_in< sc_uint< 1 > > i_real_data_sign;
	sc_in< bool > o_dft_real_busy;
	sc_out< bool > o_dft_real_vld;
	sc_out< sc_uint< 23 > > o_dft_real_data_man;
	sc_out< sc_uint< 8 > > o_dft_real_data_exp;
	sc_out< sc_uint< 1 > > o_dft_real_data_sign;
	sc_in< bool > o_dft_imag_busy;
	sc_out< bool > o_dft_imag_vld;
	sc_out< sc_uint< 23 > > o_dft_imag_data_man;
	sc_out< sc_uint< 8 > > o_dft_imag_data_exp;
	sc_out< sc_uint< 1 > > o_dft_imag_data_sign;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 > > i_real_data;
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 > > o_dft_real_data;
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 > > o_dft_imag_data;

    
	enum Representation { BDWRep_None, BDWRep_Behavioral, BDWRep_RTL_C, BDWRep_RTL_HDL, BDWRep_Gates, BDWRep_CYC_HDL };

	static const char * simConfigName();
	static Representation lookupRepresentation( const char* instName );
	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

	void CloseTrace();
	void start_of_simulation();
	void end_of_simulation();


    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_i_real_data();
    void thread_o_dft_real_data_man();
    void thread_o_dft_real_data_exp();
    void thread_o_dft_real_data_sign();
    void thread_o_dft_imag_data_man();
    void thread_o_dft_imag_data_exp();
    void thread_o_dft_imag_data_sign();


	SC_HAS_PROCESS(DFT_compute_wrapper_r);

	DFT_compute_wrapper_r( sc_module_name name = sc_module_name( sc_gen_unique_name("DFT_compute")) )
		: sc_module(name)
		  ,i_clk("i_clk")
		  	,i_rst("i_rst")
		  	,i_real_busy("i_real_busy")
		  	,i_real_vld("i_real_vld")
		  	,i_real_data_man("i_real_data_man"),
		  i_real_data_exp("i_real_data_exp"),
		  i_real_data_sign("i_real_data_sign")
		  	,o_dft_real_busy("o_dft_real_busy")
		  	,o_dft_real_vld("o_dft_real_vld")
		  	,o_dft_real_data_man("o_dft_real_data_man"),
		  o_dft_real_data_exp("o_dft_real_data_exp"),
		  o_dft_real_data_sign("o_dft_real_data_sign")
		  	,o_dft_imag_busy("o_dft_imag_busy")
		  	,o_dft_imag_vld("o_dft_imag_vld")
		  	,o_dft_imag_data_man("o_dft_imag_data_man"),
		  o_dft_imag_data_exp("o_dft_imag_data_exp"),
		  o_dft_imag_data_sign("o_dft_imag_data_sign")
		  	

		  ,DFT_compute0(0), DFT_compute_cosim0(0), DFT_compute_rtl0(0), DFT_compute_cycsim0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~DFT_compute_wrapper_r()
    {
        DeleteInstances();

		CloseTrace();
    }

    bool isBEH() { return ( DFT_compute_wrapper_r::lookupRepresentation( name() ) == BDWRep_Behavioral ); }
    bool isRTL_C() { return ( DFT_compute_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_C ); }
    bool isRTL_V() { return ( DFT_compute_wrapper_r::lookupRepresentation( name() ) == BDWRep_RTL_HDL ); }
    bool isGATES_V() { return ( DFT_compute_wrapper_r::lookupRepresentation( name() ) == BDWRep_Gates ); }
	bool isCosim() { return ( isRTL_V() || isGATES_V() ); }
    bool isCycsim() { return ( DFT_compute_wrapper_r::lookupRepresentation( name() ) == BDWRep_CYC_HDL ); }

	DFT_compute* behModule() { return DFT_compute0; }
	DFT_compute_cosim* cosimModule() { return DFT_compute_cosim0; }
	DFT_compute_cycsim* cycsimModule() { return DFT_compute_cycsim0; }
	DFT_compute_rtl* rtlModule() { return DFT_compute_rtl0; }

protected:
	DFT_compute* DFT_compute0;
	DFT_compute_cosim* DFT_compute_cosim0;
	DFT_compute_rtl* DFT_compute_rtl0;
	DFT_compute_cycsim* DFT_compute_cycsim0;
};

#endif

/* Restore ioConfig define values for parent module. */

#endif /*  */
