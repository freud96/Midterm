/*****************************************************************************
    Verilog Hierarchical RTL Description
    
    Configured at: 11:22:23 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_cynw_cm_float_mul_E8_M23_1 (
	a_sign,
	a_exp,
	a_man,
	b_sign,
	b_exp,
	b_man,
	x
	); /* architecture "behavioural" */ 
input  a_sign;
input [7:0] a_exp;
input [22:0] a_man;
input  b_sign;
input [7:0] b_exp;
input [22:0] b_man;
output [31:0] x;
wire [23:0] inst_cellmath__25,
	inst_cellmath__26;
wire  inst_cellmath__30,
	inst_cellmath__31,
	inst_cellmath__32,
	inst_cellmath__33,
	inst_cellmath__34,
	inst_cellmath__35,
	inst_cellmath__36,
	inst_cellmath__37,
	inst_cellmath__38,
	inst_cellmath__39;
wire [49:0] inst_i_mul_int_mult_datapath_prodSum;
wire [9:0] inst_cellmath__45;
wire  inst_cellmath__48,
	inst_cellmath__49,
	inst_cellmath__50,
	inst_cellmath__51,
	inst_cellmath__52,
	inst_cellmath__53;
wire [7:0] inst_cellmath__54;
wire [22:0] inst_cellmath__55;
wire [31:0] inst_cellmath__65;
wire [0:0] inst_cellmath__32__5,
	inst_cellmath__32__6,
	inst_cellmath__33__7,
	inst_cellmath__33__8,
	inst_cellmath__50__15,
	inst_cellmath__51__17,
	inst_cellmath__51__16,
	inst_cellmath__52__21,
	inst_cellmath__52__20,
	inst_cellmath__54__30,
	inst_cellmath__55__36;
wire [1:0] inst_cellmath__54__30_0;
wire [2:0] inst_cellmath__50_0;
cynw_cm_float_mul_inst_cellmath__32__5__bdw1103716848_bdw inst_cellmath__32__5__0(
	.inst_cellmath__32__5__out0(inst_cellmath__32__5),
	.inst_cellmath__32__5__in0(a_exp)
	) ;
cynw_cm_float_mul_inst_cellmath__32__6__bdw1103716848_bdw inst_cellmath__32__6__0(
	.inst_cellmath__32__6__out0(inst_cellmath__32__6),
	.inst_cellmath__32__6__in0(a_man)
	) ;
cynw_cm_float_mul_inst_cellmath__34_0_bdw1103716848_bdw inst_cellmath__34_0_0(
	.inst_cellmath__34_0_out0(inst_cellmath__34),
	.inst_cellmath__34_0_in0(inst_cellmath__32__6),
	.inst_cellmath__34_0_in1(inst_cellmath__32__5)
	) ;
cynw_cm_float_mul_inst_cellmath__33__7__bdw1103716848_bdw inst_cellmath__33__7__0(
	.inst_cellmath__33__7__out0(inst_cellmath__33__7),
	.inst_cellmath__33__7__in0(b_exp)
	) ;
cynw_cm_float_mul_inst_cellmath__33__8__bdw1103716848_bdw inst_cellmath__33__8__0(
	.inst_cellmath__33__8__out0(inst_cellmath__33__8),
	.inst_cellmath__33__8__in0(b_man)
	) ;
cynw_cm_float_mul_inst_cellmath__35_0_bdw1103716848_bdw inst_cellmath__35_0_0(
	.inst_cellmath__35_0_out0(inst_cellmath__35),
	.inst_cellmath__35_0_in0(inst_cellmath__33__8),
	.inst_cellmath__35_0_in1(inst_cellmath__33__7)
	) ;
cynw_cm_float_mul_inst_cellmath__38_0_bdw1103716848_bdw inst_cellmath__38_0_0(
	.inst_cellmath__38_0_out0(inst_cellmath__38),
	.inst_cellmath__38_0_in0(inst_cellmath__35),
	.inst_cellmath__38_0_in1(inst_cellmath__34)
	) ;
