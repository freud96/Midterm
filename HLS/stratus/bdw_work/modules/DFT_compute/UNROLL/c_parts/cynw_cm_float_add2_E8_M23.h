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
    
    Configured at: 11:18:15 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef cynw_cm_float_add2_E8_M23_COMPILED
#define cynw_cm_float_add2_E8_M23_COMPILED

SC_MODULE(cynw_cm_float_add2_E8_M23) // architecture "behavioural"
{

    // Work around for SystemC 2.2 not having a signature
    // to a concatenation by an int.
#   if SYSTEMC_VERSION > 20060000 && SYSTEMC_VERSION < 20091210
        typedef unsigned long shift_v;
#   else
        typedef unsigned int shift_v;
#   endif

    // Input/Output Ports and Signals:

    sc_in<sc_uint<1> > a_sign;
    sc_in<sc_uint<8> > a_exp;
    sc_in<sc_uint<23> > a_man;
    sc_in<sc_uint<1> > b_sign;
    sc_in<sc_uint<8> > b_exp;
    sc_in<sc_uint<23> > b_man;
    sc_out<sc_uint<32> > x;
    sc_signal<sc_uint<1> > inst_cellmath__43;
    sc_signal<sc_uint<1> > inst_cellmath__44;
    sc_signal<sc_uint<1> > inst_cellmath__45;
    sc_signal<sc_uint<1> > inst_cellmath__46;
    sc_signal<sc_uint<1> > inst_cellmath__47;
    sc_signal<sc_uint<1> > inst_cellmath__48;
    sc_signal<sc_uint<8> > inst_cellmath__51;
    sc_signal<sc_uint<8> > inst_cellmath__52;
    sc_signal<sc_uint<26> > inst_cellmath__55;
    sc_signal<sc_uint<26> > inst_cellmath__56;
    sc_signal<sc_uint<8> > inst_cellmath__57;
    sc_signal<sc_uint<8> > inst_cellmath__58;
    sc_signal<sc_uint<8> > inst_cellmath__59;
    sc_signal<sc_uint<26> > inst_cellmath__60;
    sc_signal<sc_uint<26> > inst_cellmath__61;
    sc_signal<sc_uint<27> > inst_cellmath__64;
    sc_signal<sc_uint<27> > inst_cellmath__65;
    sc_signal<sc_uint<27> > inst_cellmath__66;
    sc_signal<sc_uint<1> > inst_cellmath__67;
    sc_signal<sc_uint<26> > inst_cellmath__68;
    sc_signal<sc_uint<6> > inst_cellmath__69;
    sc_signal<sc_uint<26> > inst_cellmath__71;
    sc_signal<sc_uint<1> > inst_cellmath__77;
    sc_signal<sc_uint<1> > inst_cellmath__78;
    sc_signal<sc_uint<1> > inst_cellmath__79;
    sc_signal<sc_uint<1> > inst_cellmath__80;
    sc_signal<sc_uint<1> > inst_cellmath__81;
    sc_signal<sc_uint<8> > inst_cellmath__83;
    sc_signal<sc_uint<1> > inst_cellmath__86;
    sc_signal<sc_uint<1> > inst_cellmath__87;
    sc_signal<sc_uint<1> > inst_cellmath__88;
    sc_signal<sc_uint<8> > inst_cellmath__89;
    sc_signal<sc_uint<23> > inst_cellmath__90;
    sc_signal<sc_uint<32> > inst_cellmath__100;
    sc_signal<sc_uint<1> > inst_cellmath__45__5;
    sc_signal<sc_uint<1> > inst_cellmath__45__6;
    sc_signal<sc_uint<1> > inst_cellmath__46__7;
    sc_signal<sc_uint<1> > inst_cellmath__46__8;
    sc_signal<sc_uint<26> > inst_cellmath__60__28;
    sc_signal<sc_uint<26> > inst_cellmath__61__30;
    sc_signal<sc_uint<1> > inst_cellmath__67__35;
    sc_signal<sc_uint<1> > inst_cellmath__67__36;
    sc_signal<sc_uint<28> > inst_cellmath__68__38;
    sc_signal<sc_uint<1> > inst_cellmath__77__39;
    sc_signal<sc_uint<1> > inst_cellmath__78__40;
    sc_signal<sc_uint<1> > inst_cellmath__79__41;
    sc_signal<sc_uint<1> > inst_cellmath__79__42;
    sc_signal<sc_uint<1> > inst_cellmath__80__43;
    sc_signal<sc_uint<1> > inst_cellmath__86__56;
    sc_signal<sc_uint<1> > inst_cellmath__86__55;
    sc_signal<sc_uint<1> > inst_cellmath__87__58;
    sc_signal<sc_uint<1> > inst_cellmath__87__57;
    sc_signal<sc_uint<27> > inst_cellmath__64__32_0;
    sc_signal<sc_uint<27> > inst_cellmath__65__34_0;
    sc_signal<sc_uint<10> > inst_cellmath__74_0;
    sc_signal<sc_uint<3> > inst_cellmath__43_0;
    sc_signal<sc_uint<3> > inst_cellmath__44_0;
    sc_signal<sc_uint<3> > inst_cellmath__79_0;
    sc_signal<sc_uint<3> > inst_cellmath__79_2;
    sc_signal<sc_uint<5> > inst_cellmath__79_3;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__46__7
    void method_0() {
        sc_uint<1> temp_0;

                    sc_uint<13> inst_cellmath__46__7_tmp_0 = 
            -((sc_uint<13>)(b_exp.read()))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        temp_0 = (((sc_uint<1>)inst_cellmath__46__7_tmp_0.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__46__7 = temp_0;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__46__8
    void method_1() {
        sc_uint<1> temp_1;

                    sc_uint<27> inst_cellmath__46__8_tmp_1 = 
            -((sc_uint<27>)(b_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_1 = (((sc_uint<1>)inst_cellmath__46__8_tmp_1.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__46__8 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__46
    void method_2() {
        sc_uint<1> temp_2;
        temp_2 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46__7.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46__8.read())))
        ;
        inst_cellmath__46 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__45__5
    void method_3() {
        sc_uint<1> temp_3;

                    sc_uint<13> inst_cellmath__45__5_tmp_2 = 
            -((sc_uint<13>)(a_exp.read()))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        temp_3 = (((sc_uint<1>)inst_cellmath__45__5_tmp_2.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__45__5 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__45__6
    void method_4() {
        sc_uint<1> temp_4;

                    sc_uint<27> inst_cellmath__45__6_tmp_3 = 
            -((sc_uint<27>)(a_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_4 = (((sc_uint<1>)inst_cellmath__45__6_tmp_3.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__45__6 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__45
    void method_5() {
        sc_uint<1> temp_5;
        temp_5 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45__5.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45__6.read())))
        ;
        inst_cellmath__45 = temp_5;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__79__42
    void method_6() {
        sc_uint<1> temp_6;
        temp_6 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(b_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45.read())))
        ;
        inst_cellmath__79__42 = temp_6;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__79__41
    void method_7() {
        sc_uint<1> temp_7;
        temp_7 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46.read())))
            &((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45.read())))
        ;
        inst_cellmath__79__41 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__47
    void method_8() {
        sc_uint<1> temp_8;
        temp_8 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45__5.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__45__6.read())))
        ;
        inst_cellmath__47 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__48
    void method_9() {
        sc_uint<1> temp_9;
        temp_9 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46__7.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__46__8.read())))
        ;
        inst_cellmath__48 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__79
    void method_10() {
        sc_uint<1> temp_10;
        temp_10 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__79__42.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__79__41.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__47.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read())))
        ;
        inst_cellmath__79 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__43
    void method_11() {
        sc_uint<1> temp_11;

                    sc_uint<12> inst_cellmath__43_tmp_4 = 
            -((sc_uint<12>)(a_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_11 = (((sc_uint<1>)inst_cellmath__43_tmp_4.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__43 = temp_11;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__55
    void method_12() {
        sc_uint<26> temp_12;
        temp_12 = 
            (sc_uint<2>("0bus01"),a_man.read(),sc_uint<1>(0))
        ;
        inst_cellmath__55 = temp_12;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__44
    void method_13() {
        sc_uint<1> temp_13;

                    sc_uint<12> inst_cellmath__44_tmp_5 = 
            -((sc_uint<12>)(b_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_13 = (((sc_uint<1>)inst_cellmath__44_tmp_5.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__44 = temp_13;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__44_0
    void method_14() {
        sc_uint<3> temp_14;
        temp_14 = 
            (inst_cellmath__44.read(),inst_cellmath__46.read(),inst_cellmath__48.read())
        ;
        inst_cellmath__44_0 = temp_14;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__52
    void method_15() {
        sc_uint<8> temp_15;
        temp_15 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__44_0.read()) == sc_uint<3>("0bus000")) & ((sc_uint<8>)(b_exp.read())) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__44_0.read()) == sc_uint<3>("0bus001")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__44_0.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        inst_cellmath__52 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__43_0
    void method_16() {
        sc_uint<3> temp_16;
        temp_16 = 
            (inst_cellmath__43.read(),inst_cellmath__45.read(),inst_cellmath__47.read())
        ;
        inst_cellmath__43_0 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__51
    void method_17() {
        sc_uint<8> temp_17;
        temp_17 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__43_0.read()) == sc_uint<3>("0bus000")) & ((sc_uint<8>)(a_exp.read())) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__43_0.read()) == sc_uint<3>("0bus001")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__43_0.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        inst_cellmath__51 = temp_17;
    }

    // !!!! amethyst/writers/SystemC.cpp:3787
    // !!!! amethyst/writers/SystemC.cpp:3790
    // Compare anchor: inst_cellmath__57
    void method_18() {
        sc_uint<8> temp_18;

            sc_uint<8> inst_cellmath__52_tmp_6 = (sc_uint<8>)(sc_uint<8>)(inst_cellmath__52.read());
sc_uint<8> inst_cellmath__52_tmp_7 = (sc_uint<8>)inst_cellmath__52_tmp_6 ;
sc_uint<8> inst_cellmath__51_tmp_8 = (sc_uint<8>)(sc_uint<8>)(inst_cellmath__51.read());
sc_uint<8> inst_cellmath__51_tmp_9 = (sc_uint<8>)inst_cellmath__51_tmp_8 > inst_cellmath__52_tmp_7 ? inst_cellmath__51_tmp_8 : inst_cellmath__52_tmp_7;
temp_18 = (sc_uint<8>)((sc_uint<8>)(inst_cellmath__51_tmp_9))
        ;
        inst_cellmath__57 = temp_18;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__58
    void method_19() {
        sc_uint<8> temp_19;
        temp_19 = 
            
            +((sc_uint<8>)(inst_cellmath__57.read()))
            -((sc_uint<8>)(inst_cellmath__51.read()))
        ;
        inst_cellmath__58 = temp_19;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: inst_cellmath__60__28
    void method_20() {
        sc_uint<26> temp_20;
        temp_20 = 
            (sc_biguint<89>)((sc_biguint<26>)inst_cellmath__55.read()) >> ((sc_uint<1>)(inst_cellmath__58.read()(7,5).or_reduce()), inst_cellmath__58.read()(4,0)).to_uint64()
        ;
        inst_cellmath__60__28 = temp_20;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__60
    void method_21() {
        sc_uint<26> temp_21;
        temp_21 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__43.read()) == sc_uint<1>("0bus0")) & ((sc_uint<26>)(inst_cellmath__60__28.read()))
        ;
        inst_cellmath__60 = temp_21;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__64__32_0
    void method_22() {
        sc_uint<27> temp_22;
        temp_22 = 
            
            -((sc_uint<27>)(inst_cellmath__60.read()))
        ;
        inst_cellmath__64__32_0 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__64
    void method_23() {
        sc_uint<27> temp_23;
        temp_23 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_sign.read()) == sc_uint<1>("0bus0")) & ((sc_uint<27>)(inst_cellmath__60.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(a_sign.read()) == sc_uint<1>("0bus1")) & ((sc_uint<27>)(inst_cellmath__64__32_0.read()))
        ;
        inst_cellmath__64 = temp_23;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__56
    void method_24() {
        sc_uint<26> temp_24;
        temp_24 = 
            (sc_uint<2>("0bus01"),b_man.read(),sc_uint<1>(0))
        ;
        inst_cellmath__56 = temp_24;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__59
    void method_25() {
        sc_uint<8> temp_25;
        temp_25 = 
            
            +((sc_uint<8>)(inst_cellmath__57.read()))
            -((sc_uint<8>)(inst_cellmath__52.read()))
        ;
        inst_cellmath__59 = temp_25;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: inst_cellmath__61__30
    void method_26() {
        sc_uint<26> temp_26;
        temp_26 = 
            (sc_biguint<89>)((sc_biguint<26>)inst_cellmath__56.read()) >> ((sc_uint<1>)(inst_cellmath__59.read()(7,5).or_reduce()), inst_cellmath__59.read()(4,0)).to_uint64()
        ;
        inst_cellmath__61__30 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__61
    void method_27() {
        sc_uint<26> temp_27;
        temp_27 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__44.read()) == sc_uint<1>("0bus0")) & ((sc_uint<26>)(inst_cellmath__61__30.read()))
        ;
        inst_cellmath__61 = temp_27;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__65__34_0
    void method_28() {
        sc_uint<27> temp_28;
        temp_28 = 
            
            -((sc_uint<27>)(inst_cellmath__61.read()))
        ;
        inst_cellmath__65__34_0 = temp_28;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__65
    void method_29() {
        sc_uint<27> temp_29;
        temp_29 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(b_sign.read()) == sc_uint<1>("0bus0")) & ((sc_uint<27>)(inst_cellmath__61.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(b_sign.read()) == sc_uint<1>("0bus1")) & ((sc_uint<27>)(inst_cellmath__65__34_0.read()))
        ;
        inst_cellmath__65 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__66
    void method_30() {
        sc_uint<27> temp_30;
        temp_30 = 
            
            +((sc_uint<27>)(inst_cellmath__64.read()))
            +((sc_uint<27>)(inst_cellmath__65.read()))
        ;
        inst_cellmath__66 = temp_30;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__67__35
    void method_31() {
        sc_uint<1> temp_31;

                    sc_uint<31> inst_cellmath__67__35_tmp_10 = 
            -((sc_uint<31>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__66.read()[26])), inst_cellmath__66.read() )))
            -((sc_uint<31>)(sc_uint<2>("0b01")));
        temp_31 = (((sc_uint<1>)(inst_cellmath__67__35_tmp_10[30]))==((sc_uint<1>)0))
        ;
        inst_cellmath__67__35 = temp_31;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__67__36
    void method_32() {
        sc_uint<1> temp_32;
        temp_32 = 
            
            ((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__44.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__43.read())))
            &((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
        ;
        inst_cellmath__67__36 = temp_32;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__67
    void method_33() {
        sc_uint<1> temp_33;
        temp_33 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__67__35.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__67__36.read())))
        ;
        inst_cellmath__67 = temp_33;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__88
    void method_34() {
        sc_uint<1> temp_34;
        temp_34 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__79.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__67.read()))
        ;
        inst_cellmath__88 = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__68__38(25,0)
    // part assign: lhs_part_58(1): inst_cellmath__68__38(25,0)
    sc_signal<sc_uint<26> > lhs_part_58;
    void method_35() {
        lhs_part_58 = sc_uint<26>(
        
            -((sc_uint<26>)(inst_cellmath__66.read()(25,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__68
    void method_36() {
        sc_uint<26> temp_36;
        temp_36 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__67.read()) == sc_uint<1>("0bus0")) & ((sc_uint<26>)(inst_cellmath__66.read()(25,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__67.read()) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(inst_cellmath__68__38.read()(25,0)))
        ;
        inst_cellmath__68 = temp_36;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__69
    void method_37() {
        sc_uint<6> temp_37;
        temp_37 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__68.read()(25,25)) == sc_uint<1>("0bus1")) & ((sc_uint<6>)(sc_uint<6>("0bus000000"))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__68.read()(25,24)) == sc_uint<2>("0bus01")) & ((sc_uint<6>)(sc_uint<6>("0bus000001"))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__68.read()(25,23)) == sc_uint<3>("0bus001")) & ((sc_uint<6>)(sc_uint<6>("0bus000010"))) |
        -(int)((sc_uint<4>)(sc_uint<4>)(inst_cellmath__68.read()(25,22)) == sc_uint<4>("0bus0001")) & ((sc_uint<6>)(sc_uint<6>("0bus000011"))) |
        -(int)((sc_uint<5>)(sc_uint<5>)(inst_cellmath__68.read()(25,21)) == sc_uint<5>("0bus00001")) & ((sc_uint<6>)(sc_uint<6>("0bus000100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__68.read()(25,20)) == sc_uint<6>("0bus000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_cellmath__68.read()(25,19)) == sc_uint<7>("0bus0000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000110"))) |
        -(int)((sc_uint<8>)(sc_uint<8>)(inst_cellmath__68.read()(25,18)) == sc_uint<8>("0bus00000001")) & ((sc_uint<6>)(sc_uint<6>("0bus000111"))) |
        -(int)((sc_uint<9>)(sc_uint<9>)(inst_cellmath__68.read()(25,17)) == sc_uint<9>("0bus000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001000"))) |
        -(int)((sc_uint<10>)(sc_uint<10>)(inst_cellmath__68.read()(25,16)) == sc_uint<10>("0bus0000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001001"))) |
        -(int)((sc_uint<11>)(sc_uint<11>)(inst_cellmath__68.read()(25,15)) == sc_uint<11>("0bus00000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001010"))) |
        -(int)((sc_uint<12>)(sc_uint<12>)(inst_cellmath__68.read()(25,14)) == sc_uint<12>("0bus000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001011"))) |
        -(int)((sc_uint<13>)(sc_uint<13>)(inst_cellmath__68.read()(25,13)) == sc_uint<13>("0bus0000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001100"))) |
        -(int)((sc_uint<14>)(sc_uint<14>)(inst_cellmath__68.read()(25,12)) == sc_uint<14>("0bus00000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001101"))) |
        -(int)((sc_uint<15>)(sc_uint<15>)(inst_cellmath__68.read()(25,11)) == sc_uint<15>("0bus000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001110"))) |
        -(int)((sc_uint<16>)(sc_uint<16>)(inst_cellmath__68.read()(25,10)) == sc_uint<16>("0bus0000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus001111"))) |
        -(int)((sc_uint<17>)(sc_uint<17>)(inst_cellmath__68.read()(25,9)) == sc_uint<17>("0bus00000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010000"))) |
        -(int)((sc_uint<18>)(sc_uint<18>)(inst_cellmath__68.read()(25,8)) == sc_uint<18>("0bus000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010001"))) |
        -(int)((sc_uint<19>)(sc_uint<19>)(inst_cellmath__68.read()(25,7)) == sc_uint<19>("0bus0000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010010"))) |
        -(int)((sc_uint<20>)(sc_uint<20>)(inst_cellmath__68.read()(25,6)) == sc_uint<20>("0bus00000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010011"))) |
        -(int)((sc_uint<21>)(sc_uint<21>)(inst_cellmath__68.read()(25,5)) == sc_uint<21>("0bus000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010100"))) |
        -(int)((sc_uint<22>)(sc_uint<22>)(inst_cellmath__68.read()(25,4)) == sc_uint<22>("0bus0000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010101"))) |
        -(int)((sc_uint<23>)(sc_uint<23>)(inst_cellmath__68.read()(25,3)) == sc_uint<23>("0bus00000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010110"))) |
        -(int)((sc_uint<24>)(sc_uint<24>)(inst_cellmath__68.read()(25,2)) == sc_uint<24>("0bus000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus010111"))) |
        -(int)((sc_uint<25>)(sc_uint<25>)(inst_cellmath__68.read()(25,1)) == sc_uint<25>("0bus0000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus011000"))) |
        -(int)((sc_uint<26>)(sc_uint<26>)(inst_cellmath__68.read()) == sc_uint<26>("0bus00000000000000000000000001")) & ((sc_uint<6>)(sc_uint<6>("0bus011001"))) |
        -(int)((sc_uint<26>)(sc_uint<26>)(inst_cellmath__68.read()) == sc_uint<26>("0bus00000000000000000000000000")) & ((sc_uint<6>)(sc_uint<6>("0bus100000")))
        ;
        inst_cellmath__69 = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > inst_cellmath__74_0_tmp_11;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__74_0_tmp_11
    void method_38() {
        sc_uint<10> temp_38;
        temp_38 = 
            
            -((sc_uint<10>)(inst_cellmath__69.read()(4,0)))
            +((sc_uint<10>)(inst_cellmath__57.read()))
        ;
        inst_cellmath__74_0_tmp_11 = temp_38;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__74_0
    void method_39() {
        sc_uint<10> temp_39;
        temp_39 = 
            inst_cellmath__74_0_tmp_11.read()
            +((sc_uint<10>)(sc_uint<2>("0bus01")))
        ;
        inst_cellmath__74_0 = temp_39;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__77__39
    void method_40() {
        sc_uint<1> temp_40;

                    sc_uint<14> inst_cellmath__77__39_tmp_12 = 
            -((sc_uint<14>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__74_0.read()[9])), inst_cellmath__74_0.read() )))
            +((sc_uint<14>)(sc_uint<9>("0bus011111110")));
        temp_40 = (((sc_uint<1>)(inst_cellmath__77__39_tmp_12[13]))==((sc_uint<1>)1))
        ;
        inst_cellmath__77__39 = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__77
    void method_41() {
        sc_uint<1> temp_41;
        temp_41 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__69.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__77__39.read())))
        ;
        inst_cellmath__77 = temp_41;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__80__43
    void method_42() {
        sc_uint<1> temp_42;
        temp_42 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__77.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__45.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__46.read())))
        ;
        inst_cellmath__80__43 = temp_42;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__80
    void method_43() {
        sc_uint<1> temp_43;
        temp_43 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__80__43.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79.read())))
        ;
        inst_cellmath__80 = temp_43;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__78__40
    void method_44() {
        sc_uint<1> temp_44;

                    sc_uint<14> inst_cellmath__78__40_tmp_13 = 
            +((sc_uint<14>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__74_0.read()[9])), inst_cellmath__74_0.read() )))
            -((sc_uint<14>)(sc_uint<2>("0b01")));
        temp_44 = (((sc_uint<1>)(inst_cellmath__78__40_tmp_13[13]))==((sc_uint<1>)1))
        ;
        inst_cellmath__78__40 = temp_44;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__78
    void method_45() {
        sc_uint<1> temp_45;
        temp_45 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__78__40.read())))
        ;
        inst_cellmath__78 = temp_45;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__81
    void method_46() {
        sc_uint<1> temp_46;
        temp_46 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__80.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__78.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79.read())))
        ;
        inst_cellmath__81 = temp_46;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__79_0
    void method_47() {
        sc_uint<3> temp_47;
        temp_47 = 
            (inst_cellmath__79.read(),inst_cellmath__80.read(),inst_cellmath__81.read())
        ;
        inst_cellmath__79_0 = temp_47;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__83
    void method_48() {
        sc_uint<8> temp_48;
        temp_48 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__79_0.read()) == sc_uint<3>("0bus000")) & ((sc_uint<8>)(inst_cellmath__74_0.read()(7,0))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__79_0.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__79_0.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        inst_cellmath__83 = temp_48;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__86__56
    void method_49() {
        sc_uint<1> temp_49;

                    sc_uint<15> inst_cellmath__86__56_tmp_14 = 
            +((sc_uint<15>)(inst_cellmath__83.read()))
            -((sc_uint<15>)(sc_uint<11>("0b00011111111")));
        temp_49 = (((sc_uint<1>)(inst_cellmath__86__56_tmp_14[14]))==((sc_uint<1>)0))
        ;
        inst_cellmath__86__56 = temp_49;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__86__55
    void method_50() {
        sc_uint<1> temp_50;
        temp_50 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__80.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__86__56.read())))
        ;
        inst_cellmath__86__55 = temp_50;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__86
    void method_51() {
        sc_uint<1> temp_51;
        temp_51 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__86__55.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__81.read())))
        ;
        inst_cellmath__86 = temp_51;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__87__58
    void method_52() {
        sc_uint<1> temp_52;

                    sc_uint<12> inst_cellmath__87__58_tmp_15 = 
            +((sc_uint<12>)(inst_cellmath__83.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_52 = (((sc_uint<1>)(inst_cellmath__87__58_tmp_15[11]))==((sc_uint<1>)1))
        ;
        inst_cellmath__87__58 = temp_52;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__87__57
    void method_53() {
        sc_uint<1> temp_53;
        temp_53 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__81.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87__58.read())))
        ;
        inst_cellmath__87__57 = temp_53;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__87
    void method_54() {
        sc_uint<1> temp_54;
        temp_54 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__87__57.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__80.read())))
        ;
        inst_cellmath__87 = temp_54;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__79_2
    void method_55() {
        sc_uint<3> temp_55;
        temp_55 = 
            (inst_cellmath__79.read(),inst_cellmath__86.read(),inst_cellmath__87.read())
        ;
        inst_cellmath__79_2 = temp_55;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__89
    void method_56() {
        sc_uint<8> temp_56;
        temp_56 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__79_2.read()) == sc_uint<3>("0bus000")) & ((sc_uint<8>)(inst_cellmath__83.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__79_2.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__79_2.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        inst_cellmath__89 = temp_56;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__79_3
    void method_57() {
        sc_uint<5> temp_57;
        temp_57 = 
            (inst_cellmath__79.read(),inst_cellmath__86.read(),inst_cellmath__87.read(),inst_cellmath__80.read(),inst_cellmath__81.read())
        ;
        inst_cellmath__79_3 = temp_57;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: inst_cellmath__71(24,0)
    // part assign: lhs_part_59(1): inst_cellmath__71(24,0)
    sc_signal<sc_uint<25> > lhs_part_59;
    void method_58() {
        lhs_part_59 = sc_uint<25>(
         ((shift_v)(((sc_uint<5>)(inst_cellmath__69.read()(4,0))).to_long()) >= 25 ? (sc_uint<25>)(0) : (sc_uint<25>)((sc_uint<25>)(inst_cellmath__68.read()) << (shift_v)(((sc_uint<5>)(inst_cellmath__69.read()(4,0))).to_long())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__90
    void method_59() {
        sc_uint<23> temp_59;
        temp_59 = 
            
        -(int)((sc_uint<5>)(sc_uint<5>)(inst_cellmath__79_3.read()) == sc_uint<5>("0bus00000")) & ((sc_uint<23>)(inst_cellmath__71.read()(24,2))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__79_3.read()(4,4)) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(sc_uint<23>("0bus11111111111111111111111")))
        ;
        inst_cellmath__90 = temp_59;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__100
    void method_60() {
        sc_uint<32> temp_60;
        temp_60 = 
            (inst_cellmath__88.read(),inst_cellmath__89.read(),inst_cellmath__90.read())
        ;
        inst_cellmath__100 = temp_60;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x
    void method_61() {
        sc_uint<32> temp_61;
        temp_61 = 
            (sc_uint<32>)(inst_cellmath__100.read())
        ;
        x = temp_61;
    }
    void method_62() { 
        sc_uint<28> temp_62 = inst_cellmath__68__38.read();
        temp_62(25,0) = lhs_part_58.read();
        inst_cellmath__68__38 = temp_62;
}
    void method_63() { 
        sc_uint<26> temp_63 = inst_cellmath__71.read();
        temp_63(24,0) = lhs_part_59.read();
        inst_cellmath__71 = temp_63;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(cynw_cm_float_add2_E8_M23)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_0);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_1);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_2);
        sensitive << inst_cellmath__46__7
                  << inst_cellmath__46__8;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_3);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_4);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_5);
        sensitive << inst_cellmath__45__5
                  << inst_cellmath__45__6;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_6);
        sensitive << inst_cellmath__46
                  << b_sign
                  << a_sign
                  << inst_cellmath__45;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_7);
        sensitive << inst_cellmath__46
                  << b_sign
                  << a_sign
                  << inst_cellmath__45;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_8);
        sensitive << inst_cellmath__45__5
                  << inst_cellmath__45__6;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_9);
        sensitive << inst_cellmath__46__7
                  << inst_cellmath__46__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_10);
        sensitive << inst_cellmath__79__42
                  << inst_cellmath__79__41
                  << inst_cellmath__47
                  << inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_11);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_12);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_13);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_14);
        sensitive << inst_cellmath__44
                  << inst_cellmath__46
                  << inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_15);
        sensitive << b_exp
                  << inst_cellmath__44_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_16);
        sensitive << inst_cellmath__43
                  << inst_cellmath__45
                  << inst_cellmath__47;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_17);
        sensitive << a_exp
                  << inst_cellmath__43_0;

    // !!!! amethyst/writers/SystemC.cpp:3787
    // !!!! amethyst/writers/SystemC.cpp:3790
        SC_METHOD(method_18);
        sensitive << inst_cellmath__52
                  << inst_cellmath__51;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_19);
        sensitive << inst_cellmath__57
                  << inst_cellmath__51;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_20);
        sensitive << inst_cellmath__55
                  << inst_cellmath__58;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_21);
        sensitive << inst_cellmath__60__28
                  << inst_cellmath__43;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_22);
        sensitive << inst_cellmath__60;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_23);
        sensitive << inst_cellmath__60
                  << inst_cellmath__64__32_0
                  << a_sign;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_24);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_25);
        sensitive << inst_cellmath__57
                  << inst_cellmath__52;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_26);
        sensitive << inst_cellmath__56
                  << inst_cellmath__59;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_27);
        sensitive << inst_cellmath__61__30
                  << inst_cellmath__44;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_28);
        sensitive << inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_29);
        sensitive << inst_cellmath__61
                  << inst_cellmath__65__34_0
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_30);
        sensitive << inst_cellmath__64
                  << inst_cellmath__65;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_31);
        sensitive << inst_cellmath__66;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_32);
        sensitive << b_sign
                  << inst_cellmath__44
                  << inst_cellmath__43
                  << a_sign;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_33);
        sensitive << inst_cellmath__67__35
                  << inst_cellmath__67__36;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_34);
        sensitive << inst_cellmath__67
                  << inst_cellmath__79;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_35);
        sensitive << inst_cellmath__66;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_36);
        sensitive << inst_cellmath__66
                  << inst_cellmath__68__38
                  << inst_cellmath__67;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_37);
        sensitive << inst_cellmath__68;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_38);
        sensitive << inst_cellmath__69
                  << inst_cellmath__57;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_39);
        sensitive << inst_cellmath__74_0_tmp_11;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_40);
        sensitive << inst_cellmath__74_0;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_41);
        sensitive << inst_cellmath__69
                  << inst_cellmath__77__39;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_42);
        sensitive << inst_cellmath__77
                  << inst_cellmath__45
                  << inst_cellmath__46;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_43);
        sensitive << inst_cellmath__80__43
                  << inst_cellmath__79;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_44);
        sensitive << inst_cellmath__74_0;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_45);
        sensitive << inst_cellmath__69
                  << inst_cellmath__78__40;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_46);
        sensitive << inst_cellmath__80
                  << inst_cellmath__78
                  << inst_cellmath__79;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_47);
        sensitive << inst_cellmath__79
                  << inst_cellmath__80
                  << inst_cellmath__81;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_48);
        sensitive << inst_cellmath__74_0
                  << inst_cellmath__79_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_49);
        sensitive << inst_cellmath__83;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_50);
        sensitive << inst_cellmath__80
                  << inst_cellmath__86__56;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_51);
        sensitive << inst_cellmath__86__55
                  << inst_cellmath__79
                  << inst_cellmath__81;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_52);
        sensitive << inst_cellmath__83;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_53);
        sensitive << inst_cellmath__81
                  << inst_cellmath__87__58;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_54);
        sensitive << inst_cellmath__87__57
                  << inst_cellmath__79
                  << inst_cellmath__80;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_55);
        sensitive << inst_cellmath__79
                  << inst_cellmath__86
                  << inst_cellmath__87;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_56);
        sensitive << inst_cellmath__83
                  << inst_cellmath__79_2;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_57);
        sensitive << inst_cellmath__79
                  << inst_cellmath__86
                  << inst_cellmath__87
                  << inst_cellmath__80
                  << inst_cellmath__81;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_58);
        sensitive << inst_cellmath__68
                  << inst_cellmath__69;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_59);
        sensitive << inst_cellmath__71
                  << inst_cellmath__79_3;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_60);
        sensitive << inst_cellmath__88
                  << inst_cellmath__89
                  << inst_cellmath__90;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_61);
        sensitive << inst_cellmath__100;
        SC_METHOD(method_62);
        sensitive << lhs_part_58;
        SC_METHOD(method_63);
        sensitive << lhs_part_59;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef cynw_cm_float_add2_E8_M23_COMPILED

/* CADENCE  uLL2QwDaow== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/





