
//
// This is a generated file, do not edit.
//

#ifndef INCLUDE_cynw_cm_float_cos_E8_M23_H
#define INCLUDE_cynw_cm_float_cos_E8_M23_H

#if !defined STRATUS_HLS && !defined BDW_EXTRACT

extern void cynw_cm_float_cos_E8_M23(
    const sc_uint< 1 > & a_sign
   ,const sc_uint< 8 > & a_exp
   ,const sc_uint< 23 > & a_man
   ,sc_uint< 37 > & x
    );

#ifndef INSTRUCTION_cynw_cm_float_cos_i_8_23_8_23
#define INSTRUCTION_cynw_cm_float_cos_i_8_23_8_23
template<>
    inline void cynw_cm_float_cos_i<8,23,8,23> (
    const sc_uint< 1 > & a_sign
   ,const sc_uint< 8 > & a_exp
   ,const sc_uint< 23 > & a_man
   ,sc_uint< 37 > & x
    )
{
    cynw_cm_float_cos_E8_M23(
        a_sign
        ,a_exp
        ,a_man
        ,x
        );
}

#endif // INSTRUCTION_cynw_cm_float_cos_i_8_23_8_23

#include "cynw_cm_float_cos_E8_M23.cc"

#endif // !defined STRATUS_HLS && !defined BDW_EXTRACT

#endif // INCLUDE_cynw_cm_float_cos_E8_M23_H

