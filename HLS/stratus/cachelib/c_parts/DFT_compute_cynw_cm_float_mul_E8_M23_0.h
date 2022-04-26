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
    
    Configured at: 11:19:27 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

#include "systemc.h"

#ifndef DFT_compute_cynw_cm_float_mul_E8_M23_0_COMPILED
#define DFT_compute_cynw_cm_float_mul_E8_M23_0_COMPILED

SC_MODULE(DFT_compute_cynw_cm_float_mul_E8_M23_0) // architecture "behavioural"
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
    sc_signal<sc_uint<24> > inst_cellmath__25;
    sc_signal<sc_uint<24> > inst_cellmath__26;
    sc_signal<sc_uint<1> > inst_cellmath__30;
    sc_signal<sc_uint<1> > inst_cellmath__31;
    sc_signal<sc_uint<1> > inst_cellmath__32;
    sc_signal<sc_uint<1> > inst_cellmath__33;
    sc_signal<sc_uint<1> > inst_cellmath__34;
    sc_signal<sc_uint<1> > inst_cellmath__35;
    sc_signal<sc_uint<1> > inst_cellmath__36;
    sc_signal<sc_uint<1> > inst_cellmath__37;
    sc_signal<sc_uint<1> > inst_cellmath__38;
    sc_signal<sc_uint<1> > inst_cellmath__39;
    sc_signal<sc_uint<50> > inst_i_mul_int_mult_datapath_prodSum;
    sc_signal<sc_uint<10> > inst_cellmath__45;
    sc_signal<sc_uint<1> > inst_cellmath__48;
    sc_signal<sc_uint<1> > inst_cellmath__49;
    sc_signal<sc_uint<1> > inst_cellmath__50;
    sc_signal<sc_uint<1> > inst_cellmath__51;
    sc_signal<sc_uint<1> > inst_cellmath__52;
    sc_signal<sc_uint<1> > inst_cellmath__53;
    sc_signal<sc_uint<8> > inst_cellmath__54;
    sc_signal<sc_uint<23> > inst_cellmath__55;
    sc_signal<sc_uint<32> > inst_cellmath__65;
    sc_signal<sc_uint<1> > inst_cellmath__32__5;
    sc_signal<sc_uint<1> > inst_cellmath__32__6;
    sc_signal<sc_uint<1> > inst_cellmath__33__7;
    sc_signal<sc_uint<1> > inst_cellmath__33__8;
    sc_signal<sc_uint<1> > inst_cellmath__50__15;
    sc_signal<sc_uint<1> > inst_cellmath__51__17;
    sc_signal<sc_uint<1> > inst_cellmath__51__16;
    sc_signal<sc_uint<1> > inst_cellmath__52__21;
    sc_signal<sc_uint<1> > inst_cellmath__52__20;
    sc_signal<sc_uint<1> > inst_cellmath__54__30;
    sc_signal<sc_uint<1> > inst_cellmath__55__36;
    sc_signal<sc_uint<2> > inst_cellmath__54__30_0;
    sc_signal<sc_uint<3> > inst_cellmath__50_0;
