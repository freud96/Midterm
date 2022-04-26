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

#include "DFT_compute_type_wrapper.h"


SC_MODULE_EXPORT(DFT_compute_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void DFT_compute_type_wrapper::thread_i_real_data()
{
   cynw_cm_float <(int)8, (int)23, (int)0, (int)0, (int)1 > tmp;
   tmp.man = i_real_data_man.read();
   tmp.exp = i_real_data_exp.read();
   tmp.sign = i_real_data_sign.read();
   i_real_data.write(tmp);
}
void DFT_compute_type_wrapper::thread_o_dft_real_data_man()
{
   o_dft_real_data_man = o_dft_real_data.read().man;
}
void DFT_compute_type_wrapper::thread_o_dft_real_data_exp()
{
   o_dft_real_data_exp = o_dft_real_data.read().exp;
}
void DFT_compute_type_wrapper::thread_o_dft_real_data_sign()
{
   o_dft_real_data_sign = o_dft_real_data.read().sign;
}
void DFT_compute_type_wrapper::thread_o_dft_imag_data_man()
{
   o_dft_imag_data_man = o_dft_imag_data.read().man;
}
void DFT_compute_type_wrapper::thread_o_dft_imag_data_exp()
{
   o_dft_imag_data_exp = o_dft_imag_data.read().exp;
}
void DFT_compute_type_wrapper::thread_o_dft_imag_data_sign()
{
   o_dft_imag_data_sign = o_dft_imag_data.read().sign;
}


void DFT_compute_type_wrapper::InitInstances()
{
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

}

void DFT_compute_type_wrapper::InitThreads()
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

void DFT_compute_type_wrapper::DeleteInstances()
{
        delete DFT_compute0;
        DFT_compute0 = 0;
}

