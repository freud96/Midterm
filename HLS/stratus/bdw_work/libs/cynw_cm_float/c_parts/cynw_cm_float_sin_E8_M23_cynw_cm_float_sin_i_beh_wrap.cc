#include "/home/m110/m110061422/EE6470/mid_v3/stratus/bdw_work/libs/cynw_cm_float/c_parts/cynw_cm_float_sin_E8_M23.cc"
#include "esc.h"

extern "C" {

void cynw_cm_float_sin_E8_M23_cynw_cm_float_sin_i_instruction_beh( qbhValueRecord** vals )
{

  sc_uint< 1 > a_sign;
  static esc_signal_wrapper< sc_uint< 1 > > a_sign_s;
  a_sign_s.set( *vals[0], &a_sign);

  sc_uint< 8 > a_exp;
  static esc_signal_wrapper< sc_uint< 8 > > a_exp_s;
  a_exp_s.set( *vals[1], &a_exp);

  sc_uint< 23 > a_man;
  static esc_signal_wrapper< sc_uint< 23 > > a_man_s;
  a_man_s.set( *vals[2], &a_man);

  sc_uint< 37 > x;
  cynw_cm_float_sin_E8_M23( a_sign, a_exp, a_man, x );




  static esc_signal_wrapper< sc_uint< 37 > > x_s;
  x_s.get( &x, vals[3] );
}

}
