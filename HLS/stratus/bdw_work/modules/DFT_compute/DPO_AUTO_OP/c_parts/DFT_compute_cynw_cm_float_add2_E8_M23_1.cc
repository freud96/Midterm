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
    
    Configured at: 11:19:42 CST (+0800), Sunday 24 April 2022
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
#if !defined DFT_compute_cynw_cm_float_add2_E8_M23_1_INCLUDED
#define DFT_compute_cynw_cm_float_add2_E8_M23_1_INCLUDED

struct class_DFT_compute_cynw_cm_float_add2_E8_M23_1 { // BDW_REPLACE_NAME cynw_cm_float_add2

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

    inst_cellmath__43=0;
    inst_cellmath__44=0;
    inst_cellmath__45=0;
    inst_cellmath__46=0;
    inst_cellmath__47=0;
    inst_cellmath__48=0;
    inst_cellmath__51=0;
    inst_cellmath__52=0;
    inst_cellmath__55=0;
    inst_cellmath__56=0;
    inst_cellmath__57=0;
    inst_cellmath__58=0;
    inst_cellmath__59=0;
    inst_cellmath__60=0;
    inst_cellmath__61=0;
    inst_cellmath__64=0;
    inst_cellmath__65=0;
    inst_cellmath__66=0;
    inst_cellmath__67=0;
    inst_cellmath__68=0;
    inst_cellmath__69=0;
    inst_cellmath__71=0;
    inst_cellmath__77=0;
    inst_cellmath__78=0;
    inst_cellmath__79=0;
    inst_cellmath__80=0;
    inst_cellmath__81=0;
    inst_cellmath__83=0;
    inst_cellmath__86=0;
    inst_cellmath__87=0;
    inst_cellmath__88=0;
    inst_cellmath__89=0;
    inst_cellmath__90=0;
    inst_cellmath__100=0;
    inst_cellmath__45__5=0;
    inst_cellmath__45__6=0;
    inst_cellmath__46__7=0;
    inst_cellmath__46__8=0;
    inst_cellmath__60__28=0;
    inst_cellmath__61__30=0;
    inst_cellmath__67__35=0;
    inst_cellmath__67__36=0;
    inst_cellmath__68__38=0;
    inst_cellmath__77__39=0;
    inst_cellmath__78__40=0;
    inst_cellmath__79__41=0;
    inst_cellmath__79__42=0;
    inst_cellmath__80__43=0;
    inst_cellmath__86__56=0;
    inst_cellmath__86__55=0;
    inst_cellmath__87__58=0;
    inst_cellmath__87__57=0;
    inst_cellmath__64__32_0=0;
    inst_cellmath__65__34_0=0;
    inst_cellmath__74_0=0;
    inst_cellmath__43_0=0;
    inst_cellmath__44_0=0;
    inst_cellmath__79_0=0;
    inst_cellmath__79_2=0;
    inst_cellmath__79_3=0;


// Default output values:

