///////////////////////////////////////////////////////////////////////////////
//                                                                             
// Copyright (c) 2019 Cadence Design Systems, Inc. All rights reserved worldwide.
//                                                                               
// The code contained herein is the proprietary and confidential information     
// of Cadence or its licensors, and is supplied subject to a previously          
// executed license and maintenance agreement between Cadence and customer.      
// This code is intended for use with Cadence high-level synthesis tools and
// may not be used with other high-level synthesis tools. Permission is only
// granted to distribute the code as indicated. Cadence grants permission for
// customer to distribute a copy of this code to any partner to aid in designing
// or verifying the customer's intellectual property, as long as such
// distribution includes a restriction of no additional distributions from the
// partner, unless the partner receives permission directly from Cadence.
//
// ALL CODE FURNISHED BY CADENCE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
// KIND, AND CADENCE SPECIFICALLY DISCLAIMS ANY WARRANTY OF NONINFRINGEMENT,
// FITNESS FOR A PARTICULAR PURPOSE OR MERCHANTABILITY. CADENCE SHALL NOT BE
// LIABLE FOR ANY COSTS OF PROCUREMENT OF SUBSTITUTES, LOSS OF PROFITS,
// INTERRUPTION OF BUSINESS, OR FOR ANY OTHER SPECIAL, CONSEQUENTIAL OR
// INCIDENTAL DAMAGES, HOWEVER CAUSED, WHETHER FOR BREACH OF WARRANTY,
// CONTRACT, TORT, NEGLIGENCE, STRICT LIABILITY OR OTHERWISE.
//
////////////////////////////////////////////////////////////////////////////////
/*****************************************************************************
    C++ RTL Simulation Model
    
    Configured at: 11:15:56 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/
#include "systemc.h"
#if !defined(systemc_beh_c2_libs)
#define systemc_beh_c2_libs
template <class T>
static inline
void
c2_sqrt(
    T &q,       // quotient output
    T &r,       // remainder output
    const T &x, // input
    int bits=0  // max number of bits in x to consider
)
{
    q=T(0);
    r=x;

    int stages = bits ? bits/2+(bits&1) : sizeof(T)*8/2;
    for (int i=stages-1; i>=0; i--) {
        T d=(q<<(i+1)) | (T(1)<<(2*i));
        if (r >= d) {
            r -= d;
            q |= T(1)<<i;
        }
    }
}

#endif // !defined(systemc_beh_c2_libs)
    // !!!! amethyst/writers/SystemCbeh.cpp:4013
#if !defined cynw_cm_float_sin_E8_M23_INCLUDED
#define cynw_cm_float_sin_E8_M23_INCLUDED

struct class_cynw_cm_float_sin_E8_M23 { // BDW_REPLACE_NAME cynw_cm_float_sin

    // Work around for SystemC 2.2 not having a signature
    // to a concatenation by an int.
#   if SYSTEMC_VERSION > 20060000 && SYSTEMC_VERSION < 20091210
        typedef unsigned long shift_v;
#   else
        typedef unsigned int shift_v;
#   endif

    void operator () (
    const sc_uint<1>& a_sign // input  a_sign : unsigned
    ,const sc_uint<8>& a_exp // input  a_exp[7:0] : unsigned
    ,const sc_uint<23>& a_man // input  a_man[22:0] : unsigned
    ,sc_uint<37>& x // output  x[36:0] : unsigned
)
{


// Signal initializations:

    inst_cellmath__17=0;
    inst_cellmath__19=0;
    inst_cellmath__24=0;
    inst_cellmath__42=0;
    inst_cellmath__61=0;
    inst_cellmath__66=0;
    inst_cellmath__67=0;
    inst_cellmath__68=0;
    inst_cellmath__69=0;
    inst_cellmath__82=0;
    inst_cellmath__115__W1=0;
    inst_cellmath__195=0;
    inst_cellmath__197=0;
    inst_cellmath__198=0;
    inst_cellmath__200=0;
    inst_cellmath__201=0;
    inst_cellmath__210=0;
    inst_cellmath__215=0;
    inst_cellmath__219=0;
    inst_cellmath__223=0;
    inst_cellmath__228=0;
    inst_cellmath__231=0;
    inst_cellmath__237=0;
    inst_cellmath__79__46=0;
    inst_cellmath__197__131=0;
    inst_cellmath__211__183=0;
    inst_cellmath__211__182=0;
    inst_cellmath__216__184=0;
    inst_cellmath__220__188=0;
    inst_cellmath__221__195=0;
    inst_cellmath__223__207=0;
    inst_cellmath__223__208=0;
    inst_cellmath__223__199=0;
    inst_cellmath__224__212=0;
    inst_cellmath__228__231=0;
    inst_blk01_cellmath__39_56_0_=0;
    inst_cellmath__216_0=0;
    inst_cellmath__220_22_0_=0;
    inst_cellmath__220_22_0__0=0;
    inst_cellmath__220_22_0__1=0;
    inst_cellmath__48_32_0_=0;
    inst_cellmath__231__242_0_0_0=0;
    inst_cellmath__195__80_0_0=0;
    inst_blk01_cellmath__39__12_10_0=0;
    inst_blk01_cellmath__39__12_10_1=0;
    inst_blk01_cellmath__39__12_10_2=0;
    inst_blk01_cellmath__39__12_10_3=0;
    inst_blk01_cellmath__39__12_10_4=0;
    inst_blk01_cellmath__39__12_10_5=0;
    inst_blk01_cellmath__39__12_10_6=0;
    inst_blk01_cellmath__39__12_10_7=0;
    inst_blk01_cellmath__39__12_10_8=0;
    inst_blk01_cellmath__39__12_10_9=0;
    inst_blk01_cellmath__39__12_10_10=0;
    inst_cellmath__113_0_0=0;
    inst_cellmath__113_0_1=0;
    inst_cellmath__116__W1_0_0_1_0=0;
    inst_cellmath__116__W1_0_0_1_1=0;


// Default output values:

    x=0;
    // !!!! amethyst/writers/SystemCbeh.cpp:5364

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x(32,32)
    x(32,32) = 
        (sc_uint<1>)(sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_0
    inst_blk01_cellmath__39__12_10_0 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_1
    inst_blk01_cellmath__39__12_10_1 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_2
    inst_blk01_cellmath__39__12_10_2 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_3
    inst_blk01_cellmath__39__12_10_3 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_4
    inst_blk01_cellmath__39__12_10_4 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_5
    inst_blk01_cellmath__39__12_10_5 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_6
    inst_blk01_cellmath__39__12_10_6 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_7
    inst_blk01_cellmath__39__12_10_7 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_8
    inst_blk01_cellmath__39__12_10_8 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_9
    inst_blk01_cellmath__39__12_10_9 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_blk01_cellmath__39__12_10_10
    inst_blk01_cellmath__39__12_10_10 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_blk01_cellmath__39_56_0_
    inst_blk01_cellmath__39_56_0_ = 
        
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_9)<<(shift_v)1))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_8)<<(shift_v)4))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_7)<<(shift_v)7))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_6)<<(shift_v)10))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_5)<<(shift_v)15))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_4)<<(shift_v)17))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_3)<<(shift_v)19))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_2)<<(shift_v)24))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_1)<<(shift_v)26))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_0)<<(shift_v)29))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_10)<<(shift_v)31))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__42(5,0)
    inst_cellmath__42(5,0) = 
        
            -((sc_uint<6>)(a_exp(5,0)))
            +((sc_uint<6>)(sc_uint<6>("0bus000101")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4611
    // Compare anchor: inst_cellmath__48_32_0_(24,0)
    inst_cellmath__48_32_0_(24,0) = 
            // !!!! amethyst/writers/SystemCbeh.cpp:4652
(sc_biguint<88>)(inst_blk01_cellmath__39_56_0_(55,26)) >> (shift_v)(shift_v)(((sc_uint<6>)(inst_cellmath__42(5,0))).to_int())
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__61
    inst_cellmath__61 = 
        
        -(int)((sc_uint<1>)inst_cellmath__48_32_0_(23,23) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__48_32_0_(22,0))) |
        -(int)((sc_uint<1>)inst_cellmath__48_32_0_(23,23) == sc_uint<1>("0bus1")) & sc_uint<23>(~(sc_uint<23>)(inst_cellmath__48_32_0_(22,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__115__W1
    inst_cellmath__115__W1 = 
        ~(sc_uint<1>)(inst_cellmath__61(16,16))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__116__W1_0_0_1_0
    inst_cellmath__116__W1_0_0_1_0 = 
        (inst_cellmath__115__W1,inst_cellmath__61(15,15))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__116__W1_0_0_1_1
    inst_cellmath__116__W1_0_0_1_1 = 
        (inst_cellmath__115__W1,inst_cellmath__61(15,15))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__113_0_0
    inst_cellmath__113_0_0 = 
        (inst_cellmath__116__W1_0_0_1_1,inst_cellmath__61(14,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__113_0_1
    inst_cellmath__113_0_1 = 
        (inst_cellmath__116__W1_0_0_1_0,inst_cellmath__61(14,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__195__80_0_0
    inst_cellmath__195__80_0_0 = 
        
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus000000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0000001100100100001110100100001111111000010000000001100100100001011000001"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus000001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0000100101101100001100101011111111101000110000001001100100011101100000000"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus000010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0000111110110010101101110011111111011001010001001001100100010101110000001"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus000011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0001010111110110110100000000111111001001110011101001100100001010001000110"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus000100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0001110000110111100001011100101110111010011000010001100011111010101010001"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus000101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0010001001110011111000011001111110101010111111100001100011100111010101001"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus000110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0010100010101010111011010110011110011011101010000101100011010000001010010"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus000111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0010111011011011101100111011111110001100011000100001100010110101001010100"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus001000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0011010100000101010000000100111101111101001011011001100010010110010110111"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus001001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0011101100100110100111111100111101101110000011010101100001110011110000101"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus001010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0100000100111110111000000011101101011111000000111001100001001101011001001"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus001011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0100011101001101000100001111111101010000000100101001100000100011010001101"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus001100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0100110101010000010000110000111101000001001111001101011111110101011100000"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus001101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0101001101000111100010010000101100110010100001001001011111000011111010000"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus001110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0101100100110001111101110111011100100011111010111101011110001110101101011"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus001111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0101111100001110101001001100011100010101011101010001011101010101111000010"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus010000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0110010011011100101010011001001100000111001000100101011100011001011100111"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus010001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0110101010011011001000001010111011111000111101100001011011011001011101100"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus010010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0111000001001001001001110110001011101010111100101001011010010101111100100"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus010011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0111010111100101110111010111001011011101000110011001011001001110111100110"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus010100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0111101101110000011001010100111011001111011011011001011000000100100000111"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus010101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1000000011100111111001000011111011000001111100000101010110110110101011101"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus010110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1000011001001011100000100110111010110100101001000101010101100101100000000"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus010111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1000101110011010011010110010001010100111100010110101010100010001000001011"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus011000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001000011010011110011001100101010011010101001111001010010111001010010110"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus011001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001010111110110110110010011001010001101111110101101010001011110010111101"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus011010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001101100000010110001011000101010000001100001110001010000000000010011100"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus011011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001111111110110110010101001111001110101010011100101001110011111001001111"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus011100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1010010011010010001001001101111001101001010100100101001100111010111110110"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus011101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1010100110010100000101001001011001011101100101010101001011010011110101110"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus011110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1010111000111011110111011111011001010010000110001001001001101001110010111"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus011111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011001011001000110010010011001001000110110111100101000111111100111010011"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus100000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011011100111010001000101010101000111011111010000001000110001101010000011"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus100001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011101110001111001110101111101000110001001101111001000100011010111001001"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus100010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011111111000111011001110001111000100110110011100101000010100101111001000"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus100011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100001111100010000000000111111000011100101011100001000000101110010100101"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus100100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100011111011110011001010010001000010010110110000100111110110100010000101"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus100101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100101110111011111101111010101000001001010011101000111100110111110001100"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus100110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100111101111010000111110111101000000000000100101000111010111000111100010"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus100111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101001100011000010010001101100111110111001001010100111000110111110101110"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus101000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101011010010101111001001111000111101110100010000100110110110100100010111"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus101001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101100111110010011010011111100111100110001111010000110100101111001000110"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus101010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101110100101101010100110011100111011110010001001100110010100111101100100"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus101011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110000001000110001000010011010111010110101000001000110000011110010011011"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus101100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110001100111100010110011010010111001111010100011100101110010011000010101"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus101101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110011000001111100001111010000111001000010110010100101100000101111111110"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus101110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110100010111111001110111010000111000001101110001000101001110111010000000"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus101111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110101101001011000010111010000110111011011100000100100111100110111001000"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus110000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110110110110010100100110001000110110101100000011000100101010101000000010"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus110001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110111111110101011100110001000110101111111011010100100011000001101011011"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus110010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111001000010011010100100101100110101010101101000100100000101101000000001"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus110011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111010000001011110111010101110110100101110101110100011110010111000100001"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus110100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111010111011110110001100100100110100001010101110100011011111111111101010"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus110101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111011110001011110001010010000110011101001101001100011001100111110001010"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus110110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111100100010010100101111011110110011001011100000100010111001110100110001"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus110111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111101001110011000000011101100110010110000010101100010100110100100001101"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus111000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111101110101100110011010001110110010011000001001000010010011001101001110"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus111001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111110010111111110010010010100110010000010111100000001111111110000100100"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus111010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111110110101011110010111000110110001110000101111100001101100001110111111"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus111011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111001110000101011111110110110001100001100100000001011000101001001111"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus111100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111100001110010101111110010110001010101011010000001000101000000000100"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus111101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111110000100101010110010110110001001100010010000000110001010100001111"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus111110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111111010011100101111000000110001000110001100100000011101100110100000"))) |
        -(int)((sc_uint<6>)inst_cellmath__61(22,17) == sc_uint<6>("0bus111111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111111111011000100001011010110001000011001001100000001001110111101000")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__195(29,4)
    inst_cellmath__195(29,4) = 
        (sc_uint<26>)(inst_cellmath__195__80_0_0(72,47))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__195(3,0)
    inst_cellmath__195(3,0) = 
        (sc_uint<4>)(inst_cellmath__195__80_0_0(46,43))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__197__131(20,20)
    inst_cellmath__197__131(20,20) = 
        (sc_uint<1>)(sc_uint<1>(1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__197(2,0)
    inst_cellmath__197(2,0) = 
        (sc_uint<3>)(inst_cellmath__195__80_0_0(25,23))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__197__131(19,0)
    inst_cellmath__197__131(19,0) = 
        (sc_uint<20>)(inst_cellmath__195__80_0_0(42,23))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__197(20,18)
    inst_cellmath__197(20,18) = 
        (sc_uint<3>)(inst_cellmath__197__131(20,18))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__197(17,3)
    inst_cellmath__197(17,3) = 
        (sc_uint<15>)(inst_cellmath__195__80_0_0(40,26))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__198
    inst_cellmath__198 = 
        
            +((sc_uint<33>)(( ((sc_uint<16>)(sc_int<1>)(inst_cellmath__113_0_0(16,16))), inst_cellmath__113_0_0)) * (sc_uint<33>)(( ((sc_uint<16>)(sc_int<1>)(inst_cellmath__113_0_0(16,16))), inst_cellmath__113_0_0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<50> inst_cellmath__201_tmp_0;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<50> inst_cellmath__201_tmp_1;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<50> inst_cellmath__201_tmp_2;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__201_tmp_2
    inst_cellmath__201_tmp_2 = 
        
            +((sc_uint<50>)(((sc_uint<50>)((inst_cellmath__195)<<(shift_v)18))))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__201_tmp_1
    inst_cellmath__201_tmp_1 = 
        inst_cellmath__201_tmp_2
            +((sc_uint<50>)(( ((sc_uint<29>)(sc_int<1>)(inst_cellmath__197(20,20))), inst_cellmath__197)) * (sc_uint<50>)(inst_cellmath__198(32,17)))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__201_tmp_0
    inst_cellmath__201_tmp_0 = 
        inst_cellmath__201_tmp_1
            +(((sc_uint<50>)(inst_cellmath__195__80_0_0(21,0)) * (sc_uint<50>)(( ((sc_biguint<33>)(sc_bigint<1>)(inst_cellmath__113_0_1(16,16))), inst_cellmath__113_0_1)))<<4)
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__201
    inst_cellmath__201 = 
        inst_cellmath__201_tmp_0
            +((sc_uint<50>)(sc_uint<26>("0bus01000000000000000000000000")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__200(48,0)
    inst_cellmath__200(48,0) = 
        
        -(int)((sc_uint<1>)inst_cellmath__201(49,49) == sc_uint<1>("0bus0")) & ((sc_uint<49>)(inst_cellmath__201(48,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__210
    inst_cellmath__210 = 
        (sc_uint<31>)(inst_cellmath__200(47,25))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__19
    inst_cellmath__19 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_exp(7,7))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp(6,6))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__24
    inst_cellmath__24 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(a_man(0,0))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(1,1))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(2,2))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(3,3))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(4,4))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(5,5))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(6,6))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(7,7))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(8,8))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(9,9))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(10,10))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(11,11))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(12,12))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(13,13))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(14,14))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(15,15))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(16,16))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(17,17))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(18,18))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(19,19))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(20,20))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(21,21))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man(22,22))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__66
    inst_cellmath__66 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(a_sign)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__67
    inst_cellmath__67 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_sign)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__68
    inst_cellmath__68 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__66)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__67)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__69
    inst_cellmath__69 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__24)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__82
    inst_cellmath__82 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__17
    inst_cellmath__17 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(a_exp(7,7))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp(0,0))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp(1,1))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp(2,2))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp(3,3))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp(4,4))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp(5,5))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp(6,6))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__79__46
    inst_cellmath__79__46 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__228__231
    inst_cellmath__228__231 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__82)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__79__46)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__231__242_0_0_0
    inst_cellmath__231__242_0_0_0 = 
        (inst_cellmath__228__231,(sc_biguint<1>)(inst_cellmath__200(46,46)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<12> inst_cellmath__216__184_tmp_3 = 
            -((sc_uint<12>)(a_exp))
            +((sc_uint<12>)(sc_uint<8>("0bus01110111")));
        inst_cellmath__216__184 = (((sc_uint<1>)(inst_cellmath__216__184_tmp_3(11,11)))==((sc_uint<1>)0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__219
    inst_cellmath__219 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__200(48,48))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__61(22,22))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__216_0
    inst_cellmath__216_0 = 
        (inst_cellmath__216__184,inst_cellmath__219)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__211__183
    inst_cellmath__211__183 = 
        (inst_cellmath__210,sc_int<1>(1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__211__182(4,0)
    inst_cellmath__211__182(4,0) = 
        
        -(int)((sc_uint<1>)inst_cellmath__211__183(31,31) == sc_uint<1>("0bus1")) & ((sc_uint<5>)(sc_uint<5>("0bus00000"))) |
        -(int)((sc_uint<2>)inst_cellmath__211__183(31,30) == sc_uint<2>("0bus01")) & ((sc_uint<5>)(sc_uint<5>("0bus00001"))) |
        -(int)((sc_uint<3>)inst_cellmath__211__183(31,29) == sc_uint<3>("0bus001")) & ((sc_uint<5>)(sc_uint<5>("0bus00010"))) |
        -(int)((sc_uint<4>)inst_cellmath__211__183(31,28) == sc_uint<4>("0bus0001")) & ((sc_uint<5>)(sc_uint<5>("0bus00011"))) |
        -(int)((sc_uint<5>)inst_cellmath__211__183(31,27) == sc_uint<5>("0bus00001")) & ((sc_uint<5>)(sc_uint<5>("0bus00100"))) |
        -(int)((sc_uint<6>)inst_cellmath__211__183(31,26) == sc_uint<6>("0bus000001")) & ((sc_uint<5>)(sc_uint<5>("0bus00101"))) |
        -(int)((sc_uint<7>)inst_cellmath__211__183(31,25) == sc_uint<7>("0bus0000001")) & ((sc_uint<5>)(sc_uint<5>("0bus00110"))) |
        -(int)((sc_uint<8>)inst_cellmath__211__183(31,24) == sc_uint<8>("0bus00000001")) & ((sc_uint<5>)(sc_uint<5>("0bus00111"))) |
        -(int)((sc_uint<9>)inst_cellmath__211__183(31,23) == sc_uint<9>("0bus000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01000"))) |
        -(int)((sc_uint<10>)inst_cellmath__211__183(31,22) == sc_uint<10>("0bus0000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01001"))) |
        -(int)((sc_uint<11>)inst_cellmath__211__183(31,21) == sc_uint<11>("0bus00000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01010"))) |
        -(int)((sc_uint<12>)inst_cellmath__211__183(31,20) == sc_uint<12>("0bus000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01011"))) |
        -(int)((sc_uint<13>)inst_cellmath__211__183(31,19) == sc_uint<13>("0bus0000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01100"))) |
        -(int)((sc_uint<14>)inst_cellmath__211__183(31,18) == sc_uint<14>("0bus00000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01101"))) |
        -(int)((sc_uint<15>)inst_cellmath__211__183(31,17) == sc_uint<15>("0bus000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01110"))) |
        -(int)((sc_uint<16>)inst_cellmath__211__183(31,16) == sc_uint<16>("0bus0000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01111"))) |
        -(int)((sc_uint<17>)inst_cellmath__211__183(31,15) == sc_uint<17>("0bus00000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10000"))) |
        -(int)((sc_uint<18>)inst_cellmath__211__183(31,14) == sc_uint<18>("0bus000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10001"))) |
        -(int)((sc_uint<19>)inst_cellmath__211__183(31,13) == sc_uint<19>("0bus0000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10010"))) |
        -(int)((sc_uint<20>)inst_cellmath__211__183(31,12) == sc_uint<20>("0bus00000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10011"))) |
        -(int)((sc_uint<21>)inst_cellmath__211__183(31,11) == sc_uint<21>("0bus000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10100"))) |
        -(int)((sc_uint<22>)inst_cellmath__211__183(31,10) == sc_uint<22>("0bus0000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10101"))) |
        -(int)((sc_uint<23>)inst_cellmath__211__183(31,9) == sc_uint<23>("0bus00000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10110"))) |
        -(int)((sc_uint<24>)inst_cellmath__211__183(31,8) == sc_uint<24>("0bus000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10111"))) |
        -(int)((sc_uint<25>)inst_cellmath__211__183(31,7) == sc_uint<25>("0bus0000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11000"))) |
        -(int)((sc_uint<26>)inst_cellmath__211__183(31,6) == sc_uint<26>("0bus00000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11001"))) |
        -(int)((sc_uint<27>)inst_cellmath__211__183(31,5) == sc_uint<27>("0bus000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11010"))) |
        -(int)((sc_uint<28>)inst_cellmath__211__183(31,4) == sc_uint<28>("0bus0000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11011"))) |
        -(int)((sc_uint<29>)inst_cellmath__211__183(31,3) == sc_uint<29>("0bus00000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11100"))) |
        -(int)((sc_uint<30>)inst_cellmath__211__183(31,2) == sc_uint<30>("0bus000000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11101"))) |
        -(int)((sc_uint<31>)inst_cellmath__211__183(31,1) == sc_uint<31>("0bus0000000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11110"))) |
        -(int)((sc_uint<32>)inst_cellmath__211__183 == sc_uint<32>("0bus00000000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11111"))) |
        -(int)((sc_uint<32>)inst_cellmath__211__183 == sc_uint<32>("0bus00000000000000000000000000000000")) & ((sc_uint<5>)(sc_uint<5>("0bus00000")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__215
    inst_cellmath__215 = 
        
            +((sc_uint<5>)(inst_cellmath__211__182(4,0)))
            -((sc_uint<5>)(sc_uint<5>("0b00111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4611
    // Compare anchor: inst_cellmath__220__188(22,0)
    inst_cellmath__220__188(22,0) = 
         ((shift_v)(((sc_uint<5>)(inst_cellmath__215)).to_int()) >= 23 ? (sc_uint<23>)(0) : (sc_uint<23>)((sc_uint<23>)(inst_cellmath__200(47,25)) << (shift_v)(((sc_uint<5>)(inst_cellmath__215)).to_int())))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__221__195
    inst_cellmath__221__195 = 
        
            -((sc_uint<7>)(inst_cellmath__215))
            +((sc_uint<7>)(sc_uint<7>("0bus1111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__220_22_0__0
    inst_cellmath__220_22_0__0 = 
        (inst_cellmath__220__188(22,0),sc_uint<1>(0),inst_cellmath__221__195)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__220_22_0__1
    inst_cellmath__220_22_0__1 = 
        (a_man,a_exp)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__220_22_0_
    inst_cellmath__220_22_0_ = 
        
        -(int)((sc_uint<2>)inst_cellmath__216_0 == sc_uint<2>("0bus00")) & ((sc_uint<31>)(inst_cellmath__220_22_0__0)) |
        -(int)((sc_uint<1>)inst_cellmath__216_0(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<31>)(inst_cellmath__220_22_0__1)) |
        -(int)((sc_uint<2>)inst_cellmath__216_0 == sc_uint<2>("0bus01")) & ((sc_uint<31>)(sc_uint<31>("0bus0000000000000000000000001111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__223__208
    inst_cellmath__223__208 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(26,26))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(27,27))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(28,28))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(29,29))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_(7,7))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__223__207
    inst_cellmath__223__207 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48_32_0_(24,24))))
            ^((sc_uint<1>)((sc_uint<1>)(a_sign)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__223__199
    inst_cellmath__223__199 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__82)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79__46)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__223__208)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__223__207)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__223
    inst_cellmath__223 = 
        
        -(int)((sc_uint<1>)inst_cellmath__216__184 == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__223__199)) |
        -(int)((sc_uint<1>)inst_cellmath__216__184 == sc_uint<1>("0bus1")) & ((sc_uint<1>)(a_sign))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__224__212
    inst_cellmath__224__212 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__82)))
            |((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79__46)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__228
    inst_cellmath__228 = 
        
        -(int)((sc_uint<1>)inst_cellmath__228__231 == sc_uint<1>("0bus0")) & ((sc_uint<8>)(inst_cellmath__220_22_0_(7,0))) |
        -(int)((sc_uint<1>)inst_cellmath__228__231 == sc_uint<1>("0bus1")) & ((sc_uint<8>)(((sc_uint<8>)(sc_int<1>)inst_cellmath__224__212)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__231
    inst_cellmath__231 = 
        
        -(int)((sc_uint<1>)inst_cellmath__231__242_0_0_0(1,1) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__220_22_0_(30,8))) |
        -(int)((sc_uint<1>)inst_cellmath__231__242_0_0_0(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(((sc_uint<23>)(sc_int<1>)inst_cellmath__82)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__237
    inst_cellmath__237 = 
        (inst_cellmath__223,inst_cellmath__228,inst_cellmath__231)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x(31,0)
    x(31,0) = 
        (sc_uint<32>)(inst_cellmath__237)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x(36,33)
    x(36,33) = 
        (sc_uint<4>)(sc_uint<4>("0bus0000"))
    ;

/*Clock change logic follows*/
}