#    if !defined(CYNTHVLG)
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__32__5
    void method_0() {
        sc_uint<1> temp_0;

                    sc_uint<13> inst_cellmath__32__5_tmp_0 = 
            -((sc_uint<13>)(a_exp.read()))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        temp_0 = (((sc_uint<1>)inst_cellmath__32__5_tmp_0.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__32__5 = temp_0;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__32__6
    void method_1() {
        sc_uint<1> temp_1;

                    sc_uint<27> inst_cellmath__32__6_tmp_1 = 
            -((sc_uint<27>)(a_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_1 = (((sc_uint<1>)inst_cellmath__32__6_tmp_1.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__32__6 = temp_1;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__34
    void method_2() {
        sc_uint<1> temp_2;
        temp_2 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__5.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__32__6.read())))
        ;
        inst_cellmath__34 = temp_2;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__33__7
    void method_3() {
        sc_uint<1> temp_3;

                    sc_uint<13> inst_cellmath__33__7_tmp_2 = 
            -((sc_uint<13>)(b_exp.read()))
            +((sc_uint<13>)(sc_uint<9>("0bus011111110")));
        temp_3 = (((sc_uint<1>)inst_cellmath__33__7_tmp_2.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__33__7 = temp_3;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__33__8
    void method_4() {
        sc_uint<1> temp_4;

                    sc_uint<27> inst_cellmath__33__8_tmp_3 = 
            -((sc_uint<27>)(b_man.read()))
            -((sc_uint<27>)(sc_uint<2>("0b01")));
        temp_4 = (((sc_uint<1>)inst_cellmath__33__8_tmp_3.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__33__8 = temp_4;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__35
    void method_5() {
        sc_uint<1> temp_5;
        temp_5 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33__7.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__33__8.read())))
        ;
        inst_cellmath__35 = temp_5;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__38
    void method_6() {
        sc_uint<1> temp_6;
        temp_6 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__34.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__35.read())))
        ;
        inst_cellmath__38 = temp_6;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__32
    void method_7() {
        sc_uint<1> temp_7;
        temp_7 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__5.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32__6.read())))
        ;
        inst_cellmath__32 = temp_7;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__33
    void method_8() {
        sc_uint<1> temp_8;
        temp_8 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33__7.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33__8.read())))
        ;
        inst_cellmath__33 = temp_8;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__37
    void method_9() {
        sc_uint<1> temp_9;
        temp_9 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__32.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__33.read())))
        ;
        inst_cellmath__37 = temp_9;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__30
    void method_10() {
        sc_uint<1> temp_10;

                    sc_uint<12> inst_cellmath__30_tmp_4 = 
            -((sc_uint<12>)(a_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_10 = (((sc_uint<1>)inst_cellmath__30_tmp_4.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__30 = temp_10;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__31
    void method_11() {
        sc_uint<1> temp_11;

                    sc_uint<12> inst_cellmath__31_tmp_5 = 
            -((sc_uint<12>)(b_exp.read()))
            -((sc_uint<12>)(sc_uint<2>("0b01")));
        temp_11 = (((sc_uint<1>)inst_cellmath__31_tmp_5.and_reduce())==((sc_uint<1>)1))
        ;
        inst_cellmath__31 = temp_11;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__36
    void method_12() {
        sc_uint<1> temp_12;
        temp_12 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__30.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__31.read())))
        ;
        inst_cellmath__36 = temp_12;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__50__15
    void method_13() {
        sc_uint<1> temp_13;
        temp_13 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__36.read())))
        ;
        inst_cellmath__50__15 = temp_13;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__50
    void method_14() {
        sc_uint<1> temp_14;
        temp_14 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__38.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__50__15.read())))
        ;
        inst_cellmath__50 = temp_14;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__52__21
    void method_15() {
        sc_uint<1> temp_15;
        temp_15 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__37.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__36.read())))
        ;
        inst_cellmath__52__21 = temp_15;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__26
    void method_16() {
        sc_uint<24> temp_16;
        temp_16 = 
            (sc_uint<1>(1),b_man.read())
        ;
        inst_cellmath__26 = temp_16;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__25
    void method_17() {
        sc_uint<24> temp_17;
        temp_17 = 
            (sc_uint<1>(1),a_man.read())
        ;
        inst_cellmath__25 = temp_17;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<48> > inst_i_mul_int_mult_datapath_prodSum_tmp_6;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_i_mul_int_mult_datapath_prodSum_tmp_6
    void method_18() {
        sc_uint<48> temp_18;
        temp_18 = 
            
            +(/*conformal multiplier wall*/(sc_uint<48>)(inst_cellmath__25.read()) * (sc_uint<48>)(inst_cellmath__26.read()))
        ;
        inst_i_mul_int_mult_datapath_prodSum_tmp_6 = temp_18;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_i_mul_int_mult_datapath_prodSum(47,0)
    // part assign: lhs_part_61(1): inst_i_mul_int_mult_datapath_prodSum(47,0)
    sc_signal<sc_uint<48> > lhs_part_61;
    void method_19() {
        lhs_part_61 = sc_uint<48>(
        inst_i_mul_int_mult_datapath_prodSum_tmp_6.read()
            +((sc_uint<48>)(sc_uint<24>("0bus010000000000000000000000")))
        );
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > inst_cellmath__45_tmp_7;
    // !!!! amethyst/writers/SystemC.cpp:3142
    sc_signal<sc_uint<10> > inst_cellmath__45_tmp_8;
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__45_tmp_8
    void method_20() {
        sc_uint<10> temp_20;
        temp_20 = 
            
            +((sc_uint<10>)(inst_i_mul_int_mult_datapath_prodSum.read()(47,47)))
            +((sc_uint<10>)(b_exp.read()))
        ;
        inst_cellmath__45_tmp_8 = temp_20;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__45_tmp_7
    void method_21() {
        sc_uint<10> temp_21;
        temp_21 = 
            inst_cellmath__45_tmp_8.read()
            +((sc_uint<10>)(a_exp.read()))
        ;
        inst_cellmath__45_tmp_7 = temp_21;
    }
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__45
    void method_22() {
        sc_uint<10> temp_22;
        temp_22 = 
            inst_cellmath__45_tmp_7.read()
            -((sc_uint<10>)(sc_uint<10>("0b0001111111")))
        ;
        inst_cellmath__45 = temp_22;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__49
    void method_23() {
        sc_uint<1> temp_23;

                    sc_uint<14> inst_cellmath__49_tmp_9 = 
            -((sc_uint<14>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__45.read()[9])), inst_cellmath__45.read() )))
            +((sc_uint<14>)(sc_uint<9>("0bus011111110")));
        temp_23 = (((sc_uint<1>)(inst_cellmath__49_tmp_9[13]))==((sc_uint<1>)1))
        ;
        inst_cellmath__49 = temp_23;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__52__20
    void method_24() {
        sc_uint<1> temp_24;
        temp_24 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__52__21.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__49.read())))
        ;
        inst_cellmath__52__20 = temp_24;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__52
    void method_25() {
        sc_uint<1> temp_25;
        temp_25 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__50__15.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__52__20.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__38.read())))
        ;
        inst_cellmath__52 = temp_25;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__54__30
    void method_26() {
        sc_uint<1> temp_26;
        temp_26 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__50.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__52.read())))
        ;
        inst_cellmath__54__30 = temp_26;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__51__17
    void method_27() {
        sc_uint<1> temp_27;
        temp_27 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__36.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__37.read())))
        ;
        inst_cellmath__51__17 = temp_27;
    }

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
    // Compare anchor: inst_cellmath__48
    void method_28() {
        sc_uint<1> temp_28;

                    sc_uint<14> inst_cellmath__48_tmp_10 = 
            +((sc_uint<14>)(( ((sc_uint<4>)(sc_int<1>)(inst_cellmath__45.read()[9])), inst_cellmath__45.read() )))
            -((sc_uint<14>)(sc_uint<2>("0b01")));
        temp_28 = (((sc_uint<1>)(inst_cellmath__48_tmp_10[13]))==((sc_uint<1>)1))
        ;
        inst_cellmath__48 = temp_28;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__51__16
    void method_29() {
        sc_uint<1> temp_29;
        temp_29 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51__17.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__48.read())))
        ;
        inst_cellmath__51__16 = temp_29;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__51
    void method_30() {
        sc_uint<1> temp_30;
        temp_30 = 
            
            ((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__50__15.read())))
            &((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51__16.read())))
            &((sc_uint<1>)(~(sc_uint<1>)(inst_cellmath__38.read())))
        ;
        inst_cellmath__51 = temp_30;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__54__30_0
    void method_31() {
        sc_uint<2> temp_31;
        temp_31 = 
            (inst_cellmath__54__30.read(),inst_cellmath__51.read())
        ;
        inst_cellmath__54__30_0 = temp_31;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__39
    void method_32() {
        sc_uint<1> temp_32;
        temp_32 = 
            
            ((sc_uint<1>)((sc_uint<1>)(a_sign.read())))
            ^((sc_uint<1>)((sc_uint<1>)(b_sign.read())))
        ;
        inst_cellmath__39 = temp_32;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__53
    void method_33() {
        sc_uint<1> temp_33;
        temp_33 = 
            
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__50.read()) == sc_uint<1>("0bus0")) & ((sc_uint<1>)(inst_cellmath__39.read()))
        ;
        inst_cellmath__53 = temp_33;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__54
    void method_34() {
        sc_uint<8> temp_34;
        temp_34 = 
            
        -(int)((sc_uint<2>)(sc_uint<2>)(inst_cellmath__54__30_0.read()) == sc_uint<2>("0bus00")) & ((sc_uint<8>)(inst_cellmath__45.read()(7,0))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__54__30_0.read()(1,1)) == sc_uint<1>("0bus1")) & ((sc_uint<8>)(sc_uint<8>("0bus11111111")))
        ;
        inst_cellmath__54 = temp_34;
    }

    // !!!! amethyst/writers/SystemC.cpp:3630
    // Compare anchor: inst_cellmath__55__36
    void method_35() {
        sc_uint<1> temp_35;
        temp_35 = 
            
            ((sc_uint<1>)((sc_uint<1>)(inst_cellmath__52.read())))
            |((sc_uint<1>)((sc_uint<1>)(inst_cellmath__51.read())))
        ;
        inst_cellmath__55__36 = temp_35;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__50_0
    void method_36() {
        sc_uint<3> temp_36;
        temp_36 = 
            (inst_cellmath__50.read(),inst_cellmath__55__36.read(),(sc_biguint<1>)(inst_i_mul_int_mult_datapath_prodSum.read()(47,47)))
        ;
        inst_cellmath__50_0 = temp_36;
    }

    // !!!! amethyst/writers/SystemC.cpp:4048
    // Compare anchor: inst_cellmath__55
    void method_37() {
        sc_uint<23> temp_37;
        temp_37 = 
            
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__50_0.read()) == sc_uint<3>("0bus000")) & ((sc_uint<23>)(inst_i_mul_int_mult_datapath_prodSum.read()(45,23))) |
        -(int)((sc_uint<3>)(sc_uint<3>)(inst_cellmath__50_0.read()) == sc_uint<3>("0bus001")) & ((sc_uint<23>)(inst_i_mul_int_mult_datapath_prodSum.read()(46,24))) |
        -(int)((sc_uint<1>)(sc_uint<1>)(inst_cellmath__50_0.read()(2,2)) == sc_uint<1>("0bus1")) & ((sc_uint<23>)(sc_uint<23>("0bus11111111111111111111111")))
        ;
        inst_cellmath__55 = temp_37;
    }

    // !!!! amethyst/writers/SystemC.cpp:5696
    // Compare anchor: inst_cellmath__65
    void method_38() {
        sc_uint<32> temp_38;
        temp_38 = 
            (inst_cellmath__53.read(),inst_cellmath__54.read(),inst_cellmath__55.read())
        ;
        inst_cellmath__65 = temp_38;
    }

    // !!!! amethyst/writers/SystemC.cpp:5668
    // Compare anchor: x
    void method_39() {
        sc_uint<32> temp_39;
        temp_39 = 
            (sc_uint<32>)(inst_cellmath__65.read())
        ;
        x = temp_39;
    }
    void method_40() { 
        sc_uint<50> temp_40 = inst_i_mul_int_mult_datapath_prodSum.read();
        temp_40(47,0) = lhs_part_61.read();
        inst_i_mul_int_mult_datapath_prodSum = temp_40;
}
#     endif // !defined(CYNTHVLG)

    SC_CTOR(DFT_compute_cynw_cm_float_mul_E8_M23_0)
