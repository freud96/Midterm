/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _DFT_COMPUTE_SC_WRAP_INCLUDED_
#define _DFT_COMPUTE_SC_WRAP_INCLUDED_

#include <systemc.h>

struct DFT_compute;

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

    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

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
		  	

		  ,DFT_compute0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~DFT_compute_wrapper()
    {
        DeleteInstances();
    }

	DFT_compute* DFT_compute0;
};

#endif /* _DFT_COMPUTE_SC_WRAP_INCLUDED_ */
