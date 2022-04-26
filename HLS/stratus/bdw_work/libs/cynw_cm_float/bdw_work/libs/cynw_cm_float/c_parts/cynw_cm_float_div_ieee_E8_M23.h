
//
// This is a generated file, do not edit.
//

#ifndef INCLUDE_cynw_cm_float_div_ieee_E8_M23_H
#define INCLUDE_cynw_cm_float_div_ieee_E8_M23_H

#if !defined STRATUS_HLS && !defined BDW_EXTRACT

extern void cynw_cm_float_div_ieee_E8_M23(
    const sc_uint< 1 > & clk
   ,const sc_uint< 1 > & a_sign
   ,const sc_uint< 8 > & a_exp
   ,const sc_uint< 23 > & a_man
   ,const sc_uint< 1 > & b_sign
   ,const sc_uint< 8 > & b_exp
   ,const sc_uint< 23 > & b_man
   ,const sc_uint< 1 > & accept
   ,sc_uint< 32 > & x
    );

#ifndef INSTRUCTION_cynw_cm_float_div_ieee_i_8_23_8_23_0_1_0
#define INSTRUCTION_cynw_cm_float_div_ieee_i_8_23_8_23_0_1_0
template<>
    inline void cynw_cm_float_div_ieee_i<8,23,8,23,0,1,0> (
    const sc_uint< 1 > & a_sign
   ,const sc_uint< 8 > & a_exp
   ,const sc_uint< 23 > & a_man
   ,const sc_uint< 1 > & b_sign
   ,const sc_uint< 8 > & b_exp
   ,const sc_uint< 23 > & b_man
   ,sc_uint< 32 > & x
    )
{
  sc_uint< 1 > clk = 1;
  sc_uint< 1 > accept = 1;
  for ( int bdw_i=0; bdw_i < 10; bdw_i++ ) {
    if (bdw_i > 0) accept = 0;
    cynw_cm_float_div_ieee_E8_M23(
        clk
        ,a_sign
        ,a_exp
        ,a_man
        ,b_sign
        ,b_exp
        ,b_man
        ,accept
        ,x
        );
  }
}

#endif // INSTRUCTION_cynw_cm_float_div_ieee_i_8_23_8_23_0_1_0

#include "cynw_cm_float_div_ieee_E8_M23.cc"

#endif // !defined STRATUS_HLS && !defined BDW_EXTRACT

#endif // INCLUDE_cynw_cm_float_div_ieee_E8_M23_H