cynw_cm_float_mul_inst_cellmath__32_0_bdw1103716848_bdw inst_cellmath__32_0_0(
	.inst_cellmath__32_0_out0(inst_cellmath__32),
	.inst_cellmath__32_0_in0(inst_cellmath__32__6),
	.inst_cellmath__32_0_in1(inst_cellmath__32__5)
	) ;
cynw_cm_float_mul_inst_cellmath__33_0_bdw1103716848_bdw inst_cellmath__33_0_0(
	.inst_cellmath__33_0_out0(inst_cellmath__33),
	.inst_cellmath__33_0_in0(inst_cellmath__33__8),
	.inst_cellmath__33_0_in1(inst_cellmath__33__7)
	) ;
cynw_cm_float_mul_inst_cellmath__37_0_bdw1103716848_bdw inst_cellmath__37_0_0(
	.inst_cellmath__37_0_out0(inst_cellmath__37),
	.inst_cellmath__37_0_in0(inst_cellmath__33),
	.inst_cellmath__37_0_in1(inst_cellmath__32)
	) ;
cynw_cm_float_mul_inst_cellmath__30_0_bdw1103716848_bdw inst_cellmath__30_0_0(
	.inst_cellmath__30_0_out0(inst_cellmath__30),
	.inst_cellmath__30_0_in0(a_exp)
	) ;
cynw_cm_float_mul_inst_cellmath__31_0_bdw1103716848_bdw inst_cellmath__31_0_0(
	.inst_cellmath__31_0_out0(inst_cellmath__31),
	.inst_cellmath__31_0_in0(b_exp)
	) ;
cynw_cm_float_mul_inst_cellmath__36_0_bdw1103716848_bdw inst_cellmath__36_0_0(
	.inst_cellmath__36_0_out0(inst_cellmath__36),
	.inst_cellmath__36_0_in0(inst_cellmath__31),
	.inst_cellmath__36_0_in1(inst_cellmath__30)
	) ;
cynw_cm_float_mul_inst_cellmath__50__15__bdw1103716848_bdw inst_cellmath__50__15__0(
	.inst_cellmath__50__15__out0(inst_cellmath__50__15),
	.inst_cellmath__50__15__in0(inst_cellmath__37),
	.inst_cellmath__50__15__in1(inst_cellmath__36)
	) ;
cynw_cm_float_mul_inst_cellmath__50_1_bdw1103716848_bdw inst_cellmath__50_1_0(
	.inst_cellmath__50_1_out0(inst_cellmath__50),
	.inst_cellmath__50_1_in0(inst_cellmath__50__15),
	.inst_cellmath__50_1_in1(inst_cellmath__38)
	) ;
cynw_cm_float_mul_inst_cellmath__52__21__bdw1103716848_bdw inst_cellmath__52__21__0(
	.inst_cellmath__52__21__out0(inst_cellmath__52__21),
	.inst_cellmath__52__21__in0(inst_cellmath__37),
	.inst_cellmath__52__21__in1(inst_cellmath__36)
	) ;