    x=0;
    // !!!! amethyst/writers/SystemCbeh.cpp:5364

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<13> inst_cellmath__46__7_tmp_0 = 
            -((sc_uint<13>)(b_exp))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        inst_cellmath__46__7 = (((sc_uint<1>)inst_cellmath__46__7_tmp_0.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<27> inst_cellmath__46__8_tmp_1 = 
            -((sc_uint<27>)(b_man))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        inst_cellmath__46__8 = (((sc_uint<1>)inst_cellmath__46__8_tmp_1.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__46
    inst_cellmath__46 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46__7)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46__8)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<13> inst_cellmath__45__5_tmp_2 = 
            -((sc_uint<13>)(a_exp))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        inst_cellmath__45__5 = (((sc_uint<1>)inst_cellmath__45__5_tmp_2.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<27> inst_cellmath__45__6_tmp_3 = 
            -((sc_uint<27>)(a_man))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        inst_cellmath__45__6 = (((sc_uint<1>)inst_cellmath__45__6_tmp_3.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__45
    inst_cellmath__45 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45__5)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45__6)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__79__42
    inst_cellmath__79__42 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46)))
            &((sc_uint<1>)(~(sc_uint<1>)(b_sign)))
            &((sc_uint<1>)((sc_uint<1>)(a_sign)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__79__41
    inst_cellmath__79__41 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46)))
            &((sc_uint<1>)((sc_uint<1>)(b_sign)))
            &((sc_uint<1>)(~(sc_uint<1>)(a_sign)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__47
    inst_cellmath__47 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45__5)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__45__6)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__48
    inst_cellmath__48 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46__7)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__46__8)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__79
    inst_cellmath__79 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__79__42)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__79__41)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__47)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<12> inst_cellmath__43_tmp_4 = 
            -((sc_uint<12>)(a_exp))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        inst_cellmath__43 = (((sc_uint<1>)inst_cellmath__43_tmp_4.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__55
    inst_cellmath__55 = 
        (sc_uint<2>("0bus01"),a_man,sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<12> inst_cellmath__44_tmp_5 = 
            -((sc_uint<12>)(b_exp))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        inst_cellmath__44 = (((sc_uint<1>)inst_cellmath__44_tmp_5.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__44_0
    inst_cellmath__44_0 = 
        (inst_cellmath__44,inst_cellmath__46,inst_cellmath__48)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__52
    inst_cellmath__52 = 
        
        -(int)((sc_uint<3>)inst_cellmath__44_0 == sc_uint<3>("0bus000")) & ((sc_uint<8>)(b_exp)) |
        -(int)((sc_uint<3>)inst_cellmath__44_0 == sc_uint<3>("0bus001")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<2>)inst_cellmath__44_0(2,1) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__43_0
    inst_cellmath__43_0 = 
        (inst_cellmath__43,inst_cellmath__45,inst_cellmath__47)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__51
    inst_cellmath__51 = 
        
        -(int)((sc_uint<3>)inst_cellmath__43_0 == sc_uint<3>("0bus000")) & ((sc_uint<8>)(a_exp)) |
        -(int)((sc_uint<3>)inst_cellmath__43_0 == sc_uint<3>("0bus001")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<2>)inst_cellmath__43_0(2,1) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
    ;

sc_uint<8> inst_cellmath__52_tmp_6 = (sc_uint<8>)(sc_uint<8>)(inst_cellmath__52);
sc_uint<8> inst_cellmath__52_tmp_7 = (sc_uint<8>)inst_cellmath__52_tmp_6 ;
sc_uint<8> inst_cellmath__51_tmp_8 = (sc_uint<8>)(sc_uint<8>)(inst_cellmath__51);
sc_uint<8> inst_cellmath__51_tmp_9 = (sc_uint<8>)inst_cellmath__51_tmp_8 > inst_cellmath__52_tmp_7 ? inst_cellmath__51_tmp_8 : inst_cellmath__52_tmp_7;
    // !!!! amethyst/writers/SystemCbeh.cpp:4955
    // Compare anchor: inst_cellmath__57
    inst_cellmath__57 = 
        inst_cellmath__51_tmp_9
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__58
    inst_cellmath__58 = 
        
            +((sc_uint<8>)(inst_cellmath__57))
            -((sc_uint<8>)(inst_cellmath__51))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4611
    // Compare anchor: inst_cellmath__60__28
    inst_cellmath__60__28 = 
            // !!!! amethyst/writers/SystemCbeh.cpp:4652
(sc_biguint<89>)(inst_cellmath__55) >> (shift_v)((sc_uint<1>)(inst_cellmath__58(7,5).or_reduce()), inst_cellmath__58(4,0)).to_int()
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__60
    inst_cellmath__60 = 
        
        -(int)((sc_uint<1>)inst_cellmath__43 == sc_uint<1>("0bus0")) & ((sc_uint<26>)(inst_cellmath__60__28))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__64__32_0
    inst_cellmath__64__32_0 = 
        
            -((sc_uint<27>)(inst_cellmath__60))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__64
    inst_cellmath__64 = 
        
        -(int)((sc_uint<1>)a_sign == sc_uint<1>("0bus0")) & ((sc_uint<27>)(inst_cellmath__60)) |
        -(int)((sc_uint<1>)a_sign == sc_uint<1>("0bus1")) & ((sc_uint<27>)(inst_cellmath__64__32_0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__56
    inst_cellmath__56 = 
        (sc_uint<2>("0bus01"),b_man,sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__59
    inst_cellmath__59 = 
        
            +((sc_uint<8>)(inst_cellmath__57))
            -((sc_uint<8>)(inst_cellmath__52))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4611
    // Compare anchor: inst_cellmath__61__30
    inst_cellmath__61__30 = 
            // !!!! amethyst/writers/SystemCbeh.cpp:4652
(sc_biguint<89>)(inst_cellmath__56) >> (shift_v)((sc_uint<1>)(inst_cellmath__59(7,5).or_reduce()), inst_cellmath__59(4,0)).to_int()
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__61
    inst_cellmath__61 = 
        
        -(int)((sc_uint<1>)inst_cellmath__44 == sc_uint<1>("0bus0")) & ((sc_uint<26>)(inst_cellmath__61__30))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__65__34_0
    inst_cellmath__65__34_0 = 
        
            -((sc_uint<27>)(inst_cellmath__61))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__65
    inst_cellmath__65 = 
        
        -(int)((sc_uint<1>)b_sign == sc_uint<1>("0bus0")) & ((sc_uint<27>)(inst_cellmath__61)) |
        -(int)((sc_uint<1>)b_sign == sc_uint<1>("0bus1")) & ((sc_uint<27>)(inst_cellmath__65__34_0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__66
    inst_cellmath__66 = 
        
            +((sc_uint<27>)(inst_cellmath__64))
            +((sc_uint<27>)(inst_cellmath__65))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<31> inst_cellmath__67__35_tmp_10 = 
            -((sc_uint<31>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__66(26,26))), inst_cellmath__66)))
            -((sc_uint<31>)(sc_uint<2>("0b01")));
        inst_cellmath__67__35 = (((sc_uint<1>)(inst_cellmath__67__35_tmp_10(30,30)))==((sc_uint<1>)0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__67__36
    inst_cellmath__67__36 = 
        
            ((sc_uint<1>)((sc_uint<1>)(b_sign)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43)))
            &((sc_uint<1>)((sc_uint<1>)(a_sign)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__67
    inst_cellmath__67 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__67__35)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__67__36)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__88
    inst_cellmath__88 = 
        
        -(int)((sc_uint<1>)inst_cellmath__79 == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__67))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__68__38(25,0)
    inst_cellmath__68__38(25,0) = 
        
            -((sc_uint<26>)(inst_cellmath__66(25,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__68
    inst_cellmath__68 = 
        
        -(int)((sc_uint<1>)inst_cellmath__67 == sc_uint<1>("0bus0")) & ((sc_uint<26>)(inst_cellmath__66(25,0))) |
        -(int)((sc_uint<1>)inst_cellmath__67 == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__68__38(25,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__69
    inst_cellmath__69 = 
        
        -(int)((sc_uint<1>)inst_cellmath__68(25,25) == sc_uint<1>("0bus1")) & ((sc_uint<6>)(sc_uint<6>("0bus000000"))) |
        -(int)((sc_uint<2>)inst_cellmath__68(25,24) == sc_uint<2>("0bus01")) & ((sc_uint<6>)(sc_uint<6>("0bus000001"))) |
        -(int)((sc_uint<3>)inst_cellmath__68(25,23) == sc_uint<3>("0bus001")) & ((sc_uint<6>)(sc_uint<6>("0bus000010"))) |
        -(int)((sc_uint<4>)inst_cellmath__68(25,22) == sc_uint<4>("0bus0001")) & ((sc_uint<6>)(sc_uint<6>("0bus000011"))) |
        -(int)((sc_uint<5>)inst_cellmath__68(25,21) == sc_uint<5>("0bus00001")) & ((sc_uint<6>)(sc_uint<6>("0bus000100"))) |
        -(int)((sc_uint<6>)inst_cellmath__68(25,20) == sc_uint<6>("0bus000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000101"))) |
        -(int)((sc_uint<7>)inst_cellmath__68(25,19) == sc_uint<7>("0bus0000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000110"))) |
        -(int)((sc_uint<8>)inst_cellmath__68(25,18) == sc_uint<8>("0bus00000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000111"))) |
        -(int)((sc_uint<9>)inst_cellmath__68(25,17) == sc_uint<9>("0bus000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001000"))) |
        -(int)((sc_uint<10>)inst_cellmath__68(25,16) == sc_uint<10>("0bus0000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001001"))) |
        -(int)((sc_uint<11>)inst_cellmath__68(25,15) == sc_uint<11>("0bus00000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001010"))) |
        -(int)((sc_uint<12>)inst_cellmath__68(25,14) == sc_uint<12>("0bus000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001011"))) |
        -(int)((sc_uint<13>)inst_cellmath__68(25,13) == sc_uint<13>("0bus0000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001100"))) |
        -(int)((sc_uint<14>)inst_cellmath__68(25,12) == sc_uint<14>("0bus00000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001101"))) |
        -(int)((sc_uint<15>)inst_cellmath__68(25,11) == sc_uint<15>("0bus000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001110"))) |
        -(int)((sc_uint<16>)inst_cellmath__68(25,10) == sc_uint<16>("0bus0000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001111"))) |
        -(int)((sc_uint<17>)inst_cellmath__68(25,9) == sc_uint<17>("0bus00000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010000"))) |
        -(int)((sc_uint<18>)inst_cellmath__68(25,8) == sc_uint<18>("0bus000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010001"))) |
        -(int)((sc_uint<19>)inst_cellmath__68(25,7) == sc_uint<19>("0bus0000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010010"))) |
        -(int)((sc_uint<20>)inst_cellmath__68(25,6) == sc_uint<20>("0bus00000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010011"))) |
        -(int)((sc_uint<21>)inst_cellmath__68(25,5) == sc_uint<21>("0bus000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010100"))) |
        -(int)((sc_uint<22>)inst_cellmath__68(25,4) == sc_uint<22>("0bus0000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010101"))) |
        -(int)((sc_uint<23>)inst_cellmath__68(25,3) == sc_uint<23>("0bus00000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010110"))) |
        -(int)((sc_uint<24>)inst_cellmath__68(25,2) == sc_uint<24>("0bus000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010111"))) |
        -(int)((sc_uint<25>)inst_cellmath__68(25,1) == sc_uint<25>("0bus0000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus011000"))) |
        -(int)((sc_uint<26>)inst_cellmath__68 == sc_uint<26>("0bus00000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus011001"))) |
        -(int)((sc_uint<26>)inst_cellmath__68 == sc_uint<26>("0bus00000000000000000000000000")) & ((sc_uint<6>)(sc_uint<6>("0bus100000")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<10> inst_cellmath__74_0_tmp_11;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__74_0_tmp_11
    inst_cellmath__74_0_tmp_11 = 
        
            -((sc_uint<10>)(inst_cellmath__69(4,0)))
            +((sc_uint<10>)(inst_cellmath__57))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__74_0
    inst_cellmath__74_0 = 
        inst_cellmath__74_0_tmp_11
            +((sc_uint<10>)(sc_uint<2>("0bus01")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<14> inst_cellmath__77__39_tmp_12 = 
            -((sc_uint<14>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__74_0(9,9))), inst_cellmath__74_0)))
            +((sc_uint<14>)(sc_uint<9>("0bus011111110")));
        inst_cellmath__77__39 = (((sc_uint<1>)(inst_cellmath__77__39_tmp_12(13,13)))==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__77
    inst_cellmath__77 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__69(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__77__39)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__80__43
    inst_cellmath__80__43 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__77)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__80
    inst_cellmath__80 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__80__43)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<14> inst_cellmath__78__40_tmp_13 = 
            +((sc_uint<14>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__74_0(9,9))), inst_cellmath__74_0)))
            -((sc_uint<14>)(sc_uint<2>("0b01")));
        inst_cellmath__78__40 = (((sc_uint<1>)(inst_cellmath__78__40_tmp_13(13,13)))==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__78
    inst_cellmath__78 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__78__40)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__81
    inst_cellmath__81 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__80)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__78)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__79_0
    inst_cellmath__79_0 = 
        (inst_cellmath__79,inst_cellmath__80,inst_cellmath__81)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__83
    inst_cellmath__83 = 
        
        -(int)((sc_uint<3>)inst_cellmath__79_0 == sc_uint<3>("0bus000")) & ((sc_uint<8>)(inst_cellmath__74_0(7,0))) |
        -(int)((sc_uint<2>)inst_cellmath__79_0(2,1) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<1>)inst_cellmath__79_0(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<15> inst_cellmath__86__56_tmp_14 = 
            +((sc_uint<15>)(inst_cellmath__83))
            -((sc_uint<15>)(sc_uint<11>("0b00011111111")));
        inst_cellmath__86__56 = (((sc_uint<1>)(inst_cellmath__86__56_tmp_14(14,14)))==((sc_uint<1>)0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__86__55
    inst_cellmath__86__55 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__80)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__86__56)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__86
    inst_cellmath__86 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__86__55)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__81)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<12> inst_cellmath__87__58_tmp_15 = 
            +((sc_uint<12>)(inst_cellmath__83))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        inst_cellmath__87__58 = (((sc_uint<1>)(inst_cellmath__87__58_tmp_15(11,11)))==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__87__57
    inst_cellmath__87__57 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__81)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87__58)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__87
    inst_cellmath__87 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87__57)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__80)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__79_2
    inst_cellmath__79_2 = 
        (inst_cellmath__79,inst_cellmath__86,inst_cellmath__87)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__89
    inst_cellmath__89 = 
        
        -(int)((sc_uint<3>)inst_cellmath__79_2 == sc_uint<3>("0bus000")) & ((sc_uint<8>)(inst_cellmath__83)) |
        -(int)((sc_uint<2>)inst_cellmath__79_2(2,1) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<1>)inst_cellmath__79_2(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__79_3
    inst_cellmath__79_3 = 
        (inst_cellmath__79,inst_cellmath__86,inst_cellmath__87,inst_cellmath__80,inst_cellmath__81)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4611
    // Compare anchor: inst_cellmath__71(24,0)
    inst_cellmath__71(24,0) = 
         ((shift_v)(((sc_uint<5>)(inst_cellmath__69(4,0))).to_int()) >= 25 ? (sc_uint<25>)(0) : (sc_uint<25>)((sc_uint<25>)(inst_cellmath__68) << (shift_v)(((sc_uint<5>)(inst_cellmath__69(4,0))).to_int())))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__90
    inst_cellmath__90 = 
        
        -(int)((sc_uint<5>)inst_cellmath__79_3 == sc_uint<5>("0bus00000")) & ((sc_uint<23>)(inst_cellmath__71(24,2))) |
        -(int)((sc_uint<1>)inst_cellmath__79_3(4,4) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(sc_uint<23>("0bus11111111111111111111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__100
    inst_cellmath__100 = 
        (inst_cellmath__88,inst_cellmath__89,inst_cellmath__90)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x
    x = 
        (sc_uint<32>)(inst_cellmath__100)
    ;

/*Clock change logic follows*/
}

// Signal declarations:

    sc_uint<1> inst_cellmath__43;
    sc_uint<1> inst_cellmath__44;
    sc_uint<1> inst_cellmath__45;
    sc_uint<1> inst_cellmath__46;
    sc_uint<1> inst_cellmath__47;
    sc_uint<1> inst_cellmath__48;
    sc_uint<8> inst_cellmath__51;
    sc_uint<8> inst_cellmath__52;
    sc_uint<26> inst_cellmath__55;
    sc_uint<26> inst_cellmath__56;
    sc_uint<8> inst_cellmath__57;
    sc_uint<8> inst_cellmath__58;
    sc_uint<8> inst_cellmath__59;
    sc_uint<26> inst_cellmath__60;
    sc_uint<26> inst_cellmath__61;
    sc_int<27> inst_cellmath__64;
    sc_int<27> inst_cellmath__65;
    sc_int<27> inst_cellmath__66;
    sc_uint<1> inst_cellmath__67;
    sc_uint<26> inst_cellmath__68;
    sc_uint<6> inst_cellmath__69;
    sc_uint<26> inst_cellmath__71;
    sc_uint<1> inst_cellmath__77;
    sc_uint<1> inst_cellmath__78;
    sc_uint<1> inst_cellmath__79;
    sc_uint<1> inst_cellmath__80;
    sc_uint<1> inst_cellmath__81;
    sc_uint<8> inst_cellmath__83;
    sc_uint<1> inst_cellmath__86;
    sc_uint<1> inst_cellmath__87;
    sc_uint<1> inst_cellmath__88;
    sc_uint<8> inst_cellmath__89;
    sc_uint<23> inst_cellmath__90;
    sc_uint<32> inst_cellmath__100;
    sc_uint<1> inst_cellmath__45__5;
    sc_uint<1> inst_cellmath__45__6;
    sc_uint<1> inst_cellmath__46__7;
    sc_uint<1> inst_cellmath__46__8;
    sc_uint<26> inst_cellmath__60__28;
    sc_uint<26> inst_cellmath__61__30;
    sc_uint<1> inst_cellmath__67__35;
    sc_uint<1> inst_cellmath__67__36;
    sc_int<28> inst_cellmath__68__38;
    sc_uint<1> inst_cellmath__77__39;
    sc_uint<1> inst_cellmath__78__40;
    sc_uint<1> inst_cellmath__79__41;
    sc_uint<1> inst_cellmath__79__42;
    sc_uint<1> inst_cellmath__80__43;
    sc_uint<1> inst_cellmath__86__56;
    sc_uint<1> inst_cellmath__86__55;
    sc_uint<1> inst_cellmath__87__58;
    sc_uint<1> inst_cellmath__87__57;
    sc_uint<27> inst_cellmath__64__32_0;
    sc_uint<27> inst_cellmath__65__34_0;
    sc_uint<10> inst_cellmath__74_0;
    sc_uint<3> inst_cellmath__43_0;
    sc_uint<3> inst_cellmath__44_0;
    sc_uint<3> inst_cellmath__79_0;
    sc_uint<3> inst_cellmath__79_2;
    sc_uint<5> inst_cellmath__79_3;
};
#endif // !defined DFT_compute_cynw_cm_float_add2_E8_M23_1_INCLUDED
    // !!!! amethyst/writers/SystemCbeh.cpp:4142
// cynw_cm_float_add2 - cynth invocation function


inline void DFT_compute_cynw_cm_float_add2_E8_M23_1( // module DFT_compute_cynw_cm_float_add2_E8_M23_1
    const sc_uint<1>& a_sign // input  a_sign : unsigned
    ,const sc_uint<8>& a_exp // input  a_exp[7:0] : unsigned
    ,const sc_uint<23>& a_man // input  a_man[22:0] : unsigned
    ,const sc_uint<1>& b_sign // input  b_sign : unsigned
    ,const sc_uint<8>& b_exp // input  b_exp[7:0] : unsigned
    ,const sc_uint<23>& b_man // input  b_man[22:0] : unsigned
    ,sc_uint<32>& x // output  x[31:0] : unsigned
)
{
    static class_DFT_compute_cynw_cm_float_add2_E8_M23_1 target; // BDW_REPLACE_NAME
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

/* CADENCE  ubH3SgDeqw== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/





