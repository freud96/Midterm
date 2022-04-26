/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/
/****************************************************************************
*
* Verilog Verification wrapper module for the DFT_compute module.
*
* This module contains the followng items:
*	- A foreign module definition for use in instantiatin the type_wrapper module
*      which contains the BEH module instance.
*	- An instance of the type_wrapper foreign module.
*   - alwyas blocks each type_wrapper output.
*
****************************************************************************/

`timescale 1 ps / 1 ps

module DFT_compute_vlwrapper(
      i_clk,
       i_rst,
       i_real_busy,
       i_real_vld,
       i_real_data_man,
       i_real_data_exp,
       i_real_data_sign,
       o_dft_real_busy,
       o_dft_real_vld,
       o_dft_real_data_man,
       o_dft_real_data_exp,
       o_dft_real_data_sign,
       o_dft_imag_busy,
       o_dft_imag_vld,
       o_dft_imag_data_man,
       o_dft_imag_data_exp,
       o_dft_imag_data_sign

    );

	input i_clk;
	input i_rst;
	output i_real_busy;
	reg i_real_busy;
	wire m_i_real_busy;
	input i_real_vld;
	input [22:0] i_real_data_man;
	input [7:0] i_real_data_exp;
	input i_real_data_sign;
	input o_dft_real_busy;
	output o_dft_real_vld;
	reg o_dft_real_vld;
	wire m_o_dft_real_vld;
	output [22:0] o_dft_real_data_man;
	output [7:0] o_dft_real_data_exp;
	output o_dft_real_data_sign;
	reg[22:0] o_dft_real_data_man;
	wire [22:0] m_o_dft_real_data_man;
	reg[7:0] o_dft_real_data_exp;
	wire [7:0] m_o_dft_real_data_exp;
	reg o_dft_real_data_sign;
	wire m_o_dft_real_data_sign;
	input o_dft_imag_busy;
	output o_dft_imag_vld;
	reg o_dft_imag_vld;
	wire m_o_dft_imag_vld;
	output [22:0] o_dft_imag_data_man;
	output [7:0] o_dft_imag_data_exp;
	output o_dft_imag_data_sign;
	reg[22:0] o_dft_imag_data_man;
	wire [22:0] m_o_dft_imag_data_man;
	reg[7:0] o_dft_imag_data_exp;
	wire [7:0] m_o_dft_imag_data_exp;
	reg o_dft_imag_data_sign;
	wire m_o_dft_imag_data_sign;


    // Instantiate the Verilog module that instantiates the SystemC module
    DFT_compute_type_wrapper DFT_compute_sc(
        .i_clk(i_clk),
         .i_rst(i_rst),
         .i_real_busy(m_i_real_busy),
         .i_real_vld(i_real_vld),
         .i_real_data_man(i_real_data_man),
         .i_real_data_exp(i_real_data_exp),
         .i_real_data_sign(i_real_data_sign),
         .o_dft_real_busy(o_dft_real_busy),
         .o_dft_real_vld(m_o_dft_real_vld),
         .o_dft_real_data_man(m_o_dft_real_data_man),
         .o_dft_real_data_exp(m_o_dft_real_data_exp),
         .o_dft_real_data_sign(m_o_dft_real_data_sign),
         .o_dft_imag_busy(o_dft_imag_busy),
         .o_dft_imag_vld(m_o_dft_imag_vld),
         .o_dft_imag_data_man(m_o_dft_imag_data_man),
         .o_dft_imag_data_exp(m_o_dft_imag_data_exp),
         .o_dft_imag_data_sign(m_o_dft_imag_data_sign)

    );

    // Always blocks for non-blocking assignments of type_wrapper outputs to
    // Verilog Verificatoin wrapper outputs.

    always @(m_i_real_busy)
     begin
      i_real_busy <= m_i_real_busy;
     end
    always @(m_o_dft_real_vld)
     begin
      o_dft_real_vld <= m_o_dft_real_vld;
     end
    always @(m_o_dft_real_data_man)
     begin
      o_dft_real_data_man <= m_o_dft_real_data_man;
     end
    always @(m_o_dft_real_data_exp)
     begin
      o_dft_real_data_exp <= m_o_dft_real_data_exp;
     end
    always @(m_o_dft_real_data_sign)
     begin
      o_dft_real_data_sign <= m_o_dft_real_data_sign;
     end
    always @(m_o_dft_imag_vld)
     begin
      o_dft_imag_vld <= m_o_dft_imag_vld;
     end
    always @(m_o_dft_imag_data_man)
     begin
      o_dft_imag_data_man <= m_o_dft_imag_data_man;
     end
    always @(m_o_dft_imag_data_exp)
     begin
      o_dft_imag_data_exp <= m_o_dft_imag_data_exp;
     end
    always @(m_o_dft_imag_data_sign)
     begin
      o_dft_imag_data_sign <= m_o_dft_imag_data_sign;
     end


endmodule

// This is an internal module that instantiates the user's SystemC input module
// using the Incisive foreign module instantiation feature.
// The name of the module and the names of the inputs and outputs must match
// with those defined in the SystemC type_wrapper module
module DFT_compute_type_wrapper(
      i_clk,
       i_rst,
       i_real_busy,
       i_real_vld,
       i_real_data_man,
       i_real_data_exp,
       i_real_data_sign,
       o_dft_real_busy,
       o_dft_real_vld,
       o_dft_real_data_man,
       o_dft_real_data_exp,
       o_dft_real_data_sign,
       o_dft_imag_busy,
       o_dft_imag_vld,
       o_dft_imag_data_man,
       o_dft_imag_data_exp,
       o_dft_imag_data_sign

    ) (* integer foreign = "SystemC";
    *);

	input i_clk;
	input i_rst;
	output i_real_busy;
	input i_real_vld;
	input [22:0] i_real_data_man;
	input [7:0] i_real_data_exp;
	input i_real_data_sign;
	input o_dft_real_busy;
	output o_dft_real_vld;
	output [22:0] o_dft_real_data_man;
	output [7:0] o_dft_real_data_exp;
	output o_dft_real_data_sign;
	input o_dft_imag_busy;
	output o_dft_imag_vld;
	output [22:0] o_dft_imag_data_man;
	output [7:0] o_dft_imag_data_exp;
	output o_dft_imag_data_sign;


endmodule