// Signal declarations:

    sc_uint<1> inst_cellmath__17;
    sc_uint<1> inst_cellmath__19;
    sc_uint<1> inst_cellmath__24;
    sc_uint<9> inst_cellmath__42;
    sc_uint<23> inst_cellmath__61;
    sc_uint<1> inst_cellmath__66;
    sc_uint<1> inst_cellmath__67;
    sc_uint<1> inst_cellmath__68;
    sc_uint<1> inst_cellmath__69;
    sc_uint<1> inst_cellmath__82;
    sc_uint<1> inst_cellmath__115__W1;
    sc_uint<30> inst_cellmath__195;
    sc_int<21> inst_cellmath__197;
    sc_uint<33> inst_cellmath__198;
    sc_int<50> inst_cellmath__200;
    sc_int<50> inst_cellmath__201;
    sc_uint<31> inst_cellmath__210;
    sc_uint<5> inst_cellmath__215;
    sc_uint<1> inst_cellmath__219;
    sc_uint<1> inst_cellmath__223;
    sc_uint<8> inst_cellmath__228;
    sc_uint<23> inst_cellmath__231;
    sc_uint<32> inst_cellmath__237;
    sc_uint<1> inst_cellmath__79__46;
    sc_uint<21> inst_cellmath__197__131;
    sc_uint<32> inst_cellmath__211__183;
    sc_uint<6> inst_cellmath__211__182;
    sc_uint<1> inst_cellmath__216__184;
    sc_uint<54> inst_cellmath__220__188;
    sc_uint<7> inst_cellmath__221__195;
    sc_uint<1> inst_cellmath__223__207;
    sc_uint<1> inst_cellmath__223__208;
    sc_uint<1> inst_cellmath__223__199;
    sc_uint<1> inst_cellmath__224__212;
    sc_uint<1> inst_cellmath__228__231;
    sc_uint<56> inst_blk01_cellmath__39_56_0_;
    sc_uint<2> inst_cellmath__216_0;
    sc_uint<31> inst_cellmath__220_22_0_;
    sc_uint<31> inst_cellmath__220_22_0__0;
    sc_uint<31> inst_cellmath__220_22_0__1;
    sc_uint<30> inst_cellmath__48_32_0_;
    sc_uint<2> inst_cellmath__231__242_0_0_0;
    sc_biguint<73> inst_cellmath__195__80_0_0;
    sc_uint<24> inst_blk01_cellmath__39__12_10_0;
    sc_uint<24> inst_blk01_cellmath__39__12_10_1;
    sc_uint<24> inst_blk01_cellmath__39__12_10_2;
    sc_uint<24> inst_blk01_cellmath__39__12_10_3;
    sc_uint<24> inst_blk01_cellmath__39__12_10_4;
    sc_uint<24> inst_blk01_cellmath__39__12_10_5;
    sc_uint<24> inst_blk01_cellmath__39__12_10_6;
    sc_uint<24> inst_blk01_cellmath__39__12_10_7;
    sc_uint<24> inst_blk01_cellmath__39__12_10_8;
    sc_uint<24> inst_blk01_cellmath__39__12_10_9;
    sc_uint<24> inst_blk01_cellmath__39__12_10_10;
    sc_int<17> inst_cellmath__113_0_0;
    sc_int<17> inst_cellmath__113_0_1;
    sc_uint<2> inst_cellmath__116__W1_0_0_1_0;
    sc_uint<2> inst_cellmath__116__W1_0_0_1_1;
};
#endif // !defined cynw_cm_float_sin_E8_M23_INCLUDED
    // !!!! amethyst/writers/SystemCbeh.cpp:4142
// cynw_cm_float_sin - cynth invocation function


inline void cynw_cm_float_sin_E8_M23( // module cynw_cm_float_sin_E8_M23
    const sc_uint<1>& a_sign // input  a_sign : unsigned
    ,const sc_uint<8>& a_exp // input  a_exp[7:0] : unsigned
    ,const sc_uint<23>& a_man // input  a_man[22:0] : unsigned
    ,sc_uint<37>& x // output  x[36:0] : unsigned
)
{
    static class_cynw_cm_float_sin_E8_M23 target; // BDW_REPLACE_NAME
    target(
        a_sign,
        a_exp,
        a_man,
        x    
);
}

/* CADENCE  v7DzTgzfqg== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/



