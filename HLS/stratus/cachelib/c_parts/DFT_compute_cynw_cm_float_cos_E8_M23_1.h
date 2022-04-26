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
    
    Configured at: 11:21:40 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef DFT_compute_cynw_cm_float_cos_E8_M23_1_COMPILED
#define DFT_compute_cynw_cm_float_cos_E8_M23_1_COMPILED

SC_MODULE(DFT_compute_cynw_cm_float_cos_E8_M23_1) // architecture "behavioural"
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
    sc_out<sc_uint<37> > x;
    sc_in<bool> aclk;
    sc_in<sc_uint<1> > astall;
    sc_signal<sc_uint<1> > bdw_enable;
    sc_signal<sc_uint<37> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__17;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__21;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__24;
    sc_signal<sc_uint<9> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46;
    sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__66;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__67;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__68;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__69;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198;
    sc_signal<sc_uint<50> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200;
    sc_signal<sc_uint<50> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201;
    sc_signal<sc_uint<5> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__215;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__219;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228;
    sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__231;
    sc_signal<sc_uint<32> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__237;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46__15;
    sc_signal<sc_uint<3> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__83__62;
    sc_signal<sc_uint<6> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__211__182;
    sc_signal<sc_uint<54> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220__188;
    sc_signal<sc_uint<7> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__221__195;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__223__208;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__213;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__212;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228__231;
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0_;
    sc_signal<sc_uint<30> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_;
    sc_signal<sc_uint<31> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1544;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123;
    sc_signal<sc_uint<13> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3757;
    sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3995;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_228;
    sc_signal<sc_uint<50> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_259;
    sc_signal<sc_biguint<73> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_261;
    sc_signal<sc_uint<31> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_265;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_266;
    sc_signal<sc_uint<18> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_258_0;
    sc_signal<sc_uint<17> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_260_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0_;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__0;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__1;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__2;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__3;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__4;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__5;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__6;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__7;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__8;
    sc_signal<sc_uint<24> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__9;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917_0_0_0_0_0_0;
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020_0_0_0_0_0_0;
    sc_signal<sc_uint<18> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0_0;
    sc_signal<sc_uint<4> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_230_4_0_;
    sc_signal<sc_uint<5> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_232_6_0_;
    sc_signal<sc_uint<6> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_234_8_0_;
    sc_signal<sc_uint<7> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_236_10_0_;
    sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_238_12_0_;
    sc_signal<sc_uint<9> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_240_14_0_;
    sc_signal<sc_uint<10> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_242_16_0_;
    sc_signal<sc_uint<11> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_244_18_0_;
    sc_signal<sc_uint<12> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_246_20_0_;
    sc_signal<sc_uint<13> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_248_22_0_;
    sc_signal<sc_uint<14> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_250_24_0_;
    sc_signal<sc_uint<15> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_252_26_0_;
    sc_signal<sc_uint<16> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_254_28_0_;
    sc_signal<sc_uint<17> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_256_30_0_;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0_
    void method_0() {
        sc_uint<24> temp_0;
        temp_0 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0_ = temp_0;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__0
    void method_1() {
        sc_uint<24> temp_1;
        temp_1 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__0 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__1
    void method_2() {
        sc_uint<24> temp_2;
        temp_2 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__1 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__2
    void method_3() {
        sc_uint<24> temp_3;
        temp_3 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__2 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__3
    void method_4() {
        sc_uint<24> temp_4;
        temp_4 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__3 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__4
    void method_5() {
        sc_uint<24> temp_5;
        temp_5 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__4 = temp_5;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__5
    void method_6() {
        sc_uint<24> temp_6;
        temp_6 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__5 = temp_6;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__6
    void method_7() {
        sc_uint<24> temp_7;
        temp_7 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__6 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__7
    void method_8() {
        sc_uint<24> temp_8;
        temp_8 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__7 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__8
    void method_9() {
        sc_uint<24> temp_9;
        temp_9 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__8 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__9
    void method_10() {
        sc_uint<24> temp_10;
        temp_10 = 
            (sc_uint<1>(1),a_man.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__9 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1544(31,0)
    // part assign: lhs_part_258(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1544(31,0)
    sc_signal<sc_uint<32> > lhs_part_258;
    void method_11() {
        lhs_part_258 = sc_uint<32>(
        (sc_uint<32>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_0;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_1;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_2;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_3;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_4;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_5;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_6;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_7;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<56> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_8;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_8
    void method_12() {
        sc_uint<56> temp_12;
        temp_12 = 
            
            -((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__9.read())<<(shift_v)1))))
            -((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__8.read())<<(shift_v)4))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_8 = temp_12;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_7
    void method_13() {
        sc_uint<56> temp_13;
        temp_13 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_8.read()
            -((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__7.read())<<(shift_v)7))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_7 = temp_13;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_6
    void method_14() {
        sc_uint<56> temp_14;
        temp_14 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_7.read()
            +((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__6.read())<<(shift_v)10))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_6 = temp_14;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_5
    void method_15() {
        sc_uint<56> temp_15;
        temp_15 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_6.read()
            -((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__5.read())<<(shift_v)15))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_5 = temp_15;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_4
    void method_16() {
        sc_uint<56> temp_16;
        temp_16 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_5.read()
            +((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__4.read())<<(shift_v)17))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_4 = temp_16;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_3
    void method_17() {
        sc_uint<56> temp_17;
        temp_17 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_4.read()
            -((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__3.read())<<(shift_v)19))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_3 = temp_17;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_2
    void method_18() {
        sc_uint<56> temp_18;
        temp_18 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_3.read()
            -((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__2.read())<<(shift_v)24))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_2 = temp_18;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_1
    void method_19() {
        sc_uint<56> temp_19;
        temp_19 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_2.read()
            +((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__1.read())<<(shift_v)26))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_1 = temp_19;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_0
    void method_20() {
        sc_uint<56> temp_20;
        temp_20 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_1.read()
            +((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__0.read())<<(shift_v)29))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_0 = temp_20;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0_
    void method_21() {
        sc_uint<56> temp_21;
        temp_21 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_0.read()
            +((sc_uint<56>)(((sc_uint<56>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0_.read())<<(shift_v)31))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0_ = temp_21;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42
    void method_22() {
        sc_uint<9> temp_22;
        temp_22 = 
            
            -((sc_uint<9>)(a_exp.read()))
            +((sc_uint<9>)(sc_uint<9>("0bus010000101")))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_(24,0)
    // part assign: lhs_part_259(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_(24,0)
    sc_signal<sc_uint<25> > lhs_part_259;
    void method_23() {
        lhs_part_259 = sc_uint<25>(
        (sc_biguint<88>)((sc_biguint<30>)DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0_.read()(55,26)) >> (shift_v)(((sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42.read()(5,0))).to_long())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24(1,0)
    // part assign: lhs_part_260(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24(1,0)
    sc_signal<sc_uint<2> > lhs_part_260;
    void method_24() {
        lhs_part_260 = sc_uint<2>(
        
            +((sc_uint<2>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_.read()(24,23)))
            +((sc_uint<2>)(sc_uint<2>("0bus01")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
    void method_25() {
        sc_uint<23> temp_25;
        temp_25 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24.read()(0,0)) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_.read()(22,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24.read()(0,0)) == sc_uint<1>("0bus1")) & sc_uint<23>(~(sc_uint<23>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_.read()(22,0)))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61 = temp_25;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
    void method_26() {
        sc_uint<1> temp_26;
        temp_26 = 
            ~(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(16,16))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1544(32,32)
    // part assign: lhs_part_261(2): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1544(32,32)
    sc_signal<sc_uint<1> > lhs_part_261;
    void method_27() {
        lhs_part_261 = sc_uint<1>(
        (sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_228(2,0)
    // part assign: lhs_part_262(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_228(2,0)
    sc_signal<sc_uint<3> > lhs_part_262;
    void method_28() {
        lhs_part_262 = sc_uint<3>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),sc_uint<2>("0bus01"))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578_0_0_0_0_0_0(2,0)
    // part assign: lhs_part_263(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578_0_0_0_0_0_0(2,0)
    sc_signal<sc_uint<3> > lhs_part_263;
    void method_29() {
        lhs_part_263 = sc_uint<3>(
        
            ((sc_uint<3>)((sc_uint<3>)(((sc_uint<3>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[15])))))
            &((sc_uint<3>)((sc_uint<3>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_228.read()(2,0))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578(2,0)
    // part assign: lhs_part_264(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578(2,0)
    sc_signal<sc_uint<3> > lhs_part_264;
    void method_30() {
        lhs_part_264 = sc_uint<3>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578_0_0_0_0_0_0.read()(2,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_230_4_0_
    void method_31() {
        sc_uint<4> temp_31;
        temp_31 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,15),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_230_4_0_ = temp_31;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681_0_0_0_0_0_0(4,0)
    // part assign: lhs_part_265(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681_0_0_0_0_0_0(4,0)
    sc_signal<sc_uint<5> > lhs_part_265;
    void method_32() {
        lhs_part_265 = sc_uint<5>(
        
            ((sc_uint<5>)((sc_uint<5>)(((sc_uint<5>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[14])))))
            &((sc_uint<5>)((sc_uint<5>)(( (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_230_4_0_.read()[3]), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_230_4_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681(4,0)
    // part assign: lhs_part_266(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681(4,0)
    sc_signal<sc_uint<5> > lhs_part_266;
    void method_33() {
        lhs_part_266 = sc_uint<5>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681_0_0_0_0_0_0.read()(4,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_232_6_0_
    void method_34() {
        sc_uint<5> temp_34;
        temp_34 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,14),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_232_6_0_ = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784_0_0_0_0_0_0(6,0)
    // part assign: lhs_part_267(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784_0_0_0_0_0_0(6,0)
    sc_signal<sc_uint<7> > lhs_part_267;
    void method_35() {
        lhs_part_267 = sc_uint<7>(
        
            ((sc_uint<7>)((sc_uint<7>)(((sc_uint<7>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[13])))))
            &((sc_uint<7>)((sc_uint<7>)(( ((sc_uint<2>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_232_6_0_.read()[4])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_232_6_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784(6,0)
    // part assign: lhs_part_268(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784(6,0)
    sc_signal<sc_uint<7> > lhs_part_268;
    void method_36() {
        lhs_part_268 = sc_uint<7>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784_0_0_0_0_0_0.read()(6,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_234_8_0_
    void method_37() {
        sc_uint<6> temp_37;
        temp_37 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,13),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_234_8_0_ = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887_0_0_0_0_0_0(8,0)
    // part assign: lhs_part_269(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887_0_0_0_0_0_0(8,0)
    sc_signal<sc_uint<9> > lhs_part_269;
    void method_38() {
        lhs_part_269 = sc_uint<9>(
        
            ((sc_uint<9>)((sc_uint<9>)(((sc_uint<9>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[12])))))
            &((sc_uint<9>)((sc_uint<9>)(( ((sc_uint<3>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_234_8_0_.read()[5])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_234_8_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887(8,0)
    // part assign: lhs_part_270(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887(8,0)
    sc_signal<sc_uint<9> > lhs_part_270;
    void method_39() {
        lhs_part_270 = sc_uint<9>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887_0_0_0_0_0_0.read()(8,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_236_10_0_
    void method_40() {
        sc_uint<7> temp_40;
        temp_40 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,12),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_236_10_0_ = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990_0_0_0_0_0_0(10,0)
    // part assign: lhs_part_271(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990_0_0_0_0_0_0(10,0)
    sc_signal<sc_uint<11> > lhs_part_271;
    void method_41() {
        lhs_part_271 = sc_uint<11>(
        
            ((sc_uint<11>)((sc_uint<11>)(((sc_uint<11>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[11])))))
            &((sc_uint<11>)((sc_uint<11>)(( ((sc_uint<4>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_236_10_0_.read()[6])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_236_10_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990(10,0)
    // part assign: lhs_part_272(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990(10,0)
    sc_signal<sc_uint<11> > lhs_part_272;
    void method_42() {
        lhs_part_272 = sc_uint<11>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990_0_0_0_0_0_0.read()(10,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_238_12_0_
    void method_43() {
        sc_uint<8> temp_43;
        temp_43 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,11),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_238_12_0_ = temp_43;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093_0_0_0_0_0_0(12,0)
    // part assign: lhs_part_273(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093_0_0_0_0_0_0(12,0)
    sc_signal<sc_uint<13> > lhs_part_273;
    void method_44() {
        lhs_part_273 = sc_uint<13>(
        
            ((sc_uint<13>)((sc_uint<13>)(((sc_uint<13>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[10])))))
            &((sc_uint<13>)((sc_uint<13>)(( ((sc_uint<5>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_238_12_0_.read()[7])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_238_12_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093(12,0)
    // part assign: lhs_part_274(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093(12,0)
    sc_signal<sc_uint<13> > lhs_part_274;
    void method_45() {
        lhs_part_274 = sc_uint<13>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093_0_0_0_0_0_0.read()(12,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_240_14_0_
    void method_46() {
        sc_uint<9> temp_46;
        temp_46 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,10),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_240_14_0_ = temp_46;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196_0_0_0_0_0_0(14,0)
    // part assign: lhs_part_275(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196_0_0_0_0_0_0(14,0)
    sc_signal<sc_uint<15> > lhs_part_275;
    void method_47() {
        lhs_part_275 = sc_uint<15>(
        
            ((sc_uint<15>)((sc_uint<15>)(((sc_uint<15>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[9])))))
            &((sc_uint<15>)((sc_uint<15>)(( ((sc_uint<6>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_240_14_0_.read()[8])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_240_14_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196(14,0)
    // part assign: lhs_part_276(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196(14,0)
    sc_signal<sc_uint<15> > lhs_part_276;
    void method_48() {
        lhs_part_276 = sc_uint<15>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196_0_0_0_0_0_0.read()(14,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_242_16_0_
    void method_49() {
        sc_uint<10> temp_49;
        temp_49 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,9),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_242_16_0_ = temp_49;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299_0_0_0_0_0_0(16,0)
    // part assign: lhs_part_277(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299_0_0_0_0_0_0(16,0)
    sc_signal<sc_uint<17> > lhs_part_277;
    void method_50() {
        lhs_part_277 = sc_uint<17>(
        
            ((sc_uint<17>)((sc_uint<17>)(((sc_uint<17>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[8])))))
            &((sc_uint<17>)((sc_uint<17>)(( ((sc_uint<7>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_242_16_0_.read()[9])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_242_16_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299(16,0)
    // part assign: lhs_part_278(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299(16,0)
    sc_signal<sc_uint<17> > lhs_part_278;
    void method_51() {
        lhs_part_278 = sc_uint<17>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299_0_0_0_0_0_0.read()(16,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_244_18_0_
    void method_52() {
        sc_uint<11> temp_52;
        temp_52 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,8),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_244_18_0_ = temp_52;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402_0_0_0_0_0_0(18,0)
    // part assign: lhs_part_279(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402_0_0_0_0_0_0(18,0)
    sc_signal<sc_uint<19> > lhs_part_279;
    void method_53() {
        lhs_part_279 = sc_uint<19>(
        
            ((sc_uint<19>)((sc_uint<19>)(((sc_uint<19>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[7])))))
            &((sc_uint<19>)((sc_uint<19>)(( ((sc_uint<8>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_244_18_0_.read()[10])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_244_18_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402(18,0)
    // part assign: lhs_part_280(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402(18,0)
    sc_signal<sc_uint<19> > lhs_part_280;
    void method_54() {
        lhs_part_280 = sc_uint<19>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402_0_0_0_0_0_0.read()(18,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_246_20_0_
    void method_55() {
        sc_uint<12> temp_55;
        temp_55 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,7),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_246_20_0_ = temp_55;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505_0_0_0_0_0_0(20,0)
    // part assign: lhs_part_281(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505_0_0_0_0_0_0(20,0)
    sc_signal<sc_uint<21> > lhs_part_281;
    void method_56() {
        lhs_part_281 = sc_uint<21>(
        
            ((sc_uint<21>)((sc_uint<21>)(((sc_uint<21>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[6])))))
            &((sc_uint<21>)((sc_uint<21>)(( ((sc_uint<9>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_246_20_0_.read()[11])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_246_20_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505(20,0)
    // part assign: lhs_part_282(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505(20,0)
    sc_signal<sc_uint<21> > lhs_part_282;
    void method_57() {
        lhs_part_282 = sc_uint<21>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505_0_0_0_0_0_0.read()(20,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_248_22_0_
    void method_58() {
        sc_uint<13> temp_58;
        temp_58 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,6),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_248_22_0_ = temp_58;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608_0_0_0_0_0_0(22,0)
    // part assign: lhs_part_283(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608_0_0_0_0_0_0(22,0)
    sc_signal<sc_uint<23> > lhs_part_283;
    void method_59() {
        lhs_part_283 = sc_uint<23>(
        
            ((sc_uint<23>)((sc_uint<23>)(((sc_uint<23>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[5])))))
            &((sc_uint<23>)((sc_uint<23>)(( ((sc_uint<10>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_248_22_0_.read()[12])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_248_22_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608(22,0)
    // part assign: lhs_part_284(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608(22,0)
    sc_signal<sc_uint<23> > lhs_part_284;
    void method_60() {
        lhs_part_284 = sc_uint<23>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608_0_0_0_0_0_0.read()(22,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_250_24_0_
    void method_61() {
        sc_uint<14> temp_61;
        temp_61 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,5),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_250_24_0_ = temp_61;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711_0_0_0_0_0_0(24,0)
    // part assign: lhs_part_285(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711_0_0_0_0_0_0(24,0)
    sc_signal<sc_uint<25> > lhs_part_285;
    void method_62() {
        lhs_part_285 = sc_uint<25>(
        
            ((sc_uint<25>)((sc_uint<25>)(((sc_uint<25>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[4])))))
            &((sc_uint<25>)((sc_uint<25>)(( ((sc_uint<11>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_250_24_0_.read()[13])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_250_24_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711(24,0)
    // part assign: lhs_part_286(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711(24,0)
    sc_signal<sc_uint<25> > lhs_part_286;
    void method_63() {
        lhs_part_286 = sc_uint<25>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711_0_0_0_0_0_0.read()(24,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_252_26_0_
    void method_64() {
        sc_uint<15> temp_64;
        temp_64 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,4),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_252_26_0_ = temp_64;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814_0_0_0_0_0_0(26,0)
    // part assign: lhs_part_287(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814_0_0_0_0_0_0(26,0)
    sc_signal<sc_uint<27> > lhs_part_287;
    void method_65() {
        lhs_part_287 = sc_uint<27>(
        
            ((sc_uint<27>)((sc_uint<27>)(((sc_uint<27>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[3])))))
            &((sc_uint<27>)((sc_uint<27>)(( ((sc_uint<12>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_252_26_0_.read()[14])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_252_26_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814(26,0)
    // part assign: lhs_part_288(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814(26,0)
    sc_signal<sc_uint<27> > lhs_part_288;
    void method_66() {
        lhs_part_288 = sc_uint<27>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814_0_0_0_0_0_0.read()(26,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_254_28_0_
    void method_67() {
        sc_uint<16> temp_67;
        temp_67 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,3),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_254_28_0_ = temp_67;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917_0_0_0_0_0_0(28,0)
    // part assign: lhs_part_289(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917_0_0_0_0_0_0(28,0)
    sc_signal<sc_uint<29> > lhs_part_289;
    void method_68() {
        lhs_part_289 = sc_uint<29>(
        
            ((sc_uint<29>)((sc_uint<29>)(((sc_uint<29>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[2])))))
            &((sc_uint<29>)((sc_uint<29>)(( ((sc_uint<13>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_254_28_0_.read()[15])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_254_28_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917(28,0)
    // part assign: lhs_part_290(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917(28,0)
    sc_signal<sc_uint<29> > lhs_part_290;
    void method_69() {
        lhs_part_290 = sc_uint<29>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917_0_0_0_0_0_0.read()(28,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_256_30_0_
    void method_70() {
        sc_uint<17> temp_70;
        temp_70 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,2),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_256_30_0_ = temp_70;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020_0_0_0_0_0_0(30,0)
    // part assign: lhs_part_291(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020_0_0_0_0_0_0(30,0)
    sc_signal<sc_uint<31> > lhs_part_291;
    void method_71() {
        lhs_part_291 = sc_uint<31>(
        
            ((sc_uint<31>)((sc_uint<31>)(((sc_uint<31>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()[1])))))
            &((sc_uint<31>)((sc_uint<31>)(( ((sc_uint<14>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_256_30_0_.read()[16])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_256_30_0_.read() ))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020(30,0)
    // part assign: lhs_part_292(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020(30,0)
    sc_signal<sc_uint<31> > lhs_part_292;
    void method_72() {
        lhs_part_292 = sc_uint<31>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020_0_0_0_0_0_0.read()(30,2),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020_0_0_0_0_0_0.read()(0,0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_258_0
    void method_73() {
        sc_uint<18> temp_73;
        temp_73 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,1),sc_uint<2>("0bus01"))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_258_0 = temp_73;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0_0
    void method_74() {
        sc_uint<18> temp_74;
        temp_74 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(0,0)) == sc_uint<1>("0bus1")) & ((sc_uint<18>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_258_0.read()))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0_0 = temp_74;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0
    void method_75() {
        sc_uint<33> temp_75;
        temp_75 = 
            (sc_uint<33>)(( ((sc_uint<15>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0_0.read()[17])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0_0.read() ))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0 = temp_75;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123
    void method_76() {
        sc_uint<33> temp_76;
        temp_76 = 
            ((sc_biguint<31>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0.read()(32,2)),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0_0.read()(0,0))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123 = temp_76;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_260_0
    void method_77() {
        sc_uint<17> temp_77;
        temp_77 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(15,0))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_260_0 = temp_77;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3757(12,12)
    // part assign: lhs_part_293(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3757(12,12)
    sc_signal<sc_uint<1> > lhs_part_293;
    void method_78() {
        lhs_part_293 = sc_uint<1>(
        ~(sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3757(11,0)
    // part assign: lhs_part_294(2): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3757(11,0)
    sc_signal<sc_uint<12> > lhs_part_294;
    void method_79() {
        lhs_part_294 = sc_uint<12>(
        (sc_uint<12>)(a_exp.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: bdw_enable
    void method_80() {
        sc_uint<1> temp_80;
        temp_80 = 
            ~(sc_uint<1>)(astall.read())
        ;
        bdw_enable = temp_80;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x(36,33)
    // part assign: lhs_part_295(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x(36,33)
    sc_signal<sc_uint<4> > lhs_part_295;
    void method_81() {
        lhs_part_295 = sc_uint<4>(
        (sc_uint<4>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3995
    void method_82() {
        sc_uint<1> temp_82;
        temp_82 = 
            ~(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42.read()(8,8))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3995 = temp_82;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_261
    void method_83() {
        sc_biguint<73> temp_83;
        temp_83 = 
            
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000000")) & ((sc_biguint<73>)(sc_biguint<67>("0bus1100100100001110100100001111111000010000000001100100100001011000001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000001")) & ((sc_biguint<73>)(sc_biguint<69>("0bus100101101100001100101011111111101000110000001001100100011101100000000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000010")) & ((sc_biguint<73>)(sc_biguint<69>("0bus111110110010101101110011111111011001010001001001100100010101110000001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000011")) & ((sc_biguint<73>)(sc_biguint<70>("0bus1010111110110110100000000111111001001110011101001100100001010001000110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000100")) & ((sc_biguint<73>)(sc_biguint<70>("0bus1110000110111100001011100101110111010011000010001100011111010101010001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000101")) & ((sc_biguint<73>)(sc_biguint<71>("0bus10001001110011111000011001111110101010111111100001100011100111010101001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000110")) & ((sc_biguint<73>)(sc_biguint<71>("0bus10100010101010111011010110011110011011101010000101100011010000001010010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000111")) & ((sc_biguint<73>)(sc_biguint<71>("0bus10111011011011101100111011111110001100011000100001100010110101001010100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001000")) & ((sc_biguint<73>)(sc_biguint<71>("0bus11010100000101010000000100111101111101001011011001100010010110010110111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001001")) & ((sc_biguint<73>)(sc_biguint<71>("0bus11101100100110100111111100111101101110000011010101100001110011110000101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001010")) & ((sc_biguint<73>)(sc_biguint<72>("0bus100000100111110111000000011101101011111000000111001100001001101011001001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001011")) & ((sc_biguint<73>)(sc_biguint<72>("0bus100011101001101000100001111111101010000000100101001100000100011010001101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001100")) & ((sc_biguint<73>)(sc_biguint<72>("0bus100110101010000010000110000111101000001001111001101011111110101011100000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001101")) & ((sc_biguint<73>)(sc_biguint<72>("0bus101001101000111100010010000101100110010100001001001011111000011111010000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001110")) & ((sc_biguint<73>)(sc_biguint<72>("0bus101100100110001111101110111011100100011111010111101011110001110101101011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001111")) & ((sc_biguint<73>)(sc_biguint<72>("0bus101111100001110101001001100011100010101011101010001011101010101111000010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010000")) & ((sc_biguint<73>)(sc_biguint<72>("0bus110010011011100101010011001001100000111001000100101011100011001011100111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010001")) & ((sc_biguint<73>)(sc_biguint<72>("0bus110101010011011001000001010111011111000111101100001011011011001011101100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010010")) & ((sc_biguint<73>)(sc_biguint<72>("0bus111000001001001001001110110001011101010111100101001011010010101111100100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010011")) & ((sc_biguint<73>)(sc_biguint<72>("0bus111010111100101110111010111001011011101000110011001011001001110111100110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010100")) & ((sc_biguint<73>)(sc_biguint<72>("0bus111101101110000011001010100111011001111011011011001011000000100100000111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1000000011100111111001000011111011000001111100000101010110110110101011101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1000011001001011100000100110111010110100101001000101010101100101100000000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1000101110011010011010110010001010100111100010110101010100010001000001011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001000011010011110011001100101010011010101001111001010010111001010010110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001010111110110110110010011001010001101111110101101010001011110010111101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001101100000010110001011000101010000001100001110001010000000000010011100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001111111110110110010101001111001110101010011100101001110011111001001111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1010010011010010001001001101111001101001010100100101001100111010111110110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1010100110010100000101001001011001011101100101010101001011010011110101110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1010111000111011110111011111011001010010000110001001001001101001110010111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011001011001000110010010011001001000110110111100101000111111100111010011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011011100111010001000101010101000111011111010000001000110001101010000011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011101110001111001110101111101000110001001101111001000100011010111001001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011111111000111011001110001111000100110110011100101000010100101111001000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100001111100010000000000111111000011100101011100001000000101110010100101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100011111011110011001010010001000010010110110000100111110110100010000101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100101110111011111101111010101000001001010011101000111100110111110001100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100111101111010000111110111101000000000000100101000111010111000111100010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101001100011000010010001101100111110111001001010100111000110111110101110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101011010010101111001001111000111101110100010000100110110110100100010111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101100111110010011010011111100111100110001111010000110100101111001000110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101110100101101010100110011100111011110010001001100110010100111101100100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110000001000110001000010011010111010110101000001000110000011110010011011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110001100111100010110011010010111001111010100011100101110010011000010101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110011000001111100001111010000111001000010110010100101100000101111111110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110100010111111001110111010000111000001101110001000101001110111010000000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110101101001011000010111010000110111011011100000100100111100110111001000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110110110110010100100110001000110110101100000011000100101010101000000010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110111111110101011100110001000110101111111011010100100011000001101011011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111001000010011010100100101100110101010101101000100100000101101000000001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111010000001011110111010101110110100101110101110100011110010111000100001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111010111011110110001100100100110100001010101110100011011111111111101010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111011110001011110001010010000110011101001101001100011001100111110001010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111100100010010100101111011110110011001011100000100010111001110100110001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111101001110011000000011101100110010110000010101100010100110100100001101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111101110101100110011010001110110010011000001001000010010011001101001110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111110010111111110010010010100110010000010111100000001111111110000100100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111110110101011110010111000110110001110000101111100001101100001110111111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111001110000101011111110110110001100001100100000001011000101001001111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111100001110010101111110010110001010101011010000001000101000000000100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111110000100101010110010110110001001100010010000000110001010100001111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111111010011100101111000000110001000110001100100000011101100110100000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111111111011000100001011010110001000011001001100000001001110111101000")))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_261 = temp_83;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_259(20,0)
    // part assign: lhs_part_296(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_259(20,0)
    sc_signal<sc_uint<21> > lhs_part_296;
    void method_84() {
        lhs_part_296 = sc_uint<21>(
        (sc_uint<1>(1),(sc_biguint<20>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_261.read()(42,23)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_9;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_10;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_11;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_12;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_13;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_14;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_15;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_16;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_17;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_18;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_19;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_20;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_21;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_22;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<33> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_23;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_23
    void method_85() {
        sc_uint<33> temp_85;
        temp_85 = 
            
            +((sc_uint<33>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1544.read()))
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578.read()(2,0))<<(shift_v)30))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_23 = temp_85;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_22
    void method_86() {
        sc_uint<33> temp_86;
        temp_86 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_23.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681.read()(4,0))<<(shift_v)28))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_22 = temp_86;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_21
    void method_87() {
        sc_uint<33> temp_87;
        temp_87 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_22.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784.read()(6,0))<<(shift_v)26))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_21 = temp_87;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_20
    void method_88() {
        sc_uint<33> temp_88;
        temp_88 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_21.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887.read()(8,0))<<(shift_v)24))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_20 = temp_88;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_19
    void method_89() {
        sc_uint<33> temp_89;
        temp_89 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_20.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990.read()(10,0))<<(shift_v)22))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_19 = temp_89;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_18
    void method_90() {
        sc_uint<33> temp_90;
        temp_90 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_19.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093.read()(12,0))<<(shift_v)20))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_18 = temp_90;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_17
    void method_91() {
        sc_uint<33> temp_91;
        temp_91 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_18.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196.read()(14,0))<<(shift_v)18))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_17 = temp_91;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_16
    void method_92() {
        sc_uint<33> temp_92;
        temp_92 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_17.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299.read()(16,0))<<(shift_v)16))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_16 = temp_92;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_15
    void method_93() {
        sc_uint<33> temp_93;
        temp_93 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_16.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402.read()(18,0))<<(shift_v)14))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_15 = temp_93;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_14
    void method_94() {
        sc_uint<33> temp_94;
        temp_94 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_15.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505.read()(20,0))<<(shift_v)12))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_14 = temp_94;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_13
    void method_95() {
        sc_uint<33> temp_95;
        temp_95 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_14.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608.read()(22,0))<<(shift_v)10))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_13 = temp_95;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_12
    void method_96() {
        sc_uint<33> temp_96;
        temp_96 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_13.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711.read()(24,0))<<(shift_v)8))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_12 = temp_96;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_11
    void method_97() {
        sc_uint<33> temp_97;
        temp_97 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_12.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814.read()(26,0))<<(shift_v)6))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_11 = temp_97;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_10
    void method_98() {
        sc_uint<33> temp_98;
        temp_98 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_11.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917.read()(28,0))<<(shift_v)4))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_10 = temp_98;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_9
    void method_99() {
        sc_uint<33> temp_99;
        temp_99 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_10.read()
            +((sc_uint<33>)(((sc_uint<33>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020.read()(30,0))<<(shift_v)2))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_9 = temp_99;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198
    void method_100() {
        sc_uint<33> temp_100;
        temp_100 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_9.read()
            +((sc_uint<33>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123.read()))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198 = temp_100;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<50> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_24;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<50> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_25;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<50> > DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_26;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_26
    void method_101() {
        sc_uint<50> temp_101;
        temp_101 = 
            
            +((sc_uint<50>)(((sc_uint<50>)((DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_261.read()(72,43))<<(shift_v)18))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_26 = temp_101;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_25
    void method_102() {
        sc_uint<50> temp_102;
        temp_102 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_26.read()
            +((sc_uint<50>)(( ((sc_uint<29>)(sc_int<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_259.read()[20])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_259.read()(20,0) )) * (sc_uint<50>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198.read()(32,17)))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_25 = temp_102;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_24
    void method_103() {
        sc_uint<50> temp_103;
        temp_103 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_25.read()
            +(((sc_uint<50>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_261.read()(21,0)) * (sc_uint<50>)(( ((sc_biguint<33>)(sc_bigint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_260_0.read()[16])), DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_260_0.read() )))<<4)
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_24 = temp_103;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201
    void method_104() {
        sc_uint<50> temp_104;
        temp_104 = 
            DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_24.read()
            +((sc_uint<50>)(sc_uint<26>("0bus01000000000000000000000000")))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201 = temp_104;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200(48,0)
    // part assign: lhs_part_297(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200(48,0)
    sc_signal<sc_uint<49> > lhs_part_297;
    void method_105() {
        lhs_part_297 = sc_uint<49>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201.read()(49,49)) == sc_uint<1>("0bus0")) & ((sc_uint<49>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201.read()(48,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__219
    void method_106() {
        sc_uint<1> temp_106;
        temp_106 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(48,48))))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61.read()(22,22))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__219 = temp_106;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__211__182(4,0)
    // part assign: lhs_part_298(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__211__182(4,0)
    sc_signal<sc_uint<5> > lhs_part_298;
    void method_107() {
        lhs_part_298 = sc_uint<5>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,47)) == sc_uint<1>("0bus1")) & ((sc_uint<5>)(sc_uint<4>("0bus1000"))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,46)) == sc_uint<2>("0bus01")) & ((sc_uint<5>)(sc_uint<4>("0bus1001"))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,45)) == sc_uint<3>("0bus001")) & ((sc_uint<5>)(sc_uint<4>("0bus1010"))) |
        -(int)((sc_uint<4>)(sc_uint<4>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,44)) == sc_uint<4>("0bus0001")) & ((sc_uint<5>)(sc_uint<4>("0bus1011"))) |
        -(int)((sc_uint<5>)(sc_uint<5>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,43)) == sc_uint<5>("0bus00001")) & ((sc_uint<5>)(sc_uint<4>("0bus1100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,42)) == sc_uint<6>("0bus000001")) & ((sc_uint<5>)(sc_uint<4>("0bus1101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,41)) == sc_uint<7>("0bus0000001")) & ((sc_uint<5>)(sc_uint<4>("0bus1110"))) |
        -(int)((sc_uint<8>)(sc_uint<8>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,40)) == sc_uint<8>("0bus00000001")) & ((sc_uint<5>)(sc_uint<4>("0bus1111"))) |
        -(int)((sc_uint<9>)(sc_uint<9>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,39)) == sc_uint<9>("0bus000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10000"))) |
        -(int)((sc_uint<10>)(sc_uint<10>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,38)) == sc_uint<10>("0bus0000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10001"))) |
        -(int)((sc_uint<11>)(sc_uint<11>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,37)) == sc_uint<11>("0bus00000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10010"))) |
        -(int)((sc_uint<12>)(sc_uint<12>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,36)) == sc_uint<12>("0bus000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10011"))) |
        -(int)((sc_uint<13>)(sc_uint<13>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,35)) == sc_uint<13>("0bus0000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10100"))) |
        -(int)((sc_uint<14>)(sc_uint<14>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,34)) == sc_uint<14>("0bus00000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10101"))) |
        -(int)((sc_uint<15>)(sc_uint<15>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,33)) == sc_uint<15>("0bus000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10110"))) |
        -(int)((sc_uint<16>)(sc_uint<16>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,32)) == sc_uint<16>("0bus0000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10111"))) |
        -(int)((sc_uint<17>)(sc_uint<17>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,31)) == sc_uint<17>("0bus00000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11000"))) |
        -(int)((sc_uint<18>)(sc_uint<18>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,30)) == sc_uint<18>("0bus000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11001"))) |
        -(int)((sc_uint<19>)(sc_uint<19>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,29)) == sc_uint<19>("0bus0000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11010"))) |
        -(int)((sc_uint<20>)(sc_uint<20>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,28)) == sc_uint<20>("0bus00000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11011"))) |
        -(int)((sc_uint<21>)(sc_uint<21>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,27)) == sc_uint<21>("0bus000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11100"))) |
        -(int)((sc_uint<22>)(sc_uint<22>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,26)) == sc_uint<22>("0bus0000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11101"))) |
        -(int)((sc_uint<23>)(sc_uint<23>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,25)) == sc_uint<23>("0bus00000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11110"))) |
        -(int)((sc_uint<23>)(sc_uint<23>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,25)) == sc_uint<23>("0bus00000000000000000000000")) & ((sc_uint<5>)(sc_uint<5>("0bus11111")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__215
    void method_108() {
        sc_uint<5> temp_108;
        temp_108 = 
            
            +((sc_uint<5>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__211__182.read()(4,0)))
            -((sc_uint<5>)(sc_uint<5>("0b00111")))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__215 = temp_108;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220__188(22,0)
    // part assign: lhs_part_299(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220__188(22,0)
    sc_signal<sc_uint<23> > lhs_part_299;
    void method_109() {
        lhs_part_299 = sc_uint<23>(
         ((shift_v)(((sc_uint<5>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__215.read())).to_long()) >= 23 ? (sc_uint<23>)(0) : (sc_uint<23>)((sc_uint<23>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read()(47,25)) << (shift_v)(((sc_uint<5>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__215.read())).to_long())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__221__195
    void method_110() {
        sc_uint<7> temp_110;
        temp_110 = 
            
            -((sc_uint<7>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__215.read()))
            +((sc_uint<7>)(sc_uint<7>("0bus1111111")))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__221__195 = temp_110;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_265
    void method_111() {
        sc_uint<31> temp_111;
        temp_111 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220__188.read()(22,0),sc_uint<1>(0),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__221__195.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_265 = temp_111;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2
    void method_112() {
        sc_uint<31> temp_112;
        temp_112 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__219.read()) == sc_uint<1>("0bus0")) & ((sc_uint<31>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_265.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__219.read()) == sc_uint<1>("0bus1")) & ((sc_uint<31>)(sc_uint<7>("0bus1111111")))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2 = temp_112;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__223__208
    void method_113() {
        sc_uint<1> temp_113;
        temp_113 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(29,29))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(28,28))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(27,27))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(26,26))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(9,9))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__223__208 = temp_113;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19
    void method_114() {
        sc_uint<1> temp_114;
        temp_114 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_exp.read()(6,6))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(7,7))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(0,0))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19 = temp_114;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__24
    void method_115() {
        sc_uint<1> temp_115;
        temp_115 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(0,0))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(1,1))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(2,2))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(3,3))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(4,4))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(5,5))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(6,6))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(7,7))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(8,8))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(9,9))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(10,10))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(11,11))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(12,12))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(13,13))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(14,14))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(15,15))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(16,16))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(17,17))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(18,18))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(19,19))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(20,20))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(21,21))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_man.read()(22,22))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__24 = temp_115;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__69
    void method_116() {
        sc_uint<1> temp_116;
        temp_116 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__24.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__69 = temp_116;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82
    void method_117() {
        sc_uint<1> temp_117;
        temp_117 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__69.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82 = temp_117;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__237(31,31)
    // part assign: lhs_part_300(1): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__237(31,31)
    sc_signal<sc_uint<1> > lhs_part_300;
    void method_118() {
        lhs_part_300 = sc_uint<1>(
        
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3995.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__223__208.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42.read()(6,6))))
            &((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42.read()(7,7))))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__66
    void method_119() {
        sc_uint<1> temp_119;
        temp_119 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__24.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(a_sign.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__66 = temp_119;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__67
    void method_120() {
        sc_uint<1> temp_120;
        temp_120 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__24.read())))
            &((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__67 = temp_120;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__68
    void method_121() {
        sc_uint<1> temp_121;
        temp_121 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__66.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__67.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__68 = temp_121;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__21
    void method_122() {
        sc_uint<1> temp_122;

                    sc_uint<18> DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__21_tmp_27 = 
            -((sc_uint<18>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3757.read()))
            +((sc_uint<18>)(sc_uint<14>("0bus01000001100101")));
        temp_122 = (((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__21_tmp_27[17]))==((sc_uint<1>)0))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__21 = temp_122;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__17
    void method_123() {
        sc_uint<1> temp_123;
        temp_123 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(7,7))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(0,0))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(1,1))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(2,2))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(3,3))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(4,4))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(5,5))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(6,6))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__17 = temp_123;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46__15
    void method_124() {
        sc_uint<1> temp_124;
        temp_124 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42.read()(7,7))))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46__15 = temp_124;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46
    void method_125() {
        sc_uint<1> temp_125;
        temp_125 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3995.read())))
            &((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46__15.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46 = temp_125;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__83__62
    void method_126() {
        sc_uint<1> temp_126;
        temp_126 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__21.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__17.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__83__62 = temp_126;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228__231
    void method_127() {
        sc_uint<1> temp_127;
        temp_127 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__68.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__83__62.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228__231 = temp_127;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__213
    void method_128() {
        sc_uint<1> temp_128;
        temp_128 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__68.read())))
            |((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__83__62.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__213 = temp_128;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__212
    void method_129() {
        sc_uint<1> temp_129;
        temp_129 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82.read())))
            |((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__213.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__212 = temp_129;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215
    void method_130() {
        sc_uint<1> temp_130;
        temp_130 = 
            
            ((sc_uint<1>)((sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82.read())))
            |((sc_uint<1>)(~(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__68.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215 = temp_130;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_266
    void method_131() {
        sc_uint<8> temp_131;
        temp_131 = 
            (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__212.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215.read())
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_266 = temp_131;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228
    void method_132() {
        sc_uint<8> temp_132;
        temp_132 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228__231.read()) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(6,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228__231.read()) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_266.read()))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228 = temp_132;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__231
    void method_133() {
        sc_uint<23> temp_133;
        temp_133 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228__231.read()) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2.read()(30,8))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228__231.read()) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(((sc_uint<23>)(sc_int<1>)DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82.read())))
        ;
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__231 = temp_133;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x(31,0)
    // part assign: lhs_part_301(2): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x(31,0)
    sc_signal<sc_uint<32> > lhs_part_301;
    void method_134() {
        lhs_part_301 = sc_uint<32>(
        (DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__237.read()(31,31),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228.read(),DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__231.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x(32,32)
    // part assign: lhs_part_302(3): DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x(32,32)
    sc_signal<sc_uint<1> > lhs_part_302;
    void method_135() {
        lhs_part_302 = sc_uint<1>(
        (sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4105
     sc_signal<sc_uint<37> > cascade_x[1];
    // !!!! amethyst/writers/SystemC.cpp:4161
    void method_136() {
                    if (bdw_enable.read()==1) {cascade_x[0] = (sc_uint<37>)((sc_uint<37>)(DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x.read()));
        }    }
    // !!!! amethyst/writers/SystemC.cpp:4283
    void method_137() {
            x = cascade_x[0].read();
    }
    void method_138() { 
        sc_uint<33> temp_138 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1544.read();
        temp_138(31,0) = lhs_part_258.read();
        temp_138(32,32) = lhs_part_261.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1544 = temp_138;
}
    void method_139() { 
        sc_uint<30> temp_139 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_.read();
        temp_139(24,0) = lhs_part_259.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_ = temp_139;
}
    void method_140() { 
        sc_uint<3> temp_140 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24.read();
        temp_140(1,0) = lhs_part_260.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24 = temp_140;
}
    void method_141() { 
        sc_uint<33> temp_141 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_228.read();
        temp_141(2,0) = lhs_part_262.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_228 = temp_141;
}
    void method_142() { 
        sc_uint<33> temp_142 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578_0_0_0_0_0_0.read();
        temp_142(2,0) = lhs_part_263.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578_0_0_0_0_0_0 = temp_142;
}
    void method_143() { 
        sc_uint<33> temp_143 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578.read();
        temp_143(2,0) = lhs_part_264.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578 = temp_143;
}
    void method_144() { 
        sc_uint<33> temp_144 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681_0_0_0_0_0_0.read();
        temp_144(4,0) = lhs_part_265.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681_0_0_0_0_0_0 = temp_144;
}
    void method_145() { 
        sc_uint<33> temp_145 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681.read();
        temp_145(4,0) = lhs_part_266.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681 = temp_145;
}
    void method_146() { 
        sc_uint<33> temp_146 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784_0_0_0_0_0_0.read();
        temp_146(6,0) = lhs_part_267.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784_0_0_0_0_0_0 = temp_146;
}
    void method_147() { 
        sc_uint<33> temp_147 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784.read();
        temp_147(6,0) = lhs_part_268.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784 = temp_147;
}
    void method_148() { 
        sc_uint<33> temp_148 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887_0_0_0_0_0_0.read();
        temp_148(8,0) = lhs_part_269.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887_0_0_0_0_0_0 = temp_148;
}
    void method_149() { 
        sc_uint<33> temp_149 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887.read();
        temp_149(8,0) = lhs_part_270.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887 = temp_149;
}
    void method_150() { 
        sc_uint<33> temp_150 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990_0_0_0_0_0_0.read();
        temp_150(10,0) = lhs_part_271.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990_0_0_0_0_0_0 = temp_150;
}
    void method_151() { 
        sc_uint<33> temp_151 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990.read();
        temp_151(10,0) = lhs_part_272.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990 = temp_151;
}
    void method_152() { 
        sc_uint<33> temp_152 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093_0_0_0_0_0_0.read();
        temp_152(12,0) = lhs_part_273.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093_0_0_0_0_0_0 = temp_152;
}
    void method_153() { 
        sc_uint<33> temp_153 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093.read();
        temp_153(12,0) = lhs_part_274.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093 = temp_153;
}
    void method_154() { 
        sc_uint<33> temp_154 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196_0_0_0_0_0_0.read();
        temp_154(14,0) = lhs_part_275.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196_0_0_0_0_0_0 = temp_154;
}
    void method_155() { 
        sc_uint<33> temp_155 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196.read();
        temp_155(14,0) = lhs_part_276.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196 = temp_155;
}
    void method_156() { 
        sc_uint<33> temp_156 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299_0_0_0_0_0_0.read();
        temp_156(16,0) = lhs_part_277.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299_0_0_0_0_0_0 = temp_156;
}
    void method_157() { 
        sc_uint<33> temp_157 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299.read();
        temp_157(16,0) = lhs_part_278.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299 = temp_157;
}
    void method_158() { 
        sc_uint<33> temp_158 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402_0_0_0_0_0_0.read();
        temp_158(18,0) = lhs_part_279.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402_0_0_0_0_0_0 = temp_158;
}
    void method_159() { 
        sc_uint<33> temp_159 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402.read();
        temp_159(18,0) = lhs_part_280.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402 = temp_159;
}
    void method_160() { 
        sc_uint<33> temp_160 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505_0_0_0_0_0_0.read();
        temp_160(20,0) = lhs_part_281.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505_0_0_0_0_0_0 = temp_160;
}
    void method_161() { 
        sc_uint<33> temp_161 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505.read();
        temp_161(20,0) = lhs_part_282.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505 = temp_161;
}
    void method_162() { 
        sc_uint<33> temp_162 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608_0_0_0_0_0_0.read();
        temp_162(22,0) = lhs_part_283.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608_0_0_0_0_0_0 = temp_162;
}
    void method_163() { 
        sc_uint<33> temp_163 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608.read();
        temp_163(22,0) = lhs_part_284.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608 = temp_163;
}
    void method_164() { 
        sc_uint<33> temp_164 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711_0_0_0_0_0_0.read();
        temp_164(24,0) = lhs_part_285.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711_0_0_0_0_0_0 = temp_164;
}
    void method_165() { 
        sc_uint<33> temp_165 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711.read();
        temp_165(24,0) = lhs_part_286.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711 = temp_165;
}
    void method_166() { 
        sc_uint<33> temp_166 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814_0_0_0_0_0_0.read();
        temp_166(26,0) = lhs_part_287.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814_0_0_0_0_0_0 = temp_166;
}
    void method_167() { 
        sc_uint<33> temp_167 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814.read();
        temp_167(26,0) = lhs_part_288.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814 = temp_167;
}
    void method_168() { 
        sc_uint<33> temp_168 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917_0_0_0_0_0_0.read();
        temp_168(28,0) = lhs_part_289.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917_0_0_0_0_0_0 = temp_168;
}
    void method_169() { 
        sc_uint<33> temp_169 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917.read();
        temp_169(28,0) = lhs_part_290.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917 = temp_169;
}
    void method_170() { 
        sc_uint<33> temp_170 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020_0_0_0_0_0_0.read();
        temp_170(30,0) = lhs_part_291.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020_0_0_0_0_0_0 = temp_170;
}
    void method_171() { 
        sc_uint<33> temp_171 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020.read();
        temp_171(30,0) = lhs_part_292.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020 = temp_171;
}
    void method_172() { 
        sc_uint<13> temp_172 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3757.read();
        temp_172(12,12) = lhs_part_293.read();
        temp_172(11,0) = lhs_part_294.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3757 = temp_172;
}
    void method_173() { 
        sc_uint<37> temp_173 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x.read();
        temp_173(36,33) = lhs_part_295.read();
        temp_173(31,0) = lhs_part_301.read();
        temp_173(32,32) = lhs_part_302.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_x = temp_173;
}
    void method_174() { 
        sc_uint<50> temp_174 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_259.read();
        temp_174(20,0) = lhs_part_296.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_259 = temp_174;
}
    void method_175() { 
        sc_uint<50> temp_175 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200.read();
        temp_175(48,0) = lhs_part_297.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200 = temp_175;
}
    void method_176() { 
        sc_uint<6> temp_176 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__211__182.read();
        temp_176(4,0) = lhs_part_298.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__211__182 = temp_176;
}
    void method_177() { 
        sc_uint<54> temp_177 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220__188.read();
        temp_177(22,0) = lhs_part_299.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220__188 = temp_177;
}
    void method_178() { 
        sc_uint<32> temp_178 = DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__237.read();
        temp_178(31,31) = lhs_part_300.read();
        DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__237 = temp_178;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(DFT_compute_cynw_cm_float_cos_E8_M23_1)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_0);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_1);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_2);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_3);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_4);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_5);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_6);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_7);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_8);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_9);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_10);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_11);

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_12);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__9
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__8;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_13);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_8
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__7;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_14);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_7
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__6;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_15);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_6
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__5;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_16);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_5
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__4;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_17);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_4
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__3;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_18);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_3
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__2;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_19);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_2
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__1;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_20);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0__0;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_21);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0__tmp_0
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_216_23_0_;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_22);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_23);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_blk01_cellmath__39_56_0_
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_24);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_25);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__48_32_0_
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_26);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_27);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_28);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_29);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_228;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_30);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_31);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_32);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_230_4_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_33);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_34);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_35);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_232_6_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_36);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_37);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_38);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_234_8_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_39);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_40);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_41);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_236_10_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_42);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_43);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_44);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_238_12_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_45);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_46);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_47);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_240_14_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_48);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_49);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_50);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_242_16_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_51);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_52);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_53);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_244_18_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_54);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_55);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_56);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_246_20_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_57);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_58);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_59);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_248_22_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_60);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_61);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_62);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_250_24_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_63);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_64);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_65);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_252_26_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_66);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_67);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_68);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_254_28_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_69);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_70);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_71);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_256_30_0_;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_72);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020_0_0_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_73);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_74);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_258_0
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_75);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_76);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123_0_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_77);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__115__W1
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_78);

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_79);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_80);
        sensitive << astall;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_81);

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_82);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_83);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_84);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_261;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_85);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1544
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1578;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_86);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_23
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1681;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_87);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_22
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1784;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_88);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_21
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1887;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_89);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_20
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n1990;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_90);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_19
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2093;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_91);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_18
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2196;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_92);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_17
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2299;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_93);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_16
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2402;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_94);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_15
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2505;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_95);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_14
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2608;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_96);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_13
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2711;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_97);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_12
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2814;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_98);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_11
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n2917;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_99);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_10
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3020;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_100);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198_tmp_9
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3123;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_101);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_261;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_102);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_26
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_259
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__198;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_103);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_25
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_261
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_260_0;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_104);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201_tmp_24;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_105);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__201;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_106);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_107);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_108);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__211__182;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_109);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__200
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__215;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_110);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__215;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_111);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220__188
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__221__195;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_112);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_265
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__219;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_113);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_114);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_115);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_116);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__24;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_117);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__69;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_118);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3995
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__58__24
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__223__208
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_119);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__24
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19
                  << a_sign;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_120);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__24
                  << a_sign
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__19;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_121);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__66
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__67;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_122);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3757;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_123);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_124);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_125);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_n3995
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46__15;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_126);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__21
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__17
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__46;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_127);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__68
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__83__62
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_128);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__68
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__83__62;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_129);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__213;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_130);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__68;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_131);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__224__212
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__225__215;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_132);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_tmp_266
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228__231;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_133);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__220_22_0__2
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__82
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228__231;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_134);
        sensitive << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__237
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__228
                  << DFT_compute_cynw_cm_float_cos_E8_M23_0_inst_inst_cellmath__231;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_135);

    // !!!! amethyst/writers/SystemC.cpp:4105
    // !!!! amethyst/writers/SystemC.cpp:4161
        SC_METHOD(method_136);
        sensitive << aclk.pos();
    // !!!! amethyst/writers/SystemC.cpp:4283
        SC_METHOD(method_137);
        sensitive << cascade_x[0];
        SC_METHOD(method_138);
        sensitive << lhs_part_258
                  << lhs_part_261;
        SC_METHOD(method_139);
        sensitive << lhs_part_259;
        SC_METHOD(method_140);
        sensitive << lhs_part_260;
        SC_METHOD(method_141);
        sensitive << lhs_part_262;
        SC_METHOD(method_142);
        sensitive << lhs_part_263;
        SC_METHOD(method_143);
        sensitive << lhs_part_264;
        SC_METHOD(method_144);
        sensitive << lhs_part_265;
        SC_METHOD(method_145);
        sensitive << lhs_part_266;
        SC_METHOD(method_146);
        sensitive << lhs_part_267;
        SC_METHOD(method_147);
        sensitive << lhs_part_268;
        SC_METHOD(method_148);
        sensitive << lhs_part_269;
        SC_METHOD(method_149);
        sensitive << lhs_part_270;
        SC_METHOD(method_150);
        sensitive << lhs_part_271;
        SC_METHOD(method_151);
        sensitive << lhs_part_272;
        SC_METHOD(method_152);
        sensitive << lhs_part_273;
        SC_METHOD(method_153);
        sensitive << lhs_part_274;
        SC_METHOD(method_154);
        sensitive << lhs_part_275;
        SC_METHOD(method_155);
        sensitive << lhs_part_276;
        SC_METHOD(method_156);
        sensitive << lhs_part_277;
        SC_METHOD(method_157);
        sensitive << lhs_part_278;
        SC_METHOD(method_158);
        sensitive << lhs_part_279;
        SC_METHOD(method_159);
        sensitive << lhs_part_280;
        SC_METHOD(method_160);
        sensitive << lhs_part_281;
        SC_METHOD(method_161);
        sensitive << lhs_part_282;
        SC_METHOD(method_162);
        sensitive << lhs_part_283;
        SC_METHOD(method_163);
        sensitive << lhs_part_284;
        SC_METHOD(method_164);
        sensitive << lhs_part_285;
        SC_METHOD(method_165);
        sensitive << lhs_part_286;
        SC_METHOD(method_166);
        sensitive << lhs_part_287;
        SC_METHOD(method_167);
        sensitive << lhs_part_288;
        SC_METHOD(method_168);
        sensitive << lhs_part_289;
        SC_METHOD(method_169);
        sensitive << lhs_part_290;
        SC_METHOD(method_170);
        sensitive << lhs_part_291;
        SC_METHOD(method_171);
        sensitive << lhs_part_292;
        SC_METHOD(method_172);
        sensitive << lhs_part_293
                  << lhs_part_294;
        SC_METHOD(method_173);
        sensitive << lhs_part_295
                  << lhs_part_301
                  << lhs_part_302;
        SC_METHOD(method_174);
        sensitive << lhs_part_296;
        SC_METHOD(method_175);
        sensitive << lhs_part_297;
        SC_METHOD(method_176);
        sensitive << lhs_part_298;
        SC_METHOD(method_177);
        sensitive << lhs_part_299;
        SC_METHOD(method_178);
        sensitive << lhs_part_300;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef DFT_compute_cynw_cm_float_cos_E8_M23_1_COMPILED

/* CADENCE  urPySQDfrxA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