#   if defined(CYNTHVLG)
    ;
#      else
    {
    // !!!! amethyst/writers/SystemC.cpp:5771

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_0);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_1);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_2);
        sensitive << inst_cellmath__32__5
                  << inst_cellmath__32__6;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_3);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_4);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_5);
        sensitive << inst_cellmath__33__7
                  << inst_cellmath__33__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_6);
        sensitive << inst_cellmath__34
                  << inst_cellmath__35;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_7);
        sensitive << inst_cellmath__32__5
                  << inst_cellmath__32__6;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_8);
        sensitive << inst_cellmath__33__7
                  << inst_cellmath__33__8;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_9);
        sensitive << inst_cellmath__32
                  << inst_cellmath__33;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_10);
        sensitive << a_exp;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_11);
        sensitive << b_exp;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_12);
        sensitive << inst_cellmath__30
                  << inst_cellmath__31;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_13);
        sensitive << inst_cellmath__37
                  << inst_cellmath__36;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_14);
        sensitive << inst_cellmath__38
                  << inst_cellmath__50__15;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_15);
        sensitive << inst_cellmath__37
                  << inst_cellmath__36;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_16);
        sensitive << b_man;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_17);
        sensitive << a_man;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_18);
        sensitive << inst_cellmath__26
                  << inst_cellmath__25;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_19);
        sensitive << inst_i_mul_int_mult_datapath_prodSum_tmp_6;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_20);
        sensitive << inst_i_mul_int_mult_datapath_prodSum
                  << b_exp;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_21);
        sensitive << inst_cellmath__45_tmp_8
                  << a_exp;
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_22);
        sensitive << inst_cellmath__45_tmp_7;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_23);
        sensitive << inst_cellmath__45;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_24);
        sensitive << inst_cellmath__52__21
                  << inst_cellmath__49;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_25);
        sensitive << inst_cellmath__50__15
                  << inst_cellmath__52__20
                  << inst_cellmath__38;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_26);
        sensitive << inst_cellmath__50
                  << inst_cellmath__52;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_27);
        sensitive << inst_cellmath__36
                  << inst_cellmath__37;

    // !!!! amethyst/writers/SystemC.cpp:3142
    // !!!! amethyst/writers/SystemC.cpp:3323
        SC_METHOD(method_28);
        sensitive << inst_cellmath__45;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_29);
        sensitive << inst_cellmath__51__17
                  << inst_cellmath__48;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_30);
        sensitive << inst_cellmath__50__15
                  << inst_cellmath__51__16
                  << inst_cellmath__38;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_31);
        sensitive << inst_cellmath__54__30
                  << inst_cellmath__51;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_32);
        sensitive << a_sign
                  << b_sign;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_33);
        sensitive << inst_cellmath__39
                  << inst_cellmath__50;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_34);
        sensitive << inst_cellmath__45
                  << inst_cellmath__54__30_0;

    // !!!! amethyst/writers/SystemC.cpp:3630
        SC_METHOD(method_35);
        sensitive << inst_cellmath__52
                  << inst_cellmath__51;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_36);
        sensitive << inst_cellmath__50
                  << inst_cellmath__55__36
                  << inst_i_mul_int_mult_datapath_prodSum;

    // !!!! amethyst/writers/SystemC.cpp:4048
        SC_METHOD(method_37);
        sensitive << inst_i_mul_int_mult_datapath_prodSum
                  << inst_cellmath__50_0;

    // !!!! amethyst/writers/SystemC.cpp:5696
        SC_METHOD(method_38);
        sensitive << inst_cellmath__53
                  << inst_cellmath__54
                  << inst_cellmath__55;

    // !!!! amethyst/writers/SystemC.cpp:5668
        SC_METHOD(method_39);
        sensitive << inst_cellmath__65;
        SC_METHOD(method_40);
        sensitive << lhs_part_61;
    }
#   endif // !defined(CYNTHVLG)
};
#endif //  #ifndef DFT_compute_cynw_cm_float_mul_E8_M23_0_COMPILED

/* CADENCE  urbzTw7Xqg== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




