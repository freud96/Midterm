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
    
    Configured at: 11:19:42 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef DFT_compute_cynw_cm_float_add2_E8_M23_2_COMPILED
#define DFT_compute_cynw_cm_float_add2_E8_M23_2_COMPILED

SC_MODULE(DFT_compute_cynw_cm_float_add2_E8_M23_2) // architecture "behavioural"
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
    sc_in<bool> aclk;
    sc_in<sc_uint<1> > astall;
    sc_signal<sc_uint<1> > bdw_enable;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__47;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__48;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__51;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__52;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__58;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__59;
    sc_signal<sc_uint<26> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60;
    sc_signal<sc_uint<26> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61;
    sc_signal<sc_uint<27> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64;
    sc_signal<sc_uint<27> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65;
    sc_signal<sc_uint<27> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67;
    sc_signal<sc_uint<26> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68;
    sc_signal<sc_uint<6> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69;
    sc_signal<sc_uint<26> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__71;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__83;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__88;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__89;
    sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__90;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__5;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__6;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__7;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__8;
    sc_signal<sc_uint<26> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60__28;
    sc_signal<sc_uint<26> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61__30;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__35;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__36;
    sc_signal<sc_uint<28> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68__38;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77__39;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78__40;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__41;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__42;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80__43;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__56;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__55;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__58;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__57;
    sc_signal<sc_uint<27> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64__32_0;
    sc_signal<sc_uint<27> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65__34_0;
    sc_signal<sc_uint<10> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0;
    sc_signal<sc_uint<13> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4;
    sc_signal<sc_uint<13> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21;
    sc_signal<sc_uint<9> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n83;
    sc_signal<sc_uint<9> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n93;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n103;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n123;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n249;
    sc_signal<sc_uint<31> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n395;
    sc_signal<sc_uint<14> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n602;
    sc_signal<sc_uint<15> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n620;
    sc_signal<sc_uint<12> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n642;
    sc_signal<sc_uint<3> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_27;
    sc_signal<sc_uint<9> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28;
    sc_signal<sc_uint<26> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_29;
    sc_signal<sc_uint<6> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_30;
    sc_signal<sc_uint<3> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_31;
    sc_signal<sc_uint<26> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_32;
    sc_signal<sc_uint<6> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_33;
    sc_signal<sc_uint<5> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_34;
    sc_signal<sc_uint<3> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_35;
    sc_signal<sc_uint<3> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_36;
    sc_signal<sc_uint<32> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_37;
    sc_signal<sc_uint<9> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4_0;
    sc_signal<sc_uint<9> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21_0;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4_0
    void method_0() {
        sc_uint<9> temp_0;
        temp_0 = 
            
            +((sc_uint<9>)(b_exp.read()))
            -((sc_uint<9>)(sc_uint<2>("0b01")))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4_0 = temp_0;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4
    void method_1() {
        sc_uint<13> temp_1;
        temp_1 = 
            (sc_uint<13>)(( ((sc_uint<4>)(sc_int<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4_0.read()[8])), DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4_0.read() ))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21_0
    void method_2() {
        sc_uint<9> temp_2;
        temp_2 = 
            
            +((sc_uint<9>)(a_exp.read()))
            -((sc_uint<9>)(sc_uint<2>("0b01")))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21_0 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21
    void method_3() {
        sc_uint<13> temp_3;
        temp_3 = 
            (sc_uint<13>)(( ((sc_uint<4>)(sc_int<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21_0.read()[8])), DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21_0.read() ))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44
    void method_4() {
        sc_uint<1> temp_4;

                    sc_uint<12> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44_tmp_0 = 
            +((sc_uint<12>)(b_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_4 = (((sc_uint<1>)DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44_tmp_0.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__7
    void method_5() {
        sc_uint<1> temp_5;

                    sc_uint<17> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__7_tmp_1 = 
            +((sc_uint<17>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4.read()))
            -((sc_uint<17>)(sc_uint<11>("0b00011111111")));
        temp_5 = (((sc_uint<1>)DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__7_tmp_1.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__7 = temp_5;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__8
    void method_6() {
        sc_uint<1> temp_6;

                    sc_uint<27> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__8_tmp_2 = 
            +((sc_uint<27>)(b_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_6 = (((sc_uint<1>)DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__8_tmp_2.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__8 = temp_6;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46
    void method_7() {
        sc_uint<1> temp_7;
        temp_7 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__7.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__8.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__48
    void method_8() {
        sc_uint<1> temp_8;
        temp_8 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__7.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__8.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__48 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_27
    void method_9() {
        sc_uint<3> temp_9;
        temp_9 = 
            (DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__48.read())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_27 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43
    void method_10() {
        sc_uint<1> temp_10;

                    sc_uint<12> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43_tmp_3 = 
            +((sc_uint<12>)(a_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_10 = (((sc_uint<1>)DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43_tmp_3.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__5
    void method_11() {
        sc_uint<1> temp_11;

                    sc_uint<17> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__5_tmp_4 = 
            +((sc_uint<17>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21.read()))
            -((sc_uint<17>)(sc_uint<11>("0b00011111111")));
        temp_11 = (((sc_uint<1>)DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__5_tmp_4.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__5 = temp_11;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__6
    void method_12() {
        sc_uint<1> temp_12;

                    sc_uint<27> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__6_tmp_5 = 
            +((sc_uint<27>)(a_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_12 = (((sc_uint<1>)DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__6_tmp_5.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__6 = temp_12;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45
    void method_13() {
        sc_uint<1> temp_13;
        temp_13 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__5.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__6.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45 = temp_13;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__47
    void method_14() {
        sc_uint<1> temp_14;
        temp_14 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__5.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__6.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__47 = temp_14;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_31
    void method_15() {
        sc_uint<3> temp_15;
        temp_15 = 
            (DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__47.read())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_31 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__51
    void method_16() {
        sc_uint<8> temp_16;
        temp_16 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_31.read()) == sc_uint<3>("0bus000")) & ((sc_uint<8>)(a_exp.read())) |
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_31.read()) == sc_uint<3>("0bus001")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_31.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__51 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n83(7,0)
    // part assign: lhs_part_72(1): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n83(7,0)
    sc_signal<sc_uint<8> > lhs_part_72;
    void method_17() {
        lhs_part_72 = sc_uint<8>(
        (sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__51.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n83(8,8)
    // part assign: lhs_part_73(2): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n83(8,8)
    sc_signal<sc_uint<1> > lhs_part_73;
    void method_18() {
        lhs_part_73 = sc_uint<1>(
        ~(sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__52
    void method_19() {
        sc_uint<8> temp_19;
        temp_19 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_27.read()) == sc_uint<3>("0bus000")) & ((sc_uint<8>)(b_exp.read())) |
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_27.read()) == sc_uint<3>("0bus001")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_27.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__52 = temp_19;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n93(7,0)
    // part assign: lhs_part_74(1): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n93(7,0)
    sc_signal<sc_uint<8> > lhs_part_74;
    void method_20() {
        lhs_part_74 = sc_uint<8>(
        (sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__52.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n93(8,8)
    // part assign: lhs_part_75(2): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n93(8,8)
    sc_signal<sc_uint<1> > lhs_part_75;
    void method_21() {
        lhs_part_75 = sc_uint<1>(
        ~(sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_29
    void method_22() {
        sc_uint<26> temp_22;
        temp_22 = 
            ((sc_uint<1>)(0), sc_uint<1>(1),a_man.read(),sc_uint<1>(0))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_29 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n103
    void method_23() {
        sc_uint<1> temp_23;

                    sc_uint<14> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n103_tmp_6 = 
            +((sc_uint<14>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n83.read()))
            -((sc_uint<14>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n93.read()))
            -((sc_uint<14>)(sc_uint<2>("0b01")));
        temp_23 = (((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n103_tmp_6[13]))==((sc_uint<1>)0))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n103 = temp_23;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28(7,0)
    // part assign: lhs_part_76(1): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28(7,0)
    sc_signal<sc_uint<8> > lhs_part_76;
    void method_24() {
        lhs_part_76 = sc_uint<8>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n103.read()) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__51.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n103.read()) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__52.read()))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__58
    void method_25() {
        sc_uint<8> temp_25;
        temp_25 = 
            
            +((sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28.read()(7,0)))
            -((sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__51.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__58 = temp_25;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n123
    void method_26() {
        sc_uint<1> temp_26;
        temp_26 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__58.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__58.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__58.read()(7,7))))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n123 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_30
    void method_27() {
        sc_uint<6> temp_27;
        temp_27 = 
            (DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n123.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__58.read()(4,0))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_30 = temp_27;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60__28
    void method_28() {
        sc_uint<26> temp_28;
        temp_28 = 
            (sc_biguint<89>)((sc_biguint<26>)DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_29.read()) >> (shift_v)(((sc_uint<6>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_30.read())).to_long())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60__28 = temp_28;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60
    void method_29() {
        sc_uint<26> temp_29;
        temp_29 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43.read()) == sc_uint<1>("0bus0")) & ((sc_uint<26>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60__28.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64__32_0
    void method_30() {
        sc_uint<27> temp_30;
        temp_30 = 
            
            -((sc_uint<27>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64__32_0 = temp_30;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64
    void method_31() {
        sc_uint<27> temp_31;
        temp_31 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(a_sign.read()) == sc_uint<1>("0bus0")) & ((sc_uint<27>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(a_sign.read()) == sc_uint<1>("0bus1")) & ((sc_uint<27>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64__32_0.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64 = temp_31;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_32
    void method_32() {
        sc_uint<26> temp_32;
        temp_32 = 
            ((sc_uint<1>)(0), sc_uint<1>(1),b_man.read(),sc_uint<1>(0))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_32 = temp_32;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__59
    void method_33() {
        sc_uint<8> temp_33;
        temp_33 = 
            
            +((sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28.read()(7,0)))
            -((sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__52.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__59 = temp_33;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n249
    void method_34() {
        sc_uint<1> temp_34;
        temp_34 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__59.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__59.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__59.read()(7,7))))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n249 = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_33
    void method_35() {
        sc_uint<6> temp_35;
        temp_35 = 
            (DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n249.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__59.read()(4,0))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_33 = temp_35;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61__30
    void method_36() {
        sc_uint<26> temp_36;
        temp_36 = 
            (sc_biguint<89>)((sc_biguint<26>)DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_32.read()) >> (shift_v)(((sc_uint<6>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_33.read())).to_long())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61__30 = temp_36;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61
    void method_37() {
        sc_uint<26> temp_37;
        temp_37 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44.read()) == sc_uint<1>("0bus0")) & ((sc_uint<26>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61__30.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61 = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65__34_0
    void method_38() {
        sc_uint<27> temp_38;
        temp_38 = 
            
            -((sc_uint<27>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65__34_0 = temp_38;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65
    void method_39() {
        sc_uint<27> temp_39;
        temp_39 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(b_sign.read()) == sc_uint<1>("0bus0")) & ((sc_uint<27>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(b_sign.read()) == sc_uint<1>("0bus1")) & ((sc_uint<27>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65__34_0.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65 = temp_39;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66
    void method_40() {
        sc_uint<27> temp_40;
        temp_40 = 
            
            +((sc_uint<27>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64.read()))
            +((sc_uint<27>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66 = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n395(29,0)
    // part assign: lhs_part_77(1): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n395(29,0)
    sc_signal<sc_uint<30> > lhs_part_77;
    void method_41() {
        lhs_part_77 = sc_uint<30>(
        (sc_uint<30>)(( ((sc_uint<3>)(sc_int<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66.read()[26])), DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66.read() ))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n395(30,30)
    // part assign: lhs_part_78(2): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n395(30,30)
    sc_signal<sc_uint<1> > lhs_part_78;
    void method_42() {
        lhs_part_78 = sc_uint<1>(
        ~(sc_uint<1>)((DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66.read()[26]))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__35
    void method_43() {
        sc_uint<1> temp_43;

                    sc_uint<35> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__35_tmp_7 = 
            -((sc_uint<35>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n395.read()))
            +((sc_uint<35>)(sc_uint<31>("0bus0111111111111111111111111111111")));
        temp_43 = (((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__35_tmp_7[34]))==((sc_uint<1>)0))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__35 = temp_43;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__36
    void method_44() {
        sc_uint<1> temp_44;
        temp_44 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43.read())))
            &((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__36 = temp_44;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67
    void method_45() {
        sc_uint<1> temp_45;
        temp_45 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__35.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__36.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67 = temp_45;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68__38(25,0)
    // part assign: lhs_part_79(1): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68__38(25,0)
    sc_signal<sc_int<26> > lhs_part_79;
    void method_46() {
        lhs_part_79 = sc_int<26>(
        
            -((sc_uint<26>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66.read()(25,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68
    void method_47() {
        sc_uint<26> temp_47;
        temp_47 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67.read()) == sc_uint<1>("0bus0")) & ((sc_uint<26>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66.read()(25,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67.read()) == sc_uint<1>("0bus1")) & ((sc_uint<26>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68__38.read()(25,0)))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68 = temp_47;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69
    void method_48() {
        sc_uint<6> temp_48;
        temp_48 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,24)) == sc_uint<2>("0bus01")) & ((sc_uint<6>)(sc_uint<1>(1))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,23)) == sc_uint<3>("0bus001")) & ((sc_uint<6>)(sc_uint<2>("0bus10"))) |
        -(int)((sc_uint<4>)(sc_uint<4>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,22)) == sc_uint<4>("0bus0001")) & ((sc_uint<6>)(sc_uint<2>("0bus11"))) |
        -(int)((sc_uint<5>)(sc_uint<5>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,21)) == sc_uint<5>("0bus00001")) & ((sc_uint<6>)(sc_uint<3>("0bus100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,20)) == sc_uint<6>("0bus000001")) & ((sc_uint<6>)(sc_uint<3>("0bus101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,19)) == sc_uint<7>("0bus0000001")) & ((sc_uint<6>)(sc_uint<3>("0bus110"))) |
        -(int)((sc_uint<8>)(sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,18)) == sc_uint<8>("0bus00000001")) & ((sc_uint<6>)(sc_uint<3>("0bus111"))) |
        -(int)((sc_uint<9>)(sc_uint<9>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,17)) == sc_uint<9>("0bus000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1000"))) |
        -(int)((sc_uint<10>)(sc_uint<10>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,16)) == sc_uint<10>("0bus0000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1001"))) |
        -(int)((sc_uint<11>)(sc_uint<11>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,15)) == sc_uint<11>("0bus00000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1010"))) |
        -(int)((sc_uint<12>)(sc_uint<12>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,14)) == sc_uint<12>("0bus000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1011"))) |
        -(int)((sc_uint<13>)(sc_uint<13>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,13)) == sc_uint<13>("0bus0000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1100"))) |
        -(int)((sc_uint<14>)(sc_uint<14>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,12)) == sc_uint<14>("0bus00000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1101"))) |
        -(int)((sc_uint<15>)(sc_uint<15>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,11)) == sc_uint<15>("0bus000000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1110"))) |
        -(int)((sc_uint<16>)(sc_uint<16>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,10)) == sc_uint<16>("0bus0000000000000001")) & ((sc_uint<6>)(sc_uint<4>("0bus1111"))) |
        -(int)((sc_uint<17>)(sc_uint<17>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,9)) == sc_uint<17>("0bus00000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10000"))) |
        -(int)((sc_uint<18>)(sc_uint<18>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,8)) == sc_uint<18>("0bus000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10001"))) |
        -(int)((sc_uint<19>)(sc_uint<19>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,7)) == sc_uint<19>("0bus0000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10010"))) |
        -(int)((sc_uint<20>)(sc_uint<20>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,6)) == sc_uint<20>("0bus00000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10011"))) |
        -(int)((sc_uint<21>)(sc_uint<21>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,5)) == sc_uint<21>("0bus000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10100"))) |
        -(int)((sc_uint<22>)(sc_uint<22>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,4)) == sc_uint<22>("0bus0000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10101"))) |
        -(int)((sc_uint<23>)(sc_uint<23>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,3)) == sc_uint<23>("0bus00000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10110"))) |
        -(int)((sc_uint<24>)(sc_uint<24>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,2)) == sc_uint<24>("0bus000000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus10111"))) |
        -(int)((sc_uint<25>)(sc_uint<25>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(25,1)) == sc_uint<25>("0bus0000000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus11000"))) |
        -(int)((sc_uint<26>)(sc_uint<26>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()) == sc_uint<26>("0bus00000000000000000000000001")) & ((sc_uint<6>)(sc_uint<5>("0bus11001"))) |
        -(int)((sc_uint<26>)(sc_uint<26>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()) == sc_uint<26>("0bus00000000000000000000000000")) & ((sc_uint<6>)(sc_uint<6>("0bus100000")))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69 = temp_48;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0_tmp_8;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0_tmp_8
    void method_49() {
        sc_uint<10> temp_49;
        temp_49 = 
            
            -((sc_uint<10>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69.read()(4,0)))
            +((sc_uint<10>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28.read()(7,0)))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0_tmp_8 = temp_49;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0
    void method_50() {
        sc_uint<10> temp_50;
        temp_50 = 
            DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0_tmp_8.read()
            +((sc_uint<10>)(sc_uint<2>("0bus01")))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0 = temp_50;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563(12,0)
    // part assign: lhs_part_80(1): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563(12,0)
    sc_signal<sc_uint<13> > lhs_part_80;
    void method_51() {
        lhs_part_80 = sc_uint<13>(
        (sc_uint<13>)(( ((sc_uint<3>)(sc_int<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0.read()[9])), DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0.read() ))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563(13,13)
    // part assign: lhs_part_81(2): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563(13,13)
    sc_signal<sc_uint<1> > lhs_part_81;
    void method_52() {
        lhs_part_81 = sc_uint<1>(
        ~(sc_uint<1>)((DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0.read()[9]))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__42
    void method_53() {
        sc_uint<1> temp_53;
        temp_53 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45.read())))
            &((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(b_sign.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__42 = temp_53;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__41
    void method_54() {
        sc_uint<1> temp_54;
        temp_54 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46.read())))
            &((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(a_sign.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__41 = temp_54;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79
    void method_55() {
        sc_uint<1> temp_55;
        temp_55 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__48.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__47.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__42.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__41.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79 = temp_55;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77__39
    void method_56() {
        sc_uint<1> temp_56;

                    sc_uint<21> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77__39_tmp_9 = 
            +((sc_uint<21>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563.read()))
            -((sc_uint<21>)(sc_uint<17>("0b00010000011111111")));
        temp_56 = (((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77__39_tmp_9[20]))==((sc_uint<1>)0))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77__39 = temp_56;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77
    void method_57() {
        sc_uint<1> temp_57;
        temp_57 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77__39.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69.read()(5,5))))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77 = temp_57;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80__43
    void method_58() {
        sc_uint<1> temp_58;
        temp_58 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80__43 = temp_58;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583
    void method_59() {
        sc_uint<1> temp_59;
        temp_59 = 
            ~(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79.read())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583 = temp_59;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80
    void method_60() {
        sc_uint<1> temp_60;
        temp_60 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80__43.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80 = temp_60;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n602
    void method_61() {
        sc_uint<1> temp_61;
        temp_61 = 
            ~(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80.read())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n602 = temp_61;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78__40
    void method_62() {
        sc_uint<1> temp_62;

                    sc_uint<21> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78__40_tmp_10 = 
            +((sc_uint<21>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563.read()))
            -((sc_uint<21>)(sc_uint<17>("0b00010000000000001")));
        temp_62 = (((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78__40_tmp_10[20]))==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78__40 = temp_62;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78
    void method_63() {
        sc_uint<1> temp_63;
        temp_63 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78__40.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78 = temp_63;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81
    void method_64() {
        sc_uint<1> temp_64;
        temp_64 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n602.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81 = temp_64;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_35
    void method_65() {
        sc_uint<3> temp_65;
        temp_65 = 
            (DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81.read())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_35 = temp_65;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__83
    void method_66() {
        sc_uint<8> temp_66;
        temp_66 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_35.read()) == sc_uint<3>("0bus000")) & ((sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0.read()(7,0))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_35.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_35.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__83 = temp_66;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n620(13,0)
    // part assign: lhs_part_82(1): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n620(13,0)
    sc_signal<sc_uint<14> > lhs_part_82;
    void method_67() {
        lhs_part_82 = sc_uint<14>(
        (sc_uint<14>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__83.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n620(14,14)
    // part assign: lhs_part_83(2): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n620(14,14)
    sc_signal<sc_uint<1> > lhs_part_83;
    void method_68() {
        lhs_part_83 = sc_uint<1>(
        ~(sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n642(10,0)
    // part assign: lhs_part_84(1): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n642(10,0)
    sc_signal<sc_uint<11> > lhs_part_84;
    void method_69() {
        lhs_part_84 = sc_uint<11>(
        (sc_uint<11>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__83.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n642(11,11)
    // part assign: lhs_part_85(2): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n642(11,11)
    sc_signal<sc_uint<1> > lhs_part_85;
    void method_70() {
        lhs_part_85 = sc_uint<1>(
        ~(sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: bdw_enable
    void method_71() {
        sc_uint<1> temp_71;
        temp_71 = 
            ~(sc_uint<1>)(astall.read())
        ;
        bdw_enable = temp_71;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__88
    void method_72() {
        sc_uint<1> temp_72;
        temp_72 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67.read()))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__88 = temp_72;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__56
    void method_73() {
        sc_uint<1> temp_73;

                    sc_uint<20> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__56_tmp_11 = 
            -((sc_uint<20>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n620.read()))
            +((sc_uint<20>)(sc_uint<16>("0bus0100000011111110")));
        temp_73 = (((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__56_tmp_11[19]))==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__56 = temp_73;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__55
    void method_74() {
        sc_uint<1> temp_74;
        temp_74 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__56.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__55 = temp_74;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86
    void method_75() {
        sc_uint<1> temp_75;
        temp_75 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__55.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86 = temp_75;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__58
    void method_76() {
        sc_uint<1> temp_76;

                    sc_uint<19> DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__58_tmp_12 = 
            +((sc_uint<19>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n642.read()))
            -((sc_uint<19>)(sc_uint<15>("0b000100000000001")));
        temp_76 = (((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__58_tmp_12[18]))==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__58 = temp_76;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__57
    void method_77() {
        sc_uint<1> temp_77;
        temp_77 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__58.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__57 = temp_77;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87
    void method_78() {
        sc_uint<1> temp_78;
        temp_78 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n602.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__57.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583.read())))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87 = temp_78;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_36
    void method_79() {
        sc_uint<3> temp_79;
        temp_79 = 
            (DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87.read())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_36 = temp_79;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__89
    void method_80() {
        sc_uint<8> temp_80;
        temp_80 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_36.read()) == sc_uint<3>("0bus000")) & ((sc_uint<8>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__83.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_36.read()(2,1)) == sc_uint<2>("0bus01")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111"))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_36.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__89 = temp_80;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_34
    void method_81() {
        sc_uint<5> temp_81;
        temp_81 = 
            (DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81.read())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_34 = temp_81;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__71(24,0)
    // part assign: lhs_part_86(1): DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__71(24,0)
    sc_signal<sc_uint<25> > lhs_part_86;
    void method_82() {
        lhs_part_86 = sc_uint<25>(
         ((shift_v)(((sc_uint<5>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69.read()(4,0))).to_long()) >= 25 ? (sc_uint<25>)(0) : (sc_uint<25>)((sc_uint<25>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68.read()(24,0)) << (shift_v)(((sc_uint<5>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69.read()(4,0))).to_long())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__90
    void method_83() {
        sc_uint<23> temp_83;
        temp_83 = 
            
        -(int)((sc_uint<5>)(sc_uint<5>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_34.read()) == sc_uint<5>("0bus00000")) & ((sc_uint<23>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__71.read()(24,2))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_34.read()(4,4)) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(sc_uint<23>("0bus11111111111111111111111")))
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__90 = temp_83;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_37
    void method_84() {
        sc_uint<32> temp_84;
        temp_84 = 
            (DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__88.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__89.read(),DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__90.read())
        ;
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_37 = temp_84;
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<32> > cascade_x[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_85() {
                    if (bdw_enable.read()==1) {cascade_x[0] = (sc_uint<32>)((sc_uint<32>)(DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_37.read()));
        }    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_86() {
            x = cascade_x[0].read();
    }
    void method_87() { 
        sc_uint<9> temp_87 = DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n83.read();
        temp_87(7,0) = lhs_part_72.read();
        temp_87(8,8) = lhs_part_73.read();
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n83 = temp_87;
}
    void method_88() { 
        sc_uint<9> temp_88 = DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n93.read();
        temp_88(7,0) = lhs_part_74.read();
        temp_88(8,8) = lhs_part_75.read();
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n93 = temp_88;
}
    void method_89() { 
        sc_uint<9> temp_89 = DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28.read();
        temp_89(7,0) = lhs_part_76.read();
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28 = temp_89;
}
    void method_90() { 
        sc_uint<31> temp_90 = DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n395.read();
        temp_90(29,0) = lhs_part_77.read();
        temp_90(30,30) = lhs_part_78.read();
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n395 = temp_90;
}
    void method_91() { 
        sc_uint<28> temp_91 = DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68__38.read();
        temp_91(25,0) = lhs_part_79.read();
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68__38 = temp_91;
}
    void method_92() { 
        sc_uint<14> temp_92 = DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563.read();
        temp_92(12,0) = lhs_part_80.read();
        temp_92(13,13) = lhs_part_81.read();
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563 = temp_92;
}
    void method_93() { 
        sc_uint<15> temp_93 = DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n620.read();
        temp_93(13,0) = lhs_part_82.read();
        temp_93(14,14) = lhs_part_83.read();
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n620 = temp_93;
}
    void method_94() { 
        sc_uint<12> temp_94 = DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n642.read();
        temp_94(10,0) = lhs_part_84.read();
        temp_94(11,11) = lhs_part_85.read();
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n642 = temp_94;
}
    void method_95() { 
        sc_uint<26> temp_95 = DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__71.read();
        temp_95(24,0) = lhs_part_86.read();
        DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__71 = temp_95;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(DFT_compute_cynw_cm_float_add2_E8_M23_2)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_0);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_1);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_2);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_3);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_4);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_5);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n4;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_6);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_7);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__7
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_8);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__7
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46__8;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_9);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_10);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_11);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n21;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_12);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_13);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__5
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__6;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_14);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__5
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45__6;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_15);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__47;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_16);
        sensitive << a_exp
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_31;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_17);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__51;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_18);

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_19);
        sensitive << b_exp
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_27;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_20);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__52;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_21);

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_22);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_23);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n83
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n93;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_24);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__51
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__52
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n103;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_25);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__51;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_26);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__58;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_27);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n123
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__58;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_28);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_29
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_30;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_29);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60__28
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_30);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_31);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__60
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64__32_0
                  << a_sign;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_32);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_33);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__52;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_34);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__59;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_35);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n249
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__59;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_36);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_32
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_33;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_37);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61__30
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_38);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_39);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65__34_0
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_40);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__64
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__65;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_41);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_42);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_43);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n395;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_44);
        sensitive << a_sign
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__43
                  << b_sign
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__44;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_45);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__35
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67__36;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_46);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_47);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__66
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68__38
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_48);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_49);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_28;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_50);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0_tmp_8;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_51);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_52);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_53);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45
                  << a_sign
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_54);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46
                  << b_sign
                  << a_sign;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_55);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__48
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__47
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__42
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79__41;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_56);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_57);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77__39
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_58);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__46
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__77
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__45;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_59);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_60);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80__43
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_61);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_62);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n563;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_63);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78__40;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_64);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n602
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__78;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_65);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_66);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__74_0
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_35;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_67);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__83;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_68);

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_69);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__83;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_70);

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_71);
        sensitive << astall;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_72);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__67
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_73);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n620;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_74);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__56;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_75);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86__55
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_76);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n642;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_77);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__58;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_78);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n602
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87__57
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_n583;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_79);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_80);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__83
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_36;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_81);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__79
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__86
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__87
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__80
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__81;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_82);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__68
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__69;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_83);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__71
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_tmp_34;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_84);
        sensitive << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__88
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__89
                  << DFT_compute_cynw_cm_float_add2_E8_M23_1_inst_inst_cellmath__90;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_85);
        sensitive << aclk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_86);
        sensitive << cascade_x[0];
        SC_METHOD(method_87);
        sensitive << lhs_part_72
                  << lhs_part_73;
        SC_METHOD(method_88);
        sensitive << lhs_part_74
                  << lhs_part_75;
        SC_METHOD(method_89);
        sensitive << lhs_part_76;
        SC_METHOD(method_90);
        sensitive << lhs_part_77
                  << lhs_part_78;
        SC_METHOD(method_91);
        sensitive << lhs_part_79;
        SC_METHOD(method_92);
        sensitive << lhs_part_80
                  << lhs_part_81;
        SC_METHOD(method_93);
        sensitive << lhs_part_82
                  << lhs_part_83;
        SC_METHOD(method_94);
        sensitive << lhs_part_84
                  << lhs_part_85;
        SC_METHOD(method_95);
        sensitive << lhs_part_86;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef DFT_compute_cynw_cm_float_add2_E8_M23_2_COMPILED

/* CADENCE  vbfySwzaqg== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




