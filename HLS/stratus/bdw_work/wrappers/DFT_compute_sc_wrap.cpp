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


#include	"DFT_compute_sc_wrap.h"
#include	"DFT_compute_sc_foreign.h"

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


void DFT_compute_wrapper::InitInstances(  )
{
	
            
    DFT_compute0 = new DFT_compute( "DFT_compute" );

    DFT_compute0->i_clk(i_clk);
    DFT_compute0->i_rst(i_rst);
    DFT_compute0->i_real_busy(i_real.busy);
    DFT_compute0->i_real_vld(i_real.vld);
    DFT_compute0->i_real_data_man(i_real_data_man);
    DFT_compute0->i_real_data_exp(i_real_data_exp);
    DFT_compute0->i_real_data_sign(i_real_data_sign);
    DFT_compute0->o_dft_real_busy(o_dft_real.busy);
    DFT_compute0->o_dft_real_vld(o_dft_real.vld);
    DFT_compute0->o_dft_real_data_man(o_dft_real_data_man);
    DFT_compute0->o_dft_real_data_exp(o_dft_real_data_exp);
    DFT_compute0->o_dft_real_data_sign(o_dft_real_data_sign);
    DFT_compute0->o_dft_imag_busy(o_dft_imag.busy);
    DFT_compute0->o_dft_imag_vld(o_dft_imag.vld);
    DFT_compute0->o_dft_imag_data_man(o_dft_imag_data_man);
    DFT_compute0->o_dft_imag_data_exp(o_dft_imag_data_exp);
    DFT_compute0->o_dft_imag_data_sign(o_dft_imag_data_sign);

}

void DFT_compute_wrapper::InitThreads()
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

void DFT_compute_wrapper::DeleteInstances()
{
    if (DFT_compute0)
    {
        delete DFT_compute0;
        DFT_compute0 = 0;
    }
}