assign inst_cellmath__26 = {1'B1,b_man};

assign inst_cellmath__25 = {1'B1,a_man};
cynw_cm_float_mul_inst_i_mul_int_mult_datapath_prodSum_0_bdw1103716848_bdw inst_i_mul_int_mult_datapath_prodSum_0_0(
	.inst_i_mul_int_mult_datapath_prodSum_0_out0(inst_i_mul_int_mult_datapath_prodSum[47:0]),
	.inst_i_mul_int_mult_datapath_prodSum_0_in0(b_man),
	.inst_i_mul_int_mult_datapath_prodSum_0_in1(a_man)
	) ;
cynw_cm_float_mul_inst_cellmath__45_0_bdw1103716848_bdw inst_cellmath__45_0_0(
	.inst_cellmath__45_0_out0(inst_cellmath__45),
	.inst_cellmath__45_0_in0(inst_i_mul_int_mult_datapath_prodSum[47]),
	.inst_cellmath__45_0_in1(b_exp),
	.inst_cellmath__45_0_in2(a_exp)
	) ;
cynw_cm_float_mul_inst_cellmath__49_0_bdw1103716848_bdw inst_cellmath__49_0_0(
	.inst_cellmath__49_0_out0(inst_cellmath__49),
	.inst_cellmath__49_0_in0(inst_cellmath__45)
	) ;
cynw_cm_float_mul_inst_cellmath__52__20__bdw1103716848_bdw inst_cellmath__52__20__0(
	.inst_cellmath__52__20__out0(inst_cellmath__52__20),
	.inst_cellmath__52__20__in0(inst_cellmath__52__21),
	.inst_cellmath__52__20__in1(inst_cellmath__49)
	) ;
cynw_cm_float_mul_inst_cellmath__52_0_bdw1103716848_bdw inst_cellmath__52_0_0(
	.inst_cellmath__52_0_out0(inst_cellmath__52),
	.inst_cellmath__52_0_in0(inst_cellmath__52__20),
	.inst_cellmath__52_0_in1(inst_cellmath__50__15),
	.inst_cellmath__52_0_in2(inst_cellmath__38)
	) ;
cynw_cm_float_mul_inst_cellmath__54__30__bdw1103716848_bdw inst_cellmath__54__30__0(
	.inst_cellmath__54__30__out0(inst_cellmath__54__30),
	.inst_cellmath__54__30__in0(inst_cellmath__52),
	.inst_cellmath__54__30__in1(inst_cellmath__50)
	) ;
cynw_cm_float_mul_inst_cellmath__51__17__bdw1103716848_bdw inst_cellmath__51__17__0(
	.inst_cellmath__51__17__out0(inst_cellmath__51__17),
	.inst_cellmath__51__17__in0(inst_cellmath__37),
	.inst_cellmath__51__17__in1(inst_cellmath__36)
	) ;
cynw_cm_float_mul_inst_cellmath__48_0_bdw1103716848_bdw inst_cellmath__48_0_0(
	.inst_cellmath__48_0_out0(inst_cellmath__48),
	.inst_cellmath__48_0_in0(inst_cellmath__45)
	) ;
cynw_cm_float_mul_inst_cellmath__51__16__bdw1103716848_bdw inst_cellmath__51__16__0(
	.inst_cellmath__51__16__out0(inst_cellmath__51__16),
	.inst_cellmath__51__16__in0(inst_cellmath__51__17),
	.inst_cellmath__51__16__in1(inst_cellmath__48)
	) ;
cynw_cm_float_mul_inst_cellmath__51_0_bdw1103716848_bdw inst_cellmath__51_0_0(
	.inst_cellmath__51_0_out0(inst_cellmath__51),
	.inst_cellmath__51_0_in0(inst_cellmath__51__16),
	.inst_cellmath__51_0_in1(inst_cellmath__50__15),
	.inst_cellmath__51_0_in2(inst_cellmath__38)
	) ;

assign inst_cellmath__54__30_0 = {inst_cellmath__54__30,inst_cellmath__51};
cynw_cm_float_mul_inst_cellmath__39_0_bdw1103716848_bdw inst_cellmath__39_0_0(
	.inst_cellmath__39_0_out0(inst_cellmath__39),
	.inst_cellmath__39_0_in0(b_sign),
	.inst_cellmath__39_0_in1(a_sign)
	) ;
cynw_cm_float_mul_inst_cellmath__53_0_bdw1103716848_bdw inst_cellmath__53_0_0(
	.inst_cellmath__53_0_out0(inst_cellmath__53),
	.inst_cellmath__53_0_in0(inst_cellmath__50),
	.inst_cellmath__53_0_in1(inst_cellmath__39)
	) ;
cynw_cm_float_mul_inst_cellmath__54_0_bdw1103716848_bdw inst_cellmath__54_0_0(
	.inst_cellmath__54_0_out0(inst_cellmath__54),
	.inst_cellmath__54_0_in0(inst_cellmath__54__30),
	.inst_cellmath__54_0_in1(inst_cellmath__51),
	.inst_cellmath__54_0_in2(inst_cellmath__45[7:0])
	) ;
cynw_cm_float_mul_inst_cellmath__55__36__bdw1103716848_bdw inst_cellmath__55__36__0(
	.inst_cellmath__55__36__out0(inst_cellmath__55__36),
	.inst_cellmath__55__36__in0(inst_cellmath__52),
	.inst_cellmath__55__36__in1(inst_cellmath__51)
	) ;

assign inst_cellmath__50_0 = {inst_cellmath__50,inst_cellmath__55__36,inst_i_mul_int_mult_datapath_prodSum[47]};
cynw_cm_float_mul_inst_cellmath__55_0_bdw1103716848_bdw inst_cellmath__55_0_0(
	.inst_cellmath__55_0_out0(inst_cellmath__55),
	.inst_cellmath__55_0_in0(inst_i_mul_int_mult_datapath_prodSum[47:23]),
	.inst_cellmath__55_0_in1(inst_cellmath__55__36),
	.inst_cellmath__55_0_in2(inst_cellmath__50)
	) ;

assign inst_cellmath__65 = {inst_cellmath__53,inst_cellmath__54,inst_cellmath__55};

assign x = inst_cellmath__65;
endmodule

module cynw_cm_float_mul_inst_cellmath__32__5__bdw1103716848_bdw (
	inst_cellmath__32__5__out0,
	inst_cellmath__32__5__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__32__5__out0;
input [7:0] inst_cellmath__32__5__in0;

assign inst_cellmath__32__5__out0 = (13'B0000011111110==(inst_cellmath__32__5__in0 - 13'B0000000000001));
endmodule

module cynw_cm_float_mul_inst_cellmath__32__6__bdw1103716848_bdw (
	inst_cellmath__32__6__out0,
	inst_cellmath__32__6__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__32__6__out0;
input [22:0] inst_cellmath__32__6__in0;

assign inst_cellmath__32__6__out0 = (27'B000000000000000000000000000==inst_cellmath__32__6__in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__34_0_bdw1103716848_bdw (
	inst_cellmath__34_0_out0,
	inst_cellmath__34_0_in0,
	inst_cellmath__34_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__34_0_out0;
input [0:0] inst_cellmath__34_0_in0,
	inst_cellmath__34_0_in1;

assign inst_cellmath__34_0_out0 = 
	(inst_cellmath__34_0_in1)
	&((~inst_cellmath__34_0_in0));
endmodule

module cynw_cm_float_mul_inst_cellmath__33__7__bdw1103716848_bdw (
	inst_cellmath__33__7__out0,
	inst_cellmath__33__7__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__33__7__out0;
input [7:0] inst_cellmath__33__7__in0;

assign inst_cellmath__33__7__out0 = (13'B0000011111110==(inst_cellmath__33__7__in0 - 13'B0000000000001));
endmodule

module cynw_cm_float_mul_inst_cellmath__33__8__bdw1103716848_bdw (
	inst_cellmath__33__8__out0,
	inst_cellmath__33__8__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__33__8__out0;
input [22:0] inst_cellmath__33__8__in0;

assign inst_cellmath__33__8__out0 = (27'B000000000000000000000000000==inst_cellmath__33__8__in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__35_0_bdw1103716848_bdw (
	inst_cellmath__35_0_out0,
	inst_cellmath__35_0_in0,
	inst_cellmath__35_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__35_0_out0;
input [0:0] inst_cellmath__35_0_in0,
	inst_cellmath__35_0_in1;

assign inst_cellmath__35_0_out0 = 
	(inst_cellmath__35_0_in1)
	&((~inst_cellmath__35_0_in0));
endmodule

module cynw_cm_float_mul_inst_cellmath__38_0_bdw1103716848_bdw (
	inst_cellmath__38_0_out0,
	inst_cellmath__38_0_in0,
	inst_cellmath__38_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__38_0_out0;
input  inst_cellmath__38_0_in0,
	inst_cellmath__38_0_in1;

assign inst_cellmath__38_0_out0 = 
	(inst_cellmath__38_0_in1)
	|(inst_cellmath__38_0_in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__32_0_bdw1103716848_bdw (
	inst_cellmath__32_0_out0,
	inst_cellmath__32_0_in0,
	inst_cellmath__32_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__32_0_out0;
input [0:0] inst_cellmath__32_0_in0,
	inst_cellmath__32_0_in1;

assign inst_cellmath__32_0_out0 = 
	(inst_cellmath__32_0_in1)
	&(inst_cellmath__32_0_in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__33_0_bdw1103716848_bdw (
	inst_cellmath__33_0_out0,
	inst_cellmath__33_0_in0,
	inst_cellmath__33_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__33_0_out0;
input [0:0] inst_cellmath__33_0_in0,
	inst_cellmath__33_0_in1;

assign inst_cellmath__33_0_out0 = 
	(inst_cellmath__33_0_in1)
	&(inst_cellmath__33_0_in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__37_0_bdw1103716848_bdw (
	inst_cellmath__37_0_out0,
	inst_cellmath__37_0_in0,
	inst_cellmath__37_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__37_0_out0;
input  inst_cellmath__37_0_in0,
	inst_cellmath__37_0_in1;

assign inst_cellmath__37_0_out0 = 
	(inst_cellmath__37_0_in1)
	|(inst_cellmath__37_0_in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__30_0_bdw1103716848_bdw (
	inst_cellmath__30_0_out0,
	inst_cellmath__30_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__30_0_out0;
input [7:0] inst_cellmath__30_0_in0;

assign inst_cellmath__30_0_out0 = (12'B000000000000==inst_cellmath__30_0_in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__31_0_bdw1103716848_bdw (
	inst_cellmath__31_0_out0,
	inst_cellmath__31_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__31_0_out0;
input [7:0] inst_cellmath__31_0_in0;

assign inst_cellmath__31_0_out0 = (12'B000000000000==inst_cellmath__31_0_in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__36_0_bdw1103716848_bdw (
	inst_cellmath__36_0_out0,
	inst_cellmath__36_0_in0,
	inst_cellmath__36_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__36_0_out0;
input  inst_cellmath__36_0_in0,
	inst_cellmath__36_0_in1;

assign inst_cellmath__36_0_out0 = 
	(inst_cellmath__36_0_in1)
	|(inst_cellmath__36_0_in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__50__15__bdw1103716848_bdw (
	inst_cellmath__50__15__out0,
	inst_cellmath__50__15__in0,
	inst_cellmath__50__15__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__50__15__out0;
input  inst_cellmath__50__15__in0,
	inst_cellmath__50__15__in1;

assign inst_cellmath__50__15__out0 = 
	(inst_cellmath__50__15__in0)
	&(inst_cellmath__50__15__in1);
endmodule

module cynw_cm_float_mul_inst_cellmath__50_1_bdw1103716848_bdw (
	inst_cellmath__50_1_out0,
	inst_cellmath__50_1_in0,
	inst_cellmath__50_1_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__50_1_out0;
input [0:0] inst_cellmath__50_1_in0;
input  inst_cellmath__50_1_in1;

assign inst_cellmath__50_1_out0 = 
	(inst_cellmath__50_1_in1)
	|(inst_cellmath__50_1_in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__52__21__bdw1103716848_bdw (
	inst_cellmath__52__21__out0,
	inst_cellmath__52__21__in0,
	inst_cellmath__52__21__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__52__21__out0;
input  inst_cellmath__52__21__in0,
	inst_cellmath__52__21__in1;

assign inst_cellmath__52__21__out0 = 
	(inst_cellmath__52__21__in0)
	&((~inst_cellmath__52__21__in1));
endmodule

module cynw_cm_float_mul_inst_i_mul_int_mult_datapath_prodSum_0_bdw1103716848_bdw (
	inst_i_mul_int_mult_datapath_prodSum_0_out0,
	inst_i_mul_int_mult_datapath_prodSum_0_in0,
	inst_i_mul_int_mult_datapath_prodSum_0_in1
	); /* architecture "behavioural" */ 
output [47:0] inst_i_mul_int_mult_datapath_prodSum_0_out0;
input [22:0] inst_i_mul_int_mult_datapath_prodSum_0_in0,
	inst_i_mul_int_mult_datapath_prodSum_0_in1;
wire [23:0] inst_cellmath__26,
	inst_cellmath__25;

assign inst_cellmath__26 = {1'B1,inst_i_mul_int_mult_datapath_prodSum_0_in0};

assign inst_cellmath__25 = {1'B1,inst_i_mul_int_mult_datapath_prodSum_0_in1};

wire [47:0] inst_i_mul_int_mult_datapath_prodSum_0_out0_tmp_0;
assign inst_i_mul_int_mult_datapath_prodSum_0_out0_tmp_0 = 
	+(inst_cellmath__25 * inst_cellmath__26);
assign inst_i_mul_int_mult_datapath_prodSum_0_out0 = inst_i_mul_int_mult_datapath_prodSum_0_out0_tmp_0
	+(48'B000000000000000000000000010000000000000000000000);
endmodule

module cynw_cm_float_mul_inst_cellmath__45_0_bdw1103716848_bdw (
	inst_cellmath__45_0_out0,
	inst_cellmath__45_0_in0,
	inst_cellmath__45_0_in1,
	inst_cellmath__45_0_in2
	); /* architecture "behavioural" */ 
output [9:0] inst_cellmath__45_0_out0;
input [47:47] inst_cellmath__45_0_in0;
input [7:0] inst_cellmath__45_0_in1,
	inst_cellmath__45_0_in2;

wire [9:0] inst_cellmath__45_0_out0_tmp_0;
wire [9:0] inst_cellmath__45_0_out0_tmp_1;
assign inst_cellmath__45_0_out0_tmp_1 = 
	+(inst_cellmath__45_0_in0)
	+(inst_cellmath__45_0_in1);
assign inst_cellmath__45_0_out0_tmp_0 = inst_cellmath__45_0_out0_tmp_1
	+(inst_cellmath__45_0_in2);
assign inst_cellmath__45_0_out0 = inst_cellmath__45_0_out0_tmp_0
	-(10'B0001111111);
endmodule

module cynw_cm_float_mul_inst_cellmath__49_0_bdw1103716848_bdw (
	inst_cellmath__49_0_out0,
	inst_cellmath__49_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__49_0_out0;
input [9:0] inst_cellmath__49_0_in0;

assign inst_cellmath__49_0_out0 = ((14'B10000000000000 ^ 14'B00000011111110)<(14'B10000000000000 ^ {{4{inst_cellmath__49_0_in0[9]}}, inst_cellmath__49_0_in0}));
endmodule

module cynw_cm_float_mul_inst_cellmath__52__20__bdw1103716848_bdw (
	inst_cellmath__52__20__out0,
	inst_cellmath__52__20__in0,
	inst_cellmath__52__20__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__52__20__out0;
input [0:0] inst_cellmath__52__20__in0;
input  inst_cellmath__52__20__in1;

assign inst_cellmath__52__20__out0 = 
	(inst_cellmath__52__20__in0)
	|(inst_cellmath__52__20__in1);
endmodule

module cynw_cm_float_mul_inst_cellmath__52_0_bdw1103716848_bdw (
	inst_cellmath__52_0_out0,
	inst_cellmath__52_0_in0,
	inst_cellmath__52_0_in1,
	inst_cellmath__52_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__52_0_out0;
input [0:0] inst_cellmath__52_0_in0,
	inst_cellmath__52_0_in1;
input  inst_cellmath__52_0_in2;

assign inst_cellmath__52_0_out0 = 
	((~inst_cellmath__52_0_in1))
	&(inst_cellmath__52_0_in0)
	&((~inst_cellmath__52_0_in2));
endmodule

module cynw_cm_float_mul_inst_cellmath__54__30__bdw1103716848_bdw (
	inst_cellmath__54__30__out0,
	inst_cellmath__54__30__in0,
	inst_cellmath__54__30__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__54__30__out0;
input  inst_cellmath__54__30__in0,
	inst_cellmath__54__30__in1;

assign inst_cellmath__54__30__out0 = 
	(inst_cellmath__54__30__in1)
	|(inst_cellmath__54__30__in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__51__17__bdw1103716848_bdw (
	inst_cellmath__51__17__out0,
	inst_cellmath__51__17__in0,
	inst_cellmath__51__17__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__51__17__out0;
input  inst_cellmath__51__17__in0,
	inst_cellmath__51__17__in1;

assign inst_cellmath__51__17__out0 = 
	(inst_cellmath__51__17__in1)
	&((~inst_cellmath__51__17__in0));
endmodule

module cynw_cm_float_mul_inst_cellmath__48_0_bdw1103716848_bdw (
	inst_cellmath__48_0_out0,
	inst_cellmath__48_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__48_0_out0;
input [9:0] inst_cellmath__48_0_in0;

assign inst_cellmath__48_0_out0 = ((14'B10000000000000 ^ {{4{inst_cellmath__48_0_in0[9]}}, inst_cellmath__48_0_in0})<=(14'B10000000000000 ^ 14'B00000000000000));
endmodule

module cynw_cm_float_mul_inst_cellmath__51__16__bdw1103716848_bdw (
	inst_cellmath__51__16__out0,
	inst_cellmath__51__16__in0,
	inst_cellmath__51__16__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__51__16__out0;
input [0:0] inst_cellmath__51__16__in0;
input  inst_cellmath__51__16__in1;

assign inst_cellmath__51__16__out0 = 
	(inst_cellmath__51__16__in0)
	|(inst_cellmath__51__16__in1);
endmodule

module cynw_cm_float_mul_inst_cellmath__51_0_bdw1103716848_bdw (
	inst_cellmath__51_0_out0,
	inst_cellmath__51_0_in0,
	inst_cellmath__51_0_in1,
	inst_cellmath__51_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__51_0_out0;
input [0:0] inst_cellmath__51_0_in0,
	inst_cellmath__51_0_in1;
input  inst_cellmath__51_0_in2;

assign inst_cellmath__51_0_out0 = 
	((~inst_cellmath__51_0_in1))
	&(inst_cellmath__51_0_in0)
	&((~inst_cellmath__51_0_in2));
endmodule

module cynw_cm_float_mul_inst_cellmath__39_0_bdw1103716848_bdw (
	inst_cellmath__39_0_out0,
	inst_cellmath__39_0_in0,
	inst_cellmath__39_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__39_0_out0;
input  inst_cellmath__39_0_in0,
	inst_cellmath__39_0_in1;

assign inst_cellmath__39_0_out0 = 
	(inst_cellmath__39_0_in1)
	^(inst_cellmath__39_0_in0);
endmodule

module cynw_cm_float_mul_inst_cellmath__53_0_bdw1103716848_bdw (
	inst_cellmath__53_0_out0,
	inst_cellmath__53_0_in0,
	inst_cellmath__53_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__53_0_out0;
input  inst_cellmath__53_0_in0,
	inst_cellmath__53_0_in1;

reg [0:0] inst_cellmath__53_0_out0_tmp_0;
assign inst_cellmath__53_0_out0 = inst_cellmath__53_0_out0_tmp_0;
always @ (inst_cellmath__53_0_in0 or inst_cellmath__53_0_in1) begin
	case (inst_cellmath__53_0_in0)
		1'B0 : inst_cellmath__53_0_out0_tmp_0 = inst_cellmath__53_0_in1 ;
		default : inst_cellmath__53_0_out0_tmp_0 = {1{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_mul_inst_cellmath__54_0_bdw1103716848_bdw (
	inst_cellmath__54_0_out0,
	inst_cellmath__54_0_in0,
	inst_cellmath__54_0_in1,
	inst_cellmath__54_0_in2
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__54_0_out0;
input [0:0] inst_cellmath__54_0_in0;
input  inst_cellmath__54_0_in1;
input [7:0] inst_cellmath__54_0_in2;
wire [1:0] inst_cellmath__54__30_0;

assign inst_cellmath__54__30_0 = {inst_cellmath__54_0_in0,inst_cellmath__54_0_in1};

reg [7:0] inst_cellmath__54_0_out0_tmp_0;
assign inst_cellmath__54_0_out0 = inst_cellmath__54_0_out0_tmp_0;
always @ (inst_cellmath__54__30_0 or inst_cellmath__54_0_in2) begin
	casez (inst_cellmath__54__30_0)
		2'B00 : inst_cellmath__54_0_out0_tmp_0 = inst_cellmath__54_0_in2 ;
		2'B1? : inst_cellmath__54_0_out0_tmp_0 = 8'B11111111 ;
		default : inst_cellmath__54_0_out0_tmp_0 = {8{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_mul_inst_cellmath__55__36__bdw1103716848_bdw (
	inst_cellmath__55__36__out0,
	inst_cellmath__55__36__in0,
	inst_cellmath__55__36__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__55__36__out0;
input  inst_cellmath__55__36__in0,
	inst_cellmath__55__36__in1;

assign inst_cellmath__55__36__out0 = 
	(inst_cellmath__55__36__in0)
	|(inst_cellmath__55__36__in1);
endmodule

module cynw_cm_float_mul_inst_cellmath__55_0_bdw1103716848_bdw (
	inst_cellmath__55_0_out0,
	inst_cellmath__55_0_in0,
	inst_cellmath__55_0_in1,
	inst_cellmath__55_0_in2
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__55_0_out0;
input [47:23] inst_cellmath__55_0_in0;
input [0:0] inst_cellmath__55_0_in1;
input  inst_cellmath__55_0_in2;
wire [2:0] inst_cellmath__50_0;

assign inst_cellmath__50_0 = {inst_cellmath__55_0_in2,inst_cellmath__55_0_in1,inst_cellmath__55_0_in0[47]};

reg [22:0] inst_cellmath__55_0_out0_tmp_0;
assign inst_cellmath__55_0_out0 = inst_cellmath__55_0_out0_tmp_0;
always @ (inst_cellmath__50_0 or inst_cellmath__55_0_in0[45:23] or inst_cellmath__55_0_in0[46:24]) begin
	casez (inst_cellmath__50_0)
		3'B000 : inst_cellmath__55_0_out0_tmp_0 = inst_cellmath__55_0_in0[45:23] ;
		3'B001 : inst_cellmath__55_0_out0_tmp_0 = inst_cellmath__55_0_in0[46:24] ;
		3'B1?? : inst_cellmath__55_0_out0_tmp_0 = 23'B11111111111111111111111 ;
		default : inst_cellmath__55_0_out0_tmp_0 = {23{1'b0}} ;
	endcase
end
endmodule

/* CADENCE  ubTxTgDfrQ== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




