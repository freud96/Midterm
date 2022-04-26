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
    
    Configured at: 11:15:30 CST (+0800), Sunday 24 April 2022
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
#if !defined cynw_cm_float_div_ieee_E8_M23_INCLUDED
#define cynw_cm_float_div_ieee_E8_M23_INCLUDED

struct class_cynw_cm_float_div_ieee_E8_M23 { // BDW_REPLACE_NAME cynw_cm_float_div_ieee

    // Work around for SystemC 2.2 not having a signature
    // to a concatenation by an int.
#   if SYSTEMC_VERSION > 20060000 && SYSTEMC_VERSION < 20091210
        typedef unsigned long shift_v;
#   else
        typedef unsigned int shift_v;
#   endif

    void operator () (
    const sc_uint<1>& clk // input  clk : unsigned
    ,const sc_uint<1>& a_sign // input  a_sign : unsigned
    ,const sc_uint<8>& a_exp // input  a_exp[7:0] : unsigned
    ,const sc_uint<23>& a_man // input  a_man[22:0] : unsigned
    ,const sc_uint<1>& b_sign // input  b_sign : unsigned
    ,const sc_uint<8>& b_exp // input  b_exp[7:0] : unsigned
    ,const sc_uint<23>& b_man // input  b_man[22:0] : unsigned
    ,const sc_uint<1>& accept // input  accept : unsigned
    ,sc_uint<32>& x // output  x[31:0] : unsigned
)
{


// Signal initializations:

    tmp_0=0;
    tmp_1=0;
    inst_cellmath__0=0;
    inst_cellmath__8=0;
    inst_cellmath__9=0;
    inst_cellmath__11=0;
    inst_cellmath__12=0;
    inst_cellmath__13=0;
    inst_cellmath__14=0;
    inst_cellmath__16=0;
    inst_cellmath__17=0;
    inst_cellmath__20=0;
    inst_cellmath__21=0;
    inst_cellmath__22=0;
    inst_cellmath__23=0;
    inst_cellmath__24=0;
    inst_lookup0_cellmath__27=0;
    inst_lookup0_cellmath__29=0;
    inst_cellmath__30=0;
    inst_cellmath__31=0;
    inst_cellmath__32=0;
    inst_cellmath__34=0;
    inst_cellmath__35=0;
    inst_cellmath__36=0;
    inst_cellmath__38__W0=0;
    inst_cellmath__38__W1=0;
    inst_cellmath__39__W0=0;
    inst_cellmath__39__W1=0;
    inst_cellmath__40=0;
    inst_cellmath__41=0;
    inst_cellmath__42=0;
    inst_cellmath__43=0;
    inst_cellmath__44=0;
    inst_cellmath__45=0;
    inst_cellmath__46=0;
    inst_cellmath__47=0;
    inst_cellmath__50=0;
    inst_it2_cellmath__51=0;
    inst_it2_lookup1_cellmath__53=0;
    inst_it2_lookup1_cellmath__55=0;
    inst_it2_cellmath__56=0;
    inst_it2_cellmath__57=0;
    inst_it2_cellmath__58=0;
    inst_it2_cellmath__60=0;
    inst_it2_cellmath__61=0;
    inst_it2_cellmath__62__W0=0;
    inst_it2_cellmath__62__W1=0;
    inst_it2_cellmath__63__W0=0;
    inst_it2_cellmath__63__W1=0;
    inst_it2_cellmath__66=0;
    inst_cellmath__67=0;
    inst_cellmath__68=0;
    inst_cellmath__69=0;
    inst_cellmath__70=0;
    inst_cellmath__71=0;
    inst_cellmath__72=0;
    inst_cellmath__73=0;
    inst_cellmath__74=0;
    inst_cellmath__75=0;
    inst_cellmath__76=0;
    inst_cellmath__77=0;
    inst_cellmath__78=0;
    inst_cellmath__79=0;
    inst_cellmath__80=0;
    inst_cellmath__83=0;
    inst_cellmath__84=0;
    inst_cellmath__85=0;
    inst_cellmath__86=0;
    inst_cellmath__87=0;
    inst_cellmath__88=0;
    inst_cellmath__89=0;
    inst_cellmath__91=0;
    inst_cellmath__96=0;
    inst_cellmath__98=0;
    inst_cellmath__100=0;
    inst_cellmath__101=0;
    inst_cellmath__102=0;
    inst_cellmath__103=0;
    inst_cellmath__104=0;
    inst_cellmath__105=0;
    inst_cellmath__106=0;
    inst_cellmath__109=0;
    inst_cellmath__110=0;
    inst_cellmath__111=0;
    inst_cellmath__112=0;
    inst_cellmath__113=0;
    inst_cellmath__120=0;
    inst_cellmath__122=0;
    inst_cellmath__124=0;
    inst_cellmath__125=0;
    inst_cellmath__126=0;
    inst_cellmath__127=0;
    inst_cellmath__129=0;
    inst_cellmath__135=0;
    inst_cellmath__136=0;
    inst_cellmath__137=0;
    inst_cellmath__13__14=0;
    inst_cellmath__12__18=0;
    inst_cellmath__12__19=0;
    inst_cellmath__18__20=0;
    inst_cellmath__20__23=0;
    inst_cellmath__22__27=0;
    inst_cellmath__22__29=0;
    inst_cellmath__22__28=0;
    inst_cellmath__39__41=0;
    inst_cellmath__48__46=0;
    inst_cellmath__48__44=0;
    inst_cellmath__42__49=0;
    inst_cellmath__42__50=0;
    inst_cellmath__43__53=0;
    inst_cellmath__43__54=0;
    inst_cellmath__43__56=0;
    inst_cellmath__43__55=0;
    inst_it2_cellmath__63__67=0;
    inst_it2_cellmath__64__70=0;
    inst_it2_cellmath__64__68=0;
    inst_cellmath__40__73=0;
    inst_cellmath__40__74=0;
    inst_cellmath__41__77=0;
    inst_cellmath__41__78=0;
    inst_cellmath__41__80=0;
    inst_cellmath__41__79=0;
    inst_cellmath__69__82=0;
    inst_cellmath__69__81=0;
    inst_cellmath__70__83=0;
    inst_cellmath__87__87=0;
    inst_cellmath__87__88=0;
    inst_cellmath__92__95=0;
    inst_cellmath__127__103=0;
    inst_cellmath__127__104=0;
    inst_cellmath__130__105=0;
    inst_cellmath__121__106=0;
    inst_cellmath__133__109=0;
    inst_cellmath__113__113=0;
    inst_cellmath__30__31_0=0;
    inst_it2_cellmath__56__57_0=0;
    inst_cellmath__79_0=0;
    inst_cellmath__137_0=0;
    inst_cellmath__137_1=0;
    inst_cellmath__90_0=0;
    inst_cellmath__90_1=0;
    inst_cellmath__90_2=0;
    inst_cellmath__19__21_24_1_=0;
    inst_cellmath__48_1_0__1=0;
    inst_it2_cellmath__64_1_0__1=0;
    inst_cellmath__31__35_0_0=0;
    inst_it2_cellmath__57__61_0_0=0;
    inst_cellmath__113__115_22_1_=0;
    inst_cellmath__113__115_22_1__0=0;
    inst_cellmath__113__115_22_1__1=0;
    inst_cellmath__19__21_25_1__0_0=0;
    inst_cellmath__19__21_25_1__0_1=0;
    inst_cellmath__30__31_1_0=0;
    inst_cellmath__30__31_1_1=0;
    inst_cellmath__31__37_0_0=0;
    inst_cellmath__31__37_0_1=0;
    inst_cellmath__31__35_1_0=0;
    inst_cellmath__31__35_1_1=0;
    inst_it2_cellmath__56__57_1_0=0;
    inst_it2_cellmath__56__57_1_1=0;
    inst_it2_cellmath__57__61_1_0=0;
    inst_it2_cellmath__57__61_1_1=0;
    inst_cellmath__134__111_22_1_=0;
    inst_cellmath__31__35_0_25_1__0_0=0;
    inst_cellmath__31__35_0_25_1__0_1=0;
    inst_it2_cellmath__57__61_0_25_1__0_0=0;
    inst_it2_cellmath__57__61_0_25_1__0_1=0;


// Default output values:

    x=0;
    // !!!! amethyst/writers/SystemCbeh.cpp:5364

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__0
    inst_cellmath__0 = 
        cascade_inst_cellmath__0_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: x
    x = 
        (sc_uint<32>)(inst_cellmath__0)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: tmp_0
    tmp_0 = 
        (a_sign,a_exp,a_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: tmp_1
    tmp_1 = 
        (b_sign,b_exp,b_man)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__9
    inst_cellmath__9 = 
        cascade_inst_cellmath__9_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__19__21_25_1__0_0
    inst_cellmath__19__21_25_1__0_0 = 
        (sc_uint<1>(1),inst_cellmath__9(22,0),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__19__21_25_1__0_1
    inst_cellmath__19__21_25_1__0_1 = 
        (sc_uint<1>(1),inst_cellmath__9(22,0),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__11
    inst_cellmath__11 = 
        cascade_inst_cellmath__11_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__16
    inst_cellmath__16 = 
        cascade_inst_cellmath__16_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__17
    inst_cellmath__17 = 
        cascade_inst_cellmath__17_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__23
    inst_cellmath__23 = 
        
            +((sc_uint<5>)(inst_cellmath__16(25,21)))
            +((sc_uint<5>)(inst_cellmath__17(25,21)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__8
    inst_cellmath__8 = 
        cascade_inst_cellmath__8_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__22__27
    inst_cellmath__22__27 = 
        (sc_uint<2>("0bus01"),inst_cellmath__8(22,20))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__22__29
    inst_cellmath__22__29 = 
        ~(sc_uint<3>)(inst_cellmath__9(22,20))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__22__28
    inst_cellmath__22__28 = 
        (sc_uint<2>("0bus10"),inst_cellmath__22__29)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__22
    inst_cellmath__22 = 
        
            +((sc_uint<5>)(inst_cellmath__22__27))
            +((sc_uint<5>)(inst_cellmath__22__28))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__24
    inst_cellmath__24 = 
        
        -(int)((sc_uint<1>)inst_cellmath__11 == sc_uint<1>("0bus0")) & ((sc_uint<5>)(inst_cellmath__23)) |
        -(int)((sc_uint<1>)inst_cellmath__11 == sc_uint<1>("0bus1")) & ((sc_uint<5>)(inst_cellmath__22))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_lookup0_cellmath__27
    inst_lookup0_cellmath__27 = 
        (inst_cellmath__24,inst_cellmath__9(22,21))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_lookup0_cellmath__29
    inst_lookup0_cellmath__29 = 
        
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0000100")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0000101")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0001000")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0001001")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0001010")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0001011")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0001100")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0001101")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0001110")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0001111")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0010000")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0010001")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0010010")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0010011")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0010100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0010101")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0010110")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0010111")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0011000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0011001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0011010")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0011011")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0011100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0011101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0011110")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0011111")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0100000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0100001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0100010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0100011")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0100100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0100101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0100110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0100111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0101000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0101001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0101010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0101011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0101100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0101101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0101110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0101111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0110000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0110001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0110010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0110011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0110100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0110101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0110110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0110111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0111000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0111001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0111010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0111011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0111100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0111101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0111110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus0111111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1000000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1000001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1000010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1000011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1000100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1000101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1000110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1000111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1001000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1001001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1001010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1001011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1001100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1001101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1001110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1001111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1010000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1010001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1010010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1010011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1010100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1010101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1010110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1010111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1011000")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1011001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1011010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1011011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1011100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1011101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1011110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1011111")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1100000")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1100001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1100010")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1100011")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1100100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1100101")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1100110")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1100111")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1101000")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1101001")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1101010")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1101011")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1101100")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1101101")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1101110")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1101111")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1110000")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1110001")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1110010")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1110011")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1110100")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1110101")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1110110")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1110111")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1111000")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1111001")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1111010")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_lookup0_cellmath__27 == sc_uint<7>("0bus1111011")) & ((sc_uint<3>)(sc_uint<3>("0bus101")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__30__31_0(24,0)
    inst_cellmath__30__31_0(24,0) = 
        
        -(int)((sc_uint<1>)inst_lookup0_cellmath__29(0,0) == sc_uint<1>("0bus1")) & ((sc_uint<25>)(inst_cellmath__19__21_25_1__0_1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__30__31_1_0
    inst_cellmath__30__31_1_0 = 
        (inst_cellmath__30__31_0(24,1),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__30__31_1_1
    inst_cellmath__30__31_1_1 = 
        (inst_cellmath__30__31_0(24,1),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__31__37_0_0
    inst_cellmath__31__37_0_0 = 
        (sc_uint<1>(1),inst_cellmath__9(22,0),sc_uint<2>("0bus00"))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__31__37_0_1
    inst_cellmath__31__37_0_1 = 
        (sc_uint<1>(1),inst_cellmath__9(22,0),sc_uint<2>("0bus00"))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__31__35_0_0
    inst_cellmath__31__35_0_0 = 
        
        -(int)((sc_uint<1>)inst_lookup0_cellmath__29(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__31__37_0_0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__31__35_0_25_1__0_0
    inst_cellmath__31__35_0_25_1__0_0 = 
        (inst_cellmath__31__35_0_0(25,2),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__31__35_0_25_1__0_1
    inst_cellmath__31__35_0_25_1__0_1 = 
        (inst_cellmath__31__35_0_0(25,2),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__31__35_1_0
    inst_cellmath__31__35_1_0 = 
        (inst_cellmath__31__35_0_25_1__0_1,sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__31__35_1_1
    inst_cellmath__31__35_1_1 = 
        (inst_cellmath__31__35_0_25_1__0_0,sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__18__20(23,0)
    inst_cellmath__18__20(23,0) = 
        (inst_cellmath__8(22,0),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__20__23(23,0)
    inst_cellmath__20__23(23,0) = 
        (inst_cellmath__18__20(23,1),sc_uint<1>(1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__20(23,0)
    inst_cellmath__20(23,0) = 
        
        -(int)((sc_uint<1>)inst_cellmath__11 == sc_uint<1>("0bus0")) & ((sc_uint<24>)(inst_cellmath__16(23,0))) |
        -(int)((sc_uint<1>)inst_cellmath__11 == sc_uint<1>("0bus1")) & ((sc_uint<24>)(inst_cellmath__20__23(23,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__32
    inst_cellmath__32 = 
        ~(sc_uint<1>)(inst_lookup0_cellmath__29(2,2))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__34
    inst_cellmath__34 = 
        (inst_cellmath__20(23,0),sc_uint<1>(0),inst_cellmath__32)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__19__21_24_1_
    inst_cellmath__19__21_24_1_ = 
        (inst_cellmath__9(22,0),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__21(23,0)
    inst_cellmath__21(23,0) = 
        
        -(int)((sc_uint<1>)inst_cellmath__11 == sc_uint<1>("0bus0")) & ((sc_uint<24>)(inst_cellmath__17(23,0))) |
        -(int)((sc_uint<1>)inst_cellmath__11 == sc_uint<1>("0bus1")) & sc_uint<24>(~(sc_uint<24>)(inst_cellmath__19__21_24_1_))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__35
    inst_cellmath__35 = 
        (inst_cellmath__21(23,0),sc_uint<1>(0),inst_cellmath__32)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__30
    inst_cellmath__30 = 
        
        -(int)((sc_uint<1>)inst_lookup0_cellmath__29(2,2) == sc_uint<1>("0bus0")) & sc_uint<26>(~(sc_uint<26>)(inst_cellmath__30__31_1_0)) |
        -(int)((sc_uint<1>)inst_lookup0_cellmath__29(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__30__31_1_1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_cellmath__38__W1
    inst_cellmath__38__W1 = 
        ((sc_uint<26>)(inst_cellmath__34) ^ (sc_uint<26>)(inst_cellmath__35)) ^ (sc_uint<26>)(inst_cellmath__30)
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_cellmath__38__W0(24,0)
    inst_cellmath__38__W0(24,0) = 
        ((sc_uint<26>)(inst_cellmath__34) & (sc_uint<26>)(inst_cellmath__35)) | ((sc_uint<26>)(inst_cellmath__30) & ((sc_uint<26>)(inst_cellmath__34) | (sc_uint<26>)(inst_cellmath__35)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__39__41
    inst_cellmath__39__41 = 
        (inst_cellmath__38__W0(24,0),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__31
    inst_cellmath__31 = 
        
        -(int)((sc_uint<1>)inst_lookup0_cellmath__29(2,2) == sc_uint<1>("0bus0")) & sc_uint<26>(~(sc_uint<26>)(inst_cellmath__31__35_1_0)) |
        -(int)((sc_uint<1>)inst_lookup0_cellmath__29(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__31__35_1_1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_cellmath__39__W1
    inst_cellmath__39__W1 = 
        ((sc_uint<26>)(inst_cellmath__38__W1) ^ (sc_uint<26>)(inst_cellmath__39__41)) ^ (sc_uint<26>)(inst_cellmath__31)
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_cellmath__39__W0(24,0)
    inst_cellmath__39__W0(24,0) = 
        ((sc_uint<26>)(inst_cellmath__38__W1) & (sc_uint<26>)(inst_cellmath__39__41)) | ((sc_uint<26>)(inst_cellmath__31) & ((sc_uint<26>)(inst_cellmath__38__W1) | (sc_uint<26>)(inst_cellmath__39__41)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_it2_cellmath__51
    inst_it2_cellmath__51 = 
        
            +((sc_uint<5>)(inst_cellmath__39__W0(24,20)))
            +((sc_uint<5>)(inst_cellmath__39__W1(25,21)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_lookup1_cellmath__53
    inst_it2_lookup1_cellmath__53 = 
        (inst_it2_cellmath__51,inst_cellmath__9(22,21))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_it2_lookup1_cellmath__55
    inst_it2_lookup1_cellmath__55 = 
        
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0000100")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0000101")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0001000")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0001001")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0001010")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0001011")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0001100")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0001101")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0001110")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0001111")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0010000")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0010001")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0010010")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0010011")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0010100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0010101")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0010110")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0010111")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0011000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0011001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0011010")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0011011")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0011100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0011101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0011110")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0011111")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0100000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0100001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0100010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0100011")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0100100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0100101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0100110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0100111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0101000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0101001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0101010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0101011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0101100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0101101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0101110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0101111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0110000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0110001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0110010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0110011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0110100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0110101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0110110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0110111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0111000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0111001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0111010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0111011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0111100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0111101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0111110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus0111111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1000000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1000001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1000010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1000011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1000100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1000101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1000110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1000111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1001000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1001001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1001010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1001011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1001100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1001101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1001110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1001111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1010000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1010001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1010010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1010011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1010100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1010101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1010110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1010111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1011000")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1011001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1011010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1011011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1011100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1011101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1011110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1011111")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1100000")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1100001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1100010")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1100011")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1100100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1100101")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1100110")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1100111")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1101000")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1101001")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1101010")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1101011")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1101100")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1101101")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1101110")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1101111")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1110000")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1110001")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1110010")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1110011")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1110100")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1110101")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1110110")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1110111")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1111000")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1111001")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1111010")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)inst_it2_lookup1_cellmath__53 == sc_uint<7>("0bus1111011")) & ((sc_uint<3>)(sc_uint<3>("0bus101")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_it2_cellmath__56__57_0(24,0)
    inst_it2_cellmath__56__57_0(24,0) = 
        
        -(int)((sc_uint<1>)inst_it2_lookup1_cellmath__55(0,0) == sc_uint<1>("0bus1")) & ((sc_uint<25>)(inst_cellmath__19__21_25_1__0_0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__56__57_1_0
    inst_it2_cellmath__56__57_1_0 = 
        (inst_it2_cellmath__56__57_0(24,1),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__56__57_1_1
    inst_it2_cellmath__56__57_1_1 = 
        (inst_it2_cellmath__56__57_0(24,1),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_it2_cellmath__57__61_0_0
    inst_it2_cellmath__57__61_0_0 = 
        
        -(int)((sc_uint<1>)inst_it2_lookup1_cellmath__55(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__31__37_0_1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__57__61_0_25_1__0_0
    inst_it2_cellmath__57__61_0_25_1__0_0 = 
        (inst_it2_cellmath__57__61_0_0(25,2),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__57__61_0_25_1__0_1
    inst_it2_cellmath__57__61_0_25_1__0_1 = 
        (inst_it2_cellmath__57__61_0_0(25,2),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__57__61_1_0
    inst_it2_cellmath__57__61_1_0 = 
        (inst_it2_cellmath__57__61_0_25_1__0_1,sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__57__61_1_1
    inst_it2_cellmath__57__61_1_1 = 
        (inst_it2_cellmath__57__61_0_25_1__0_0,sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__112
    inst_cellmath__112 = 
        cascade_inst_cellmath__112_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__134__111_22_1_
    inst_cellmath__134__111_22_1_ = 
        (sc_uint<1>(1),inst_cellmath__112(21,1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__120
    inst_cellmath__120 = 
        
            +((sc_uint<26>)(inst_cellmath__16))
            +((sc_uint<26>)(inst_cellmath__17))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__44
    inst_cellmath__44 = 
        cascade_inst_cellmath__44_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__45
    inst_cellmath__45 = 
        cascade_inst_cellmath__45_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__124
    inst_cellmath__124 = 
        
        -(int)((sc_uint<1>)inst_cellmath__120(25,25) == sc_uint<1>("0bus0")) & ((sc_uint<29>)(inst_cellmath__44)) |
        -(int)((sc_uint<1>)inst_cellmath__120(25,25) == sc_uint<1>("0bus1")) & ((sc_uint<29>)(inst_cellmath__45))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__122
    inst_cellmath__122 = 
        ~(sc_uint<1>)(inst_cellmath__124(28,28))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__125
    inst_cellmath__125 = 
        
        -(int)((sc_uint<1>)inst_cellmath__122 == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__124(27,5))) |
        -(int)((sc_uint<1>)inst_cellmath__122 == sc_uint<1>("0bus1")) & ((sc_uint<23>)(inst_cellmath__124(26,4)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__126
    inst_cellmath__126 = 
        
        -(int)((sc_uint<1>)inst_cellmath__122 == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__124(4,4))) |
        -(int)((sc_uint<1>)inst_cellmath__122 == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__124(3,3)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__129
    inst_cellmath__129 = 
        
            +((sc_uint<23>)(inst_cellmath__125))
            +((sc_uint<23>)(inst_cellmath__126))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__127__104
    inst_cellmath__127__104 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124(3,3))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__127__103
    inst_cellmath__127__103 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124(2,2))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__127
    inst_cellmath__127 = 
        
        -(int)((sc_uint<1>)inst_cellmath__122 == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__127__104)) |
        -(int)((sc_uint<1>)inst_cellmath__122 == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__127__103))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__130__105
    inst_cellmath__130__105 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__125(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__127)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120(25,25))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__121__106
    inst_cellmath__121__106 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__129(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__130__105)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__113__115_22_1__0
    inst_cellmath__113__115_22_1__0 = 
        (inst_cellmath__129(22,1),inst_cellmath__121__106)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__113__115_22_1__1
    inst_cellmath__113__115_22_1__1 = 
        (inst_cellmath__134__111_22_1_,inst_cellmath__112(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__13__14
    inst_cellmath__13__14 = 
        ~(sc_uint<1>)(accept)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__13
    inst_cellmath__13 = 
        cascade_inst_cellmath__13_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__12__18(3,0)
    inst_cellmath__12__18(3,0) = 
        
            +((sc_uint<4>)(inst_cellmath__13))
            +((sc_uint<4>)(sc_uint<2>("0bus01")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__12__19
    inst_cellmath__12__19 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13(3,3))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__12
    inst_cellmath__12 = 
        
        -(int)((sc_uint<1>)inst_cellmath__12__19 == sc_uint<1>("0bus0")) & ((sc_uint<4>)(inst_cellmath__12__18(3,0))) |
        -(int)((sc_uint<1>)inst_cellmath__12__19 == sc_uint<1>("0bus1")) & ((sc_uint<4>)(sc_uint<4>("0bus1111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__36(0,0)
    inst_cellmath__36(0,0) = 
        (sc_uint<1>)(sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__36(23,1)
    inst_cellmath__36(23,1) = 
        (sc_uint<23>)(inst_cellmath__39__W0(22,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__46(24,0)
    inst_cellmath__46(24,0) = 
        
        -(int)((sc_uint<1>)inst_cellmath__11 == sc_uint<1>("0bus0")) & ((sc_uint<25>)(inst_cellmath__44(24,0))) |
        -(int)((sc_uint<1>)inst_cellmath__11 == sc_uint<1>("0bus1")) & ((sc_uint<25>)(sc_uint<25>("0bus0000000000000000000000001")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__47(24,0)
    inst_cellmath__47(24,0) = 
        
        -(int)((sc_uint<1>)inst_cellmath__11 == sc_uint<1>("0bus0")) & ((sc_uint<25>)(inst_cellmath__45(24,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__48__46
    inst_cellmath__48__46 = 
        ~(
            ((sc_uint<1>)((sc_uint<1>)(inst_lookup0_cellmath__29(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_lookup0_cellmath__29(1,1)))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__48__44
    inst_cellmath__48__44 = 
        
        -(int)((sc_uint<1>)inst_lookup0_cellmath__29(2,2) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_lookup0_cellmath__29(1,1))) |
        -(int)((sc_uint<1>)inst_lookup0_cellmath__29(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__48__46))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__48_1_0__1
    inst_cellmath__48_1_0__1 = 
        (inst_cellmath__48__44,inst_lookup0_cellmath__29(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__42__49(26,0)
    inst_cellmath__42__49(26,0) = 
        (inst_cellmath__46(24,0),inst_cellmath__48__44,inst_lookup0_cellmath__29(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__42__50(26,0)
    inst_cellmath__42__50(26,0) = 
        (inst_cellmath__47(24,0),inst_cellmath__48__44,inst_lookup0_cellmath__29(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__42(26,0)
    inst_cellmath__42(26,0) = 
        
        -(int)((sc_uint<1>)inst_cellmath__32 == sc_uint<1>("0bus0")) & ((sc_uint<27>)(inst_cellmath__42__50(26,0))) |
        -(int)((sc_uint<1>)inst_cellmath__32 == sc_uint<1>("0bus1")) & ((sc_uint<27>)(inst_cellmath__42__49(26,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__50
    inst_cellmath__50 = 
        
            +((sc_uint<2>)(inst_cellmath__48_1_0__1))
            -((sc_uint<2>)(sc_uint<2>("0b01")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__43__53(26,0)
    inst_cellmath__43__53(26,0) = 
        (inst_cellmath__46(24,0),inst_cellmath__50)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__43__54(26,0)
    inst_cellmath__43__54(26,0) = 
        (inst_cellmath__47(24,0),inst_cellmath__50)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__43__56
    inst_cellmath__43__56 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_lookup0_cellmath__29(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48__44)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__43__55
    inst_cellmath__43__55 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_lookup0_cellmath__29(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__56)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__43(26,0)
    inst_cellmath__43(26,0) = 
        
        -(int)((sc_uint<1>)inst_cellmath__43__55 == sc_uint<1>("0bus0")) & ((sc_uint<27>)(inst_cellmath__43__54(26,0))) |
        -(int)((sc_uint<1>)inst_cellmath__43__55 == sc_uint<1>("0bus1")) & ((sc_uint<27>)(inst_cellmath__43__53(26,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_it2_cellmath__56
    inst_it2_cellmath__56 = 
        
        -(int)((sc_uint<1>)inst_it2_lookup1_cellmath__55(2,2) == sc_uint<1>("0bus0")) & sc_uint<26>(~(sc_uint<26>)(inst_it2_cellmath__56__57_1_0)) |
        -(int)((sc_uint<1>)inst_it2_lookup1_cellmath__55(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_it2_cellmath__56__57_1_1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_it2_cellmath__57
    inst_it2_cellmath__57 = 
        
        -(int)((sc_uint<1>)inst_it2_lookup1_cellmath__55(2,2) == sc_uint<1>("0bus0")) & sc_uint<26>(~(sc_uint<26>)(inst_it2_cellmath__57__61_1_0)) |
        -(int)((sc_uint<1>)inst_it2_lookup1_cellmath__55(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_it2_cellmath__57__61_1_1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_it2_cellmath__58
    inst_it2_cellmath__58 = 
        ~(sc_uint<1>)(inst_it2_lookup1_cellmath__55(2,2))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__60
    inst_it2_cellmath__60 = 
        (inst_cellmath__36(23,0),sc_uint<1>(0),inst_it2_cellmath__58)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__61
    inst_it2_cellmath__61 = 
        (inst_cellmath__39__W1(23,0),sc_uint<1>(0),inst_it2_cellmath__58)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_it2_cellmath__62__W1
    inst_it2_cellmath__62__W1 = 
        ((sc_uint<26>)(inst_it2_cellmath__60) ^ (sc_uint<26>)(inst_it2_cellmath__61)) ^ (sc_uint<26>)(inst_it2_cellmath__56)
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_it2_cellmath__62__W0(24,0)
    inst_it2_cellmath__62__W0(24,0) = 
        ((sc_uint<26>)(inst_it2_cellmath__60) & (sc_uint<26>)(inst_it2_cellmath__61)) | ((sc_uint<26>)(inst_it2_cellmath__56) & ((sc_uint<26>)(inst_it2_cellmath__60) | (sc_uint<26>)(inst_it2_cellmath__61)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__63__67
    inst_it2_cellmath__63__67 = 
        (inst_it2_cellmath__62__W0(24,0),sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_it2_cellmath__63__W1
    inst_it2_cellmath__63__W1 = 
        ((sc_uint<26>)(inst_it2_cellmath__62__W1) ^ (sc_uint<26>)(inst_it2_cellmath__63__67)) ^ (sc_uint<26>)(inst_it2_cellmath__57)
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_it2_cellmath__63__W0(24,0)
    inst_it2_cellmath__63__W0(24,0) = 
        ((sc_uint<26>)(inst_it2_cellmath__62__W1) & (sc_uint<26>)(inst_it2_cellmath__63__67)) | ((sc_uint<26>)(inst_it2_cellmath__57) & ((sc_uint<26>)(inst_it2_cellmath__62__W1) | (sc_uint<26>)(inst_it2_cellmath__63__67)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__14(0,0)
    inst_cellmath__14(0,0) = 
        (sc_uint<1>)(sc_uint<1>(0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4536
    // Compare anchor: inst_cellmath__14(25,1)
    inst_cellmath__14(25,1) = 
        (sc_uint<25>)(inst_it2_cellmath__63__W0(24,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_it2_cellmath__64__70
    inst_it2_cellmath__64__70 = 
        ~(
            ((sc_uint<1>)((sc_uint<1>)(inst_it2_lookup1_cellmath__55(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_it2_lookup1_cellmath__55(1,1)))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_it2_cellmath__64__68
    inst_it2_cellmath__64__68 = 
        
        -(int)((sc_uint<1>)inst_it2_lookup1_cellmath__55(2,2) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_it2_lookup1_cellmath__55(1,1))) |
        -(int)((sc_uint<1>)inst_it2_lookup1_cellmath__55(2,2) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_it2_cellmath__64__70))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_it2_cellmath__64_1_0__1
    inst_it2_cellmath__64_1_0__1 = 
        (inst_it2_cellmath__64__68,inst_it2_lookup1_cellmath__55(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__40__73(28,0)
    inst_cellmath__40__73(28,0) = 
        (inst_cellmath__42(26,0),inst_it2_cellmath__64__68,inst_it2_lookup1_cellmath__55(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__40__74(28,0)
    inst_cellmath__40__74(28,0) = 
        (inst_cellmath__43(26,0),inst_it2_cellmath__64__68,inst_it2_lookup1_cellmath__55(0,0))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__40
    inst_cellmath__40 = 
        
        -(int)((sc_uint<1>)inst_it2_cellmath__58 == sc_uint<1>("0bus0")) & ((sc_uint<29>)(inst_cellmath__40__74(28,0))) |
        -(int)((sc_uint<1>)inst_it2_cellmath__58 == sc_uint<1>("0bus1")) & ((sc_uint<29>)(inst_cellmath__40__73(28,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_it2_cellmath__66
    inst_it2_cellmath__66 = 
        
            +((sc_uint<2>)(inst_it2_cellmath__64_1_0__1))
            -((sc_uint<2>)(sc_uint<2>("0b01")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__41__77(28,0)
    inst_cellmath__41__77(28,0) = 
        (inst_cellmath__42(26,0),inst_it2_cellmath__66)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__41__78(28,0)
    inst_cellmath__41__78(28,0) = 
        (inst_cellmath__43(26,0),inst_it2_cellmath__66)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__41__80
    inst_cellmath__41__80 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_it2_lookup1_cellmath__55(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_it2_cellmath__64__68)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__41__79
    inst_cellmath__41__79 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)(inst_it2_lookup1_cellmath__55(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__41__80)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__41
    inst_cellmath__41 = 
        
        -(int)((sc_uint<1>)inst_cellmath__41__79 == sc_uint<1>("0bus0")) & ((sc_uint<29>)(inst_cellmath__41__78(28,0))) |
        -(int)((sc_uint<1>)inst_cellmath__41__79 == sc_uint<1>("0bus1")) & ((sc_uint<29>)(inst_cellmath__41__77(28,0)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<8> inst_cellmath__67_tmp_0;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__67_tmp_0
    inst_cellmath__67_tmp_0 = 
        
            +((sc_uint<8>)(inst_cellmath__8(30,23)))
            -((sc_uint<8>)(inst_cellmath__9(30,23)))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__67(7,0)
    inst_cellmath__67(7,0) = 
        inst_cellmath__67_tmp_0
            +((sc_uint<8>)(sc_uint<8>("0bus01111110")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    sc_uint<10> inst_cellmath__68_tmp_1;
    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__68_tmp_1
    inst_cellmath__68_tmp_1 = 
        
            +((sc_uint<10>)(inst_cellmath__8(30,23)))
            -((sc_uint<10>)(inst_cellmath__9(30,23)))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
    // Compare anchor: inst_cellmath__68
    inst_cellmath__68 = 
        inst_cellmath__68_tmp_1
            +((sc_uint<10>)(sc_uint<8>("0bus01111111")))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__69__82
    inst_cellmath__69__82 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(7,7))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__69__81
    inst_cellmath__69__81 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69__82)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__69
    inst_cellmath__69 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)((inst_cellmath__68(9,9)))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69__81)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__70__83
    inst_cellmath__70__83 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(8,8))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__70
    inst_cellmath__70 = 
        
            ((sc_uint<1>)((sc_uint<1>)((inst_cellmath__68(9,9)))))
            |((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__70__83)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__71
    inst_cellmath__71 = 
        
            ((sc_uint<1>)(~(sc_uint<1>)((inst_cellmath__68(9,9)))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68(8,8))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(7,7))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__72
    inst_cellmath__72 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68(0,0))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68(1,1))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68(2,2))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68(3,3))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68(4,4))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68(5,5))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68(6,6))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68(7,7))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68(8,8))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__73
    inst_cellmath__73 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__71)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__74
    inst_cellmath__74 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__70)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__72)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__75
    inst_cellmath__75 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(23,23))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(24,24))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(25,25))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(26,26))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(27,27))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(28,28))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(29,29))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(30,30))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__76
    inst_cellmath__76 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(23,23))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(24,24))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(25,25))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(26,26))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(27,27))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(28,28))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(29,29))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(30,30))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__77
    inst_cellmath__77 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(22,22))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__78
    inst_cellmath__78 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(22,22))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__79
    inst_cellmath__79 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__75)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__77)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__80
    inst_cellmath__80 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__76)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__78)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__83
    inst_cellmath__83 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__75)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__77)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__84
    inst_cellmath__84 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__76)))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__78)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__85
    inst_cellmath__85 = 
        ~(
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(26,26))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(27,27))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(28,28))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(29,29))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(30,30)))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__86
    inst_cellmath__86 = 
        ~(
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(26,26))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(27,27))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(28,28))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(29,29))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(30,30)))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__87__87
    inst_cellmath__87__87 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__83)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__84)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__87__88
    inst_cellmath__87__88 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__85)))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__86)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__87
    inst_cellmath__87 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87__88)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87__87)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__79)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__80)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__88
    inst_cellmath__88 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__83)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__86)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__89
    inst_cellmath__89 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__84)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__85)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__79_0
    inst_cellmath__79_0 = 
        (inst_cellmath__79,inst_cellmath__80)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__90_1
    inst_cellmath__90_1 = 
        (inst_cellmath__9(21,0),inst_cellmath__9(31,31))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__90_2
    inst_cellmath__90_2 = 
        (inst_cellmath__8(21,0),inst_cellmath__8(31,31))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__91
    inst_cellmath__91 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8(31,31))))
            ^((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9(31,31))))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__92__95
    inst_cellmath__92__95 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__91)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__90_0
    inst_cellmath__90_0 = 
        
        -(int)((sc_uint<2>)inst_cellmath__79_0 == sc_uint<2>("0bus01")) & ((sc_uint<23>)(inst_cellmath__90_1)) |
        -(int)((sc_uint<1>)inst_cellmath__79_0(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(inst_cellmath__90_2)) |
        -(int)((sc_uint<2>)inst_cellmath__79_0 == sc_uint<2>("0bus00")) & ((sc_uint<23>)(inst_cellmath__92__95))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2912
    // !!!! amethyst/writers/SystemCbeh.cpp:3086
        sc_uint<8> inst_cellmath__96_tmp_2 = 
            -((sc_uint<8>)(inst_cellmath__12))
            +((sc_uint<8>)(sc_uint<4>("0bus0110")));
        inst_cellmath__96 = (((sc_uint<1>)inst_cellmath__96_tmp_2.and_reduce())==((sc_uint<1>)1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__98
    inst_cellmath__98 = 
        cascade_inst_cellmath__98_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__100
    inst_cellmath__100 = 
        cascade_inst_cellmath__100_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__101
    inst_cellmath__101 = 
        cascade_inst_cellmath__101_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__102
    inst_cellmath__102 = 
        cascade_inst_cellmath__102_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__103
    inst_cellmath__103 = 
        cascade_inst_cellmath__103_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__104
    inst_cellmath__104 = 
        cascade_inst_cellmath__104_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__105
    inst_cellmath__105 = 
        cascade_inst_cellmath__105_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__106
    inst_cellmath__106 = 
        cascade_inst_cellmath__106_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__110
    inst_cellmath__110 = 
        cascade_inst_cellmath__110_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__111
    inst_cellmath__111 = 
        cascade_inst_cellmath__111_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3550
    // Compare anchor: inst_cellmath__109
    inst_cellmath__109 = 
        cascade_inst_cellmath__109_0[0]
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__133__109
    inst_cellmath__133__109 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__103)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__100)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__101)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__135
    inst_cellmath__135 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__105)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__103)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__102)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__100)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__101)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:3332
    // Compare anchor: inst_cellmath__136
    inst_cellmath__136 = 
        
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__106)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__104)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__102)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__100)))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__101)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__137
    inst_cellmath__137 = 
        
        -(int)((sc_uint<1>)inst_cellmath__122 == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__135)) |
        -(int)((sc_uint<1>)inst_cellmath__122 == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__136))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__137_0
    inst_cellmath__137_0 = 
        (inst_cellmath__137,inst_cellmath__122)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__113__113
    inst_cellmath__113__113 = 
        
        -(int)((sc_uint<2>)inst_cellmath__137_0 == sc_uint<2>("0bus00")) & ((sc_uint<8>)(inst_cellmath__111)) |
        -(int)((sc_uint<2>)inst_cellmath__137_0 == sc_uint<2>("0bus01")) & ((sc_uint<8>)(inst_cellmath__110)) |
        -(int)((sc_uint<1>)inst_cellmath__137_0(1,1) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(((sc_uint<8>)(sc_int<1>)inst_cellmath__133__109)))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__137_1
    inst_cellmath__137_1 = 
        (inst_cellmath__137,inst_cellmath__100)
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:2018
    // !!!! amethyst/writers/SystemCbeh.cpp:2041
    // Compare anchor: inst_cellmath__113__115_22_1_
    inst_cellmath__113__115_22_1_ = 
        
        -(int)((sc_uint<1>)inst_cellmath__137_1(1,1) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__113__115_22_1__0)) |
        -(int)((sc_uint<2>)inst_cellmath__137_1 == sc_uint<2>("0bus11")) & ((sc_uint<23>)(inst_cellmath__113__115_22_1__1))
    ;

    // !!!! amethyst/writers/SystemCbeh.cpp:4767
    // Compare anchor: inst_cellmath__113
    inst_cellmath__113 = 
        (inst_cellmath__98,inst_cellmath__113__113,inst_cellmath__113__115_22_1_)
    ;

