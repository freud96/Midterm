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
    
    Configured at: 11:19:28 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef DFT_compute_cynw_cm_float_mul_E8_M23_2_COMPILED
#define DFT_compute_cynw_cm_float_mul_E8_M23_2_COMPILED

SC_MODULE(DFT_compute_cynw_cm_float_mul_E8_M23_2) // architecture "behavioural"
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
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__30;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__31;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__34;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__35;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__36;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__37;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__38;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__39;
    sc_signal<sc_uint<50> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum;
    sc_signal<sc_uint<10> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__48;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__49;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__53;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54;
    sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__5;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__6;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__7;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__8;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50__15;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__17;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__16;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__21;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__20;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54__30;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55__36;
    sc_signal<sc_uint<13> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4;
    sc_signal<sc_uint<13> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22;
    sc_signal<sc_uint<14> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n250;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n252;
    sc_signal<sc_uint<48> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_14;
    sc_signal<sc_uint<48> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_15;
    sc_signal<sc_uint<3> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_16;
    sc_signal<sc_uint<2> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_17;
    sc_signal<sc_uint<32> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_18;
    sc_signal<sc_uint<9> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4_0;
    sc_signal<sc_uint<9> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22_0;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4_0
    void method_0() {
        sc_uint<9> temp_0;
        temp_0 = 
            
            +((sc_uint<9>)(a_exp.read()))
            -((sc_uint<9>)(sc_uint<2>("0b01")))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4_0 = temp_0;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4
    void method_1() {
        sc_uint<13> temp_1;
        temp_1 = 
            (sc_uint<13>)(( ((sc_uint<4>)(sc_int<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4_0.read()[8])), DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4_0.read() ))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22_0
    void method_2() {
        sc_uint<9> temp_2;
        temp_2 = 
            
            +((sc_uint<9>)(b_exp.read()))
            -((sc_uint<9>)(sc_uint<2>("0b01")))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22_0 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22
    void method_3() {
        sc_uint<13> temp_3;
        temp_3 = 
            (sc_uint<13>)(( ((sc_uint<4>)(sc_int<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22_0.read()[8])), DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22_0.read() ))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_14(23,0)
    // part assign: lhs_part_63(1): DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_14(23,0)
    sc_signal<sc_uint<24> > lhs_part_63;
    void method_4() {
        lhs_part_63 = sc_uint<24>(
        (sc_uint<1>(1),a_man.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_15(23,0)
    // part assign: lhs_part_64(1): DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_15(23,0)
    sc_signal<sc_uint<24> > lhs_part_64;
    void method_5() {
        lhs_part_64 = sc_uint<24>(
        (sc_uint<1>(1),b_man.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<48> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum_tmp_0;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum_tmp_0
    void method_6() {
        sc_uint<48> temp_6;
        temp_6 = 
            
            +((sc_uint<48>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_14.read()(23,0)) * (sc_uint<48>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_15.read()(23,0)))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum_tmp_0 = temp_6;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum(47,0)
    // part assign: lhs_part_65(1): DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum(47,0)
    sc_signal<sc_uint<48> > lhs_part_65;
    void method_7() {
        lhs_part_65 = sc_uint<48>(
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum_tmp_0.read()
            +((sc_uint<48>)(sc_uint<24>("0bus010000000000000000000000")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_1;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_2;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_2
    void method_8() {
        sc_uint<10> temp_8;
        temp_8 = 
            
            +((sc_uint<10>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum.read()(47,47)))
            +((sc_uint<10>)(b_exp.read()))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_2 = temp_8;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_1
    void method_9() {
        sc_uint<10> temp_9;
        temp_9 = 
            DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_2.read()
            +((sc_uint<10>)(a_exp.read()))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_1 = temp_9;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45
    void method_10() {
        sc_uint<10> temp_10;
        temp_10 = 
            DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_1.read()
            -((sc_uint<10>)(sc_uint<10>("0b0001111111")))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233(12,0)
    // part assign: lhs_part_66(1): DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233(12,0)
    sc_signal<sc_uint<13> > lhs_part_66;
    void method_11() {
        lhs_part_66 = sc_uint<13>(
        (sc_uint<13>)(( ((sc_uint<3>)(sc_int<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45.read()[9])), DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45.read() ))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233(13,13)
    // part assign: lhs_part_67(2): DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233(13,13)
    sc_signal<sc_uint<1> > lhs_part_67;
    void method_12() {
        lhs_part_67 = sc_uint<1>(
        ~(sc_uint<1>)((DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45.read()[9]))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: bdw_enable
    void method_13() {
        sc_uint<1> temp_13;
        temp_13 = 
            ~(sc_uint<1>)(astall.read())
        ;
        bdw_enable = temp_13;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__5
    void method_14() {
        sc_uint<1> temp_14;

                    sc_uint<17> DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__5_tmp_3 = 
            +((sc_uint<17>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4.read()))
            -((sc_uint<17>)(sc_uint<11>("0b00011111111")));
        temp_14 = (((sc_uint<1>)DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__5_tmp_3.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__5 = temp_14;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__6
    void method_15() {
        sc_uint<1> temp_15;

                    sc_uint<27> DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__6_tmp_4 = 
            +((sc_uint<27>)(a_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_15 = (((sc_uint<1>)DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__6_tmp_4.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__6 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__34
    void method_16() {
        sc_uint<1> temp_16;
        temp_16 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__5.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__6.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__34 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__7
    void method_17() {
        sc_uint<1> temp_17;

                    sc_uint<17> DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__7_tmp_5 = 
            +((sc_uint<17>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22.read()))
            -((sc_uint<17>)(sc_uint<11>("0b00011111111")));
        temp_17 = (((sc_uint<1>)DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__7_tmp_5.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__7 = temp_17;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__8
    void method_18() {
        sc_uint<1> temp_18;

                    sc_uint<27> DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__8_tmp_6 = 
            +((sc_uint<27>)(b_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_18 = (((sc_uint<1>)DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__8_tmp_6.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__8 = temp_18;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__35
    void method_19() {
        sc_uint<1> temp_19;
        temp_19 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__7.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__8.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__35 = temp_19;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__38
    void method_20() {
        sc_uint<1> temp_20;
        temp_20 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__34.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__35.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__38 = temp_20;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32
    void method_21() {
        sc_uint<1> temp_21;
        temp_21 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__5.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__6.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32 = temp_21;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33
    void method_22() {
        sc_uint<1> temp_22;
        temp_22 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__7.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__8.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__37
    void method_23() {
        sc_uint<1> temp_23;
        temp_23 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__37 = temp_23;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__30
    void method_24() {
        sc_uint<1> temp_24;

                    sc_uint<12> DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__30_tmp_7 = 
            +((sc_uint<12>)(a_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_24 = (((sc_uint<1>)DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__30_tmp_7.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__30 = temp_24;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__31
    void method_25() {
        sc_uint<1> temp_25;

                    sc_uint<12> DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__31_tmp_8 = 
            +((sc_uint<12>)(b_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_25 = (((sc_uint<1>)DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__31_tmp_8.and_reduce())==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__31 = temp_25;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__36
    void method_26() {
        sc_uint<1> temp_26;
        temp_26 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__30.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__31.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__36 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50__15
    void method_27() {
        sc_uint<1> temp_27;
        temp_27 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__37.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__36.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50__15 = temp_27;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50
    void method_28() {
        sc_uint<1> temp_28;
        temp_28 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__38.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50__15.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50 = temp_28;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__39
    void method_29() {
        sc_uint<1> temp_29;
        temp_29 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            ^((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__39 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__53
    void method_30() {
        sc_uint<1> temp_30;
        temp_30 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__39.read()))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__53 = temp_30;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n252
    void method_31() {
        sc_uint<1> temp_31;
        temp_31 = 
            ~(sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__38.read())
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n252 = temp_31;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n250
    void method_32() {
        sc_uint<1> temp_32;
        temp_32 = 
            ~(sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50__15.read())
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n250 = temp_32;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__21
    void method_33() {
        sc_uint<1> temp_33;
        temp_33 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__37.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__36.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__21 = temp_33;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__49
    void method_34() {
        sc_uint<1> temp_34;

                    sc_uint<21> DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__49_tmp_9 = 
            +((sc_uint<21>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233.read()))
            -((sc_uint<21>)(sc_uint<17>("0b00010000011111111")));
        temp_34 = (((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__49_tmp_9[20]))==((sc_uint<1>)0))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__49 = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__20
    void method_35() {
        sc_uint<1> temp_35;
        temp_35 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__21.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__49.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__20 = temp_35;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52
    void method_36() {
        sc_uint<1> temp_36;
        temp_36 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n252.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n250.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__20.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52 = temp_36;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54__30
    void method_37() {
        sc_uint<1> temp_37;
        temp_37 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54__30 = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__17
    void method_38() {
        sc_uint<1> temp_38;
        temp_38 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__36.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__37.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__17 = temp_38;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__48
    void method_39() {
        sc_uint<1> temp_39;

                    sc_uint<21> DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__48_tmp_10 = 
            +((sc_uint<21>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233.read()))
            -((sc_uint<21>)(sc_uint<17>("0b00010000000000001")));
        temp_39 = (((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__48_tmp_10[20]))==((sc_uint<1>)1))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__48 = temp_39;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__16
    void method_40() {
        sc_uint<1> temp_40;
        temp_40 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__17.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__48.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__16 = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51
    void method_41() {
        sc_uint<1> temp_41;
        temp_41 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n252.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n250.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__16.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51 = temp_41;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_17
    void method_42() {
        sc_uint<2> temp_42;
        temp_42 = 
            (DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54__30.read(),DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51.read())
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_17 = temp_42;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54
    void method_43() {
        sc_uint<8> temp_43;
        temp_43 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_17.read()) == sc_uint<2>("0bus00")) & ((sc_uint<8>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45.read()(7,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_17.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54 = temp_43;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55__36
    void method_44() {
        sc_uint<1> temp_44;
        temp_44 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51.read())))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55__36 = temp_44;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_16
    void method_45() {
        sc_uint<3> temp_45;
        temp_45 = 
            (DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50.read(),DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55__36.read(),(sc_biguint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum.read()(47,47)))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_16 = temp_45;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55
    void method_46() {
        sc_uint<23> temp_46;
        temp_46 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_16.read()) == sc_uint<3>("0bus000")) & ((sc_uint<23>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum.read()(45,23))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_16.read()) == sc_uint<3>("0bus001")) & ((sc_uint<23>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum.read()(46,24))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_16.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(sc_uint<23>("0bus11111111111111111111111")))
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55 = temp_46;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_18
    void method_47() {
        sc_uint<32> temp_47;
        temp_47 = 
            (DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__53.read(),DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54.read(),DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55.read())
        ;
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_18 = temp_47;
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<32> > cascade_x[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_48() {
                    if (bdw_enable.read()==1) {cascade_x[0] = (sc_uint<32>)((sc_uint<32>)(DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_18.read()));
        }    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_49() {
            x = cascade_x[0].read();
    }
    void method_50() { 
        sc_uint<48> temp_50 = DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_14.read();
        temp_50(23,0) = lhs_part_63.read();
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_14 = temp_50;
}
    void method_51() { 
        sc_uint<48> temp_51 = DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_15.read();
        temp_51(23,0) = lhs_part_64.read();
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_15 = temp_51;
}
    void method_52() { 
        sc_uint<50> temp_52 = DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum.read();
        temp_52(47,0) = lhs_part_65.read();
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum = temp_52;
}
    void method_53() { 
        sc_uint<14> temp_53 = DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233.read();
        temp_53(12,0) = lhs_part_66.read();
        temp_53(13,13) = lhs_part_67.read();
        DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233 = temp_53;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(DFT_compute_cynw_cm_float_mul_E8_M23_2)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_0);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_1);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_2);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_3);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_4);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_5);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_6);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_14
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_15;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_7);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum_tmp_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_8);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum
                  << b_exp;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_9);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_2
                  << a_exp;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_10);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45_tmp_1;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_11);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_12);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_13);
        sensitive << astall;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_14);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n4;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_15);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_16);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__5
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__6;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_17);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n22;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_18);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_19);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__7
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_20);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__34
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__35;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_21);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__5
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32__6;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_22);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__7
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_23);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__32
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__33;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_24);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_25);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_26);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__30
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__31;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_27);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__37
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__36;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_28);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__38
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50__15;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_29);
        sensitive << a_sign
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_30);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__39
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_31);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__38;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_32);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50__15;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_33);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__37
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__36;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_34);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_35);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__21
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_36);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n252
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n250
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52__20;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_37);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_38);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__36
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__37;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_39);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n233;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_40);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__17
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_41);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n252
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_n250
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51__16;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_42);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54__30
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_43);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__45
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_17;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_44);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__52
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__51;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_45);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__50
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55__36
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_46);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_i_mul_int_mult_datapath_prodSum
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_tmp_16;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_47);
        sensitive << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__53
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__54
                  << DFT_compute_cynw_cm_float_mul_E8_M23_1_inst_inst_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_48);
        sensitive << aclk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_49);
        sensitive << cascade_x[0];
        SC_METHOD(method_50);
        sensitive << lhs_part_63;
        SC_METHOD(method_51);
        sensitive << lhs_part_64;
        SC_METHOD(method_52);
        sensitive << lhs_part_65;
        SC_METHOD(method_53);
        sensitive << lhs_part_66
                  << lhs_part_67;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef DFT_compute_cynw_cm_float_mul_E8_M23_2_COMPILED

/* CADENCE  uLL5Tg/cqQ== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




