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
    
    Configured at: 11:20:27 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef DFT_compute_cynw_cm_float_sin_E8_M23_0_COMPILED
#define DFT_compute_cynw_cm_float_sin_E8_M23_0_COMPILED

SC_MODULE(DFT_compute_cynw_cm_float_sin_E8_M23_0) // architecture "behavioural"
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
    sc_signal<sc_uint<1> > inst_cellmath__17;
    sc_signal<sc_uint<1> > inst_cellmath__19;
    sc_signal<sc_uint<1> > inst_cellmath__24;
    sc_signal<sc_uint<9> > inst_cellmath__42;
    sc_signal<sc_uint<23> > inst_cellmath__61;
    sc_signal<sc_uint<1> > inst_cellmath__66;
    sc_signal<sc_uint<1> > inst_cellmath__67;
    sc_signal<sc_uint<1> > inst_cellmath__68;
    sc_signal<sc_uint<1> > inst_cellmath__69;
    sc_signal<sc_uint<1> > inst_cellmath__82;
    sc_signal<sc_uint<1> > inst_cellmath__115__W1;
    sc_signal<sc_uint<30> > inst_cellmath__195;
    sc_signal<sc_uint<21> > inst_cellmath__197;
    sc_signal<sc_uint<33> > inst_cellmath__198;
    sc_signal<sc_uint<50> > inst_cellmath__200;
    sc_signal<sc_uint<50> > inst_cellmath__201;
    sc_signal<sc_uint<31> > inst_cellmath__210;
    sc_signal<sc_uint<5> > inst_cellmath__215;
    sc_signal<sc_uint<1> > inst_cellmath__219;
    sc_signal<sc_uint<1> > inst_cellmath__223;
    sc_signal<sc_uint<8> > inst_cellmath__228;
    sc_signal<sc_uint<23> > inst_cellmath__231;
    sc_signal<sc_uint<32> > inst_cellmath__237;
    sc_signal<sc_uint<1> > inst_cellmath__79__46;
    sc_signal<sc_uint<21> > inst_cellmath__197__131;
    sc_signal<sc_uint<32> > inst_cellmath__211__183;
    sc_signal<sc_uint<6> > inst_cellmath__211__182;
    sc_signal<sc_uint<1> > inst_cellmath__216__184;
    sc_signal<sc_uint<54> > inst_cellmath__220__188;
    sc_signal<sc_uint<7> > inst_cellmath__221__195;
    sc_signal<sc_uint<1> > inst_cellmath__223__207;
    sc_signal<sc_uint<1> > inst_cellmath__223__208;
    sc_signal<sc_uint<1> > inst_cellmath__223__199;
    sc_signal<sc_uint<1> > inst_cellmath__224__212;
    sc_signal<sc_uint<1> > inst_cellmath__228__231;
    sc_signal<sc_uint<56> > inst_blk01_cellmath__39_56_0_;
    sc_signal<sc_uint<2> > inst_cellmath__216_0;
    sc_signal<sc_uint<31> > inst_cellmath__220_22_0_;
    sc_signal<sc_uint<31> > inst_cellmath__220_22_0__0;
    sc_signal<sc_uint<31> > inst_cellmath__220_22_0__1;
    sc_signal<sc_uint<30> > inst_cellmath__48_32_0_;
    sc_signal<sc_uint<2> > inst_cellmath__231__242_0_0_0;
    sc_signal<sc_biguint<73> > inst_cellmath__195__80_0_0;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_0;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_1;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_2;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_3;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_4;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_5;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_6;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_7;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_8;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_9;
    sc_signal<sc_uint<24> > inst_blk01_cellmath__39__12_10_10;
    sc_signal<sc_uint<17> > inst_cellmath__113_0_0;
    sc_signal<sc_uint<17> > inst_cellmath__113_0_1;
    sc_signal<sc_uint<2> > inst_cellmath__116__W1_0_0_1_0;
    sc_signal<sc_uint<2> > inst_cellmath__116__W1_0_0_1_1;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x(32,32)
    // part assign: lhs_part_87(1): x(32,32)
    sc_signal<sc_uint<1> > lhs_part_87;
    void method_0() {
        lhs_part_87 = sc_uint<1>(
        (sc_uint<1>)(sc_uint<1>(0))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_0
    void method_1() {
        sc_uint<24> temp_1;
        temp_1 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_0 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_1
    void method_2() {
        sc_uint<24> temp_2;
        temp_2 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_1 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_2
    void method_3() {
        sc_uint<24> temp_3;
        temp_3 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_2 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_3
    void method_4() {
        sc_uint<24> temp_4;
        temp_4 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_3 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_4
    void method_5() {
        sc_uint<24> temp_5;
        temp_5 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_4 = temp_5;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_5
    void method_6() {
        sc_uint<24> temp_6;
        temp_6 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_5 = temp_6;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_6
    void method_7() {
        sc_uint<24> temp_7;
        temp_7 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_6 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_7
    void method_8() {
        sc_uint<24> temp_8;
        temp_8 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_7 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_8
    void method_9() {
        sc_uint<24> temp_9;
        temp_9 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_8 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_9
    void method_10() {
        sc_uint<24> temp_10;
        temp_10 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_9 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_blk01_cellmath__39__12_10_10
    void method_11() {
        sc_uint<24> temp_11;
        temp_11 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_blk01_cellmath__39__12_10_10 = temp_11;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_blk01_cellmath__39_56_0_
    void method_12() {
        sc_uint<56> temp_12;
        temp_12 = 
            
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_9.read())<<(shift_v)1))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_8.read())<<(shift_v)4))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_7.read())<<(shift_v)7))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_6.read())<<(shift_v)10))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_5.read())<<(shift_v)15))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_4.read())<<(shift_v)17))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_3.read())<<(shift_v)19))))
            -((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_2.read())<<(shift_v)24))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_1.read())<<(shift_v)26))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_0.read())<<(shift_v)29))))
            +((sc_uint<56>)(((sc_uint<56>)((inst_blk01_cellmath__39__12_10_10.read())<<(shift_v)31))))
        ;
        inst_blk01_cellmath__39_56_0_ = temp_12;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__42(5,0)
    // part assign: lhs_part_88(1): inst_cellmath__42(5,0)
    sc_signal<sc_uint<6> > lhs_part_88;
    void method_13() {
        lhs_part_88 = sc_uint<6>(
        
            -((sc_uint<6>)(a_exp.read()(5,0)))
            +((sc_uint<6>)(sc_uint<6>("0bus000101")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: inst_cellmath__48_32_0_(24,0)
    // part assign: lhs_part_89(1): inst_cellmath__48_32_0_(24,0)
    sc_signal<sc_uint<25> > lhs_part_89;
    void method_14() {
        lhs_part_89 = sc_uint<25>(
        (sc_biguint<88>)((sc_biguint<30>)inst_blk01_cellmath__39_56_0_.read()(55,26)) >> (shift_v)(((sc_uint<6>)(inst_cellmath__42.read()(5,0))).to_long())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__61
    void method_15() {
        sc_uint<23> temp_15;
        temp_15 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__48_32_0_.read()(23,23)) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__48_32_0_.read()(22,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__48_32_0_.read()(23,23)) == sc_uint<1>("0bus1")) & sc_uint<23>(~(sc_uint<23>)(inst_cellmath__48_32_0_.read()(22,0)))
        ;
        inst_cellmath__61 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__115__W1
    void method_16() {
        sc_uint<1> temp_16;
        temp_16 = 
            ~(sc_uint<1>)(inst_cellmath__61.read()(16,16))
        ;
        inst_cellmath__115__W1 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__116__W1_0_0_1_0
    void method_17() {
        sc_uint<2> temp_17;
        temp_17 = 
            (inst_cellmath__115__W1.read(),inst_cellmath__61.read()(15,15))
        ;
        inst_cellmath__116__W1_0_0_1_0 = temp_17;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__116__W1_0_0_1_1
    void method_18() {
        sc_uint<2> temp_18;
        temp_18 = 
            (inst_cellmath__115__W1.read(),inst_cellmath__61.read()(15,15))
        ;
        inst_cellmath__116__W1_0_0_1_1 = temp_18;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__113_0_0
    void method_19() {
        sc_uint<17> temp_19;
        temp_19 = 
            (inst_cellmath__116__W1_0_0_1_1.read(),inst_cellmath__61.read()(14,0))
        ;
        inst_cellmath__113_0_0 = temp_19;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__113_0_1
    void method_20() {
        sc_uint<17> temp_20;
        temp_20 = 
            (inst_cellmath__116__W1_0_0_1_0.read(),inst_cellmath__61.read()(14,0))
        ;
        inst_cellmath__113_0_1 = temp_20;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__195__80_0_0
    void method_21() {
        sc_biguint<73> temp_21;
        temp_21 = 
            
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0000001100100100001110100100001111111000010000000001100100100001011000001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0000100101101100001100101011111111101000110000001001100100011101100000000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0000111110110010101101110011111111011001010001001001100100010101110000001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0001010111110110110100000000111111001001110011101001100100001010001000110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0001110000110111100001011100101110111010011000010001100011111010101010001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0010001001110011111000011001111110101010111111100001100011100111010101001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0010100010101010111011010110011110011011101010000101100011010000001010010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus000111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0010111011011011101100111011111110001100011000100001100010110101001010100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0011010100000101010000000100111101111101001011011001100010010110010110111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0011101100100110100111111100111101101110000011010101100001110011110000101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0100000100111110111000000011101101011111000000111001100001001101011001001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0100011101001101000100001111111101010000000100101001100000100011010001101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0100110101010000010000110000111101000001001111001101011111110101011100000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0101001101000111100010010000101100110010100001001001011111000011111010000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0101100100110001111101110111011100100011111010111101011110001110101101011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus001111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0101111100001110101001001100011100010101011101010001011101010101111000010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0110010011011100101010011001001100000111001000100101011100011001011100111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0110101010011011001000001010111011111000111101100001011011011001011101100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0111000001001001001001110110001011101010111100101001011010010101111100100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0111010111100101110111010111001011011101000110011001011001001110111100110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus0111101101110000011001010100111011001111011011011001011000000100100000111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1000000011100111111001000011111011000001111100000101010110110110101011101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1000011001001011100000100110111010110100101001000101010101100101100000000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus010111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1000101110011010011010110010001010100111100010110101010100010001000001011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001000011010011110011001100101010011010101001111001010010111001010010110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001010111110110110110010011001010001101111110101101010001011110010111101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001101100000010110001011000101010000001100001110001010000000000010011100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1001111111110110110010101001111001110101010011100101001110011111001001111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1010010011010010001001001101111001101001010100100101001100111010111110110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1010100110010100000101001001011001011101100101010101001011010011110101110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1010111000111011110111011111011001010010000110001001001001101001110010111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus011111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011001011001000110010010011001001000110110111100101000111111100111010011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011011100111010001000101010101000111011111010000001000110001101010000011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011101110001111001110101111101000110001001101111001000100011010111001001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1011111111000111011001110001111000100110110011100101000010100101111001000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100001111100010000000000111111000011100101011100001000000101110010100101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100011111011110011001010010001000010010110110000100111110110100010000101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100101110111011111101111010101000001001010011101000111100110111110001100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1100111101111010000111110111101000000000000100101000111010111000111100010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus100111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101001100011000010010001101100111110111001001010100111000110111110101110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101011010010101111001001111000111101110100010000100110110110100100010111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101100111110010011010011111100111100110001111010000110100101111001000110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1101110100101101010100110011100111011110010001001100110010100111101100100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110000001000110001000010011010111010110101000001000110000011110010011011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110001100111100010110011010010111001111010100011100101110010011000010101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110011000001111100001111010000111001000010110010100101100000101111111110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110100010111111001110111010000111000001101110001000101001110111010000000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus101111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110101101001011000010111010000110111011011100000100100111100110111001000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110110110110010100100110001000110110101100000011000100101010101000000010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1110111111110101011100110001000110101111111011010100100011000001101011011"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111001000010011010100100101100110101010101101000100100000101101000000001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111010000001011110111010101110110100101110101110100011110010111000100001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111010111011110110001100100100110100001010101110100011011111111111101010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111011110001011110001010010000110011101001101001100011001100111110001010"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111100100010010100101111011110110011001011100000100010111001110100110001"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus110111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111101001110011000000011101100110010110000010101100010100110100100001101"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111000")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111101110101100110011010001110110010011000001001000010010011001101001110"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111001")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111110010111111110010010010100110010000010111100000001111111110000100100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111010")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111110110101011110010111000110110001110000101111100001101100001110111111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111011")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111001110000101011111110110110001100001100100000001011000101001001111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111100")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111100001110010101111110010110001010101011010000001000101000000000100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111101")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111110000100101010110010110110001001100010010000000110001010100001111"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111110")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111111010011100101111000000110001000110001100100000011101100110100000"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__61.read()(22,17)) == sc_uint<6>("0bus111111")) & ((sc_biguint<73>)(sc_biguint<73>("0bus1111111111111011000100001011010110001000011001001100000001001110111101000")))
        ;
        inst_cellmath__195__80_0_0 = temp_21;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__195(29,4)
    // part assign: lhs_part_90(1): inst_cellmath__195(29,4)
    sc_signal<sc_uint<26> > lhs_part_90;
    void method_22() {
        lhs_part_90 = sc_uint<26>(
        (sc_uint<26>)(inst_cellmath__195__80_0_0.read()(72,47))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__195(3,0)
    // part assign: lhs_part_91(2): inst_cellmath__195(3,0)
    sc_signal<sc_uint<4> > lhs_part_91;
    void method_23() {
        lhs_part_91 = sc_uint<4>(
        (sc_uint<4>)(inst_cellmath__195__80_0_0.read()(46,43))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__197__131(20,20)
    // part assign: lhs_part_92(1): inst_cellmath__197__131(20,20)
    sc_signal<sc_uint<1> > lhs_part_92;
    void method_24() {
        lhs_part_92 = sc_uint<1>(
        (sc_uint<1>)(sc_uint<1>(1))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__197(2,0)
    // part assign: lhs_part_93(1): inst_cellmath__197(2,0)
    sc_signal<sc_uint<3> > lhs_part_93;
    void method_25() {
        lhs_part_93 = sc_uint<3>(
        (sc_uint<3>)(inst_cellmath__195__80_0_0.read()(25,23))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__197__131(19,0)
    // part assign: lhs_part_94(2): inst_cellmath__197__131(19,0)
    sc_signal<sc_uint<20> > lhs_part_94;
    void method_26() {
        lhs_part_94 = sc_uint<20>(
        (sc_uint<20>)(inst_cellmath__195__80_0_0.read()(42,23))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__197(20,18)
    // part assign: lhs_part_95(2): inst_cellmath__197(20,18)
    sc_signal<sc_int<3> > lhs_part_95;
    void method_27() {
        lhs_part_95 = sc_int<3>(
        (sc_uint<3>)(inst_cellmath__197__131.read()(20,18))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__197(17,3)
    // part assign: lhs_part_96(3): inst_cellmath__197(17,3)
    sc_signal<sc_uint<15> > lhs_part_96;
    void method_28() {
        lhs_part_96 = sc_uint<15>(
        (sc_uint<15>)(inst_cellmath__195__80_0_0.read()(40,26))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__198
    void method_29() {
        sc_uint<33> temp_29;
        temp_29 = 
            
            +((sc_uint<33>)(( ((sc_uint<16>)(sc_int<1>)(inst_cellmath__113_0_0.read()[16])), inst_cellmath__113_0_0.read() )) * (sc_uint<33>)(( ((sc_uint<16>)(sc_int<1>)(inst_cellmath__113_0_0.read()[16])), inst_cellmath__113_0_0.read() )))
        ;
        inst_cellmath__198 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<50> > inst_cellmath__201_tmp_0;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<50> > inst_cellmath__201_tmp_1;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<50> > inst_cellmath__201_tmp_2;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__201_tmp_2
    void method_30() {
        sc_uint<50> temp_30;
        temp_30 = 
            
            +((sc_uint<50>)(((sc_uint<50>)((inst_cellmath__195.read())<<(shift_v)18))))
        ;
        inst_cellmath__201_tmp_2 = temp_30;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__201_tmp_1
    void method_31() {
        sc_uint<50> temp_31;
        temp_31 = 
            inst_cellmath__201_tmp_2.read()
            +((sc_uint<50>)(( ((sc_uint<29>)(sc_int<1>)(inst_cellmath__197.read()[20])), inst_cellmath__197.read() )) * (sc_uint<50>)(inst_cellmath__198.read()(32,17)))
        ;
        inst_cellmath__201_tmp_1 = temp_31;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__201_tmp_0
    void method_32() {
        sc_uint<50> temp_32;
        temp_32 = 
            inst_cellmath__201_tmp_1.read()
            +(((sc_uint<50>)(inst_cellmath__195__80_0_0.read()(21,0)) * (sc_uint<50>)(( ((sc_biguint<33>)(sc_bigint<1>)(inst_cellmath__113_0_1.read()[16])), inst_cellmath__113_0_1.read() )))<<4)
        ;
        inst_cellmath__201_tmp_0 = temp_32;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__201
    void method_33() {
        sc_uint<50> temp_33;
        temp_33 = 
            inst_cellmath__201_tmp_0.read()
            +((sc_uint<50>)(sc_uint<26>("0bus01000000000000000000000000")))
        ;
        inst_cellmath__201 = temp_33;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__200(48,0)
    // part assign: lhs_part_97(1): inst_cellmath__200(48,0)
    sc_signal<sc_uint<49> > lhs_part_97;
    void method_34() {
        lhs_part_97 = sc_uint<49>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__201.read()(49,49)) == sc_uint<1>("0bus0")) & ((sc_uint<49>)(inst_cellmath__201.read()(48,0)))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: inst_cellmath__210
    void method_35() {
        sc_uint<31> temp_35;
        temp_35 = 
            (sc_uint<31>)(inst_cellmath__200.read()(47,25))
        ;
        inst_cellmath__210 = temp_35;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__19
    void method_36() {
        sc_uint<1> temp_36;
        temp_36 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_exp.read()(7,7))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(0,0))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(1,1))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(2,2))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(3,3))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(4,4))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(5,5))))
            &((sc_uint<1>)((sc_uint<1>)(a_exp.read()(6,6))))
        ;
        inst_cellmath__19 = temp_36;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__24
    void method_37() {
        sc_uint<1> temp_37;
        temp_37 = 
            
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
        inst_cellmath__24 = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__66
    void method_38() {
        sc_uint<1> temp_38;
        temp_38 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24.read())))
        ;
        inst_cellmath__66 = temp_38;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__67
    void method_39() {
        sc_uint<1> temp_39;
        temp_39 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__24.read())))
        ;
        inst_cellmath__67 = temp_39;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__68
    void method_40() {
        sc_uint<1> temp_40;
        temp_40 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__66.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__67.read())))
        ;
        inst_cellmath__68 = temp_40;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__69
    void method_41() {
        sc_uint<1> temp_41;
        temp_41 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__24.read())))
        ;
        inst_cellmath__69 = temp_41;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__82
    void method_42() {
        sc_uint<1> temp_42;
        temp_42 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__19.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__69.read())))
        ;
        inst_cellmath__82 = temp_42;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__17
    void method_43() {
        sc_uint<1> temp_43;
        temp_43 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(7,7))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(0,0))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(1,1))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(2,2))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(3,3))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(4,4))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(5,5))))
            &((sc_uint<1>)(~(sc_uint<1>)(a_exp.read()(6,6))))
        ;
        inst_cellmath__17 = temp_43;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__79__46
    void method_44() {
        sc_uint<1> temp_44;
        temp_44 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__17.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read())))
        ;
        inst_cellmath__79__46 = temp_44;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__228__231
    void method_45() {
        sc_uint<1> temp_45;
        temp_45 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__68.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__82.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__79__46.read())))
        ;
        inst_cellmath__228__231 = temp_45;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__231__242_0_0_0
    void method_46() {
        sc_uint<2> temp_46;
        temp_46 = 
            (inst_cellmath__228__231.read(),(sc_biguint<1>)(inst_cellmath__200.read()(46,46)))
        ;
        inst_cellmath__231__242_0_0_0 = temp_46;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__216__184
    void method_47() {
        sc_uint<1> temp_47;

                    sc_uint<12> inst_cellmath__216__184_tmp_3 = 
            -((sc_uint<12>)(a_exp.read()))
            +((sc_uint<12>)(sc_uint<8>("0bus01110111")));
        temp_47 = (((sc_uint<1>)(inst_cellmath__216__184_tmp_3[11]))==((sc_uint<1>)0))
        ;
        inst_cellmath__216__184 = temp_47;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__219
    void method_48() {
        sc_uint<1> temp_48;
        temp_48 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__200.read()(48,48))))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__61.read()(22,22))))
        ;
        inst_cellmath__219 = temp_48;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__216_0
    void method_49() {
        sc_uint<2> temp_49;
        temp_49 = 
            (inst_cellmath__216__184.read(),inst_cellmath__219.read())
        ;
        inst_cellmath__216_0 = temp_49;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__211__183
    void method_50() {
        sc_uint<32> temp_50;
        temp_50 = 
            (inst_cellmath__210.read(),sc_uint<1>(1))
        ;
        inst_cellmath__211__183 = temp_50;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__211__182(4,0)
    // part assign: lhs_part_98(1): inst_cellmath__211__182(4,0)
    sc_signal<sc_uint<5> > lhs_part_98;
    void method_51() {
        lhs_part_98 = sc_uint<5>(
        
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__211__183.read()(31,31)) == sc_uint<1>("0bus1")) & ((sc_uint<5>)(sc_uint<5>("0bus00000"))) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__211__183.read()(31,30)) == sc_uint<2>("0bus01")) & ((sc_uint<5>)(sc_uint<5>("0bus00001"))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__211__183.read()(31,29)) == sc_uint<3>("0bus001")) & ((sc_uint<5>)(sc_uint<5>("0bus00010"))) |
        -(int)((sc_uint<4>)(sc_uint<4>)(inst_cellmath__211__183.read()(31,28)) == sc_uint<4>("0bus0001")) & ((sc_uint<5>)(sc_uint<5>("0bus00011"))) |
        -(int)((sc_uint<5>)(sc_uint<5>)(inst_cellmath__211__183.read()(31,27)) == sc_uint<5>("0bus00001")) & ((sc_uint<5>)(sc_uint<5>("0bus00100"))) |
        -(int)((sc_uint<6>)(sc_uint<6>)(inst_cellmath__211__183.read()(31,26)) == sc_uint<6>("0bus000001")) & ((sc_uint<5>)(sc_uint<5>("0bus00101"))) |
        -(int)((sc_uint<7>)(sc_uint<7>)(inst_cellmath__211__183.read()(31,25)) == sc_uint<7>("0bus0000001")) & ((sc_uint<5>)(sc_uint<5>("0bus00110"))) |
        -(int)((sc_uint<8>)(sc_uint<8>)(inst_cellmath__211__183.read()(31,24)) == sc_uint<8>("0bus00000001")) & ((sc_uint<5>)(sc_uint<5>("0bus00111"))) |
        -(int)((sc_uint<9>)(sc_uint<9>)(inst_cellmath__211__183.read()(31,23)) == sc_uint<9>("0bus000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01000"))) |
        -(int)((sc_uint<10>)(sc_uint<10>)(inst_cellmath__211__183.read()(31,22)) == sc_uint<10>("0bus0000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01001"))) |
        -(int)((sc_uint<11>)(sc_uint<11>)(inst_cellmath__211__183.read()(31,21)) == sc_uint<11>("0bus00000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01010"))) |
        -(int)((sc_uint<12>)(sc_uint<12>)(inst_cellmath__211__183.read()(31,20)) == sc_uint<12>("0bus000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01011"))) |
        -(int)((sc_uint<13>)(sc_uint<13>)(inst_cellmath__211__183.read()(31,19)) == sc_uint<13>("0bus0000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01100"))) |
        -(int)((sc_uint<14>)(sc_uint<14>)(inst_cellmath__211__183.read()(31,18)) == sc_uint<14>("0bus00000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01101"))) |
        -(int)((sc_uint<15>)(sc_uint<15>)(inst_cellmath__211__183.read()(31,17)) == sc_uint<15>("0bus000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01110"))) |
        -(int)((sc_uint<16>)(sc_uint<16>)(inst_cellmath__211__183.read()(31,16)) == sc_uint<16>("0bus0000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus01111"))) |
        -(int)((sc_uint<17>)(sc_uint<17>)(inst_cellmath__211__183.read()(31,15)) == sc_uint<17>("0bus00000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10000"))) |
        -(int)((sc_uint<18>)(sc_uint<18>)(inst_cellmath__211__183.read()(31,14)) == sc_uint<18>("0bus000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10001"))) |
        -(int)((sc_uint<19>)(sc_uint<19>)(inst_cellmath__211__183.read()(31,13)) == sc_uint<19>("0bus0000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10010"))) |
        -(int)((sc_uint<20>)(sc_uint<20>)(inst_cellmath__211__183.read()(31,12)) == sc_uint<20>("0bus00000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10011"))) |
        -(int)((sc_uint<21>)(sc_uint<21>)(inst_cellmath__211__183.read()(31,11)) == sc_uint<21>("0bus000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10100"))) |
        -(int)((sc_uint<22>)(sc_uint<22>)(inst_cellmath__211__183.read()(31,10)) == sc_uint<22>("0bus0000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10101"))) |
        -(int)((sc_uint<23>)(sc_uint<23>)(inst_cellmath__211__183.read()(31,9)) == sc_uint<23>("0bus00000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10110"))) |
        -(int)((sc_uint<24>)(sc_uint<24>)(inst_cellmath__211__183.read()(31,8)) == sc_uint<24>("0bus000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus10111"))) |
        -(int)((sc_uint<25>)(sc_uint<25>)(inst_cellmath__211__183.read()(31,7)) == sc_uint<25>("0bus0000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11000"))) |
        -(int)((sc_uint<26>)(sc_uint<26>)(inst_cellmath__211__183.read()(31,6)) == sc_uint<26>("0bus00000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11001"))) |
        -(int)((sc_uint<27>)(sc_uint<27>)(inst_cellmath__211__183.read()(31,5)) == sc_uint<27>("0bus000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11010"))) |
        -(int)((sc_uint<28>)(sc_uint<28>)(inst_cellmath__211__183.read()(31,4)) == sc_uint<28>("0bus0000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11011"))) |
        -(int)((sc_uint<29>)(sc_uint<29>)(inst_cellmath__211__183.read()(31,3)) == sc_uint<29>("0bus00000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11100"))) |
        -(int)((sc_uint<30>)(sc_uint<30>)(inst_cellmath__211__183.read()(31,2)) == sc_uint<30>("0bus000000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11101"))) |
        -(int)((sc_uint<31>)(sc_uint<31>)(inst_cellmath__211__183.read()(31,1)) == sc_uint<31>("0bus0000000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11110"))) |
        -(int)((sc_uint<32>)(sc_uint<32>)(inst_cellmath__211__183.read()) == sc_uint<32>("0bus00000000000000000000000000000001")) & ((sc_uint<5>)(sc_uint<5>("0bus11111"))) |
        -(int)((sc_uint<32>)(sc_uint<32>)(inst_cellmath__211__183.read()) == sc_uint<32>("0bus00000000000000000000000000000000")) & ((sc_uint<5>)(sc_uint<5>("0bus00000")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__215
    void method_52() {
        sc_uint<5> temp_52;
        temp_52 = 
            
            +((sc_uint<5>)(inst_cellmath__211__182.read()(4,0)))
            -((sc_uint<5>)(sc_uint<5>("0b00111")))
        ;
        inst_cellmath__215 = temp_52;
    }

    // !!!! amethyst/writers/SystemC.cpp:4615
    // Compare anchor: inst_cellmath__220__188(22,0)
    // part assign: lhs_part_99(1): inst_cellmath__220__188(22,0)
    sc_signal<sc_uint<23> > lhs_part_99;
    void method_53() {
        lhs_part_99 = sc_uint<23>(
         ((shift_v)(((sc_uint<5>)(inst_cellmath__215.read())).to_long()) >= 23 ? (sc_uint<23>)(0) : (sc_uint<23>)((sc_uint<23>)(inst_cellmath__200.read()(47,25)) << (shift_v)(((sc_uint<5>)(inst_cellmath__215.read())).to_long())))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__221__195
    void method_54() {
        sc_uint<7> temp_54;
        temp_54 = 
            
            -((sc_uint<7>)(inst_cellmath__215.read()))
            +((sc_uint<7>)(sc_uint<7>("0bus1111111")))
        ;
        inst_cellmath__221__195 = temp_54;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__220_22_0__0
    void method_55() {
        sc_uint<31> temp_55;
        temp_55 = 
            (inst_cellmath__220__188.read()(22,0),sc_uint<1>(0),inst_cellmath__221__195.read())
        ;
        inst_cellmath__220_22_0__0 = temp_55;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__220_22_0__1
    void method_56() {
        sc_uint<31> temp_56;
        temp_56 = 
            (a_man.read(),a_exp.read())
        ;
        inst_cellmath__220_22_0__1 = temp_56;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__220_22_0_
    void method_57() {
        sc_uint<31> temp_57;
        temp_57 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__216_0.read()) == sc_uint<2>("0bus00")) & ((sc_uint<31>)(inst_cellmath__220_22_0__0.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__216_0.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<31>)(inst_cellmath__220_22_0__1.read())) |
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__216_0.read()) == sc_uint<2>("0bus01")) & ((sc_uint<31>)(sc_uint<31>("0bus0000000000000000000000001111111")))
        ;
        inst_cellmath__220_22_0_ = temp_57;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__223__208
    void method_58() {
        sc_uint<1> temp_58;
        temp_58 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(8,8))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(9,9))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(10,10))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(11,11))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(12,12))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(13,13))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(14,14))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(15,15))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(16,16))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(17,17))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(18,18))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(19,19))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(20,20))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(21,21))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(22,22))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(23,23))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(24,24))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(25,25))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(26,26))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(27,27))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(28,28))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(29,29))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(0,0))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(1,1))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(2,2))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(3,3))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(4,4))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(5,5))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(6,6))))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__220_22_0_.read()(7,7))))
        ;
        inst_cellmath__223__208 = temp_58;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__223__207
    void method_59() {
        sc_uint<1> temp_59;
        temp_59 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48_32_0_.read()(24,24))))
            ^((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
        ;
        inst_cellmath__223__207 = temp_59;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__223__199
    void method_60() {
        sc_uint<1> temp_60;
        temp_60 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__82.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79__46.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__223__208.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__223__207.read())))
        ;
        inst_cellmath__223__199 = temp_60;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__223
    void method_61() {
        sc_uint<1> temp_61;
        temp_61 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__216__184.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__223__199.read())) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__216__184.read()) == sc_uint<1>("0bus1")) & ((sc_uint<1>)(a_sign.read()))
        ;
        inst_cellmath__223 = temp_61;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__224__212
    void method_62() {
        sc_uint<1> temp_62;
        temp_62 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__82.read())))
            |((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__79__46.read())))
        ;
        inst_cellmath__224__212 = temp_62;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__228
    void method_63() {
        sc_uint<8> temp_63;
        temp_63 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__228__231.read()) == sc_uint<1>("0bus0")) & ((sc_uint<8>)(inst_cellmath__220_22_0_.read()(7,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__228__231.read()) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(((sc_uint<8>)(sc_int<1>)inst_cellmath__224__212.read())))
        ;
        inst_cellmath__228 = temp_63;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__231
    void method_64() {
        sc_uint<23> temp_64;
        temp_64 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__231__242_0_0_0.read()(1,1)) == sc_uint<1>("0bus0")) & ((sc_uint<23>)(inst_cellmath__220_22_0_.read()(30,8))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__231__242_0_0_0.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(((sc_uint<23>)(sc_int<1>)inst_cellmath__82.read())))
        ;
        inst_cellmath__231 = temp_64;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__237
    void method_65() {
        sc_uint<32> temp_65;
        temp_65 = 
            (inst_cellmath__223.read(),inst_cellmath__228.read(),inst_cellmath__231.read())
        ;
        inst_cellmath__237 = temp_65;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x(31,0)
    // part assign: lhs_part_100(2): x(31,0)
    sc_signal<sc_uint<32> > lhs_part_100;
    void method_66() {
        lhs_part_100 = sc_uint<32>(
        (sc_uint<32>)(inst_cellmath__237.read())
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x(36,33)
    // part assign: lhs_part_101(3): x(36,33)
    sc_signal<sc_uint<4> > lhs_part_101;
    void method_67() {
        lhs_part_101 = sc_uint<4>(
        (sc_uint<4>)(sc_uint<4>("0bus0000"))
        );
    }
    void method_68() { 
        sc_uint<37> temp_68 = x.read();
        temp_68(32,32) = lhs_part_87.read();
        temp_68(31,0) = lhs_part_100.read();
        temp_68(36,33) = lhs_part_101.read();
        x = temp_68;
}
    void method_69() { 
        sc_uint<9> temp_69 = inst_cellmath__42.read();
        temp_69(5,0) = lhs_part_88.read();
        inst_cellmath__42 = temp_69;
}
    void method_70() { 
        sc_uint<30> temp_70 = inst_cellmath__48_32_0_.read();
        temp_70(24,0) = lhs_part_89.read();
        inst_cellmath__48_32_0_ = temp_70;
}
    void method_71() { 
        sc_uint<30> temp_71 = inst_cellmath__195.read();
        temp_71(29,4) = lhs_part_90.read();
        temp_71(3,0) = lhs_part_91.read();
        inst_cellmath__195 = temp_71;
}
    void method_72() { 
        sc_uint<21> temp_72 = inst_cellmath__197__131.read();
        temp_72(20,20) = lhs_part_92.read();
        temp_72(19,0) = lhs_part_94.read();
        inst_cellmath__197__131 = temp_72;
}
    void method_73() { 
        sc_uint<21> temp_73 = inst_cellmath__197.read();
        temp_73(2,0) = lhs_part_93.read();
        temp_73(20,18) = lhs_part_95.read();
        temp_73(17,3) = lhs_part_96.read();
        inst_cellmath__197 = temp_73;
}
    void method_74() { 
        sc_uint<50> temp_74 = inst_cellmath__200.read();
        temp_74(48,0) = lhs_part_97.read();
        inst_cellmath__200 = temp_74;
}
    void method_75() { 
        sc_uint<6> temp_75 = inst_cellmath__211__182.read();
        temp_75(4,0) = lhs_part_98.read();
        inst_cellmath__211__182 = temp_75;
}
    void method_76() { 
        sc_uint<54> temp_76 = inst_cellmath__220__188.read();
        temp_76(22,0) = lhs_part_99.read();
        inst_cellmath__220__188 = temp_76;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(DFT_compute_cynw_cm_float_sin_E8_M23_0)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_0);

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

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_11);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_12);
        sensitive << inst_blk01_cellmath__39__12_10_9
                  << inst_blk01_cellmath__39__12_10_8
                  << inst_blk01_cellmath__39__12_10_7
                  << inst_blk01_cellmath__39__12_10_6
                  << inst_blk01_cellmath__39__12_10_5
                  << inst_blk01_cellmath__39__12_10_4
                  << inst_blk01_cellmath__39__12_10_3
                  << inst_blk01_cellmath__39__12_10_2
                  << inst_blk01_cellmath__39__12_10_1
                  << inst_blk01_cellmath__39__12_10_0
                  << inst_blk01_cellmath__39__12_10_10;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_13);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_14);
        sensitive << inst_blk01_cellmath__39_56_0_
                  << inst_cellmath__42;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_15);
        sensitive << inst_cellmath__48_32_0_;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_16);
        sensitive << inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_17);
        sensitive << inst_cellmath__115__W1
                  << inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_18);
        sensitive << inst_cellmath__115__W1
                  << inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_19);
        sensitive << inst_cellmath__116__W1_0_0_1_1
                  << inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_20);
        sensitive << inst_cellmath__116__W1_0_0_1_0
                  << inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_21);
        sensitive << inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_22);
        sensitive << inst_cellmath__195__80_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_23);
        sensitive << inst_cellmath__195__80_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_24);

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_25);
        sensitive << inst_cellmath__195__80_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_26);
        sensitive << inst_cellmath__195__80_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_27);
        sensitive << inst_cellmath__197__131;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_28);
        sensitive << inst_cellmath__195__80_0_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_29);
        sensitive << inst_cellmath__113_0_0;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_30);
        sensitive << inst_cellmath__195;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_31);
        sensitive << inst_cellmath__201_tmp_2
                  << inst_cellmath__197
                  << inst_cellmath__198;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_32);
        sensitive << inst_cellmath__201_tmp_1
                  << inst_cellmath__195__80_0_0
                  << inst_cellmath__113_0_1;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_33);
        sensitive << inst_cellmath__201_tmp_0;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_34);
        sensitive << inst_cellmath__201;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_35);
        sensitive << inst_cellmath__200;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_36);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_37);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_38);
        sensitive << a_sign
                  << inst_cellmath__19
                  << inst_cellmath__24;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_39);
        sensitive << a_sign
                  << inst_cellmath__19
                  << inst_cellmath__24;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_40);
        sensitive << inst_cellmath__66
                  << inst_cellmath__67;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_41);
        sensitive << inst_cellmath__19
                  << inst_cellmath__24;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_42);
        sensitive << inst_cellmath__19
                  << inst_cellmath__69;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_43);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_44);
        sensitive << inst_cellmath__17
                  << inst_cellmath__68;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_45);
        sensitive << inst_cellmath__68
                  << inst_cellmath__82
                  << inst_cellmath__79__46;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_46);
        sensitive << inst_cellmath__228__231
                  << inst_cellmath__200;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_47);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_48);
        sensitive << inst_cellmath__200
                  << inst_cellmath__61;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_49);
        sensitive << inst_cellmath__216__184
                  << inst_cellmath__219;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_50);
        sensitive << inst_cellmath__210;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_51);
        sensitive << inst_cellmath__211__183;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_52);
        sensitive << inst_cellmath__211__182;

    // !!!! amethyst/writers/SystemC.cpp:4615
        SC_METHOD(method_53);
        sensitive << inst_cellmath__200
                  << inst_cellmath__215;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_54);
        sensitive << inst_cellmath__215;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_55);
        sensitive << inst_cellmath__220__188
                  << inst_cellmath__221__195;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_56);
        sensitive << a_man
                  << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_57);
        sensitive << inst_cellmath__220_22_0__0
                  << inst_cellmath__220_22_0__1
                  << inst_cellmath__216_0;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_58);
        sensitive << inst_cellmath__220_22_0_;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_59);
        sensitive << inst_cellmath__48_32_0_
                  << a_sign;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_60);
        sensitive << inst_cellmath__82
                  << inst_cellmath__79__46
                  << inst_cellmath__223__208
                  << inst_cellmath__223__207;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_61);
        sensitive << inst_cellmath__223__199
                  << a_sign
                  << inst_cellmath__216__184;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_62);
        sensitive << inst_cellmath__82
                  << inst_cellmath__79__46;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_63);
        sensitive << inst_cellmath__220_22_0_
                  << inst_cellmath__224__212
                  << inst_cellmath__228__231;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_64);
        sensitive << inst_cellmath__220_22_0_
                  << inst_cellmath__82
                  << inst_cellmath__231__242_0_0_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_65);
        sensitive << inst_cellmath__223
                  << inst_cellmath__228
                  << inst_cellmath__231;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_66);
        sensitive << inst_cellmath__237;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_67);
        SC_METHOD(method_68);
        sensitive << lhs_part_87
                  << lhs_part_100
                  << lhs_part_101;
        SC_METHOD(method_69);
        sensitive << lhs_part_88;
        SC_METHOD(method_70);
        sensitive << lhs_part_89;
        SC_METHOD(method_71);
        sensitive << lhs_part_90
                  << lhs_part_91;
        SC_METHOD(method_72);
        sensitive << lhs_part_92
                  << lhs_part_94;
        SC_METHOD(method_73);
        sensitive << lhs_part_93
                  << lhs_part_95
                  << lhs_part_96;
        SC_METHOD(method_74);
        sensitive << lhs_part_97;
        SC_METHOD(method_75);
        sensitive << lhs_part_98;
        SC_METHOD(method_76);
        sensitive << lhs_part_99;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef DFT_compute_cynw_cm_float_sin_E8_M23_0_COMPILED

/* CADENCE  vrX4SQrfqw== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