/*Clock change logic follows*/
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		if (inst_cellmath__109) cascade_inst_cellmath__0_0[0] = (sc_uint<32>)(inst_cellmath__113);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		if (accept) cascade_inst_cellmath__9_0[0] = (sc_uint<32>)(tmp_1);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__11_0[0] = (sc_uint<1>)(accept);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__16_0[0] = (sc_uint<26>)(inst_cellmath__14);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__17_0[0] = (sc_uint<26>)(inst_it2_cellmath__63__W1);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		if (accept) cascade_inst_cellmath__8_0[0] = (sc_uint<32>)(tmp_0);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_cellmath__38__W1
    inst_cellmath__38__W1 = 
        ((sc_uint<26>)(inst_cellmath__34) ^ (sc_uint<26>)(inst_cellmath__35)) ^ (sc_uint<26>)(inst_cellmath__30)
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_cellmath__38__W0(24,0)
    inst_cellmath__38__W0(24,0) = 
        ((sc_uint<26>)(inst_cellmath__34) & (sc_uint<26>)(inst_cellmath__35)) | ((sc_uint<26>)(inst_cellmath__30) & ((sc_uint<26>)(inst_cellmath__34) | (sc_uint<26>)(inst_cellmath__35)))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_cellmath__39__W1
    inst_cellmath__39__W1 = 
        ((sc_uint<26>)(inst_cellmath__38__W1) ^ (sc_uint<26>)(inst_cellmath__39__41)) ^ (sc_uint<26>)(inst_cellmath__31)
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_cellmath__39__W0(24,0)
    inst_cellmath__39__W0(24,0) = 
        ((sc_uint<26>)(inst_cellmath__38__W1) & (sc_uint<26>)(inst_cellmath__39__41)) | ((sc_uint<26>)(inst_cellmath__31) & ((sc_uint<26>)(inst_cellmath__38__W1) | (sc_uint<26>)(inst_cellmath__39__41)))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__112_0[0] = (sc_uint<22>)(inst_cellmath__90_0(22,1));
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__44_0[0] = (sc_uint<29>)(inst_cellmath__40);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__45_0[0] = (sc_uint<29>)(inst_cellmath__41);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
	if (!inst_cellmath__13__14[0]) {
		cascade_inst_cellmath__13_0[0] = sc_uint<4>(0);
	} else {
		cascade_inst_cellmath__13_0[0] = (sc_uint<4>)(inst_cellmath__12);
	}
}
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_it2_cellmath__62__W1
    inst_it2_cellmath__62__W1 = 
        ((sc_uint<26>)(inst_it2_cellmath__60) ^ (sc_uint<26>)(inst_it2_cellmath__61)) ^ (sc_uint<26>)(inst_it2_cellmath__56)
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_it2_cellmath__62__W0(24,0)
    inst_it2_cellmath__62__W0(24,0) = 
        ((sc_uint<26>)(inst_it2_cellmath__60) & (sc_uint<26>)(inst_it2_cellmath__61)) | ((sc_uint<26>)(inst_it2_cellmath__56) & ((sc_uint<26>)(inst_it2_cellmath__60) | (sc_uint<26>)(inst_it2_cellmath__61)))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_it2_cellmath__63__W1
    inst_it2_cellmath__63__W1 = 
        ((sc_uint<26>)(inst_it2_cellmath__62__W1) ^ (sc_uint<26>)(inst_it2_cellmath__63__67)) ^ (sc_uint<26>)(inst_it2_cellmath__57)
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:1644
    // Compare anchor: inst_it2_cellmath__63__W0(24,0)
    inst_it2_cellmath__63__W0(24,0) = 
        ((sc_uint<26>)(inst_it2_cellmath__62__W1) & (sc_uint<26>)(inst_it2_cellmath__63__67)) | ((sc_uint<26>)(inst_it2_cellmath__57) & ((sc_uint<26>)(inst_it2_cellmath__62__W1) | (sc_uint<26>)(inst_it2_cellmath__63__67)))
    ;
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__98_0[0] = (sc_uint<1>)(inst_cellmath__90_0(0,0));
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__100_0[0] = (sc_uint<1>)(inst_cellmath__87);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__101_0[0] = (sc_uint<1>)(inst_cellmath__88);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__102_0[0] = (sc_uint<1>)(inst_cellmath__89);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__103_0[0] = (sc_uint<1>)(inst_cellmath__69);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__104_0[0] = (sc_uint<1>)(inst_cellmath__73);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__105_0[0] = (sc_uint<1>)(inst_cellmath__70);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__106_0[0] = (sc_uint<1>)(inst_cellmath__74);
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__110_0[0] = (sc_uint<8>)(inst_cellmath__67(7,0));
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__111_0[0] = (sc_uint<8>)(inst_cellmath__68(7,0));
}
    // !!!! amethyst/writers/SystemCbeh.cpp:3481
    // !!!! amethyst/writers/SystemCbeh.cpp:3564
