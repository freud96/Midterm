/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _DFT_COMPUTE_SC_FOREIGN_INCLUDED_
#define _DFT_COMPUTE_SC_FOREIGN_INCLUDED_

#include <systemc.h>


// Declaration of wrapper with RTL level ports

struct DFT_compute : public ncsc_foreign_module
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


    const char* hdl_name() const { return "DFT_compute"; }
    
	DFT_compute( sc_module_name name )
		: ncsc_foreign_module(name)
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
		  	

		
    {
    }

};

#endif /* _DFT_COMPUTE_SC_FOREIGN_INCLUDED_ */
