#include "/home/m110/m110061422/EE6470/mid_v3/stratus/bdw_work/libs/cynw_cm_float/c_parts/cynw_cm_float_div_ieee_E8_M23.cc"
#include "esc.h"

extern "C" {

void cynw_cm_float_div_ieee_E8_M23_cynw_cm_float_div_ieee_i_instruction_beh( qbhValueRecord** vals )
{

  sc_uint< 1 > clk;
  clk = 1;

  sc_uint< 1 > a_sign;
  static esc_signal_wrapper< sc_uint< 1 > > a_sign_s;
  a_sign_s.set( *vals[0], &a_sign);

  sc_uint< 8 > a_exp;
  static esc_signal_wrapper< sc_uint< 8 > > a_exp_s;
  a_exp_s.set( *vals[1], &a_exp);

  sc_uint< 23 > a_man;
  static esc_signal_wrapper< sc_uint< 23 > > a_man_s;
  a_man_s.set( *vals[2], &a_man);

  sc_uint< 1 > b_sign;
  static esc_signal_wrapper< sc_uint< 1 > > b_sign_s;
  b_sign_s.set( *vals[3], &b_sign);

  sc_uint< 8 > b_exp;
  static esc_signal_wrapper< sc_uint< 8 > > b_exp_s;
  b_exp_s.set( *vals[4], &b_exp);

  sc_uint< 23 > b_man;
  static esc_signal_wrapper< sc_uint< 23 > > b_man_s;
  b_man_s.set( *vals[5], &b_man);

  sc_uint< 1 > accept;
  accept = 1;

  sc_uint< 32 > x;
  cynw_cm_float_div_ieee_E8_M23( clk, a_sign, a_exp, a_man, b_sign, b_exp, b_man, accept, x );
  for ( int bdw_i=0; bdw_i < 9; bdw_i++ ) {
    accept = 0;
    cynw_cm_float_div_ieee_E8_M23( clk, a_sign, a_exp, a_man, b_sign, b_exp, b_man, accept, x );
  }









  static esc_signal_wrapper< sc_uint< 32 > > x_s;
  x_s.get( &x, vals[6] );
}

}