if (clk == 1) {
		cascade_inst_cellmath__109_0[0] = (sc_uint<1>)(inst_cellmath__96);
}
}

// Signal declarations:

    sc_uint<32> tmp_0;
    sc_uint<32> tmp_1;
    sc_uint<32> inst_cellmath__0;
    sc_uint<32> inst_cellmath__8;
    sc_uint<32> inst_cellmath__9;
    sc_uint<1> inst_cellmath__11;
    sc_uint<4> inst_cellmath__12;
    sc_uint<4> inst_cellmath__13;
    sc_uint<26> inst_cellmath__14;
    sc_uint<26> inst_cellmath__16;
    sc_uint<26> inst_cellmath__17;
    sc_uint<26> inst_cellmath__20;
    sc_uint<26> inst_cellmath__21;
    sc_uint<5> inst_cellmath__22;
    sc_uint<5> inst_cellmath__23;
    sc_uint<5> inst_cellmath__24;
    sc_uint<7> inst_lookup0_cellmath__27;
    sc_uint<3> inst_lookup0_cellmath__29;
    sc_uint<26> inst_cellmath__30;
    sc_uint<26> inst_cellmath__31;
    sc_uint<1> inst_cellmath__32;
    sc_uint<26> inst_cellmath__34;
    sc_uint<26> inst_cellmath__35;
    sc_uint<26> inst_cellmath__36;
    sc_uint<26> inst_cellmath__38__W0;
    sc_uint<26> inst_cellmath__38__W1;
    sc_uint<26> inst_cellmath__39__W0;
    sc_uint<26> inst_cellmath__39__W1;
    sc_uint<29> inst_cellmath__40;
    sc_uint<29> inst_cellmath__41;
    sc_uint<29> inst_cellmath__42;
    sc_uint<29> inst_cellmath__43;
    sc_uint<29> inst_cellmath__44;
    sc_uint<29> inst_cellmath__45;
    sc_uint<29> inst_cellmath__46;
    sc_uint<29> inst_cellmath__47;
    sc_uint<2> inst_cellmath__50;
    sc_uint<5> inst_it2_cellmath__51;
    sc_uint<7> inst_it2_lookup1_cellmath__53;
    sc_uint<3> inst_it2_lookup1_cellmath__55;
    sc_uint<26> inst_it2_cellmath__56;
    sc_uint<26> inst_it2_cellmath__57;
    sc_uint<1> inst_it2_cellmath__58;
    sc_uint<26> inst_it2_cellmath__60;
    sc_uint<26> inst_it2_cellmath__61;
    sc_uint<26> inst_it2_cellmath__62__W0;
    sc_uint<26> inst_it2_cellmath__62__W1;
    sc_uint<26> inst_it2_cellmath__63__W0;
    sc_uint<26> inst_it2_cellmath__63__W1;
    sc_uint<2> inst_it2_cellmath__66;
    sc_int<10> inst_cellmath__67;
    sc_int<10> inst_cellmath__68;
    sc_uint<1> inst_cellmath__69;
    sc_uint<1> inst_cellmath__70;
    sc_uint<1> inst_cellmath__71;
    sc_uint<1> inst_cellmath__72;
    sc_uint<1> inst_cellmath__73;
    sc_uint<1> inst_cellmath__74;
    sc_uint<1> inst_cellmath__75;
    sc_uint<1> inst_cellmath__76;
    sc_uint<1> inst_cellmath__77;
    sc_uint<1> inst_cellmath__78;
    sc_uint<1> inst_cellmath__79;
    sc_uint<1> inst_cellmath__80;
    sc_uint<1> inst_cellmath__83;
    sc_uint<1> inst_cellmath__84;
    sc_uint<1> inst_cellmath__85;
    sc_uint<1> inst_cellmath__86;
    sc_uint<1> inst_cellmath__87;
    sc_uint<1> inst_cellmath__88;
    sc_uint<1> inst_cellmath__89;
    sc_uint<1> inst_cellmath__91;
    sc_uint<1> inst_cellmath__96;
    sc_uint<1> inst_cellmath__98;
    sc_uint<1> inst_cellmath__100;
    sc_uint<1> inst_cellmath__101;
    sc_uint<1> inst_cellmath__102;
    sc_uint<1> inst_cellmath__103;
    sc_uint<1> inst_cellmath__104;
    sc_uint<1> inst_cellmath__105;
    sc_uint<1> inst_cellmath__106;
    sc_uint<1> inst_cellmath__109;
    sc_uint<8> inst_cellmath__110;
    sc_uint<8> inst_cellmath__111;
    sc_uint<22> inst_cellmath__112;
    sc_uint<32> inst_cellmath__113;
    sc_uint<26> inst_cellmath__120;
    sc_uint<1> inst_cellmath__122;
    sc_uint<29> inst_cellmath__124;
    sc_uint<23> inst_cellmath__125;
    sc_uint<1> inst_cellmath__126;
    sc_uint<1> inst_cellmath__127;
    sc_uint<23> inst_cellmath__129;
    sc_uint<1> inst_cellmath__135;
    sc_uint<1> inst_cellmath__136;
    sc_uint<1> inst_cellmath__137;
    sc_uint<1> inst_cellmath__13__14;
    sc_uint<5> inst_cellmath__12__18;
    sc_uint<1> inst_cellmath__12__19;
    sc_uint<26> inst_cellmath__18__20;
    sc_uint<26> inst_cellmath__20__23;
    sc_uint<5> inst_cellmath__22__27;
    sc_uint<3> inst_cellmath__22__29;
    sc_uint<5> inst_cellmath__22__28;
    sc_uint<26> inst_cellmath__39__41;
    sc_uint<1> inst_cellmath__48__46;
    sc_uint<1> inst_cellmath__48__44;
    sc_uint<31> inst_cellmath__42__49;
    sc_uint<31> inst_cellmath__42__50;
    sc_uint<31> inst_cellmath__43__53;
    sc_uint<31> inst_cellmath__43__54;
    sc_uint<1> inst_cellmath__43__56;
    sc_uint<1> inst_cellmath__43__55;
    sc_uint<26> inst_it2_cellmath__63__67;
    sc_uint<1> inst_it2_cellmath__64__70;
    sc_uint<1> inst_it2_cellmath__64__68;
    sc_uint<31> inst_cellmath__40__73;
    sc_uint<31> inst_cellmath__40__74;
    sc_uint<31> inst_cellmath__41__77;
    sc_uint<31> inst_cellmath__41__78;
    sc_uint<1> inst_cellmath__41__80;
    sc_uint<1> inst_cellmath__41__79;
    sc_uint<1> inst_cellmath__69__82;
    sc_uint<1> inst_cellmath__69__81;
    sc_uint<1> inst_cellmath__70__83;
    sc_uint<1> inst_cellmath__87__87;
    sc_uint<1> inst_cellmath__87__88;
    sc_uint<1> inst_cellmath__92__95;
    sc_uint<1> inst_cellmath__127__103;
    sc_uint<1> inst_cellmath__127__104;
    sc_uint<1> inst_cellmath__130__105;
    sc_uint<1> inst_cellmath__121__106;
    sc_uint<1> inst_cellmath__133__109;
    sc_uint<8> inst_cellmath__113__113;
    sc_uint<26> inst_cellmath__30__31_0;
    sc_uint<26> inst_it2_cellmath__56__57_0;
    sc_uint<2> inst_cellmath__79_0;
    sc_uint<2> inst_cellmath__137_0;
    sc_uint<2> inst_cellmath__137_1;
    sc_uint<23> inst_cellmath__90_0;
    sc_uint<23> inst_cellmath__90_1;
    sc_uint<23> inst_cellmath__90_2;
    sc_uint<24> inst_cellmath__19__21_24_1_;
    sc_uint<2> inst_cellmath__48_1_0__1;
    sc_uint<2> inst_it2_cellmath__64_1_0__1;
    sc_uint<26> inst_cellmath__31__35_0_0;
    sc_uint<26> inst_it2_cellmath__57__61_0_0;
    sc_uint<23> inst_cellmath__113__115_22_1_;
    sc_uint<23> inst_cellmath__113__115_22_1__0;
    sc_uint<23> inst_cellmath__113__115_22_1__1;
    sc_uint<25> inst_cellmath__19__21_25_1__0_0;
    sc_uint<25> inst_cellmath__19__21_25_1__0_1;
    sc_uint<26> inst_cellmath__30__31_1_0;
    sc_uint<26> inst_cellmath__30__31_1_1;
    sc_uint<26> inst_cellmath__31__37_0_0;
    sc_uint<26> inst_cellmath__31__37_0_1;
    sc_uint<26> inst_cellmath__31__35_1_0;
    sc_uint<26> inst_cellmath__31__35_1_1;
    sc_uint<26> inst_it2_cellmath__56__57_1_0;
    sc_uint<26> inst_it2_cellmath__56__57_1_1;
    sc_uint<26> inst_it2_cellmath__57__61_1_0;
    sc_uint<26> inst_it2_cellmath__57__61_1_1;
    sc_uint<22> inst_cellmath__134__111_22_1_;
    sc_uint<25> inst_cellmath__31__35_0_25_1__0_0;
    sc_uint<25> inst_cellmath__31__35_0_25_1__0_1;
    sc_uint<25> inst_it2_cellmath__57__61_0_25_1__0_0;
    sc_uint<25> inst_it2_cellmath__57__61_0_25_1__0_1;
    sc_uint<32> cascade_inst_cellmath__0_0[1];
    sc_uint<32> cascade_inst_cellmath__9_0[1];
    sc_uint<1> cascade_inst_cellmath__11_0[1];
    sc_uint<26> cascade_inst_cellmath__16_0[1];
    sc_uint<26> cascade_inst_cellmath__17_0[1];
    sc_uint<32> cascade_inst_cellmath__8_0[1];
    sc_uint<22> cascade_inst_cellmath__112_0[1];
    sc_uint<29> cascade_inst_cellmath__44_0[1];
    sc_uint<29> cascade_inst_cellmath__45_0[1];
    sc_uint<4> cascade_inst_cellmath__13_0[1];
    sc_uint<1> cascade_inst_cellmath__98_0[1];
    sc_uint<1> cascade_inst_cellmath__100_0[1];
    sc_uint<1> cascade_inst_cellmath__101_0[1];
    sc_uint<1> cascade_inst_cellmath__102_0[1];
    sc_uint<1> cascade_inst_cellmath__103_0[1];
    sc_uint<1> cascade_inst_cellmath__104_0[1];
    sc_uint<1> cascade_inst_cellmath__105_0[1];
    sc_uint<1> cascade_inst_cellmath__106_0[1];
    sc_uint<8> cascade_inst_cellmath__110_0[1];
    sc_uint<8> cascade_inst_cellmath__111_0[1];
    sc_uint<1> cascade_inst_cellmath__109_0[1];
};
#endif // !defined cynw_cm_float_div_ieee_E8_M23_INCLUDED
    // !!!! amethyst/writers/SystemCbeh.cpp:4142
// cynw_cm_float_div_ieee - cynth invocation function


inline void cynw_cm_float_div_ieee_E8_M23( // module cynw_cm_float_div_ieee_E8_M23
    const sc_uint<1>& clk // input  clk : unsigned
    ,const sc_uint<1>& a_sign // input  a_sign : unsigned
    ,const sc_uint<8>& a_exp // input  a_exp[7:0] : unsigned
    ,const sc_uint<23>& a_man // input  a_man[22:0] : unsigned
    ,const sc_uint<1>& b_sign // input  b_sign : unsigned
    ,const sc_uint<8>& b_exp // input  b_exp[7:0] : unsigned
    ,const sc_uint<23>& b_man // input  b_man[22:0] : unsigned
    ,const sc_uint<1>& accept // input  accept : unsigned
    ,sc_uint<32>& x // output  x[31:0] : unsigned
)
{
    static class_cynw_cm_float_div_ieee_E8_M23 target; // BDW_REPLACE_NAME
    target(
        clk,
        a_sign,
        a_exp,
        a_man,
        b_sign,
        b_exp,
        b_man,
        accept,
        x    
);
}

/* CADENCE  s7bxTADWog== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/



