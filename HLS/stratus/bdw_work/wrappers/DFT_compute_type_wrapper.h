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
* This file contains the DFT_compute_type_wrapper module
* for use in the verilog verification wrapper DFT_compute_vlwrapper.v
* It creats an instance of the DFT_compute module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/


#ifndef _DFT_COMPUTE_TYPE_WRAP_INCLUDED_
#define _DFT_COMPUTE_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "DFT_compute.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(DFT_compute_type_wrapper)
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

    

	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_i_real_data();
    void thread_o_dft_real_data_man();
    void thread_o_dft_real_data_exp();
    void thread_o_dft_real_data_sign();
    void thread_o_dft_imag_data_man();
    void thread_o_dft_imag_data_exp();
    void thread_o_dft_imag_data_sign();


	SC_HAS_PROCESS(DFT_compute_type_wrapper);

	DFT_compute_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("DFT_compute")) )
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
		  	

		  ,DFT_compute0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~DFT_compute_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	DFT_compute* DFT_compute0;
};

#endif /*  */
