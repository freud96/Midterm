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
    
    Configured at: 11:19:28 CST (+0800), Sunday 24 April 2022
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
#if !defined DFT_compute_cynw_cm_float_mul_E8_M23_1_INCLUDED
#define DFT_compute_cynw_cm_float_mul_E8_M23_1_INCLUDED

struct class_DFT_compute_cynw_cm_float_mul_E8_M23_1 { // BDW_REPLACE_NAME cynw_cm_float_mul

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
    ,const sc_uint<1>& b_sign // input  b_sign : unsigned
    ,const sc_uint<8>& b_exp // input  b_exp[7:0] : unsigned
    ,const sc_uint<23>& b_man // input  b_man[22:0] : unsigned
    ,sc_uint<32>& x // output  x[31:0] : unsigned
)
{


// Signal initializations:

    inst_cellmath__25=0;
    inst_cellmath__26=0;
    inst_cellmath__30=0;
    inst_cellmath__31=0;
    inst_cellmath__32=0;
    inst_cellmath__33=0;
    inst_cellmath__34=0;
    inst_cellmath__35=0;
    inst_cellmath__36=0;
    inst_cellmath__37=0;
    inst_cellmath__38=0;
    inst_cellmath__39=0;
    inst_i_mul_int_mult_datapath_prodSum=0;
    inst_cellmath__45=0;
    inst_cellmath__48=0;
    inst_cellmath__49=0;
    inst_cellmath__50=0;
    inst_cellmath__51=0;
    inst_cellmath__52=0;
    inst_cellmath__53=0;
    inst_cellmath__54=0;
    inst_cellmath__55=0;
    inst_cellmath__65=0;
    inst_cellmath__32__5=0;
    inst_cellmath__32__6=0;
    inst_cellmath__33__7=0;
    inst_cellmath__33__8=0;
    inst_cellmath__50__15=0;
    inst_cellmath__51__17=0;
    inst_cellmath__51__16=0;
    inst_cellmath__52__21=0;
    inst_cellmath__52__20=0;
    inst_cellmath__54__30=0;
    inst_cellmath__55__36=0;
    inst_cellmath__54__30_0=0;
    inst_cellmath__50_0=0;


// Default output values:

    x=0;
    // !!!! amethyst/writers/SystemCbeh.cpp:5364

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<13> inst_cellmath__32__5_tmp_0 = 
            -((sc_uint<13>)(a_exp))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        inst_cellmath__32__5 = (((sc_uint<1>)inst_cellmath__32__5_tmp_0.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<27> inst_cellmath__32__6_tmp_1 = 
            -((sc_uint<27>)(a_man))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        inst_cellmath__32__6 = (((sc_uint<1>)inst_cellmath__32__6_tmp_1.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__34
    inst_cellmath__34 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__5)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__32__6)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<13> inst_cellmath__33__7_tmp_2 = 
            -((sc_uint<13>)(b_exp))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        inst_cellmath__33__7 = (((sc_uint<1>)inst_cellmath__33__7_tmp_2.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<27> inst_cellmath__33__8_tmp_3 = 
            -((sc_uint<27>)(b_man))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        inst_cellmath__33__8 = (((sc_uint<1>)inst_cellmath__33__8_tmp_3.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__35
    inst_cellmath__35 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33__7)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__33__8)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__38
    inst_cellmath__38 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__35)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__32
    inst_cellmath__32 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__5)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__6)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__33
    inst_cellmath__33 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33__7)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33__8)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__37
    inst_cellmath__37 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<12> inst_cellmath__30_tmp_4 = 
            -((sc_uint<12>)(a_exp))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        inst_cellmath__30 = (((sc_uint<1>)inst_cellmath__30_tmp_4.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<12> inst_cellmath__31_tmp_5 = 
            -((sc_uint<12>)(b_exp))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        inst_cellmath__31 = (((sc_uint<1>)inst_cellmath__31_tmp_5.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__36
    inst_cellmath__36 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__31)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__50__15
    inst_cellmath__50__15 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__36)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__50
    inst_cellmath__50 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__38)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__50__15)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__52__21
    inst_cellmath__52__21 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__36)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__26
    inst_cellmath__26 = 
        (sc_uint<1>(1),b_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__25
    inst_cellmath__25 = 
        (sc_uint<1>(1),a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<48> inst_i_mul_int_mult_datapath_prodSum_tmp_6;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_i_mul_int_mult_datapath_prodSum_tmp_6
    inst_i_mul_int_mult_datapath_prodSum_tmp_6 = 
        
            +(/*conformal multiplier wall*/(sc_uint<48>)(inst_cellmath__25) * (sc_uint<48>)(inst_cellmath__26))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_i_mul_int_mult_datapath_prodSum(47,0)
    inst_i_mul_int_mult_datapath_prodSum(47,0) = 
        inst_i_mul_int_mult_datapath_prodSum_tmp_6
            +((sc_uint<48>)(sc_uint<24>("0bus010000000000000000000000")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<10> inst_cellmath__45_tmp_7;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<10> inst_cellmath__45_tmp_8;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__45_tmp_8
    inst_cellmath__45_tmp_8 = 
        
            +((sc_uint<10>)(inst_i_mul_int_mult_datapath_prodSum(47,47)))
            +((sc_uint<10>)(b_exp))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__45_tmp_7
    inst_cellmath__45_tmp_7 = 
        inst_cellmath__45_tmp_8
            +((sc_uint<10>)(a_exp))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__45
    inst_cellmath__45 = 
        inst_cellmath__45_tmp_7
            -((sc_uint<10>)(sc_uint<10>("0b0001111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<14> inst_cellmath__49_tmp_9 = 
            -((sc_uint<14>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__45(9,9))), inst_cellmath__45)))
            +((sc_uint<14>)(sc_uint<9>("0bus011111110")));
        inst_cellmath__49 = (((sc_uint<1>)(inst_cellmath__49_tmp_9(13,13)))==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__52__20
    inst_cellmath__52__20 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__52__21)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__49)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__52
    inst_cellmath__52 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__50__15)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__52__20)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__38)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__54__30
    inst_cellmath__54__30 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__50)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__52)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__51__17
    inst_cellmath__51__17 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__36)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__37)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<14> inst_cellmath__48_tmp_10 = 
            +((sc_uint<14>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__45(9,9))), inst_cellmath__45)))
            -((sc_uint<14>)(sc_uint<2>("0b01")));
        inst_cellmath__48 = (((sc_uint<1>)(inst_cellmath__48_tmp_10(13,13)))==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__51__16
    inst_cellmath__51__16 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51__17)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__51
    inst_cellmath__51 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__50__15)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51__16)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__38)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__54__30_0
    inst_cellmath__54__30_0 = 
        (inst_cellmath__54__30,inst_cellmath__51)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__39
    inst_cellmath__39 = 
        
            ((sc_uint<1>)((sc_uint<1>)(a_sign)))
            ^((sc_uint<1>)((sc_uint<1>)(b_sign)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__53
    inst_cellmath__53 = 
        
        -(int)((sc_uint<1>)inst_cellmath__50 == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__39))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__54
    inst_cellmath__54 = 
        
        -(int)((sc_uint<2>)inst_cellmath__54__30_0 == sc_uint<2>("0bus00")) & ((sc_uint<8>)(inst_cellmath__45(7,0))) |
        -(int)((sc_uint<1>)inst_cellmath__54__30_0(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__55__36
    inst_cellmath__55__36 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__52)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__50_0
    inst_cellmath__50_0 = 
        (inst_cellmath__50,inst_cellmath__55__36,(sc_biguint<1>)(inst_i_mul_int_mult_datapath_prodSum(47,47)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__55
    inst_cellmath__55 = 
        
        -(int)((sc_uint<3>)inst_cellmath__50_0 == sc_uint<3>("0bus000")) & ((sc_uint<23>)(inst_i_mul_int_mult_datapath_prodSum(45,23))) |
        -(int)((sc_uint<3>)inst_cellmath__50_0 == sc_uint<3>("0bus001")) & ((sc_uint<23>)(inst_i_mul_int_mult_datapath_prodSum(46,24))) |
        -(int)((sc_uint<1>)inst_cellmath__50_0(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(sc_uint<23>("0bus11111111111111111111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__65
    inst_cellmath__65 = 
        (inst_cellmath__53,inst_cellmath__54,inst_cellmath__55)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x
    x = 
        (sc_uint<32>)(inst_cellmath__65)
    ;

/*Clock change logic follows*/
}

// Signal declarations:

    sc_uint<24> inst_cellmath__25;
    sc_uint<24> inst_cellmath__26;
    sc_uint<1> inst_cellmath__30;
    sc_uint<1> inst_cellmath__31;
    sc_uint<1> inst_cellmath__32;
    sc_uint<1> inst_cellmath__33;
    sc_uint<1> inst_cellmath__34;
    sc_uint<1> inst_cellmath__35;
    sc_uint<1> inst_cellmath__36;
    sc_uint<1> inst_cellmath__37;
    sc_uint<1> inst_cellmath__38;
    sc_uint<1> inst_cellmath__39;
    sc_int<50> inst_i_mul_int_mult_datapath_prodSum;
    sc_int<10> inst_cellmath__45;
    sc_uint<1> inst_cellmath__48;
    sc_uint<1> inst_cellmath__49;
    sc_uint<1> inst_cellmath__50;
    sc_uint<1> inst_cellmath__51;
    sc_uint<1> inst_cellmath__52;
    sc_uint<1> inst_cellmath__53;
    sc_uint<8> inst_cellmath__54;
    sc_uint<23> inst_cellmath__55;
    sc_uint<32> inst_cellmath__65;
    sc_uint<1> inst_cellmath__32__5;
    sc_uint<1> inst_cellmath__32__6;
    sc_uint<1> inst_cellmath__33__7;
    sc_uint<1> inst_cellmath__33__8;
    sc_uint<1> inst_cellmath__50__15;
    sc_uint<1> inst_cellmath__51__17;
    sc_uint<1> inst_cellmath__51__16;
    sc_uint<1> inst_cellmath__52__21;
    sc_uint<1> inst_cellmath__52__20;
    sc_uint<1> inst_cellmath__54__30;
    sc_uint<1> inst_cellmath__55__36;
    sc_uint<2> inst_cellmath__54__30_0;
    sc_uint<3> inst_cellmath__50_0;
};
#endif // !defined DFT_compute_cynw_cm_float_mul_E8_M23_1_INCLUDED
    // !!!! amethyst/writers/SystemCbeh.cpp:4142
// cynw_cm_float_mul - cynth invocation function


inline void DFT_compute_cynw_cm_float_mul_E8_M23_1( // module DFT_compute_cynw_cm_float_mul_E8_M23_1
    const sc_uint<1>& a_sign // input  a_sign : unsigned
    ,const sc_uint<8>& a_exp // input  a_exp[7:0] : unsigned
    ,const sc_uint<23>& a_man // input  a_man[22:0] : unsigned
    ,const sc_uint<1>& b_sign // input  b_sign : unsigned
    ,const sc_uint<8>& b_exp // input  b_exp[7:0] : unsigned
    ,const sc_uint<23>& b_man // input  b_man[22:0] : unsigned
    ,sc_uint<32>& x // output  x[31:0] : unsigned
)
{
    static class_DFT_compute_cynw_cm_float_mul_E8_M23_1 target; // BDW_REPLACE_NAME
    target(
        a_sign,
        a_exp,
        a_man,
        b_sign,
        b_exp,
        b_man,
        x    
);
}

/* CADENCE  urD3SgneqQ== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/





