// Generated by stratus_hls 19.12-s100  (91710.131054)
// Mon Apr 25 10:54:45 2022
// from ../DFT_compute.cpp
#ifndef CYNTH_PART_DFT_compute_DFT_compute_rtl_h
#define CYNTH_PART_DFT_compute_DFT_compute_rtl_h

#include "systemc.h"
/* Include declarations of instantiated parts. */
#include "DFT_compute_RAM_8X1_1.h"
#include "DFT_compute_RAM_8X23_3.h"
#include "DFT_compute_RAM_8X8_2.h"
#include "DFT_compute_cynw_cm_float_sin_E8_M23_0.h"
#include "DFT_compute_cynw_cm_float_mul_E8_M23_1.h"
#include "DFT_compute_cynw_cm_float_div_ieee_E8_M23_0.h"
#include "DFT_compute_cynw_cm_float_cos_E8_M23_0.h"
#include "DFT_compute_cynw_cm_float_add2_E8_M23_1.h"


/* Declaration of the synthesized module. */
struct DFT_compute : public sc_module {
  sc_in<bool > i_clk;
  sc_in<bool > i_rst;
  sc_out<bool > i_real_busy;
  sc_in<bool > i_real_vld;
  sc_in<sc_uint<23> > i_real_data_man;
  sc_in<sc_uint<8> > i_real_data_exp;
  sc_in<sc_uint<1> > i_real_data_sign;
  sc_in<bool > o_dft_real_busy;
  sc_out<bool > o_dft_real_vld;
  sc_out<sc_uint<23> > o_dft_real_data_man;
  sc_out<sc_uint<8> > o_dft_real_data_exp;
  sc_out<sc_uint<1> > o_dft_real_data_sign;
  sc_in<bool > o_dft_imag_busy;
  sc_out<bool > o_dft_imag_vld;
  sc_out<sc_uint<23> > o_dft_imag_data_man;
  sc_out<sc_uint<8> > o_dft_imag_data_exp;
  sc_out<sc_uint<1> > o_dft_imag_data_sign;
  DFT_compute( sc_module_name name );
  SC_HAS_PROCESS(DFT_compute);
  sc_signal<bool > o_dft_imag_m_req_m_prev_trig_req;
  sc_signal<sc_uint<1> > DFT_compute_Xor_1Ux1U_1U_1_8_out1;
  sc_signal<bool > o_dft_imag_m_unacked_req;
  sc_signal<sc_uint<1> > DFT_compute_Or_1Ux1U_1U_4_9_out1;
  sc_signal<bool > o_dft_real_m_req_m_prev_trig_req;
  sc_signal<sc_uint<1> > DFT_compute_Xor_1Ux1U_1U_1_4_out1;
  sc_signal<bool > o_dft_real_m_unacked_req;
  sc_signal<sc_uint<1> > DFT_compute_Or_1Ux1U_1U_4_5_out1;
  sc_signal<sc_uint<1> > DFT_compute_N_Muxb_1_2_0_4_1_out1;
  sc_signal<bool > i_real_m_unvalidated_req;
  sc_signal<sc_uint<1> > 
  DFT_compute_gen_busy_r_1_2_gen_busy_i_real_m_data_is_invalid_next;
  sc_signal<sc_uint<1> > DFT_compute_gen_busy_r_1_2_gdiv;
  sc_signal<sc_uint<1> > DFT_compute_gen_busy_r_1_2_gnew_req;
  sc_signal<sc_uint<8> > global_state_next;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_411_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_411_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_411_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_379_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_379_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_379_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_347_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_347_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_347_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_315_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_315_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_315_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_279_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_279_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_279_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_249_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_249_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_249_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_217_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_217_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_217_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_187_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_187_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_187_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_151_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_151_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_151_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_121_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_121_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_121_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_91_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_91_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_91_u_f_821_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt5_4_74_focbsign_i0_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt5_4_74_ftemp_I_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt5_4_74_ftemp_I_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt5_4_74_ftemp_I_sign;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt5_4_71_focbsign_i0_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt5_4_71_ftemp_I_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt5_4_71_ftemp_I_exp;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt5_4_71_ftemp_I_sign;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt5_4_71_in1;
  sc_signal<sc_uint<1> > DFT_compute_entirecomputation_alt3_4_61_focbsign_i0;
  sc_signal<sc_uint<23> > DFT_compute_entirecomputation_alt3_4_61_u_f_821_man;
  sc_signal<sc_uint<8> > DFT_compute_entirecomputation_alt3_4_61_u_f_821_exp;
  sc_signal<sc_uint<31> > sreg_1;
  sc_signal<sc_uint<2> > gs_ctrl44;
  sc_signal<sc_uint<32> > sreg_2;
  sc_signal<sc_uint<1> > gs_ctrl41;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt2_4_51_in1;
  sc_signal<sc_uint<4> > gs_ctrl40;
  sc_signal<sc_uint<3> > DFT_compute_LessThan_3Ux4U_1U_4_48_in1_slice;
  sc_signal<sc_uint<3> > DFT_compute_LessThan_3Ux4U_1U_4_48_in2;
  sc_signal<sc_uint<1> > gs_ctrl38;
  sc_signal<sc_uint<1> > gs_ctrl35;
  sc_signal<sc_uint<2> > gs_ctrl34;
  sc_signal<sc_uint<2> > gs_ctrl33;
  sc_signal<sc_uint<2> > gs_ctrl32;
  sc_signal<sc_uint<3> > gs_ctrl29;
  sc_signal<sc_uint<1> > gs_ctrl28;
  sc_signal<sc_uint<2> > 
  DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_b_exp_slice;
  sc_signal<sc_uint<1> > gs_ctrl27;
  sc_signal<sc_uint<2> > gs_ctrl26;
  sc_signal<sc_uint<3> > gs_ctrl25;
  sc_signal<sc_uint<2> > gs_ctrl24;
  sc_signal<sc_uint<4> > gs_ctrl23;
  sc_signal<sc_uint<2> > gs_ctrl18;
  sc_signal<sc_uint<3> > gs_ctrl17;
  sc_signal<sc_uint<2> > gs_ctrl16;
  sc_signal<sc_uint<4> > gs_ctrl15;
  sc_signal<sc_uint<2> > gs_ctrl14;
  sc_signal<sc_uint<3> > gs_ctrl13;
  sc_signal<sc_uint<2> > gs_ctrl6;
  sc_signal<sc_uint<3> > gs_ctrl5;
  sc_signal<sc_uint<3> > gs_ctrl4;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_77_out1;
  sc_signal<sc_uint<4> > gs_ctrl3;
  sc_signal<sc_uint<1> > gs_ctrl0;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_19_out1;
  sc_signal<sc_uint<23> > s_reg_867;
  sc_signal<sc_uint<33> > DFT_compute_entirecomputation_alt5_4_74_out1;
  sc_signal<sc_uint<1> > s_reg_866;
  sc_signal<sc_uint<32> > s_reg_862;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt2_4_51_out1;
  sc_signal<sc_uint<1> > DFT_compute_LessThan_3Ux4U_1U_4_48_out1;
  sc_signal<sc_uint<1> > s_reg_859;
  sc_signal<sc_uint<3> > s_reg_858_slice;
  sc_signal<sc_uint<32> > s_reg_857;
  sc_signal<sc_uint<32> > s_reg_856;
  sc_signal<sc_uint<32> > s_reg_855;
  sc_signal<sc_uint<32> > s_reg_854;
  sc_signal<sc_uint<32> > s_reg_852;
  sc_signal<sc_uint<8> > s_reg_851;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_416_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_411_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_384_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_379_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_352_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_347_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_320_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_315_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_284_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_279_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_254_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_249_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_222_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_217_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_192_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_187_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_156_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_151_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_126_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_121_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_96_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_91_out1;
  sc_signal<sc_uint<33> > DFT_compute_entirecomputation_alt5_4_71_out1;
  sc_signal<sc_uint<1> > s_reg_850;
  sc_signal<sc_uint<32> > s_reg_849;
  sc_signal<sc_uint<32> > s_reg_848;
  sc_signal<sc_uint<4> > DFT_compute_Add_3Ux1U_4U_4_49_out1;
  sc_signal<sc_uint<32> > s_reg_847_slice;
  sc_signal<sc_uint<32> > s_reg_853_slice;
  sc_signal<sc_uint<32> > s_reg_846;
  sc_signal<sc_uint<32> > s_reg_845;
  sc_signal<sc_uint<3> > DFT_compute_gen_busy_r_1_2_out1;
  sc_signal<sc_uint<1> > DFT_compute_And_1Ux1U_1U_1_6_out1;
  sc_signal<sc_uint<1> > DFT_compute_And_1Ux1U_1U_1_10_out1;
  sc_signal<sc_uint<1> > DFT_compute_Not_1U_1U_1_11_out1;
  sc_signal<bool > o_dft_imag_m_req_m_trig_req;
  sc_signal<sc_uint<1> > DFT_compute_Not_1U_1U_1_7_out1;
  sc_signal<bool > o_dft_real_m_req_m_trig_req;
  sc_signal<bool > i_real_m_busy_req_0;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_415_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_410_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_383_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_378_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_351_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_346_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_319_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_314_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_283_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_278_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_253_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_248_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_221_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_216_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_191_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_186_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_155_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_150_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_125_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_120_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_95_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_90_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_65_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_60_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt3_4_61_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_16_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt0_4_69_out1;
  sc_signal<sc_uint<32> > DFT_compute_entirecomputation_alt4_4_66_out1;
  sc_signal<sc_uint<8> > global_state;
  sc_signal<sc_uint<1> > stall0;
  sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_17_a_sign;
  sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_add2_E8_M23_1_17_a_exp;
  sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_add2_E8_M23_1_17_a_man;
  sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_add2_E8_M23_1_17_b_sign;
  sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_add2_E8_M23_1_17_b_exp;
  sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_add2_E8_M23_1_17_b_man;
  sc_signal<sc_uint<32> > DFT_compute_cynw_cm_float_add2_E8_M23_1_17_x;
  sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_cos_E8_M23_0_12_a_sign;
  sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_cos_E8_M23_0_12_a_exp;
  sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_cos_E8_M23_0_12_a_man;
  sc_signal<sc_uint<37> > DFT_compute_cynw_cm_float_cos_E8_M23_0_12_x;
  sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_a_sign;
  sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_a_exp;
  sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_a_man;
  sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_b_sign;
  sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_b_exp;
  sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_b_man;
  sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_accept;
  sc_signal<sc_uint<32> > DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_x;
  sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_56_a_sign;
  sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_mul_E8_M23_1_56_a_exp;
  sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_mul_E8_M23_1_56_a_man;
  sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_mul_E8_M23_1_56_b_sign;
  sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_mul_E8_M23_1_56_b_exp;
  sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_mul_E8_M23_1_56_b_man;
  sc_signal<sc_uint<32> > DFT_compute_cynw_cm_float_mul_E8_M23_1_56_x;
  sc_signal<sc_uint<1> > DFT_compute_cynw_cm_float_sin_E8_M23_0_21_a_sign;
  sc_signal<sc_uint<8> > DFT_compute_cynw_cm_float_sin_E8_M23_0_21_a_exp;
  sc_signal<sc_uint<23> > DFT_compute_cynw_cm_float_sin_E8_M23_0_21_a_man;
  sc_signal<sc_uint<37> > DFT_compute_cynw_cm_float_sin_E8_M23_0_21_x;
  sc_signal<sc_uint<8> > temp_imag_exp_DIN;
  sc_signal<sc_uint<1> > temp_imag_exp_CE;
  sc_signal<sc_uint<1> > temp_imag_exp_RW;
  sc_signal<sc_uint<3> > temp_imag_exp_in1;
  sc_signal<sc_uint<8> > temp_imag_exp_out1;
  sc_signal<sc_uint<23> > temp_imag_man_DIN;
  sc_signal<sc_uint<1> > temp_imag_man_CE;
  sc_signal<sc_uint<1> > temp_imag_man_RW;
  sc_signal<sc_uint<3> > temp_imag_man_in1;
  sc_signal<sc_uint<23> > temp_imag_man_out1;
  sc_signal<sc_uint<1> > temp_imag_sign_DIN;
  sc_signal<sc_uint<1> > temp_imag_sign_CE;
  sc_signal<sc_uint<1> > temp_imag_sign_RW;
  sc_signal<sc_uint<3> > temp_imag_sign_in1;
  sc_signal<sc_uint<1> > temp_imag_sign_out1;
  sc_signal<sc_uint<8> > temp_real_exp_DIN;
  sc_signal<sc_uint<1> > temp_real_exp_CE;
  sc_signal<sc_uint<1> > temp_real_exp_RW;
  sc_signal<sc_uint<3> > temp_real_exp_in1;
  sc_signal<sc_uint<8> > temp_real_exp_out1;
  sc_signal<sc_uint<23> > temp_real_man_DIN;
  sc_signal<sc_uint<1> > temp_real_man_CE;
  sc_signal<sc_uint<1> > temp_real_man_RW;
  sc_signal<sc_uint<3> > temp_real_man_in1;
  sc_signal<sc_uint<23> > temp_real_man_out1;
  sc_signal<sc_uint<1> > temp_real_sign_DIN;
  sc_signal<sc_uint<1> > temp_real_sign_CE;
  sc_signal<sc_uint<1> > temp_real_sign_RW;
  sc_signal<sc_uint<3> > temp_real_sign_in1;
  sc_signal<sc_uint<1> > temp_real_sign_out1;
  DFT_compute_RAM_8X1_1 *temp_real_sign;
  DFT_compute_RAM_8X23_3 *temp_real_man;
  DFT_compute_RAM_8X8_2 *temp_real_exp;
  DFT_compute_RAM_8X1_1 *temp_imag_sign;
  DFT_compute_RAM_8X23_3 *temp_imag_man;
  DFT_compute_RAM_8X8_2 *temp_imag_exp;
  DFT_compute_cynw_cm_float_sin_E8_M23_0 *DFT_compute_cynw_cm_float_sin_E8_M23_0_21;
  DFT_compute_cynw_cm_float_mul_E8_M23_1 *DFT_compute_cynw_cm_float_mul_E8_M23_1_56;
  DFT_compute_cynw_cm_float_div_ieee_E8_M23_0 *DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14;
  DFT_compute_cynw_cm_float_cos_E8_M23_0 *DFT_compute_cynw_cm_float_cos_E8_M23_0_12;
  DFT_compute_cynw_cm_float_add2_E8_M23_1 *DFT_compute_cynw_cm_float_add2_E8_M23_1_17;
  void drive_o_dft_imag_data_sign();
  void drive_o_dft_imag_data_exp();
  void drive_o_dft_imag_data_man();
  void drive_o_dft_real_data_sign();
  void drive_o_dft_real_data_exp();
  void drive_o_dft_real_data_man();
  void drive_i_real_m_busy_req_0();
  void drive_o_dft_real_m_req_m_trig_req();
  void drive_o_dft_imag_m_req_m_trig_req();
  void drive_stall0();
  void drive_s_reg_845();
  void drive_s_reg_846();
  void drive_s_reg_847_slice();
  void drive_s_reg_848();
  void drive_s_reg_849();
  void drive_s_reg_850();
  void drive_s_reg_851();
  void drive_s_reg_852();
  void drive_s_reg_853_slice();
  void drive_s_reg_854();
  void drive_s_reg_855();
  void drive_s_reg_856();
  void drive_s_reg_857();
  void drive_s_reg_858_slice();
  void drive_s_reg_859();
  void drive_s_reg_862();
  void drive_s_reg_866();
  void drive_s_reg_867();
  void drive_DFT_compute_cynw_cm_float_cos_E8_M23_0_12_a_sign();
  void drive_DFT_compute_cynw_cm_float_cos_E8_M23_0_12_a_exp();
  void drive_DFT_compute_cynw_cm_float_cos_E8_M23_0_12_a_man();
  void drive_temp_real_man_in1();
  void drive_temp_real_man_DIN();
  void drive_temp_real_man_CE();
  void drive_temp_real_man_RW();
  void drive_temp_real_exp_in1();
  void drive_temp_real_exp_DIN();
  void drive_temp_real_exp_CE();
  void drive_temp_real_exp_RW();
  void drive_temp_real_sign_in1();
  void drive_temp_real_sign_DIN();
  void drive_temp_real_sign_CE();
  void drive_temp_real_sign_RW();
  void drive_temp_imag_man_in1();
  void drive_temp_imag_man_DIN();
  void drive_temp_imag_man_CE();
  void drive_temp_imag_man_RW();
  void drive_temp_imag_exp_in1();
  void drive_temp_imag_exp_DIN();
  void drive_temp_imag_exp_CE();
  void drive_temp_imag_exp_RW();
  void drive_temp_imag_sign_in1();
  void drive_temp_imag_sign_DIN();
  void drive_temp_imag_sign_CE();
  void drive_temp_imag_sign_RW();
  void drive_DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_a_sign();
  void drive_DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_a_exp();
  void drive_DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_a_man();
  void drive_DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_b_sign();
  void drive_DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_b_exp_slice();
  void drive_DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_b_man();
  void drive_DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_accept();
  void DFT_compute_entirecomputation_alt0_4_16_p5();
  void drive_DFT_compute_cynw_cm_float_add2_E8_M23_1_17_a_sign();
  void drive_DFT_compute_cynw_cm_float_add2_E8_M23_1_17_a_exp();
  void drive_DFT_compute_cynw_cm_float_add2_E8_M23_1_17_a_man();
  void drive_DFT_compute_cynw_cm_float_add2_E8_M23_1_17_b_sign();
  void drive_DFT_compute_cynw_cm_float_add2_E8_M23_1_17_b_exp();
  void drive_DFT_compute_cynw_cm_float_add2_E8_M23_1_17_b_man();
  void DFT_compute_entirecomputation_alt0_4_19_p5();
  void drive_DFT_compute_cynw_cm_float_sin_E8_M23_0_21_a_sign();
  void drive_DFT_compute_cynw_cm_float_sin_E8_M23_0_21_a_exp();
  void drive_DFT_compute_cynw_cm_float_sin_E8_M23_0_21_a_man();
  void drive_DFT_compute_LessThan_3Ux4U_1U_4_48_in2();
  void drive_DFT_compute_LessThan_3Ux4U_1U_4_48_in1_slice();
  void DFT_compute_LessThan_3Ux4U_1U_4_48();
  void DFT_compute_Add_3Ux1U_4U_4_49();
  void drive_DFT_compute_entirecomputation_alt2_4_51_in1();
  void DFT_compute_entirecomputation_alt2_4_51_p5();
  void drive_DFT_compute_cynw_cm_float_mul_E8_M23_1_56_a_sign();
  void drive_DFT_compute_cynw_cm_float_mul_E8_M23_1_56_a_exp();
  void drive_DFT_compute_cynw_cm_float_mul_E8_M23_1_56_a_man();
  void drive_DFT_compute_cynw_cm_float_mul_E8_M23_1_56_b_sign();
  void drive_DFT_compute_cynw_cm_float_mul_E8_M23_1_56_b_exp();
  void drive_DFT_compute_cynw_cm_float_mul_E8_M23_1_56_b_man();
  void DFT_compute_entirecomputation_alt0_4_60_p5();
  void DFT_compute_entirecomputation_alt3_4_61_p5();
  void DFT_compute_entirecomputation_alt0_4_65_p5();
  void DFT_compute_entirecomputation_alt4_4_66_p5();
  void DFT_compute_entirecomputation_alt0_4_69_p5();
  void drive_DFT_compute_entirecomputation_alt5_4_71_in1();
  void DFT_compute_entirecomputation_alt5_4_71_p6();
  void DFT_compute_entirecomputation_alt5_4_74_p6();
  void DFT_compute_entirecomputation_alt0_4_77_p5();
  void DFT_compute_entirecomputation_alt0_4_90_p5();
  void DFT_compute_entirecomputation_alt3_4_91_p5();
  void DFT_compute_entirecomputation_alt0_4_95_p5();
  void DFT_compute_entirecomputation_alt4_4_96_p5();
  void DFT_compute_entirecomputation_alt0_4_120_p5();
  void DFT_compute_entirecomputation_alt3_4_121_p5();
  void DFT_compute_entirecomputation_alt0_4_125_p5();
  void DFT_compute_entirecomputation_alt4_4_126_p5();
  void DFT_compute_entirecomputation_alt0_4_150_p5();
  void DFT_compute_entirecomputation_alt3_4_151_p5();
  void DFT_compute_entirecomputation_alt0_4_155_p5();
  void DFT_compute_entirecomputation_alt4_4_156_p5();
  void DFT_compute_entirecomputation_alt0_4_186_p5();
  void DFT_compute_entirecomputation_alt3_4_187_p5();
  void DFT_compute_entirecomputation_alt0_4_191_p5();
  void DFT_compute_entirecomputation_alt4_4_192_p5();
  void DFT_compute_entirecomputation_alt0_4_216_p5();
  void DFT_compute_entirecomputation_alt3_4_217_p5();
  void DFT_compute_entirecomputation_alt0_4_221_p5();
  void DFT_compute_entirecomputation_alt4_4_222_p5();
  void DFT_compute_entirecomputation_alt0_4_248_p5();
  void DFT_compute_entirecomputation_alt3_4_249_p5();
  void DFT_compute_entirecomputation_alt0_4_253_p5();
  void DFT_compute_entirecomputation_alt4_4_254_p5();
  void DFT_compute_entirecomputation_alt0_4_278_p5();
  void DFT_compute_entirecomputation_alt3_4_279_p5();
  void DFT_compute_entirecomputation_alt0_4_283_p5();
  void DFT_compute_entirecomputation_alt4_4_284_p5();
  void DFT_compute_entirecomputation_alt0_4_314_p5();
  void DFT_compute_entirecomputation_alt3_4_315_p5();
  void DFT_compute_entirecomputation_alt0_4_319_p5();
  void DFT_compute_entirecomputation_alt4_4_320_p5();
  void DFT_compute_entirecomputation_alt0_4_346_p5();
  void DFT_compute_entirecomputation_alt3_4_347_p5();
  void DFT_compute_entirecomputation_alt0_4_351_p5();
  void DFT_compute_entirecomputation_alt4_4_352_p5();
  void DFT_compute_entirecomputation_alt0_4_378_p5();
  void DFT_compute_entirecomputation_alt3_4_379_p5();
  void DFT_compute_entirecomputation_alt0_4_383_p5();
  void DFT_compute_entirecomputation_alt4_4_384_p5();
  void DFT_compute_entirecomputation_alt0_4_410_p5();
  void DFT_compute_entirecomputation_alt3_4_411_p5();
  void DFT_compute_entirecomputation_alt0_4_415_p5();
  void DFT_compute_entirecomputation_alt4_4_416_p5();
  void DFT_compute_entirecomputation_alt5_4_74_p5();
  void DFT_compute_entirecomputation_alt5_4_74_p4();
  void DFT_compute_entirecomputation_alt5_4_74_p3();
  void DFT_compute_entirecomputation_alt5_4_74_p2();
  void DFT_compute_entirecomputation_alt5_4_71_p5();
  void DFT_compute_entirecomputation_alt5_4_71_p4();
  void DFT_compute_entirecomputation_alt5_4_71_p3();
  void DFT_compute_entirecomputation_alt5_4_71_p2();
  void DFT_compute_entirecomputation_alt3_4_91_p4();
  void DFT_compute_entirecomputation_alt3_4_91_p3();
  void DFT_compute_entirecomputation_alt3_4_91_p2();
  void DFT_compute_entirecomputation_alt3_4_61_p4();
  void DFT_compute_entirecomputation_alt3_4_61_p3();
  void DFT_compute_entirecomputation_alt3_4_61_p2();
  void DFT_compute_entirecomputation_alt3_4_411_p4();
  void DFT_compute_entirecomputation_alt3_4_411_p3();
  void DFT_compute_entirecomputation_alt3_4_411_p2();
  void DFT_compute_entirecomputation_alt3_4_379_p4();
  void DFT_compute_entirecomputation_alt3_4_379_p3();
  void DFT_compute_entirecomputation_alt3_4_379_p2();
  void DFT_compute_entirecomputation_alt3_4_347_p4();
  void DFT_compute_entirecomputation_alt3_4_347_p3();
  void DFT_compute_entirecomputation_alt3_4_347_p2();
  void DFT_compute_entirecomputation_alt3_4_315_p4();
  void DFT_compute_entirecomputation_alt3_4_315_p3();
  void DFT_compute_entirecomputation_alt3_4_315_p2();
  void DFT_compute_entirecomputation_alt3_4_279_p4();
  void DFT_compute_entirecomputation_alt3_4_279_p3();
  void DFT_compute_entirecomputation_alt3_4_279_p2();
  void DFT_compute_entirecomputation_alt3_4_249_p4();
  void DFT_compute_entirecomputation_alt3_4_249_p3();
  void DFT_compute_entirecomputation_alt3_4_249_p2();
  void DFT_compute_entirecomputation_alt3_4_217_p4();
  void DFT_compute_entirecomputation_alt3_4_217_p3();
  void DFT_compute_entirecomputation_alt3_4_217_p2();
  void DFT_compute_entirecomputation_alt3_4_187_p4();
  void DFT_compute_entirecomputation_alt3_4_187_p3();
  void DFT_compute_entirecomputation_alt3_4_187_p2();
  void DFT_compute_entirecomputation_alt3_4_151_p4();
  void DFT_compute_entirecomputation_alt3_4_151_p3();
  void DFT_compute_entirecomputation_alt3_4_151_p2();
  void DFT_compute_entirecomputation_alt3_4_121_p4();
  void DFT_compute_entirecomputation_alt3_4_121_p3();
  void DFT_compute_entirecomputation_alt3_4_121_p2();
  void drive_sreg_1();
  void drive_sreg_2();
  void drive_global_state();
  void drive_global_state_next();
  void drive_gs_ctrl0();
  void drive_gs_ctrl3();
  void drive_gs_ctrl4();
  void drive_gs_ctrl5();
  void drive_gs_ctrl6();
  void drive_gs_ctrl13();
  void drive_gs_ctrl14();
  void drive_gs_ctrl15();
  void drive_gs_ctrl16();
  void drive_gs_ctrl17();
  void drive_gs_ctrl18();
  void drive_gs_ctrl23();
  void drive_gs_ctrl24();
  void drive_gs_ctrl25();
  void drive_gs_ctrl26();
  void drive_gs_ctrl27();
  void drive_gs_ctrl28();
  void drive_gs_ctrl29();
  void drive_gs_ctrl32();
  void drive_gs_ctrl33();
  void drive_gs_ctrl34();
  void drive_gs_ctrl35();
  void drive_gs_ctrl38();
  void drive_gs_ctrl40();
  void drive_gs_ctrl41();
  void drive_gs_ctrl44();
  void drive_i_real_busy();
  void DFT_compute_gen_busy_r_1_2_p8();
  void DFT_compute_gen_busy_r_1_2_p7();
  void DFT_compute_gen_busy_r_1_2_p6();
  void DFT_compute_gen_busy_r_1_2_p5();
  void drive_i_real_m_unvalidated_req();
  void DFT_compute_N_Muxb_1_2_0_4_1();
  void drive_o_dft_real_vld();
  void DFT_compute_Or_1Ux1U_1U_4_5();
  void drive_o_dft_real_m_unacked_req();
  void DFT_compute_And_1Ux1U_1U_1_6();
  void DFT_compute_Xor_1Ux1U_1U_1_4();
  void drive_o_dft_real_m_req_m_prev_trig_req();
  void DFT_compute_Not_1U_1U_1_7();
  void drive_o_dft_imag_vld();
  void DFT_compute_Or_1Ux1U_1U_4_9();
  void drive_o_dft_imag_m_unacked_req();
  void DFT_compute_And_1Ux1U_1U_1_10();
  void DFT_compute_Xor_1Ux1U_1U_1_8();
  void drive_o_dft_imag_m_req_m_prev_trig_req();
  void DFT_compute_Not_1U_1U_1_11();
  void drive_DFT_compute_cynw_cm_float_div_ieee_E8_M23_0_14_b_exp();
};

#endif
