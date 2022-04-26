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
    SystemC RTL Simulation Model
    
    Configured at: 11:17:58 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef cynw_cm_float_div_ieee_E8_M23_COMPILED
#define cynw_cm_float_div_ieee_E8_M23_COMPILED

SC_MODULE(cynw_cm_float_div_ieee_E8_M23) // architecture "behavioural"
{

    // Work around for SystemC 2.2 not having a signature
    // to a concatenation by an int.
#   if SYSTEMC_VERSION > 20060000 && SYSTEMC_VERSION < 20091210
        typedef unsigned long shift_v;
#   else
        typedef unsigned int shift_v;
#   endif

    // Input/Output Ports and Signals:

    sc_in<bool> clk;
    sc_in<sc_uint<1> > a_sign;
    sc_in<sc_uint<8> > a_exp;
    sc_in<sc_uint<23> > a_man;
    sc_in<sc_uint<1> > b_sign;
    sc_in<sc_uint<8> > b_exp;
    sc_in<sc_uint<23> > b_man;
    sc_in<sc_uint<1> > accept;
    sc_out<sc_uint<32> > x;
    sc_signal<sc_uint<32> > tmp_0;
    sc_signal<sc_uint<32> > tmp_1;
    sc_signal<sc_uint<32> > inst_cellmath__0;
    sc_signal<sc_uint<32> > inst_cellmath__8;
    sc_signal<sc_uint<32> > inst_cellmath__9;
    sc_signal<sc_uint<1> > inst_cellmath__11;
    sc_signal<sc_uint<4> > inst_cellmath__12;
    sc_signal<sc_uint<4> > inst_cellmath__13;
    sc_signal<sc_uint<26> > inst_cellmath__14;
    sc_signal<sc_uint<26> > inst_cellmath__16;
    sc_signal<sc_uint<26> > inst_cellmath__17;
    sc_signal<sc_uint<26> > inst_cellmath__20;
    sc_signal<sc_uint<26> > inst_cellmath__21;
    sc_signal<sc_uint<5> > inst_cellmath__22;
    sc_signal<sc_uint<5> > inst_cellmath__23;
    sc_signal<sc_uint<5> > inst_cellmath__24;
    sc_signal<sc_uint<7> > inst_lookup0_cellmath__27;
    sc_signal<sc_uint<3> > inst_lookup0_cellmath__29;
    sc_signal<sc_uint<26> > inst_cellmath__30;
    sc_signal<sc_uint<26> > inst_cellmath__31;
    sc_signal<sc_uint<1> > inst_cellmath__32;
    sc_signal<sc_uint<26> > inst_cellmath__34;
    sc_signal<sc_uint<26> > inst_cellmath__35;
    sc_signal<sc_uint<26> > inst_cellmath__36;
    sc_signal<sc_uint<26> > inst_cellmath__38__W0;
    sc_signal<sc_uint<26> > inst_cellmath__38__W1;
    sc_signal<sc_uint<26> > inst_cellmath__39__W0;
    sc_signal<sc_uint<26> > inst_cellmath__39__W1;
    sc_signal<sc_uint<29> > inst_cellmath__40;
    sc_signal<sc_uint<29> > inst_cellmath__41;
    sc_signal<sc_uint<29> > inst_cellmath__42;
    sc_signal<sc_uint<29> > inst_cellmath__43;
    sc_signal<sc_uint<29> > inst_cellmath__44;
    sc_signal<sc_uint<29> > inst_cellmath__45;
    sc_signal<sc_uint<29> > inst_cellmath__46;
    sc_signal<sc_uint<29> > inst_cellmath__47;
    sc_signal<sc_uint<2> > inst_cellmath__50;
    sc_signal<sc_uint<5> > inst_it2_cellmath__51;
    sc_signal<sc_uint<7> > inst_it2_lookup1_cellmath__53;
    sc_signal<sc_uint<3> > inst_it2_lookup1_cellmath__55;
    sc_signal<sc_uint<26> > inst_it2_cellmath__56;
    sc_signal<sc_uint<26> > inst_it2_cellmath__57;
    sc_signal<sc_uint<1> > inst_it2_cellmath__58;
    sc_signal<sc_uint<26> > inst_it2_cellmath__60;
    sc_signal<sc_uint<26> > inst_it2_cellmath__61;
    sc_signal<sc_uint<26> > inst_it2_cellmath__62__W0;
    sc_signal<sc_uint<26> > inst_it2_cellmath__62__W1;
    sc_signal<sc_uint<26> > inst_it2_cellmath__63__W0;
    sc_signal<sc_uint<26> > inst_it2_cellmath__63__W1;
    sc_signal<sc_uint<2> > inst_it2_cellmath__66;
    sc_signal<sc_uint<10> > inst_cellmath__67;
    sc_signal<sc_uint<10> > inst_cellmath__68;
    sc_signal<sc_uint<1> > inst_cellmath__69;
    sc_signal<sc_uint<1> > inst_cellmath__70;
    sc_signal<sc_uint<1> > inst_cellmath__71;
    sc_signal<sc_uint<1> > inst_cellmath__72;
    sc_signal<sc_uint<1> > inst_cellmath__73;
    sc_signal<sc_uint<1> > inst_cellmath__74;
    sc_signal<sc_uint<1> > inst_cellmath__75;
    sc_signal<sc_uint<1> > inst_cellmath__76;
    sc_signal<sc_uint<1> > inst_cellmath__77;
    sc_signal<sc_uint<1> > inst_cellmath__78;
    sc_signal<sc_uint<1> > inst_cellmath__79;
    sc_signal<sc_uint<1> > inst_cellmath__80;
    sc_signal<sc_uint<1> > inst_cellmath__83;
    sc_signal<sc_uint<1> > inst_cellmath__84;
    sc_signal<sc_uint<1> > inst_cellmath__85;
    sc_signal<sc_uint<1> > inst_cellmath__86;
    sc_signal<sc_uint<1> > inst_cellmath__87;
    sc_signal<sc_uint<1> > inst_cellmath__88;
    sc_signal<sc_uint<1> > inst_cellmath__89;
    sc_signal<sc_uint<1> > inst_cellmath__91;
    sc_signal<sc_uint<1> > inst_cellmath__96;
    sc_signal<sc_uint<1> > inst_cellmath__98;
    sc_signal<sc_uint<1> > inst_cellmath__100;
    sc_signal<sc_uint<1> > inst_cellmath__101;
    sc_signal<sc_uint<1> > inst_cellmath__102;
    sc_signal<sc_uint<1> > inst_cellmath__103;
    sc_signal<sc_uint<1> > inst_cellmath__104;
    sc_signal<sc_uint<1> > inst_cellmath__105;
    sc_signal<sc_uint<1> > inst_cellmath__106;
    sc_signal<sc_uint<1> > inst_cellmath__109;
    sc_signal<sc_uint<8> > inst_cellmath__110;
    sc_signal<sc_uint<8> > inst_cellmath__111;
    sc_signal<sc_uint<22> > inst_cellmath__112;
    sc_signal<sc_uint<32> > inst_cellmath__113;
    sc_signal<sc_uint<26> > inst_cellmath__120;
    sc_signal<sc_uint<1> > inst_cellmath__122;
    sc_signal<sc_uint<29> > inst_cellmath__124;
    sc_signal<sc_uint<23> > inst_cellmath__125;
    sc_signal<sc_uint<1> > inst_cellmath__126;
    sc_signal<sc_uint<1> > inst_cellmath__127;
    sc_signal<sc_uint<23> > inst_cellmath__129;
    sc_signal<sc_uint<1> > inst_cellmath__135;
    sc_signal<sc_uint<1> > inst_cellmath__136;
    sc_signal<sc_uint<1> > inst_cellmath__137;
    sc_signal<sc_uint<1> > inst_cellmath__13__14;
    sc_signal<sc_uint<5> > inst_cellmath__12__18;
    sc_signal<sc_uint<1> > inst_cellmath__12__19;
    sc_signal<sc_uint<26> > inst_cellmath__18__20;
    sc_signal<sc_uint<26> > inst_cellmath__20__23;
    sc_signal<sc_uint<5> > inst_cellmath__22__27;
    sc_signal<sc_uint<3> > inst_cellmath__22__29;
    sc_signal<sc_uint<5> > inst_cellmath__22__28;
    sc_signal<sc_uint<26> > inst_cellmath__39__41;
    sc_signal<sc_uint<1> > inst_cellmath__48__46;
    sc_signal<sc_uint<1> > inst_cellmath__48__44;
    sc_signal<sc_uint<31> > inst_cellmath__42__49;
    sc_signal<sc_uint<31> > inst_cellmath__42__50;
    sc_signal<sc_uint<31> > inst_cellmath__43__53;
    sc_signal<sc_uint<31> > inst_cellmath__43__54;
    sc_signal<sc_uint<1> > inst_cellmath__43__56;
    sc_signal<sc_uint<1> > inst_cellmath__43__55;
    sc_signal<sc_uint<26> > inst_it2_cellmath__63__67;
    sc_signal<sc_uint<1> > inst_it2_cellmath__64__70;
    sc_signal<sc_uint<1> > inst_it2_cellmath__64__68;
    sc_signal<sc_uint<31> > inst_cellmath__40__73;
    sc_signal<sc_uint<31> > inst_cellmath__40__74;
    sc_signal<sc_uint<31> > inst_cellmath__41__77;
    sc_signal<sc_uint<31> > inst_cellmath__41__78;
    sc_signal<sc_uint<1> > inst_cellmath__41__80;
    sc_signal<sc_uint<1> > inst_cellmath__41__79;
    sc_signal<sc_uint<1> > inst_cellmath__69__82;
    sc_signal<sc_uint<1> > inst_cellmath__69__81;
    sc_signal<sc_uint<1> > inst_cellmath__70__83;
    sc_signal<sc_uint<1> > inst_cellmath__87__87;
    sc_signal<sc_uint<1> > inst_cellmath__87__88;
    sc_signal<sc_uint<1> > inst_cellmath__92__95;
    sc_signal<sc_uint<1> > inst_cellmath__127__103;
    sc_signal<sc_uint<1> > inst_cellmath__127__104;
    sc_signal<sc_uint<1> > inst_cellmath__130__105;
    sc_signal<sc_uint<1> > inst_cellmath__121__106;
    sc_signal<sc_uint<1> > inst_cellmath__133__109;
    sc_signal<sc_uint<8> > inst_cellmath__113__113;
    sc_signal<sc_uint<26> > inst_cellmath__30__31_0;
    sc_signal<sc_uint<26> > inst_it2_cellmath__56__57_0;
    sc_signal<sc_uint<2> > inst_cellmath__79_0;
    sc_signal<sc_uint<2> > inst_cellmath__137_0;
    sc_signal<sc_uint<2> > inst_cellmath__137_1;
    sc_signal<sc_uint<23> > inst_cellmath__90_0;
    sc_signal<sc_uint<23> > inst_cellmath__90_1;
    sc_signal<sc_uint<23> > inst_cellmath__90_2;
    sc_signal<sc_uint<24> > inst_cellmath__19__21_24_1_;
    sc_signal<sc_uint<2> > inst_cellmath__48_1_0__1;
    sc_signal<sc_uint<2> > inst_it2_cellmath__64_1_0__1;
    sc_signal<sc_uint<26> > inst_cellmath__31__35_0_0;
    sc_signal<sc_uint<26> > inst_it2_cellmath__57__61_0_0;
    sc_signal<sc_uint<23> > inst_cellmath__113__115_22_1_;
    sc_signal<sc_uint<23> > inst_cellmath__113__115_22_1__0;
    sc_signal<sc_uint<23> > inst_cellmath__113__115_22_1__1;
    sc_signal<sc_uint<25> > inst_cellmath__19__21_25_1__0_0;
    sc_signal<sc_uint<25> > inst_cellmath__19__21_25_1__0_1;
    sc_signal<sc_uint<26> > inst_cellmath__30__31_1_0;
    sc_signal<sc_uint<26> > inst_cellmath__30__31_1_1;
    sc_signal<sc_uint<26> > inst_cellmath__31__37_0_0;
    sc_signal<sc_uint<26> > inst_cellmath__31__37_0_1;
    sc_signal<sc_uint<26> > inst_cellmath__31__35_1_0;
    sc_signal<sc_uint<26> > inst_cellmath__31__35_1_1;
    sc_signal<sc_uint<26> > inst_it2_cellmath__56__57_1_0;
    sc_signal<sc_uint<26> > inst_it2_cellmath__56__57_1_1;
    sc_signal<sc_uint<26> > inst_it2_cellmath__57__61_1_0;
    sc_signal<sc_uint<26> > inst_it2_cellmath__57__61_1_1;
    sc_signal<sc_uint<22> > inst_cellmath__134__111_22_1_;
    sc_signal<sc_uint<25> > inst_cellmath__31__35_0_25_1__0_0;
    sc_signal<sc_uint<25> > inst_cellmath__31__35_0_25_1__0_1;
    sc_signal<sc_uint<25> > inst_it2_cellmath__57__61_0_25_1__0_0;
    sc_signal<sc_uint<25> > inst_it2_cellmath__57__61_0_25_1__0_1;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<32> > cascade_inst_cellmath__0[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_0() {
                    if (inst_cellmath__109.read()==1) {cascade_inst_cellmath__0[0] = (sc_uint<32>)((sc_uint<32>)(inst_cellmath__113.read()));
        }    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_1() {
            inst_cellmath__0 = cascade_inst_cellmath__0[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x
    void method_2() {
        sc_uint<32> temp_2;
        temp_2 = 
            (sc_uint<32>)(inst_cellmath__0.read())
        ;
        x = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: tmp_0
    void method_3() {
        sc_uint<32> temp_3;
        temp_3 = 
            (a_sign.read(),a_exp.read(),a_man.read())
        ;
        tmp_0 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: tmp_1
    void method_4() {
        sc_uint<32> temp_4;
        temp_4 = 
            (b_sign.read(),b_exp.read(),b_man.read())
        ;
        tmp_1 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<32> > cascade_inst_cellmath__9[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_5() {
                    if (accept.read()==1) {cascade_inst_cellmath__9[0] = (sc_uint<32>)((sc_uint<32>)(tmp_1.read()));
        }    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_6() {
            inst_cellmath__9 = cascade_inst_cellmath__9[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__19__21_25_1__0_0
    void method_7() {
        sc_uint<25> temp_7;
        temp_7 = 
            (sc_uint<1>(1),inst_cellmath__9.read()(22,0),sc_uint<1>(0))
        ;
        inst_cellmath__19__21_25_1__0_0 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__19__21_25_1__0_1
    void method_8() {
        sc_uint<25> temp_8;
        temp_8 = 
            (sc_uint<1>(1),inst_cellmath__9.read()(22,0),sc_uint<1>(0))
        ;
        inst_cellmath__19__21_25_1__0_1 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__11[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_9() {
                    cascade_inst_cellmath__11[0] = (sc_uint<1>)((sc_uint<1>)(accept.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_10() {
            inst_cellmath__11 = cascade_inst_cellmath__11[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<26> > cascade_inst_cellmath__16[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_11() {
                    cascade_inst_cellmath__16[0] = (sc_uint<26>)((sc_uint<26>)(inst_cellmath__14.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_12() {
            inst_cellmath__16 = cascade_inst_cellmath__16[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<26> > cascade_inst_cellmath__17[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_13() {
                    cascade_inst_cellmath__17[0] = (sc_uint<26>)((sc_uint<26>)(inst_it2_cellmath__63__W1.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_14() {
            inst_cellmath__17 = cascade_inst_cellmath__17[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__23
    void method_15() {
        sc_uint<5> temp_15;
        temp_15 = 
            
            +((sc_uint<5>)(inst_cellmath__16.read()(25,21)))
            +((sc_uint<5>)(inst_cellmath__17.read()(25,21)))
        ;
        inst_cellmath__23 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<32> > cascade_inst_cellmath__8[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_16() {
                    if (accept.read()==1) {cascade_inst_cellmath__8[0] = (sc_uint<32>)((sc_uint<32>)(tmp_0.read()));
        }    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_17() {
            inst_cellmath__8 = cascade_inst_cellmath__8[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__22__27
    void method_18() {
        sc_uint<5> temp_18;
        temp_18 = 
            (sc_uint<2>("0bus01"),inst_cellmath__8.read()(22,20))
        ;
        inst_cellmath__22__27 = temp_18;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__22__29
    void method_19() {
        sc_uint<3> temp_19;
        temp_19 = 
            ~(sc_uint<3>)(inst_cellmath__9.read()(22,20))
        ;
        inst_cellmath__22__29 = temp_19;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__22__28
    void method_20() {
        sc_uint<5> temp_20;
        temp_20 = 
            (sc_uint<2>("0bus10"),inst_cellmath__22__29.read())
        ;
        inst_cellmath__22__28 = temp_20;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__22
    void method_21() {
        sc_uint<5> temp_21;
        temp_21 = 
            
            +((sc_uint<5>)(inst_cellmath__22__27.read()))
            +((sc_uint<5>)(inst_cellmath__22__28.read()))
        ;
        inst_cellmath__22 = temp_21;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__24
    void method_22() {
        sc_uint<5> temp_22;
        temp_22 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__11.read()) == sc_uint<1>("0bus0")) & ((sc_uint<5>)(inst_cellmath__23.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__11.read()) == sc_uint<1>("0bus1")) & ((sc_uint<5>)(inst_cellmath__22.read()))
        ;
        inst_cellmath__24 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_lookup0_cellmath__27
    void method_23() {
        sc_uint<7> temp_23;
        temp_23 = 
            (inst_cellmath__24.read(),inst_cellmath__9.read()(22,21))
        ;
        inst_lookup0_cellmath__27 = temp_23;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_lookup0_cellmath__29
    void method_24() {
        sc_uint<3> temp_24;
        temp_24 = 
            
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0000100")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0000101")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0001000")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0001001")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0001010")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0001011")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0001100")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0001101")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0001110")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0001111")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0010000")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0010001")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0010010")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0010011")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0010100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0010101")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0010110")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0010111")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0011000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0011001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0011010")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0011011")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0011100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0011101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0011110")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0011111")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0100000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0100001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0100010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0100011")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0100100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0100101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0100110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0100111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0101000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0101001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0101010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0101011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0101100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0101101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0101110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0101111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0110000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0110001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0110010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0110011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0110100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0110101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0110110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0110111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0111000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0111001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0111010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0111011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0111100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0111101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0111110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus0111111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1000000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1000001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1000010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1000011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1000100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1000101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1000110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1000111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1001000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1001001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1001010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1001011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1001100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1001101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1001110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1001111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1010000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1010001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1010010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1010011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1010100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1010101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1010110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1010111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1011000")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1011001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1011010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1011011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1011100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1011101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1011110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1011111")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1100000")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1100001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1100010")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1100011")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1100100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1100101")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1100110")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1100111")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1101000")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1101001")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1101010")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1101011")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1101100")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1101101")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1101110")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1101111")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1110000")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1110001")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1110010")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1110011")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1110100")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1110101")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1110110")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1110111")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1111000")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1111001")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1111010")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_lookup0_cellmath__27.read()) == sc_uint<7>("0bus1111011")) & ((sc_uint<3>)(sc_uint<3>("0bus101")))
        ;
        inst_lookup0_cellmath__29 = temp_24;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__30__31_0(24,0)
    // part assign: lhs_part_0(1): inst_cellmath__30__31_0(24,0)
    sc_signal<sc_uint<25> > lhs_part_0;
    void method_25() {
        lhs_part_0 = sc_uint<25>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_lookup0_cellmath__29.read()(0,0)) == sc_uint<1>("0bus1")) & ((sc_uint<25>)(inst_cellmath__19__21_25_1__0_1.read()))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__30__31_1_0
    void method_26() {
        sc_uint<26> temp_26;
        temp_26 = 
            ((sc_uint<1>)(0), inst_cellmath__30__31_0.read()(24,1),sc_uint<1>(0))
        ;
        inst_cellmath__30__31_1_0 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__30__31_1_1
    void method_27() {
        sc_uint<26> temp_27;
        temp_27 = 
            ((sc_uint<1>)(0), inst_cellmath__30__31_0.read()(24,1),sc_uint<1>(0))
        ;
        inst_cellmath__30__31_1_1 = temp_27;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__31__37_0_0
    void method_28() {
        sc_uint<26> temp_28;
        temp_28 = 
            (sc_uint<1>(1),inst_cellmath__9.read()(22,0),sc_uint<2>("0bus00"))
        ;
        inst_cellmath__31__37_0_0 = temp_28;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__31__37_0_1
    void method_29() {
        sc_uint<26> temp_29;
        temp_29 = 
            (sc_uint<1>(1),inst_cellmath__9.read()(22,0),sc_uint<2>("0bus00"))
        ;
        inst_cellmath__31__37_0_1 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__31__35_0_0
    void method_30() {
        sc_uint<26> temp_30;
        temp_30 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_lookup0_cellmath__29.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__31__37_0_0.read()))
        ;
        inst_cellmath__31__35_0_0 = temp_30;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__31__35_0_25_1__0_0
    void method_31() {
        sc_uint<25> temp_31;
        temp_31 = 
            (inst_cellmath__31__35_0_0.read()(25,2),sc_uint<1>(0))
        ;
        inst_cellmath__31__35_0_25_1__0_0 = temp_31;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__31__35_0_25_1__0_1
    void method_32() {
        sc_uint<25> temp_32;
        temp_32 = 
            (inst_cellmath__31__35_0_0.read()(25,2),sc_uint<1>(0))
        ;
        inst_cellmath__31__35_0_25_1__0_1 = temp_32;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__31__35_1_0
    void method_33() {
        sc_uint<26> temp_33;
        temp_33 = 
            (inst_cellmath__31__35_0_25_1__0_1.read(),sc_uint<1>(0))
        ;
        inst_cellmath__31__35_1_0 = temp_33;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__31__35_1_1
    void method_34() {
        sc_uint<26> temp_34;
        temp_34 = 
            (inst_cellmath__31__35_0_25_1__0_0.read(),sc_uint<1>(0))
        ;
        inst_cellmath__31__35_1_1 = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__18__20(23,0)
    // part assign: lhs_part_1(1): inst_cellmath__18__20(23,0)
    sc_signal<sc_uint<24> > lhs_part_1;
    void method_35() {
        lhs_part_1 = sc_uint<24>(
        (inst_cellmath__8.read()(22,0),sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__20__23(23,0)
    // part assign: lhs_part_2(1): inst_cellmath__20__23(23,0)
    sc_signal<sc_uint<24> > lhs_part_2;
    void method_36() {
        lhs_part_2 = sc_uint<24>(
        (inst_cellmath__18__20.read()(23,1),sc_uint<1>(1))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__20(23,0)
    // part assign: lhs_part_3(1): inst_cellmath__20(23,0)
    sc_signal<sc_uint<24> > lhs_part_3;
    void method_37() {
        lhs_part_3 = sc_uint<24>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__11.read()) == sc_uint<1>("0bus0")) & ((sc_uint<24>)(inst_cellmath__16.read()(23,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__11.read()) == sc_uint<1>("0bus1")) & ((sc_uint<24>)(inst_cellmath__20__23.read()(23,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__32
    void method_38() {
        sc_uint<1> temp_38;
        temp_38 = 
            ~(sc_uint<1>)(inst_lookup0_cellmath__29.read()(2,2))
        ;
        inst_cellmath__32 = temp_38;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__34
    void method_39() {
        sc_uint<26> temp_39;
        temp_39 = 
            (inst_cellmath__20.read()(23,0),sc_uint<1>(0),inst_cellmath__32.read())
        ;
        inst_cellmath__34 = temp_39;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__19__21_24_1_
    void method_40() {
        sc_uint<24> temp_40;
        temp_40 = 
            (inst_cellmath__9.read()(22,0),sc_uint<1>(0))
        ;
        inst_cellmath__19__21_24_1_ = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__21(23,0)
    // part assign: lhs_part_4(1): inst_cellmath__21(23,0)
    sc_signal<sc_uint<24> > lhs_part_4;
    void method_41() {
        lhs_part_4 = sc_uint<24>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__11.read()) == sc_uint<1>("0bus0")) & ((sc_uint<24>)(inst_cellmath__17.read()(23,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__11.read()) == sc_uint<1>("0bus1")) & sc_uint<24>(~(sc_uint<24>)(inst_cellmath__19__21_24_1_.read()))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__35
    void method_42() {
        sc_uint<26> temp_42;
        temp_42 = 
            (inst_cellmath__21.read()(23,0),sc_uint<1>(0),inst_cellmath__32.read())
        ;
        inst_cellmath__35 = temp_42;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__30
    void method_43() {
        sc_uint<26> temp_43;
        temp_43 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_lookup0_cellmath__29.read()(2,2)) == sc_uint<1>("0bus0")) & sc_uint<26>(~(sc_uint<26>)(inst_cellmath__30__31_1_0.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_lookup0_cellmath__29.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__30__31_1_1.read()))
        ;
        inst_cellmath__30 = temp_43;
    }

    // !!!! amethyst/writers/SystemC.cpp:2320
    // !!!! amethyst/writers/SystemC.cpp:5953
    // Compare anchor: inst_cellmath__38__W1
    void method_44() {
        sc_uint<26> temp_44;
        temp_44 = 
            ((sc_uint<26>)(inst_cellmath__34.read()) ^ (sc_uint<26>)(inst_cellmath__35.read())) ^ (sc_uint<26>)(inst_cellmath__30.read())
        ;
        inst_cellmath__38__W1 = temp_44;
    }
    // !!!! amethyst/writers/SystemC.cpp:5953
    // Compare anchor: inst_cellmath__38__W0(24,0)
    // part assign: lhs_part_5(1): inst_cellmath__38__W0(24,0)
    sc_signal<sc_uint<25> > lhs_part_5;
    void method_45() {
        lhs_part_5 = sc_uint<25>(
        ((sc_uint<26>)(inst_cellmath__34.read()) & (sc_uint<26>)(inst_cellmath__35.read())) | ((sc_uint<26>)(inst_cellmath__30.read()) & ((sc_uint<26>)(inst_cellmath__34.read()) | (sc_uint<26>)(inst_cellmath__35.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__39__41
    void method_46() {
        sc_uint<26> temp_46;
        temp_46 = 
            (inst_cellmath__38__W0.read()(24,0),sc_uint<1>(0))
        ;
        inst_cellmath__39__41 = temp_46;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__31
    void method_47() {
        sc_uint<26> temp_47;
        temp_47 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_lookup0_cellmath__29.read()(2,2)) == sc_uint<1>("0bus0")) & sc_uint<26>(~(sc_uint<26>)(inst_cellmath__31__35_1_0.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_lookup0_cellmath__29.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__31__35_1_1.read()))
        ;
        inst_cellmath__31 = temp_47;
    }

    // !!!! amethyst/writers/SystemC.cpp:2320
    // !!!! amethyst/writers/SystemC.cpp:5953
    // Compare anchor: inst_cellmath__39__W1
    void method_48() {
        sc_uint<26> temp_48;
        temp_48 = 
            ((sc_uint<26>)(inst_cellmath__38__W1.read()) ^ (sc_uint<26>)(inst_cellmath__39__41.read())) ^ (sc_uint<26>)(inst_cellmath__31.read())
        ;
        inst_cellmath__39__W1 = temp_48;
    }
    // !!!! amethyst/writers/SystemC.cpp:5953
    // Compare anchor: inst_cellmath__39__W0(24,0)
    // part assign: lhs_part_6(1): inst_cellmath__39__W0(24,0)
    sc_signal<sc_uint<25> > lhs_part_6;
    void method_49() {
        lhs_part_6 = sc_uint<25>(
        ((sc_uint<26>)(inst_cellmath__38__W1.read()) & (sc_uint<26>)(inst_cellmath__39__41.read())) | ((sc_uint<26>)(inst_cellmath__31.read()) & ((sc_uint<26>)(inst_cellmath__38__W1.read()) | (sc_uint<26>)(inst_cellmath__39__41.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_it2_cellmath__51
    void method_50() {
        sc_uint<5> temp_50;
        temp_50 = 
            
            +((sc_uint<5>)(inst_cellmath__39__W0.read()(24,20)))
            +((sc_uint<5>)(inst_cellmath__39__W1.read()(25,21)))
        ;
        inst_it2_cellmath__51 = temp_50;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_lookup1_cellmath__53
    void method_51() {
        sc_uint<7> temp_51;
        temp_51 = 
            (inst_it2_cellmath__51.read(),inst_cellmath__9.read()(22,21))
        ;
        inst_it2_lookup1_cellmath__53 = temp_51;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_it2_lookup1_cellmath__55
    void method_52() {
        sc_uint<3> temp_52;
        temp_52 = 
            
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0000100")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0000101")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0001000")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0001001")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0001010")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0001011")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0001100")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0001101")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0001110")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0001111")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0010000")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0010001")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0010010")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0010011")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0010100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0010101")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0010110")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0010111")) & ((sc_uint<3>)(sc_uint<3>("0bus001"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0011000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0011001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0011010")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0011011")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0011100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0011101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0011110")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0011111")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0100000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0100001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0100010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0100011")) & ((sc_uint<3>)(sc_uint<3>("0bus010"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0100100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0100101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0100110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0100111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0101000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0101001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0101010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0101011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0101100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0101101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0101110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0101111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0110000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0110001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0110010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0110011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0110100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0110101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0110110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0110111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0111000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0111001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0111010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0111011")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0111100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0111101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0111110")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus0111111")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1000000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1000001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1000010")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1000011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1000100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1000101")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1000110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1000111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1001000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1001001")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1001010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1001011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1001100")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1001101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1001110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1001111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1010000")) & ((sc_uint<3>)(sc_uint<3>("0bus011"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1010001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1010010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1010011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1010100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1010101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1010110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1010111")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1011000")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1011001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1011010")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1011011")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1011100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1011101")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1011110")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1011111")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1100000")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1100001")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1100010")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1100011")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1100100")) & ((sc_uint<3>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1100101")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1100110")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1100111")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1101000")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1101001")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1101010")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1101011")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1101100")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1101101")) & ((sc_uint<3>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1101110")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1101111")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1110000")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1110001")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1110010")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1110011")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1110100")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1110101")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1110110")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1110111")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1111000")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1111001")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1111010")) & ((sc_uint<3>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_it2_lookup1_cellmath__53.read()) == sc_uint<7>("0bus1111011")) & ((sc_uint<3>)(sc_uint<3>("0bus101")))
        ;
        inst_it2_lookup1_cellmath__55 = temp_52;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_it2_cellmath__56__57_0(24,0)
    // part assign: lhs_part_7(1): inst_it2_cellmath__56__57_0(24,0)
    sc_signal<sc_uint<25> > lhs_part_7;
    void method_53() {
        lhs_part_7 = sc_uint<25>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(0,0)) == sc_uint<1>("0bus1")) & ((sc_uint<25>)(inst_cellmath__19__21_25_1__0_0.read()))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__56__57_1_0
    void method_54() {
        sc_uint<26> temp_54;
        temp_54 = 
            ((sc_uint<1>)(0), inst_it2_cellmath__56__57_0.read()(24,1),sc_uint<1>(0))
        ;
        inst_it2_cellmath__56__57_1_0 = temp_54;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__56__57_1_1
    void method_55() {
        sc_uint<26> temp_55;
        temp_55 = 
            ((sc_uint<1>)(0), inst_it2_cellmath__56__57_0.read()(24,1),sc_uint<1>(0))
        ;
        inst_it2_cellmath__56__57_1_1 = temp_55;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_it2_cellmath__57__61_0_0
    void method_56() {
        sc_uint<26> temp_56;
        temp_56 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__31__37_0_1.read()))
        ;
        inst_it2_cellmath__57__61_0_0 = temp_56;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__57__61_0_25_1__0_0
    void method_57() {
        sc_uint<25> temp_57;
        temp_57 = 
            (inst_it2_cellmath__57__61_0_0.read()(25,2),sc_uint<1>(0))
        ;
        inst_it2_cellmath__57__61_0_25_1__0_0 = temp_57;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__57__61_0_25_1__0_1
    void method_58() {
        sc_uint<25> temp_58;
        temp_58 = 
            (inst_it2_cellmath__57__61_0_0.read()(25,2),sc_uint<1>(0))
        ;
        inst_it2_cellmath__57__61_0_25_1__0_1 = temp_58;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__57__61_1_0
    void method_59() {
        sc_uint<26> temp_59;
        temp_59 = 
            (inst_it2_cellmath__57__61_0_25_1__0_1.read(),sc_uint<1>(0))
        ;
        inst_it2_cellmath__57__61_1_0 = temp_59;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__57__61_1_1
    void method_60() {
        sc_uint<26> temp_60;
        temp_60 = 
            (inst_it2_cellmath__57__61_0_25_1__0_0.read(),sc_uint<1>(0))
        ;
        inst_it2_cellmath__57__61_1_1 = temp_60;
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<22> > cascade_inst_cellmath__112[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_61() {
                    cascade_inst_cellmath__112[0] = (sc_uint<22>)((sc_uint<22>)(inst_cellmath__90_0.read()(22,1)));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_62() {
            inst_cellmath__112 = cascade_inst_cellmath__112[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__134__111_22_1_
    void method_63() {
        sc_uint<22> temp_63;
        temp_63 = 
            (sc_uint<1>(1),inst_cellmath__112.read()(21,1))
        ;
        inst_cellmath__134__111_22_1_ = temp_63;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__120
    void method_64() {
        sc_uint<26> temp_64;
        temp_64 = 
            
            +((sc_uint<26>)(inst_cellmath__16.read()))
            +((sc_uint<26>)(inst_cellmath__17.read()))
        ;
        inst_cellmath__120 = temp_64;
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<29> > cascade_inst_cellmath__44[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_65() {
                    cascade_inst_cellmath__44[0] = (sc_uint<29>)((sc_uint<29>)(inst_cellmath__40.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_66() {
            inst_cellmath__44 = cascade_inst_cellmath__44[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<29> > cascade_inst_cellmath__45[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_67() {
                    cascade_inst_cellmath__45[0] = (sc_uint<29>)((sc_uint<29>)(inst_cellmath__41.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_68() {
            inst_cellmath__45 = cascade_inst_cellmath__45[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__124
    void method_69() {
        sc_uint<29> temp_69;
        temp_69 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__120.read()(25,25)) == sc_uint<1>("0bus0")) & ((sc_uint<29>)(inst_cellmath__44.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__120.read()(25,25)) == sc_uint<1>("0bus1")) & ((sc_uint<29>)(inst_cellmath__45.read()))
        ;
        inst_cellmath__124 = temp_69;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__122
    void method_70() {
        sc_uint<1> temp_70;
        temp_70 = 
            ~(sc_uint<1>)(inst_cellmath__124.read()(28,28))
        ;
        inst_cellmath__122 = temp_70;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__125
    void method_71() {
        sc_uint<23> temp_71;
        temp_71 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__122.read()) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__124.read()(27,5))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__122.read()) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(inst_cellmath__124.read()(26,4)))
        ;
        inst_cellmath__125 = temp_71;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__126
    void method_72() {
        sc_uint<1> temp_72;
        temp_72 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__122.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__124.read()(4,4))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__122.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__124.read()(3,3)))
        ;
        inst_cellmath__126 = temp_72;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__129
    void method_73() {
        sc_uint<23> temp_73;
        temp_73 = 
            
            +((sc_uint<23>)(inst_cellmath__125.read()))
            +((sc_uint<23>)(inst_cellmath__126.read()))
        ;
        inst_cellmath__129 = temp_73;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__127__104
    void method_74() {
        sc_uint<1> temp_74;
        temp_74 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124.read()(3,3))))
        ;
        inst_cellmath__127__104 = temp_74;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__127__103
    void method_75() {
        sc_uint<1> temp_75;
        temp_75 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__124.read()(2,2))))
        ;
        inst_cellmath__127__103 = temp_75;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__127
    void method_76() {
        sc_uint<1> temp_76;
        temp_76 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__122.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__127__104.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__122.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__127__103.read()))
        ;
        inst_cellmath__127 = temp_76;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__130__105
    void method_77() {
        sc_uint<1> temp_77;
        temp_77 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__125.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__127.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__120.read()(25,25))))
        ;
        inst_cellmath__130__105 = temp_77;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__121__106
    void method_78() {
        sc_uint<1> temp_78;
        temp_78 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__129.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__130__105.read())))
        ;
        inst_cellmath__121__106 = temp_78;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__113__115_22_1__0
    void method_79() {
        sc_uint<23> temp_79;
        temp_79 = 
            (inst_cellmath__129.read()(22,1),inst_cellmath__121__106.read())
        ;
        inst_cellmath__113__115_22_1__0 = temp_79;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__113__115_22_1__1
    void method_80() {
        sc_uint<23> temp_80;
        temp_80 = 
            (inst_cellmath__134__111_22_1_.read(),inst_cellmath__112.read()(0,0))
        ;
        inst_cellmath__113__115_22_1__1 = temp_80;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__13__14
    void method_81() {
        sc_uint<1> temp_81;
        temp_81 = 
            ~(sc_uint<1>)(accept.read())
        ;
        inst_cellmath__13__14 = temp_81;
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<4> > cascade_inst_cellmath__13[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_82() {
        if (inst_cellmath__13__14.read()==0) {
            cascade_inst_cellmath__13[0] = 0;
        } else {
            cascade_inst_cellmath__13[0] = (sc_uint<4>)((sc_uint<4>)(inst_cellmath__12.read()));
        }
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_83() {
            inst_cellmath__13 = cascade_inst_cellmath__13[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__12__18(3,0)
    // part assign: lhs_part_8(1): inst_cellmath__12__18(3,0)
    sc_signal<sc_uint<4> > lhs_part_8;
    void method_84() {
        lhs_part_8 = sc_uint<4>(
        
            +((sc_uint<4>)(inst_cellmath__13.read()))
            +((sc_uint<4>)(sc_uint<2>("0bus01")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__12__19
    void method_85() {
        sc_uint<1> temp_85;
        temp_85 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__13.read()(3,3))))
        ;
        inst_cellmath__12__19 = temp_85;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__12
    void method_86() {
        sc_uint<4> temp_86;
        temp_86 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__12__19.read()) == sc_uint<1>("0bus0")) & ((sc_uint<4>)(inst_cellmath__12__18.read()(3,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__12__19.read()) == sc_uint<1>("0bus1")) & ((sc_uint<4>)(sc_uint<4>("0bus1111")))
        ;
        inst_cellmath__12 = temp_86;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__36(0,0)
    // part assign: lhs_part_9(1): inst_cellmath__36(0,0)
    sc_signal<sc_uint<1> > lhs_part_9;
    void method_87() {
        lhs_part_9 = sc_uint<1>(
        (sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__36(23,1)
    // part assign: lhs_part_10(2): inst_cellmath__36(23,1)
    sc_signal<sc_uint<23> > lhs_part_10;
    void method_88() {
        lhs_part_10 = sc_uint<23>(
        (sc_uint<23>)(inst_cellmath__39__W0.read()(22,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__46(24,0)
    // part assign: lhs_part_11(1): inst_cellmath__46(24,0)
    sc_signal<sc_uint<25> > lhs_part_11;
    void method_89() {
        lhs_part_11 = sc_uint<25>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__11.read()) == sc_uint<1>("0bus0")) & ((sc_uint<25>)(inst_cellmath__44.read()(24,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__11.read()) == sc_uint<1>("0bus1")) & ((sc_uint<25>)(sc_uint<25>("0bus0000000000000000000000001")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__47(24,0)
    // part assign: lhs_part_12(1): inst_cellmath__47(24,0)
    sc_signal<sc_uint<25> > lhs_part_12;
    void method_90() {
        lhs_part_12 = sc_uint<25>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__11.read()) == sc_uint<1>("0bus0")) & ((sc_uint<25>)(inst_cellmath__45.read()(24,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__48__46
    void method_91() {
        sc_uint<1> temp_91;
        temp_91 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(inst_lookup0_cellmath__29.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_lookup0_cellmath__29.read()(1,1)))))
        ;
        inst_cellmath__48__46 = temp_91;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__48__44
    void method_92() {
        sc_uint<1> temp_92;
        temp_92 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_lookup0_cellmath__29.read()(2,2)) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_lookup0_cellmath__29.read()(1,1))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_lookup0_cellmath__29.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__48__46.read()))
        ;
        inst_cellmath__48__44 = temp_92;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__48_1_0__1
    void method_93() {
        sc_uint<2> temp_93;
        temp_93 = 
            (inst_cellmath__48__44.read(),inst_lookup0_cellmath__29.read()(0,0))
        ;
        inst_cellmath__48_1_0__1 = temp_93;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__42__49(26,0)
    // part assign: lhs_part_13(1): inst_cellmath__42__49(26,0)
    sc_signal<sc_uint<27> > lhs_part_13;
    void method_94() {
        lhs_part_13 = sc_uint<27>(
        (inst_cellmath__46.read()(24,0),inst_cellmath__48__44.read(),inst_lookup0_cellmath__29.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__42__50(26,0)
    // part assign: lhs_part_14(1): inst_cellmath__42__50(26,0)
    sc_signal<sc_uint<27> > lhs_part_14;
    void method_95() {
        lhs_part_14 = sc_uint<27>(
        (inst_cellmath__47.read()(24,0),inst_cellmath__48__44.read(),inst_lookup0_cellmath__29.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__42(26,0)
    // part assign: lhs_part_15(1): inst_cellmath__42(26,0)
    sc_signal<sc_uint<27> > lhs_part_15;
    void method_96() {
        lhs_part_15 = sc_uint<27>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__32.read()) == sc_uint<1>("0bus0")) & ((sc_uint<27>)(inst_cellmath__42__50.read()(26,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__32.read()) == sc_uint<1>("0bus1")) & ((sc_uint<27>)(inst_cellmath__42__49.read()(26,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__50
    void method_97() {
        sc_uint<2> temp_97;
        temp_97 = 
            
            +((sc_uint<2>)(inst_cellmath__48_1_0__1.read()))
            -((sc_uint<2>)(sc_uint<2>("0b01")))
        ;
        inst_cellmath__50 = temp_97;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__43__53(26,0)
    // part assign: lhs_part_16(1): inst_cellmath__43__53(26,0)
    sc_signal<sc_uint<27> > lhs_part_16;
    void method_98() {
        lhs_part_16 = sc_uint<27>(
        (inst_cellmath__46.read()(24,0),inst_cellmath__50.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__43__54(26,0)
    // part assign: lhs_part_17(1): inst_cellmath__43__54(26,0)
    sc_signal<sc_uint<27> > lhs_part_17;
    void method_99() {
        lhs_part_17 = sc_uint<27>(
        (inst_cellmath__47.read()(24,0),inst_cellmath__50.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__43__56
    void method_100() {
        sc_uint<1> temp_100;
        temp_100 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_lookup0_cellmath__29.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48__44.read())))
        ;
        inst_cellmath__43__56 = temp_100;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__43__55
    void method_101() {
        sc_uint<1> temp_101;
        temp_101 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_lookup0_cellmath__29.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43__56.read())))
        ;
        inst_cellmath__43__55 = temp_101;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__43(26,0)
    // part assign: lhs_part_18(1): inst_cellmath__43(26,0)
    sc_signal<sc_uint<27> > lhs_part_18;
    void method_102() {
        lhs_part_18 = sc_uint<27>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__43__55.read()) == sc_uint<1>("0bus0")) & ((sc_uint<27>)(inst_cellmath__43__54.read()(26,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__43__55.read()) == sc_uint<1>("0bus1")) & ((sc_uint<27>)(inst_cellmath__43__53.read()(26,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_it2_cellmath__56
    void method_103() {
        sc_uint<26> temp_103;
        temp_103 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(2,2)) == sc_uint<1>("0bus0")) & sc_uint<26>(~(sc_uint<26>)(inst_it2_cellmath__56__57_1_0.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_it2_cellmath__56__57_1_1.read()))
        ;
        inst_it2_cellmath__56 = temp_103;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_it2_cellmath__57
    void method_104() {
        sc_uint<26> temp_104;
        temp_104 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(2,2)) == sc_uint<1>("0bus0")) & sc_uint<26>(~(sc_uint<26>)(inst_it2_cellmath__57__61_1_0.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_it2_cellmath__57__61_1_1.read()))
        ;
        inst_it2_cellmath__57 = temp_104;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_it2_cellmath__58
    void method_105() {
        sc_uint<1> temp_105;
        temp_105 = 
            ~(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(2,2))
        ;
        inst_it2_cellmath__58 = temp_105;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__60
    void method_106() {
        sc_uint<26> temp_106;
        temp_106 = 
            (inst_cellmath__36.read()(23,0),sc_uint<1>(0),inst_it2_cellmath__58.read())
        ;
        inst_it2_cellmath__60 = temp_106;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__61
    void method_107() {
        sc_uint<26> temp_107;
        temp_107 = 
            (inst_cellmath__39__W1.read()(23,0),sc_uint<1>(0),inst_it2_cellmath__58.read())
        ;
        inst_it2_cellmath__61 = temp_107;
    }

    // !!!! amethyst/writers/SystemC.cpp:2320
    // !!!! amethyst/writers/SystemC.cpp:5953
    // Compare anchor: inst_it2_cellmath__62__W1
    void method_108() {
        sc_uint<26> temp_108;
        temp_108 = 
            ((sc_uint<26>)(inst_it2_cellmath__60.read()) ^ (sc_uint<26>)(inst_it2_cellmath__61.read())) ^ (sc_uint<26>)(inst_it2_cellmath__56.read())
        ;
        inst_it2_cellmath__62__W1 = temp_108;
    }
    // !!!! amethyst/writers/SystemC.cpp:5953
    // Compare anchor: inst_it2_cellmath__62__W0(24,0)
    // part assign: lhs_part_19(1): inst_it2_cellmath__62__W0(24,0)
    sc_signal<sc_uint<25> > lhs_part_19;
    void method_109() {
        lhs_part_19 = sc_uint<25>(
        ((sc_uint<26>)(inst_it2_cellmath__60.read()) & (sc_uint<26>)(inst_it2_cellmath__61.read())) | ((sc_uint<26>)(inst_it2_cellmath__56.read()) & ((sc_uint<26>)(inst_it2_cellmath__60.read()) | (sc_uint<26>)(inst_it2_cellmath__61.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__63__67
    void method_110() {
        sc_uint<26> temp_110;
        temp_110 = 
            (inst_it2_cellmath__62__W0.read()(24,0),sc_uint<1>(0))
        ;
        inst_it2_cellmath__63__67 = temp_110;
    }

    // !!!! amethyst/writers/SystemC.cpp:2320
    // !!!! amethyst/writers/SystemC.cpp:5953
    // Compare anchor: inst_it2_cellmath__63__W1
    void method_111() {
        sc_uint<26> temp_111;
        temp_111 = 
            ((sc_uint<26>)(inst_it2_cellmath__62__W1.read()) ^ (sc_uint<26>)(inst_it2_cellmath__63__67.read())) ^ (sc_uint<26>)(inst_it2_cellmath__57.read())
        ;
        inst_it2_cellmath__63__W1 = temp_111;
    }
    // !!!! amethyst/writers/SystemC.cpp:5953
    // Compare anchor: inst_it2_cellmath__63__W0(24,0)
    // part assign: lhs_part_20(1): inst_it2_cellmath__63__W0(24,0)
    sc_signal<sc_uint<25> > lhs_part_20;
    void method_112() {
        lhs_part_20 = sc_uint<25>(
        ((sc_uint<26>)(inst_it2_cellmath__62__W1.read()) & (sc_uint<26>)(inst_it2_cellmath__63__67.read())) | ((sc_uint<26>)(inst_it2_cellmath__57.read()) & ((sc_uint<26>)(inst_it2_cellmath__62__W1.read()) | (sc_uint<26>)(inst_it2_cellmath__63__67.read())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__14(0,0)
    // part assign: lhs_part_21(1): inst_cellmath__14(0,0)
    sc_signal<sc_uint<1> > lhs_part_21;
    void method_113() {
        lhs_part_21 = sc_uint<1>(
        (sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__14(25,1)
    // part assign: lhs_part_22(2): inst_cellmath__14(25,1)
    sc_signal<sc_uint<25> > lhs_part_22;
    void method_114() {
        lhs_part_22 = sc_uint<25>(
        (sc_uint<25>)(inst_it2_cellmath__63__W0.read()(24,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_it2_cellmath__64__70
    void method_115() {
        sc_uint<1> temp_115;
        temp_115 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(1,1)))))
        ;
        inst_it2_cellmath__64__70 = temp_115;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_it2_cellmath__64__68
    void method_116() {
        sc_uint<1> temp_116;
        temp_116 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(2,2)) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(1,1))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_it2_cellmath__64__70.read()))
        ;
        inst_it2_cellmath__64__68 = temp_116;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_it2_cellmath__64_1_0__1
    void method_117() {
        sc_uint<2> temp_117;
        temp_117 = 
            (inst_it2_cellmath__64__68.read(),inst_it2_lookup1_cellmath__55.read()(0,0))
        ;
        inst_it2_cellmath__64_1_0__1 = temp_117;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__40__73(28,0)
    // part assign: lhs_part_23(1): inst_cellmath__40__73(28,0)
    sc_signal<sc_uint<29> > lhs_part_23;
    void method_118() {
        lhs_part_23 = sc_uint<29>(
        (inst_cellmath__42.read()(26,0),inst_it2_cellmath__64__68.read(),inst_it2_lookup1_cellmath__55.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__40__74(28,0)
    // part assign: lhs_part_24(1): inst_cellmath__40__74(28,0)
    sc_signal<sc_uint<29> > lhs_part_24;
    void method_119() {
        lhs_part_24 = sc_uint<29>(
        (inst_cellmath__43.read()(26,0),inst_it2_cellmath__64__68.read(),inst_it2_lookup1_cellmath__55.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__40
    void method_120() {
        sc_uint<29> temp_120;
        temp_120 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_cellmath__58.read()) == sc_uint<1>("0bus0")) & ((sc_uint<29>)(inst_cellmath__40__74.read()(28,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_it2_cellmath__58.read()) == sc_uint<1>("0bus1")) & ((sc_uint<29>)(inst_cellmath__40__73.read()(28,0)))
        ;
        inst_cellmath__40 = temp_120;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_it2_cellmath__66
    void method_121() {
        sc_uint<2> temp_121;
        temp_121 = 
            
            +((sc_uint<2>)(inst_it2_cellmath__64_1_0__1.read()))
            -((sc_uint<2>)(sc_uint<2>("0b01")))
        ;
        inst_it2_cellmath__66 = temp_121;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__41__77(28,0)
    // part assign: lhs_part_25(1): inst_cellmath__41__77(28,0)
    sc_signal<sc_uint<29> > lhs_part_25;
    void method_122() {
        lhs_part_25 = sc_uint<29>(
        (inst_cellmath__42.read()(26,0),inst_it2_cellmath__66.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__41__78(28,0)
    // part assign: lhs_part_26(1): inst_cellmath__41__78(28,0)
    sc_signal<sc_uint<29> > lhs_part_26;
    void method_123() {
        lhs_part_26 = sc_uint<29>(
        (inst_cellmath__43.read()(26,0),inst_it2_cellmath__66.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__41__80
    void method_124() {
        sc_uint<1> temp_124;
        temp_124 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_it2_cellmath__64__68.read())))
        ;
        inst_cellmath__41__80 = temp_124;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__41__79
    void method_125() {
        sc_uint<1> temp_125;
        temp_125 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_it2_lookup1_cellmath__55.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__41__80.read())))
        ;
        inst_cellmath__41__79 = temp_125;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__41
    void method_126() {
        sc_uint<29> temp_126;
        temp_126 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__41__79.read()) == sc_uint<1>("0bus0")) & ((sc_uint<29>)(inst_cellmath__41__78.read()(28,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__41__79.read()) == sc_uint<1>("0bus1")) & ((sc_uint<29>)(inst_cellmath__41__77.read()(28,0)))
        ;
        inst_cellmath__41 = temp_126;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<8> > inst_cellmath__67_tmp_0;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__67_tmp_0
    void method_127() {
        sc_uint<8> temp_127;
        temp_127 = 
            
            +((sc_uint<8>)(inst_cellmath__8.read()(30,23)))
            -((sc_uint<8>)(inst_cellmath__9.read()(30,23)))
        ;
        inst_cellmath__67_tmp_0 = temp_127;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__67(7,0)
    // part assign: lhs_part_27(1): inst_cellmath__67(7,0)
    sc_signal<sc_uint<8> > lhs_part_27;
    void method_128() {
        lhs_part_27 = sc_uint<8>(
        inst_cellmath__67_tmp_0.read()
            +((sc_uint<8>)(sc_uint<8>("0bus01111110")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > inst_cellmath__68_tmp_1;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__68_tmp_1
    void method_129() {
        sc_uint<10> temp_129;
        temp_129 = 
            
            +((sc_uint<10>)(inst_cellmath__8.read()(30,23)))
            -((sc_uint<10>)(inst_cellmath__9.read()(30,23)))
        ;
        inst_cellmath__68_tmp_1 = temp_129;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__68
    void method_130() {
        sc_uint<10> temp_130;
        temp_130 = 
            inst_cellmath__68_tmp_1.read()
            +((sc_uint<10>)(sc_uint<8>("0bus01111111")))
        ;
        inst_cellmath__68 = temp_130;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__69__82
    void method_131() {
        sc_uint<1> temp_131;
        temp_131 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(7,7))))
        ;
        inst_cellmath__69__82 = temp_131;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__69__81
    void method_132() {
        sc_uint<1> temp_132;
        temp_132 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69__82.read())))
        ;
        inst_cellmath__69__81 = temp_132;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__69
    void method_133() {
        sc_uint<1> temp_133;
        temp_133 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)((inst_cellmath__68.read()[9]))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69__81.read())))
        ;
        inst_cellmath__69 = temp_133;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__70__83
    void method_134() {
        sc_uint<1> temp_134;
        temp_134 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(8,8))))
        ;
        inst_cellmath__70__83 = temp_134;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__70
    void method_135() {
        sc_uint<1> temp_135;
        temp_135 = 
            
            ((sc_uint<1>)((sc_uint<1>)((inst_cellmath__68.read()[9]))))
            |((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__70__83.read())))
        ;
        inst_cellmath__70 = temp_135;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__71
    void method_136() {
        sc_uint<1> temp_136;
        temp_136 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)((inst_cellmath__68.read()[9]))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68.read()(8,8))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(7,7))))
        ;
        inst_cellmath__71 = temp_136;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__72
    void method_137() {
        sc_uint<1> temp_137;
        temp_137 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read()(0,0))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68.read()(1,1))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68.read()(2,2))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68.read()(3,3))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68.read()(4,4))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68.read()(5,5))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68.read()(6,6))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68.read()(7,7))))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__68.read()(8,8))))
        ;
        inst_cellmath__72 = temp_137;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__73
    void method_138() {
        sc_uint<1> temp_138;
        temp_138 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__71.read())))
        ;
        inst_cellmath__73 = temp_138;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__74
    void method_139() {
        sc_uint<1> temp_139;
        temp_139 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__70.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__72.read())))
        ;
        inst_cellmath__74 = temp_139;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__75
    void method_140() {
        sc_uint<1> temp_140;
        temp_140 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(23,23))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(24,24))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(25,25))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(26,26))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(27,27))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(28,28))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(29,29))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(30,30))))
        ;
        inst_cellmath__75 = temp_140;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__76
    void method_141() {
        sc_uint<1> temp_141;
        temp_141 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(23,23))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(24,24))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(25,25))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(26,26))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(27,27))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(28,28))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(29,29))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(30,30))))
        ;
        inst_cellmath__76 = temp_141;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__77
    void method_142() {
        sc_uint<1> temp_142;
        temp_142 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(22,22))))
        ;
        inst_cellmath__77 = temp_142;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__78
    void method_143() {
        sc_uint<1> temp_143;
        temp_143 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(7,7))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(22,22))))
        ;
        inst_cellmath__78 = temp_143;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__79
    void method_144() {
        sc_uint<1> temp_144;
        temp_144 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__75.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__77.read())))
        ;
        inst_cellmath__79 = temp_144;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__80
    void method_145() {
        sc_uint<1> temp_145;
        temp_145 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__76.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__78.read())))
        ;
        inst_cellmath__80 = temp_145;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__83
    void method_146() {
        sc_uint<1> temp_146;
        temp_146 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__75.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__77.read())))
        ;
        inst_cellmath__83 = temp_146;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__84
    void method_147() {
        sc_uint<1> temp_147;
        temp_147 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__76.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__78.read())))
        ;
        inst_cellmath__84 = temp_147;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__85
    void method_148() {
        sc_uint<1> temp_148;
        temp_148 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(26,26))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(27,27))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(28,28))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(29,29))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(30,30)))))
        ;
        inst_cellmath__85 = temp_148;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__86
    void method_149() {
        sc_uint<1> temp_149;
        temp_149 = 
            ~(
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(26,26))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(27,27))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(28,28))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(29,29))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(30,30)))))
        ;
        inst_cellmath__86 = temp_149;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__87__87
    void method_150() {
        sc_uint<1> temp_150;
        temp_150 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__83.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__84.read())))
        ;
        inst_cellmath__87__87 = temp_150;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__87__88
    void method_151() {
        sc_uint<1> temp_151;
        temp_151 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__85.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__86.read())))
        ;
        inst_cellmath__87__88 = temp_151;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__87
    void method_152() {
        sc_uint<1> temp_152;
        temp_152 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87__88.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87__87.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__79.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__80.read())))
        ;
        inst_cellmath__87 = temp_152;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__88
    void method_153() {
        sc_uint<1> temp_153;
        temp_153 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__83.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__86.read())))
        ;
        inst_cellmath__88 = temp_153;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__89
    void method_154() {
        sc_uint<1> temp_154;
        temp_154 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__84.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__85.read())))
        ;
        inst_cellmath__89 = temp_154;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__79_0
    void method_155() {
        sc_uint<2> temp_155;
        temp_155 = 
            (inst_cellmath__79.read(),inst_cellmath__80.read())
        ;
        inst_cellmath__79_0 = temp_155;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__90_1
    void method_156() {
        sc_uint<23> temp_156;
        temp_156 = 
            (inst_cellmath__9.read()(21,0),inst_cellmath__9.read()(31,31))
        ;
        inst_cellmath__90_1 = temp_156;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__90_2
    void method_157() {
        sc_uint<23> temp_157;
        temp_157 = 
            (inst_cellmath__8.read()(21,0),inst_cellmath__8.read()(31,31))
        ;
        inst_cellmath__90_2 = temp_157;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__91
    void method_158() {
        sc_uint<1> temp_158;
        temp_158 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__8.read()(31,31))))
            ^((sc_uint<1>)((sc_uint<1>)(inst_cellmath__9.read()(31,31))))
        ;
        inst_cellmath__91 = temp_158;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__92__95
    void method_159() {
        sc_uint<1> temp_159;
        temp_159 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__91.read())))
        ;
        inst_cellmath__92__95 = temp_159;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__90_0
    void method_160() {
        sc_uint<23> temp_160;
        temp_160 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__79_0.read()) == sc_uint<2>("0bus01")) & ((sc_uint<23>)(inst_cellmath__90_1.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__79_0.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(inst_cellmath__90_2.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__79_0.read()) == sc_uint<2>("0bus00")) & ((sc_uint<23>)(inst_cellmath__92__95.read()))
        ;
        inst_cellmath__90_0 = temp_160;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__96
    void method_161() {
        sc_uint<1> temp_161;

                    sc_uint<8> inst_cellmath__96_tmp_2 = 
            -((sc_uint<8>)(inst_cellmath__12.read()))
            +((sc_uint<8>)(sc_uint<4>("0bus0110")));
        temp_161 = (((sc_uint<1>)inst_cellmath__96_tmp_2.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__96 = temp_161;
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__98[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_162() {
                    cascade_inst_cellmath__98[0] = (sc_uint<1>)((sc_uint<1>)(inst_cellmath__90_0.read()(0,0)));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_163() {
            inst_cellmath__98 = cascade_inst_cellmath__98[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__100[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_164() {
                    cascade_inst_cellmath__100[0] = (sc_uint<1>)((sc_uint<1>)(inst_cellmath__87.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_165() {
            inst_cellmath__100 = cascade_inst_cellmath__100[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__101[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_166() {
                    cascade_inst_cellmath__101[0] = (sc_uint<1>)((sc_uint<1>)(inst_cellmath__88.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_167() {
            inst_cellmath__101 = cascade_inst_cellmath__101[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__102[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_168() {
                    cascade_inst_cellmath__102[0] = (sc_uint<1>)((sc_uint<1>)(inst_cellmath__89.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_169() {
            inst_cellmath__102 = cascade_inst_cellmath__102[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__103[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_170() {
                    cascade_inst_cellmath__103[0] = (sc_uint<1>)((sc_uint<1>)(inst_cellmath__69.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_171() {
            inst_cellmath__103 = cascade_inst_cellmath__103[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__104[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_172() {
                    cascade_inst_cellmath__104[0] = (sc_uint<1>)((sc_uint<1>)(inst_cellmath__73.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_173() {
            inst_cellmath__104 = cascade_inst_cellmath__104[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__105[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_174() {
                    cascade_inst_cellmath__105[0] = (sc_uint<1>)((sc_uint<1>)(inst_cellmath__70.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_175() {
            inst_cellmath__105 = cascade_inst_cellmath__105[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__106[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_176() {
                    cascade_inst_cellmath__106[0] = (sc_uint<1>)((sc_uint<1>)(inst_cellmath__74.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_177() {
            inst_cellmath__106 = cascade_inst_cellmath__106[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<8> > cascade_inst_cellmath__110[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_178() {
                    cascade_inst_cellmath__110[0] = (sc_uint<8>)((sc_uint<8>)(inst_cellmath__67.read()(7,0)));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_179() {
            inst_cellmath__110 = cascade_inst_cellmath__110[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<8> > cascade_inst_cellmath__111[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_180() {
                    cascade_inst_cellmath__111[0] = (sc_uint<8>)((sc_uint<8>)(inst_cellmath__68.read()(7,0)));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_181() {
            inst_cellmath__111 = cascade_inst_cellmath__111[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<1> > cascade_inst_cellmath__109[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_182() {
                    cascade_inst_cellmath__109[0] = (sc_uint<1>)((sc_uint<1>)(inst_cellmath__96.read()));
    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_183() {
            inst_cellmath__109 = cascade_inst_cellmath__109[0].read();
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__133__109
    void method_184() {
        sc_uint<1> temp_184;
        temp_184 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__103.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__100.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__101.read())))
        ;
        inst_cellmath__133__109 = temp_184;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__135
    void method_185() {
        sc_uint<1> temp_185;
        temp_185 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__105.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__103.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__102.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__100.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__101.read())))
        ;
        inst_cellmath__135 = temp_185;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__136
    void method_186() {
        sc_uint<1> temp_186;
        temp_186 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__106.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__104.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__102.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__100.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__101.read())))
        ;
        inst_cellmath__136 = temp_186;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__137
    void method_187() {
        sc_uint<1> temp_187;
        temp_187 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__122.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__135.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__122.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(inst_cellmath__136.read()))
        ;
        inst_cellmath__137 = temp_187;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__137_0
    void method_188() {
        sc_uint<2> temp_188;
        temp_188 = 
            (inst_cellmath__137.read(),inst_cellmath__122.read())
        ;
        inst_cellmath__137_0 = temp_188;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__113__113
    void method_189() {
        sc_uint<8> temp_189;
        temp_189 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__137_0.read()) == sc_uint<2>("0bus00")) & ((sc_uint<8>)(inst_cellmath__111.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__137_0.read()) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(inst_cellmath__110.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__137_0.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(((sc_uint<8>)(sc_int<1>)inst_cellmath__133__109.read())))
        ;
        inst_cellmath__113__113 = temp_189;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__137_1
    void method_190() {
        sc_uint<2> temp_190;
        temp_190 = 
            (inst_cellmath__137.read(),inst_cellmath__100.read())
        ;
        inst_cellmath__137_1 = temp_190;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__113__115_22_1_
    void method_191() {
        sc_uint<23> temp_191;
        temp_191 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__137_1.read()(1,1)) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__113__115_22_1__0.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__137_1.read()) == sc_uint<2>("0bus11")) & ((sc_uint<23>)(inst_cellmath__113__115_22_1__1.read()))
        ;
        inst_cellmath__113__115_22_1_ = temp_191;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__113
    void method_192() {
        sc_uint<32> temp_192;
        temp_192 = 
            (inst_cellmath__98.read(),inst_cellmath__113__113.read(),inst_cellmath__113__115_22_1_.read())
        ;
        inst_cellmath__113 = temp_192;
    }
    void method_193() { 
        sc_uint<26> temp_193 = inst_cellmath__30__31_0.read();
        temp_193(24,0) = lhs_part_0.read();
        inst_cellmath__30__31_0 = temp_193;
}
    void method_194() { 
        sc_uint<26> temp_194 = inst_cellmath__18__20.read();
        temp_194(23,0) = lhs_part_1.read();
        inst_cellmath__18__20 = temp_194;
}
    void method_195() { 
        sc_uint<26> temp_195 = inst_cellmath__20__23.read();
        temp_195(23,0) = lhs_part_2.read();
        inst_cellmath__20__23 = temp_195;
}
    void method_196() { 
        sc_uint<26> temp_196 = inst_cellmath__20.read();
        temp_196(23,0) = lhs_part_3.read();
        inst_cellmath__20 = temp_196;
}
    void method_197() { 
        sc_uint<26> temp_197 = inst_cellmath__21.read();
        temp_197(23,0) = lhs_part_4.read();
        inst_cellmath__21 = temp_197;
}
    void method_198() { 
        sc_uint<26> temp_198 = inst_cellmath__38__W0.read();
        temp_198(24,0) = lhs_part_5.read();
        inst_cellmath__38__W0 = temp_198;
}
    void method_199() { 
        sc_uint<26> temp_199 = inst_cellmath__39__W0.read();
        temp_199(24,0) = lhs_part_6.read();
        inst_cellmath__39__W0 = temp_199;
}
    void method_200() { 
        sc_uint<26> temp_200 = inst_it2_cellmath__56__57_0.read();
        temp_200(24,0) = lhs_part_7.read();
        inst_it2_cellmath__56__57_0 = temp_200;
}
    void method_201() { 
        sc_uint<5> temp_201 = inst_cellmath__12__18.read();
        temp_201(3,0) = lhs_part_8.read();
        inst_cellmath__12__18 = temp_201;
}
    void method_202() { 
        sc_uint<26> temp_202 = inst_cellmath__36.read();
        temp_202(0,0) = lhs_part_9.read();
        temp_202(23,1) = lhs_part_10.read();
        inst_cellmath__36 = temp_202;
}
    void method_203() { 
        sc_uint<29> temp_203 = inst_cellmath__46.read();
        temp_203(24,0) = lhs_part_11.read();
        inst_cellmath__46 = temp_203;
}
    void method_204() { 
        sc_uint<29> temp_204 = inst_cellmath__47.read();
        temp_204(24,0) = lhs_part_12.read();
        inst_cellmath__47 = temp_204;
}
    void method_205() { 
        sc_uint<31> temp_205 = inst_cellmath__42__49.read();
        temp_205(26,0) = lhs_part_13.read();
        inst_cellmath__42__49 = temp_205;
}
    void method_206() { 
        sc_uint<31> temp_206 = inst_cellmath__42__50.read();
        temp_206(26,0) = lhs_part_14.read();
        inst_cellmath__42__50 = temp_206;
}
    void method_207() { 
        sc_uint<29> temp_207 = inst_cellmath__42.read();
        temp_207(26,0) = lhs_part_15.read();
        inst_cellmath__42 = temp_207;
}
    void method_208() { 
        sc_uint<31> temp_208 = inst_cellmath__43__53.read();
        temp_208(26,0) = lhs_part_16.read();
        inst_cellmath__43__53 = temp_208;
}
    void method_209() { 
        sc_uint<31> temp_209 = inst_cellmath__43__54.read();
        temp_209(26,0) = lhs_part_17.read();
        inst_cellmath__43__54 = temp_209;
}
    void method_210() { 
        sc_uint<29> temp_210 = inst_cellmath__43.read();
        temp_210(26,0) = lhs_part_18.read();
        inst_cellmath__43 = temp_210;
}
    void method_211() { 
        sc_uint<26> temp_211 = inst_it2_cellmath__62__W0.read();
        temp_211(24,0) = lhs_part_19.read();
        inst_it2_cellmath__62__W0 = temp_211;
}
    void method_212() { 
        sc_uint<26> temp_212 = inst_it2_cellmath__63__W0.read();
        temp_212(24,0) = lhs_part_20.read();
        inst_it2_cellmath__63__W0 = temp_212;
}
    void method_213() { 
        sc_uint<26> temp_213 = inst_cellmath__14.read();
        temp_213(0,0) = lhs_part_21.read();
        temp_213(25,1) = lhs_part_22.read();
        inst_cellmath__14 = temp_213;
}
    void method_214() { 
        sc_uint<31> temp_214 = inst_cellmath__40__73.read();
        temp_214(28,0) = lhs_part_23.read();
        inst_cellmath__40__73 = temp_214;
}
    void method_215() { 
        sc_uint<31> temp_215 = inst_cellmath__40__74.read();
        temp_215(28,0) = lhs_part_24.read();
        inst_cellmath__40__74 = temp_215;
}
    void method_216() { 
        sc_uint<31> temp_216 = inst_cellmath__41__77.read();
        temp_216(28,0) = lhs_part_25.read();
        inst_cellmath__41__77 = temp_216;
}
    void method_217() { 
        sc_uint<31> temp_217 = inst_cellmath__41__78.read();
        temp_217(28,0) = lhs_part_26.read();
        inst_cellmath__41__78 = temp_217;
}
    void method_218() { 
        sc_uint<10> temp_218 = inst_cellmath__67.read();
        temp_218(7,0) = lhs_part_27.read();
        inst_cellmath__67 = temp_218;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(cynw_cm_float_div_ieee_E8_M23)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_0);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_1);
        sensitive << cascade_inst_cellmath__0[0];

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_2);
        sensitive << inst_cellmath__0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_3);
        sensitive << a_sign
                  << a_exp
                  << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_4);
        sensitive << b_sign
                  << b_exp
                  << b_man;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_5);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_6);
        sensitive << cascade_inst_cellmath__9[0];

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_7);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_8);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_9);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_10);
        sensitive << cascade_inst_cellmath__11[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_11);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_12);
        sensitive << cascade_inst_cellmath__16[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_13);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_14);
        sensitive << cascade_inst_cellmath__17[0];

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_15);
        sensitive << inst_cellmath__16
                  << inst_cellmath__17;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_16);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_17);
        sensitive << cascade_inst_cellmath__8[0];

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_18);
        sensitive << inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_19);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_20);
        sensitive << inst_cellmath__22__29;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_21);
        sensitive << inst_cellmath__22__27
                  << inst_cellmath__22__28;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_22);
        sensitive << inst_cellmath__23
                  << inst_cellmath__22
                  << inst_cellmath__11;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_23);
        sensitive << inst_cellmath__24
                  << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_24);
        sensitive << inst_lookup0_cellmath__27;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_25);
        sensitive << inst_cellmath__19__21_25_1__0_1
                  << inst_lookup0_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_26);
        sensitive << inst_cellmath__30__31_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_27);
        sensitive << inst_cellmath__30__31_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_28);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_29);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_30);
        sensitive << inst_cellmath__31__37_0_0
                  << inst_lookup0_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_31);
        sensitive << inst_cellmath__31__35_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_32);
        sensitive << inst_cellmath__31__35_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_33);
        sensitive << inst_cellmath__31__35_0_25_1__0_1;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_34);
        sensitive << inst_cellmath__31__35_0_25_1__0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_35);
        sensitive << inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_36);
        sensitive << inst_cellmath__18__20;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_37);
        sensitive << inst_cellmath__16
                  << inst_cellmath__20__23
                  << inst_cellmath__11;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_38);
        sensitive << inst_lookup0_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_39);
        sensitive << inst_cellmath__20
                  << inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_40);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_41);
        sensitive << inst_cellmath__17
                  << inst_cellmath__19__21_24_1_
                  << inst_cellmath__11;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_42);
        sensitive << inst_cellmath__21
                  << inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_43);
        sensitive << inst_cellmath__30__31_1_0
                  << inst_cellmath__30__31_1_1
                  << inst_lookup0_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:2320
    // !!!! amethyst/writers/SystemC.cpp:5953
        SC_METHOD(method_44);
        sensitive << inst_cellmath__34
                  << inst_cellmath__35
                  << inst_cellmath__30;
    // !!!! amethyst/writers/SystemC.cpp:5953
        SC_METHOD(method_45);
        sensitive << inst_cellmath__34
                  << inst_cellmath__35
                  << inst_cellmath__30;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_46);
        sensitive << inst_cellmath__38__W0;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_47);
        sensitive << inst_cellmath__31__35_1_0
                  << inst_cellmath__31__35_1_1
                  << inst_lookup0_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:2320
    // !!!! amethyst/writers/SystemC.cpp:5953
        SC_METHOD(method_48);
        sensitive << inst_cellmath__38__W1
                  << inst_cellmath__39__41
                  << inst_cellmath__31;
    // !!!! amethyst/writers/SystemC.cpp:5953
        SC_METHOD(method_49);
        sensitive << inst_cellmath__38__W1
                  << inst_cellmath__39__41
                  << inst_cellmath__31;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_50);
        sensitive << inst_cellmath__39__W0
                  << inst_cellmath__39__W1;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_51);
        sensitive << inst_it2_cellmath__51
                  << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_52);
        sensitive << inst_it2_lookup1_cellmath__53;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_53);
        sensitive << inst_cellmath__19__21_25_1__0_0
                  << inst_it2_lookup1_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_54);
        sensitive << inst_it2_cellmath__56__57_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_55);
        sensitive << inst_it2_cellmath__56__57_0;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_56);
        sensitive << inst_cellmath__31__37_0_1
                  << inst_it2_lookup1_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_57);
        sensitive << inst_it2_cellmath__57__61_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_58);
        sensitive << inst_it2_cellmath__57__61_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_59);
        sensitive << inst_it2_cellmath__57__61_0_25_1__0_1;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_60);
        sensitive << inst_it2_cellmath__57__61_0_25_1__0_0;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_61);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_62);
        sensitive << cascade_inst_cellmath__112[0];

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_63);
        sensitive << inst_cellmath__112;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_64);
        sensitive << inst_cellmath__16
                  << inst_cellmath__17;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_65);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_66);
        sensitive << cascade_inst_cellmath__44[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_67);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_68);
        sensitive << cascade_inst_cellmath__45[0];

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_69);
        sensitive << inst_cellmath__44
                  << inst_cellmath__45
                  << inst_cellmath__120;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_70);
        sensitive << inst_cellmath__124;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_71);
        sensitive << inst_cellmath__124
                  << inst_cellmath__122;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_72);
        sensitive << inst_cellmath__124
                  << inst_cellmath__122;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_73);
        sensitive << inst_cellmath__125
                  << inst_cellmath__126;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_74);
        sensitive << inst_cellmath__124;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_75);
        sensitive << inst_cellmath__124;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_76);
        sensitive << inst_cellmath__127__104
                  << inst_cellmath__127__103
                  << inst_cellmath__122;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_77);
        sensitive << inst_cellmath__125
                  << inst_cellmath__127
                  << inst_cellmath__120;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_78);
        sensitive << inst_cellmath__129
                  << inst_cellmath__130__105;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_79);
        sensitive << inst_cellmath__129
                  << inst_cellmath__121__106;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_80);
        sensitive << inst_cellmath__134__111_22_1_
                  << inst_cellmath__112;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_81);
        sensitive << accept;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_82);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_83);
        sensitive << cascade_inst_cellmath__13[0];

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_84);
        sensitive << inst_cellmath__13;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_85);
        sensitive << inst_cellmath__13;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_86);
        sensitive << inst_cellmath__12__18
                  << inst_cellmath__12__19;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_87);

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_88);
        sensitive << inst_cellmath__39__W0;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_89);
        sensitive << inst_cellmath__44
                  << inst_cellmath__11;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_90);
        sensitive << inst_cellmath__45
                  << inst_cellmath__11;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_91);
        sensitive << inst_lookup0_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_92);
        sensitive << inst_lookup0_cellmath__29
                  << inst_cellmath__48__46;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_93);
        sensitive << inst_cellmath__48__44
                  << inst_lookup0_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_94);
        sensitive << inst_cellmath__46
                  << inst_cellmath__48__44
                  << inst_lookup0_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_95);
        sensitive << inst_cellmath__47
                  << inst_cellmath__48__44
                  << inst_lookup0_cellmath__29;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_96);
        sensitive << inst_cellmath__42__50
                  << inst_cellmath__42__49
                  << inst_cellmath__32;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_97);
        sensitive << inst_cellmath__48_1_0__1;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_98);
        sensitive << inst_cellmath__46
                  << inst_cellmath__50;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_99);
        sensitive << inst_cellmath__47
                  << inst_cellmath__50;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_100);
        sensitive << inst_lookup0_cellmath__29
                  << inst_cellmath__48__44;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_101);
        sensitive << inst_lookup0_cellmath__29
                  << inst_cellmath__43__56;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_102);
        sensitive << inst_cellmath__43__54
                  << inst_cellmath__43__53
                  << inst_cellmath__43__55;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_103);
        sensitive << inst_it2_cellmath__56__57_1_0
                  << inst_it2_cellmath__56__57_1_1
                  << inst_it2_lookup1_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_104);
        sensitive << inst_it2_cellmath__57__61_1_0
                  << inst_it2_cellmath__57__61_1_1
                  << inst_it2_lookup1_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_105);
        sensitive << inst_it2_lookup1_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_106);
        sensitive << inst_cellmath__36
                  << inst_it2_cellmath__58;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_107);
        sensitive << inst_cellmath__39__W1
                  << inst_it2_cellmath__58;

    // !!!! amethyst/writers/SystemC.cpp:2320
    // !!!! amethyst/writers/SystemC.cpp:5953
        SC_METHOD(method_108);
        sensitive << inst_it2_cellmath__60
                  << inst_it2_cellmath__61
                  << inst_it2_cellmath__56;
    // !!!! amethyst/writers/SystemC.cpp:5953
        SC_METHOD(method_109);
        sensitive << inst_it2_cellmath__60
                  << inst_it2_cellmath__61
                  << inst_it2_cellmath__56;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_110);
        sensitive << inst_it2_cellmath__62__W0;

    // !!!! amethyst/writers/SystemC.cpp:2320
    // !!!! amethyst/writers/SystemC.cpp:5953
        SC_METHOD(method_111);
        sensitive << inst_it2_cellmath__62__W1
                  << inst_it2_cellmath__63__67
                  << inst_it2_cellmath__57;
    // !!!! amethyst/writers/SystemC.cpp:5953
        SC_METHOD(method_112);
        sensitive << inst_it2_cellmath__62__W1
                  << inst_it2_cellmath__63__67
                  << inst_it2_cellmath__57;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_113);

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_114);
        sensitive << inst_it2_cellmath__63__W0;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_115);
        sensitive << inst_it2_lookup1_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_116);
        sensitive << inst_it2_lookup1_cellmath__55
                  << inst_it2_cellmath__64__70;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_117);
        sensitive << inst_it2_cellmath__64__68
                  << inst_it2_lookup1_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_118);
        sensitive << inst_cellmath__42
                  << inst_it2_cellmath__64__68
                  << inst_it2_lookup1_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_119);
        sensitive << inst_cellmath__43
                  << inst_it2_cellmath__64__68
                  << inst_it2_lookup1_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_120);
        sensitive << inst_cellmath__40__74
                  << inst_cellmath__40__73
                  << inst_it2_cellmath__58;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_121);
        sensitive << inst_it2_cellmath__64_1_0__1;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_122);
        sensitive << inst_cellmath__42
                  << inst_it2_cellmath__66;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_123);
        sensitive << inst_cellmath__43
                  << inst_it2_cellmath__66;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_124);
        sensitive << inst_it2_lookup1_cellmath__55
                  << inst_it2_cellmath__64__68;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_125);
        sensitive << inst_it2_lookup1_cellmath__55
                  << inst_cellmath__41__80;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_126);
        sensitive << inst_cellmath__41__78
                  << inst_cellmath__41__77
                  << inst_cellmath__41__79;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_127);
        sensitive << inst_cellmath__8
                  << inst_cellmath__9;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_128);
        sensitive << inst_cellmath__67_tmp_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_129);
        sensitive << inst_cellmath__8
                  << inst_cellmath__9;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_130);
        sensitive << inst_cellmath__68_tmp_1;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_131);
        sensitive << inst_cellmath__68;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_132);
        sensitive << inst_cellmath__68
                  << inst_cellmath__69__82;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_133);
        sensitive << inst_cellmath__68
                  << inst_cellmath__69__81;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_134);
        sensitive << inst_cellmath__68;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_135);
        sensitive << inst_cellmath__68
                  << inst_cellmath__70__83;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_136);
        sensitive << inst_cellmath__68;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_137);
        sensitive << inst_cellmath__68;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_138);
        sensitive << inst_cellmath__69
                  << inst_cellmath__71;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_139);
        sensitive << inst_cellmath__70
                  << inst_cellmath__72;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_140);
        sensitive << inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_141);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_142);
        sensitive << inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_143);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_144);
        sensitive << inst_cellmath__75
                  << inst_cellmath__77;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_145);
        sensitive << inst_cellmath__76
                  << inst_cellmath__78;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_146);
        sensitive << inst_cellmath__75
                  << inst_cellmath__77;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_147);
        sensitive << inst_cellmath__76
                  << inst_cellmath__78;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_148);
        sensitive << inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_149);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_150);
        sensitive << inst_cellmath__83
                  << inst_cellmath__84;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_151);
        sensitive << inst_cellmath__85
                  << inst_cellmath__86;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_152);
        sensitive << inst_cellmath__87__88
                  << inst_cellmath__87__87
                  << inst_cellmath__79
                  << inst_cellmath__80;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_153);
        sensitive << inst_cellmath__83
                  << inst_cellmath__86;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_154);
        sensitive << inst_cellmath__84
                  << inst_cellmath__85;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_155);
        sensitive << inst_cellmath__79
                  << inst_cellmath__80;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_156);
        sensitive << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_157);
        sensitive << inst_cellmath__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_158);
        sensitive << inst_cellmath__8
                  << inst_cellmath__9;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_159);
        sensitive << inst_cellmath__87
                  << inst_cellmath__91;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_160);
        sensitive << inst_cellmath__90_1
                  << inst_cellmath__90_2
                  << inst_cellmath__92__95
                  << inst_cellmath__79_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_161);
        sensitive << inst_cellmath__12;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_162);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_163);
        sensitive << cascade_inst_cellmath__98[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_164);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_165);
        sensitive << cascade_inst_cellmath__100[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_166);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_167);
        sensitive << cascade_inst_cellmath__101[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_168);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_169);
        sensitive << cascade_inst_cellmath__102[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_170);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_171);
        sensitive << cascade_inst_cellmath__103[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_172);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_173);
        sensitive << cascade_inst_cellmath__104[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_174);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_175);
        sensitive << cascade_inst_cellmath__105[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_176);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_177);
        sensitive << cascade_inst_cellmath__106[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_178);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_179);
        sensitive << cascade_inst_cellmath__110[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_180);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_181);
        sensitive << cascade_inst_cellmath__111[0];

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_182);
        sensitive << clk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_183);
        sensitive << cascade_inst_cellmath__109[0];

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_184);
        sensitive << inst_cellmath__103
                  << inst_cellmath__100
                  << inst_cellmath__101;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_185);
        sensitive << inst_cellmath__105
                  << inst_cellmath__103
                  << inst_cellmath__102
                  << inst_cellmath__100
                  << inst_cellmath__101;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_186);
        sensitive << inst_cellmath__106
                  << inst_cellmath__104
                  << inst_cellmath__102
                  << inst_cellmath__100
                  << inst_cellmath__101;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_187);
        sensitive << inst_cellmath__135
                  << inst_cellmath__136
                  << inst_cellmath__122;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_188);
        sensitive << inst_cellmath__137
                  << inst_cellmath__122;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_189);
        sensitive << inst_cellmath__111
                  << inst_cellmath__110
                  << inst_cellmath__133__109
                  << inst_cellmath__137_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_190);
        sensitive << inst_cellmath__137
                  << inst_cellmath__100;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_191);
        sensitive << inst_cellmath__113__115_22_1__0
                  << inst_cellmath__113__115_22_1__1
                  << inst_cellmath__137_1;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_192);
        sensitive << inst_cellmath__98
                  << inst_cellmath__113__113
                  << inst_cellmath__113__115_22_1_;
        SC_METHOD(method_193);
        sensitive << lhs_part_0;
        SC_METHOD(method_194);
        sensitive << lhs_part_1;
        SC_METHOD(method_195);
        sensitive << lhs_part_2;
        SC_METHOD(method_196);
        sensitive << lhs_part_3;
        SC_METHOD(method_197);
        sensitive << lhs_part_4;
        SC_METHOD(method_198);
        sensitive << lhs_part_5;
        SC_METHOD(method_199);
        sensitive << lhs_part_6;
        SC_METHOD(method_200);
        sensitive << lhs_part_7;
        SC_METHOD(method_201);
        sensitive << lhs_part_8;
        SC_METHOD(method_202);
        sensitive << lhs_part_9
                  << lhs_part_10;
        SC_METHOD(method_203);
        sensitive << lhs_part_11;
        SC_METHOD(method_204);
        sensitive << lhs_part_12;
        SC_METHOD(method_205);
        sensitive << lhs_part_13;
        SC_METHOD(method_206);
        sensitive << lhs_part_14;
        SC_METHOD(method_207);
        sensitive << lhs_part_15;
        SC_METHOD(method_208);
        sensitive << lhs_part_16;
        SC_METHOD(method_209);
        sensitive << lhs_part_17;
        SC_METHOD(method_210);
        sensitive << lhs_part_18;
        SC_METHOD(method_211);
        sensitive << lhs_part_19;
        SC_METHOD(method_212);
        sensitive << lhs_part_20;
        SC_METHOD(method_213);
        sensitive << lhs_part_21
                  << lhs_part_22;
        SC_METHOD(method_214);
        sensitive << lhs_part_23;
        SC_METHOD(method_215);
        sensitive << lhs_part_24;
        SC_METHOD(method_216);
        sensitive << lhs_part_25;
        SC_METHOD(method_217);
        sensitive << lhs_part_26;
        SC_METHOD(method_218);
        sensitive << lhs_part_27;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef cynw_cm_float_div_ieee_E8_M23_COMPILED

/* CADENCE  urL2Tw3boh4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




