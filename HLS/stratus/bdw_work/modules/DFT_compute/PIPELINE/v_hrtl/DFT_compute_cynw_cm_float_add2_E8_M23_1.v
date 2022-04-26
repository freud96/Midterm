/*****************************************************************************
    Verilog Hierarchical RTL Description
    
    Configured at: 11:22:37 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_cynw_cm_float_add2_E8_M23_1 (
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
wire  inst_cellmath__43,
	inst_cellmath__44,
	inst_cellmath__45,
	inst_cellmath__46,
	inst_cellmath__47,
	inst_cellmath__48;
wire [7:0] inst_cellmath__51,
	inst_cellmath__52;
wire [25:0] inst_cellmath__55,
	inst_cellmath__56;
wire [7:0] inst_cellmath__57,
	inst_cellmath__58,
	inst_cellmath__59;
wire [25:0] inst_cellmath__60,
	inst_cellmath__61;
wire [26:0] inst_cellmath__64,
	inst_cellmath__65,
	inst_cellmath__66;
wire  inst_cellmath__67;
wire [25:0] inst_cellmath__68;
wire [5:0] inst_cellmath__69;
wire [25:0] inst_cellmath__71;
wire  inst_cellmath__77,
	inst_cellmath__78,
	inst_cellmath__79,
	inst_cellmath__80,
	inst_cellmath__81;
wire [7:0] inst_cellmath__83;
wire  inst_cellmath__86,
	inst_cellmath__87,
	inst_cellmath__88;
wire [7:0] inst_cellmath__89;
wire [22:0] inst_cellmath__90;
wire [31:0] inst_cellmath__100;
wire [0:0] inst_cellmath__45__5,
	inst_cellmath__45__6,
	inst_cellmath__46__7,
	inst_cellmath__46__8;
wire [25:0] inst_cellmath__60__28,
	inst_cellmath__61__30;
wire [0:0] inst_cellmath__67__35,
	inst_cellmath__67__36;
wire [27:0] inst_cellmath__68__38;
wire [0:0] inst_cellmath__77__39,
	inst_cellmath__78__40,
	inst_cellmath__79__41,
	inst_cellmath__79__42,
	inst_cellmath__80__43,
	inst_cellmath__86__56,
	inst_cellmath__86__55,
	inst_cellmath__87__58,
	inst_cellmath__87__57;
wire [26:0] inst_cellmath__64__32_0,
	inst_cellmath__65__34_0;
wire [9:0] inst_cellmath__74_0;
wire [2:0] inst_cellmath__43_0,
	inst_cellmath__44_0,
	inst_cellmath__79_0,
	inst_cellmath__79_2;
wire [4:0] inst_cellmath__79_3;
cynw_cm_float_add2_inst_cellmath__46__7__bdw3670301540_bdw inst_cellmath__46__7__0(
	.inst_cellmath__46__7__out0(inst_cellmath__46__7),
	.inst_cellmath__46__7__in0(b_exp)
	) ;
cynw_cm_float_add2_inst_cellmath__46__8__bdw3670301540_bdw inst_cellmath__46__8__0(
	.inst_cellmath__46__8__out0(inst_cellmath__46__8),
	.inst_cellmath__46__8__in0(b_man)
	) ;
cynw_cm_float_add2_inst_cellmath__46_0_bdw3670301540_bdw inst_cellmath__46_0_0(
	.inst_cellmath__46_0_out0(inst_cellmath__46),
	.inst_cellmath__46_0_in0(inst_cellmath__46__8),
	.inst_cellmath__46_0_in1(inst_cellmath__46__7)
	) ;
cynw_cm_float_add2_inst_cellmath__45__5__bdw3670301540_bdw inst_cellmath__45__5__0(
	.inst_cellmath__45__5__out0(inst_cellmath__45__5),
	.inst_cellmath__45__5__in0(a_exp)
	) ;
cynw_cm_float_add2_inst_cellmath__45__6__bdw3670301540_bdw inst_cellmath__45__6__0(
	.inst_cellmath__45__6__out0(inst_cellmath__45__6),
	.inst_cellmath__45__6__in0(a_man)
	) ;
cynw_cm_float_add2_inst_cellmath__45_0_bdw3670301540_bdw inst_cellmath__45_0_0(
	.inst_cellmath__45_0_out0(inst_cellmath__45),
	.inst_cellmath__45_0_in0(inst_cellmath__45__6),
	.inst_cellmath__45_0_in1(inst_cellmath__45__5)
	) ;
cynw_cm_float_add2_inst_cellmath__79__42__bdw3670301540_bdw inst_cellmath__79__42__0(
	.inst_cellmath__79__42__out0(inst_cellmath__79__42),
	.inst_cellmath__79__42__in0(inst_cellmath__46),
	.inst_cellmath__79__42__in1(inst_cellmath__45),
	.inst_cellmath__79__42__in2(b_sign),
	.inst_cellmath__79__42__in3(a_sign)
	) ;
cynw_cm_float_add2_inst_cellmath__79__41__bdw3670301540_bdw inst_cellmath__79__41__0(
	.inst_cellmath__79__41__out0(inst_cellmath__79__41),
	.inst_cellmath__79__41__in0(inst_cellmath__46),
	.inst_cellmath__79__41__in1(inst_cellmath__45),
	.inst_cellmath__79__41__in2(b_sign),
	.inst_cellmath__79__41__in3(a_sign)
	) ;
cynw_cm_float_add2_inst_cellmath__47_0_bdw3670301540_bdw inst_cellmath__47_0_0(
	.inst_cellmath__47_0_out0(inst_cellmath__47),
	.inst_cellmath__47_0_in0(inst_cellmath__45__6),
	.inst_cellmath__47_0_in1(inst_cellmath__45__5)
	) ;
cynw_cm_float_add2_inst_cellmath__48_0_bdw3670301540_bdw inst_cellmath__48_0_0(
	.inst_cellmath__48_0_out0(inst_cellmath__48),
	.inst_cellmath__48_0_in0(inst_cellmath__46__8),
	.inst_cellmath__48_0_in1(inst_cellmath__46__7)
	) ;
cynw_cm_float_add2_inst_cellmath__79_1_bdw3670301540_bdw inst_cellmath__79_1_0(
	.inst_cellmath__79_1_out0(inst_cellmath__79),
	.inst_cellmath__79_1_in0(inst_cellmath__79__42),
	.inst_cellmath__79_1_in1(inst_cellmath__79__41),
	.inst_cellmath__79_1_in2(inst_cellmath__48),
	.inst_cellmath__79_1_in3(inst_cellmath__47)
	) ;
cynw_cm_float_add2_inst_cellmath__43_1_bdw3670301540_bdw inst_cellmath__43_1_0(
	.inst_cellmath__43_1_out0(inst_cellmath__43),
	.inst_cellmath__43_1_in0(a_exp)
	) ;

assign inst_cellmath__55 = {2'B01,a_man,1'B0};
cynw_cm_float_add2_inst_cellmath__44_1_bdw3670301540_bdw inst_cellmath__44_1_0(
	.inst_cellmath__44_1_out0(inst_cellmath__44),
	.inst_cellmath__44_1_in0(b_exp)
	) ;

assign inst_cellmath__44_0 = {inst_cellmath__44,inst_cellmath__46,inst_cellmath__48};
cynw_cm_float_add2_inst_cellmath__52_0_bdw3670301540_bdw inst_cellmath__52_0_0(
	.inst_cellmath__52_0_out0(inst_cellmath__52),
	.inst_cellmath__52_0_in0(inst_cellmath__48),
	.inst_cellmath__52_0_in1(inst_cellmath__46),
	.inst_cellmath__52_0_in2(inst_cellmath__44),
	.inst_cellmath__52_0_in3(b_exp)
	) ;

assign inst_cellmath__43_0 = {inst_cellmath__43,inst_cellmath__45,inst_cellmath__47};
cynw_cm_float_add2_inst_cellmath__51_0_bdw3670301540_bdw inst_cellmath__51_0_0(
	.inst_cellmath__51_0_out0(inst_cellmath__51),
	.inst_cellmath__51_0_in0(inst_cellmath__47),
	.inst_cellmath__51_0_in1(inst_cellmath__45),
	.inst_cellmath__51_0_in2(inst_cellmath__43),
	.inst_cellmath__51_0_in3(a_exp)
	) ;
cynw_cm_float_add2_inst_cellmath__57_0_bdw3670301540_bdw inst_cellmath__57_0_0(
	.inst_cellmath__57_0_out0(inst_cellmath__57),
	.inst_cellmath__57_0_in0(inst_cellmath__52),
	.inst_cellmath__57_0_in1(inst_cellmath__51)
	) ;
cynw_cm_float_add2_inst_cellmath__58_0_bdw3670301540_bdw inst_cellmath__58_0_0(
	.inst_cellmath__58_0_out0(inst_cellmath__58),
	.inst_cellmath__58_0_in0(inst_cellmath__57),
	.inst_cellmath__58_0_in1(inst_cellmath__51)
	) ;
cynw_cm_float_add2_inst_cellmath__60__28__bdw3670301540_bdw inst_cellmath__60__28__0(
	.inst_cellmath__60__28__out0(inst_cellmath__60__28),
	.inst_cellmath__60__28__in0(inst_cellmath__58),
	.inst_cellmath__60__28__in1(a_man)
	) ;
cynw_cm_float_add2_inst_cellmath__60_0_bdw3670301540_bdw inst_cellmath__60_0_0(
	.inst_cellmath__60_0_out0(inst_cellmath__60),
	.inst_cellmath__60_0_in0(inst_cellmath__60__28),
	.inst_cellmath__60_0_in1(inst_cellmath__43)
	) ;
cynw_cm_float_add2_inst_cellmath__64__32__bdw3670301540_bdw inst_cellmath__64__32__0(
	.inst_cellmath__64__32__out0(inst_cellmath__64__32_0),
	.inst_cellmath__64__32__in0(inst_cellmath__60)
	) ;
cynw_cm_float_add2_inst_cellmath__64_0_bdw3670301540_bdw inst_cellmath__64_0_0(
	.inst_cellmath__64_0_out0(inst_cellmath__64),
	.inst_cellmath__64_0_in0(inst_cellmath__64__32_0),
	.inst_cellmath__64_0_in1(inst_cellmath__60),
	.inst_cellmath__64_0_in2(a_sign)
	) ;

assign inst_cellmath__56 = {2'B01,b_man,1'B0};
cynw_cm_float_add2_inst_cellmath__59_0_bdw3670301540_bdw inst_cellmath__59_0_0(
	.inst_cellmath__59_0_out0(inst_cellmath__59),
	.inst_cellmath__59_0_in0(inst_cellmath__57),
	.inst_cellmath__59_0_in1(inst_cellmath__52)
	) ;
cynw_cm_float_add2_inst_cellmath__61__30__bdw3670301540_bdw inst_cellmath__61__30__0(
	.inst_cellmath__61__30__out0(inst_cellmath__61__30),
	.inst_cellmath__61__30__in0(inst_cellmath__59),
	.inst_cellmath__61__30__in1(b_man)
	) ;
cynw_cm_float_add2_inst_cellmath__61_0_bdw3670301540_bdw inst_cellmath__61_0_0(
	.inst_cellmath__61_0_out0(inst_cellmath__61),
	.inst_cellmath__61_0_in0(inst_cellmath__61__30),
	.inst_cellmath__61_0_in1(inst_cellmath__44)
	) ;
cynw_cm_float_add2_inst_cellmath__65__34__bdw3670301540_bdw inst_cellmath__65__34__0(
	.inst_cellmath__65__34__out0(inst_cellmath__65__34_0),
	.inst_cellmath__65__34__in0(inst_cellmath__61)
	) ;
cynw_cm_float_add2_inst_cellmath__65_0_bdw3670301540_bdw inst_cellmath__65_0_0(
	.inst_cellmath__65_0_out0(inst_cellmath__65),
	.inst_cellmath__65_0_in0(inst_cellmath__65__34_0),
	.inst_cellmath__65_0_in1(inst_cellmath__61),
	.inst_cellmath__65_0_in2(b_sign)
	) ;
cynw_cm_float_add2_inst_cellmath__66_0_bdw3670301540_bdw inst_cellmath__66_0_0(
	.inst_cellmath__66_0_out0(inst_cellmath__66),
	.inst_cellmath__66_0_in0(inst_cellmath__65),
	.inst_cellmath__66_0_in1(inst_cellmath__64)
	) ;
cynw_cm_float_add2_inst_cellmath__67__35__bdw3670301540_bdw inst_cellmath__67__35__0(
	.inst_cellmath__67__35__out0(inst_cellmath__67__35),
	.inst_cellmath__67__35__in0(inst_cellmath__66)
	) ;
cynw_cm_float_add2_inst_cellmath__67__36__bdw3670301540_bdw inst_cellmath__67__36__0(
	.inst_cellmath__67__36__out0(inst_cellmath__67__36),
	.inst_cellmath__67__36__in0(inst_cellmath__44),
	.inst_cellmath__67__36__in1(inst_cellmath__43),
	.inst_cellmath__67__36__in2(b_sign),
	.inst_cellmath__67__36__in3(a_sign)
	) ;
cynw_cm_float_add2_inst_cellmath__67_0_bdw3670301540_bdw inst_cellmath__67_0_0(
	.inst_cellmath__67_0_out0(inst_cellmath__67),
	.inst_cellmath__67_0_in0(inst_cellmath__67__36),
	.inst_cellmath__67_0_in1(inst_cellmath__67__35)
	) ;
cynw_cm_float_add2_inst_cellmath__88_0_bdw3670301540_bdw inst_cellmath__88_0_0(
	.inst_cellmath__88_0_out0(inst_cellmath__88),
	.inst_cellmath__88_0_in0(inst_cellmath__79),
	.inst_cellmath__88_0_in1(inst_cellmath__67)
	) ;
cynw_cm_float_add2_inst_cellmath__68__38__bdw3670301540_bdw inst_cellmath__68__38__0(
	.inst_cellmath__68__38__out0(inst_cellmath__68__38[25:0]),
	.inst_cellmath__68__38__in0(inst_cellmath__66[25:0])
	) ;
cynw_cm_float_add2_inst_cellmath__68_0_bdw3670301540_bdw inst_cellmath__68_0_0(
	.inst_cellmath__68_0_out0(inst_cellmath__68),
	.inst_cellmath__68_0_in0(inst_cellmath__68__38[25:0]),
	.inst_cellmath__68_0_in1(inst_cellmath__67),
	.inst_cellmath__68_0_in2(inst_cellmath__66[25:0])
	) ;
cynw_cm_float_add2_inst_cellmath__69_0_bdw3670301540_bdw inst_cellmath__69_0_0(
	.inst_cellmath__69_0_out0(inst_cellmath__69),
	.inst_cellmath__69_0_in0(inst_cellmath__68)
	) ;
cynw_cm_float_add2_inst_cellmath__74_bdw3670301540_bdw inst_cellmath__74_1(
	.inst_cellmath__74_out0(inst_cellmath__74_0),
	.inst_cellmath__74_in0(inst_cellmath__69[4:0]),
	.inst_cellmath__74_in1(inst_cellmath__57)
	) ;
cynw_cm_float_add2_inst_cellmath__77__39__bdw3670301540_bdw inst_cellmath__77__39__0(
	.inst_cellmath__77__39__out0(inst_cellmath__77__39),
	.inst_cellmath__77__39__in0(inst_cellmath__74_0)
	) ;
cynw_cm_float_add2_inst_cellmath__77_0_bdw3670301540_bdw inst_cellmath__77_0_0(
	.inst_cellmath__77_0_out0(inst_cellmath__77),
	.inst_cellmath__77_0_in0(inst_cellmath__77__39),
	.inst_cellmath__77_0_in1(inst_cellmath__69[5])
	) ;
cynw_cm_float_add2_inst_cellmath__80__43__bdw3670301540_bdw inst_cellmath__80__43__0(
	.inst_cellmath__80__43__out0(inst_cellmath__80__43),
	.inst_cellmath__80__43__in0(inst_cellmath__77),
	.inst_cellmath__80__43__in1(inst_cellmath__46),
	.inst_cellmath__80__43__in2(inst_cellmath__45)
	) ;
cynw_cm_float_add2_inst_cellmath__80_0_bdw3670301540_bdw inst_cellmath__80_0_0(
	.inst_cellmath__80_0_out0(inst_cellmath__80),
	.inst_cellmath__80_0_in0(inst_cellmath__80__43),
	.inst_cellmath__80_0_in1(inst_cellmath__79)
	) ;
cynw_cm_float_add2_inst_cellmath__78__40__bdw3670301540_bdw inst_cellmath__78__40__0(
	.inst_cellmath__78__40__out0(inst_cellmath__78__40),
	.inst_cellmath__78__40__in0(inst_cellmath__74_0)
	) ;
cynw_cm_float_add2_inst_cellmath__78_0_bdw3670301540_bdw inst_cellmath__78_0_0(
	.inst_cellmath__78_0_out0(inst_cellmath__78),
	.inst_cellmath__78_0_in0(inst_cellmath__78__40),
	.inst_cellmath__78_0_in1(inst_cellmath__69[5])
	) ;
cynw_cm_float_add2_inst_cellmath__81_0_bdw3670301540_bdw inst_cellmath__81_0_0(
	.inst_cellmath__81_0_out0(inst_cellmath__81),
	.inst_cellmath__81_0_in0(inst_cellmath__80),
	.inst_cellmath__81_0_in1(inst_cellmath__79),
	.inst_cellmath__81_0_in2(inst_cellmath__78)
	) ;

assign inst_cellmath__79_0 = {inst_cellmath__79,inst_cellmath__80,inst_cellmath__81};
cynw_cm_float_add2_inst_cellmath__83_0_bdw3670301540_bdw inst_cellmath__83_0_0(
	.inst_cellmath__83_0_out0(inst_cellmath__83),
	.inst_cellmath__83_0_in0(inst_cellmath__81),
	.inst_cellmath__83_0_in1(inst_cellmath__80),
	.inst_cellmath__83_0_in2(inst_cellmath__79),
	.inst_cellmath__83_0_in3(inst_cellmath__74_0[7:0])
	) ;
cynw_cm_float_add2_inst_cellmath__86__56__bdw3670301540_bdw inst_cellmath__86__56__0(
	.inst_cellmath__86__56__out0(inst_cellmath__86__56),
	.inst_cellmath__86__56__in0(inst_cellmath__83)
	) ;
cynw_cm_float_add2_inst_cellmath__86__55__bdw3670301540_bdw inst_cellmath__86__55__0(
	.inst_cellmath__86__55__out0(inst_cellmath__86__55),
	.inst_cellmath__86__55__in0(inst_cellmath__86__56),
	.inst_cellmath__86__55__in1(inst_cellmath__80)
	) ;
cynw_cm_float_add2_inst_cellmath__86_0_bdw3670301540_bdw inst_cellmath__86_0_0(
	.inst_cellmath__86_0_out0(inst_cellmath__86),
	.inst_cellmath__86_0_in0(inst_cellmath__86__55),
	.inst_cellmath__86_0_in1(inst_cellmath__81),
	.inst_cellmath__86_0_in2(inst_cellmath__79)
	) ;
cynw_cm_float_add2_inst_cellmath__87__58__bdw3670301540_bdw inst_cellmath__87__58__0(
	.inst_cellmath__87__58__out0(inst_cellmath__87__58),
	.inst_cellmath__87__58__in0(inst_cellmath__83)
	) ;
cynw_cm_float_add2_inst_cellmath__87__57__bdw3670301540_bdw inst_cellmath__87__57__0(
	.inst_cellmath__87__57__out0(inst_cellmath__87__57),
	.inst_cellmath__87__57__in0(inst_cellmath__87__58),
	.inst_cellmath__87__57__in1(inst_cellmath__81)
	) ;
cynw_cm_float_add2_inst_cellmath__87_0_bdw3670301540_bdw inst_cellmath__87_0_0(
	.inst_cellmath__87_0_out0(inst_cellmath__87),
	.inst_cellmath__87_0_in0(inst_cellmath__87__57),
	.inst_cellmath__87_0_in1(inst_cellmath__80),
	.inst_cellmath__87_0_in2(inst_cellmath__79)
	) ;

assign inst_cellmath__79_2 = {inst_cellmath__79,inst_cellmath__86,inst_cellmath__87};
cynw_cm_float_add2_inst_cellmath__89_0_bdw3670301540_bdw inst_cellmath__89_0_0(
	.inst_cellmath__89_0_out0(inst_cellmath__89),
	.inst_cellmath__89_0_in0(inst_cellmath__87),
	.inst_cellmath__89_0_in1(inst_cellmath__86),
	.inst_cellmath__89_0_in2(inst_cellmath__83),
	.inst_cellmath__89_0_in3(inst_cellmath__79)
	) ;

assign inst_cellmath__79_3 = {inst_cellmath__79,inst_cellmath__86,inst_cellmath__87,inst_cellmath__80,inst_cellmath__81};
cynw_cm_float_add2_inst_cellmath__71_0_bdw3670301540_bdw inst_cellmath__71_0_0(
	.inst_cellmath__71_0_out0(inst_cellmath__71[24:0]),
	.inst_cellmath__71_0_in0(inst_cellmath__69[4:0]),
	.inst_cellmath__71_0_in1(inst_cellmath__68)
	) ;
cynw_cm_float_add2_inst_cellmath__90_0_bdw3670301540_bdw inst_cellmath__90_0_0(
	.inst_cellmath__90_0_out0(inst_cellmath__90),
	.inst_cellmath__90_0_in0(inst_cellmath__87),
	.inst_cellmath__90_0_in1(inst_cellmath__86),
	.inst_cellmath__90_0_in2(inst_cellmath__81),
	.inst_cellmath__90_0_in3(inst_cellmath__80),
	.inst_cellmath__90_0_in4(inst_cellmath__79),
	.inst_cellmath__90_0_in5(inst_cellmath__71[24:2])
	) ;

assign inst_cellmath__100 = {inst_cellmath__88,inst_cellmath__89,inst_cellmath__90};

assign x = inst_cellmath__100;
endmodule

module cynw_cm_float_add2_inst_cellmath__46__7__bdw3670301540_bdw (
	inst_cellmath__46__7__out0,
	inst_cellmath__46__7__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__46__7__out0;
input [7:0] inst_cellmath__46__7__in0;

assign inst_cellmath__46__7__out0 = (13'B0000011111110==(inst_cellmath__46__7__in0 - 13'B0000000000001));
endmodule

module cynw_cm_float_add2_inst_cellmath__46__8__bdw3670301540_bdw (
	inst_cellmath__46__8__out0,
	inst_cellmath__46__8__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__46__8__out0;
input [22:0] inst_cellmath__46__8__in0;

assign inst_cellmath__46__8__out0 = (27'B000000000000000000000000000==inst_cellmath__46__8__in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__46_0_bdw3670301540_bdw (
	inst_cellmath__46_0_out0,
	inst_cellmath__46_0_in0,
	inst_cellmath__46_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__46_0_out0;
input [0:0] inst_cellmath__46_0_in0,
	inst_cellmath__46_0_in1;

assign inst_cellmath__46_0_out0 = 
	(inst_cellmath__46_0_in1)
	&(inst_cellmath__46_0_in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__45__5__bdw3670301540_bdw (
	inst_cellmath__45__5__out0,
	inst_cellmath__45__5__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__45__5__out0;
input [7:0] inst_cellmath__45__5__in0;

assign inst_cellmath__45__5__out0 = (13'B0000011111110==(inst_cellmath__45__5__in0 - 13'B0000000000001));
endmodule

module cynw_cm_float_add2_inst_cellmath__45__6__bdw3670301540_bdw (
	inst_cellmath__45__6__out0,
	inst_cellmath__45__6__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__45__6__out0;
input [22:0] inst_cellmath__45__6__in0;

assign inst_cellmath__45__6__out0 = (27'B000000000000000000000000000==inst_cellmath__45__6__in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__45_0_bdw3670301540_bdw (
	inst_cellmath__45_0_out0,
	inst_cellmath__45_0_in0,
	inst_cellmath__45_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__45_0_out0;
input [0:0] inst_cellmath__45_0_in0,
	inst_cellmath__45_0_in1;

assign inst_cellmath__45_0_out0 = 
	(inst_cellmath__45_0_in1)
	&(inst_cellmath__45_0_in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__79__42__bdw3670301540_bdw (
	inst_cellmath__79__42__out0,
	inst_cellmath__79__42__in0,
	inst_cellmath__79__42__in1,
	inst_cellmath__79__42__in2,
	inst_cellmath__79__42__in3
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__79__42__out0;
input  inst_cellmath__79__42__in0,
	inst_cellmath__79__42__in1,
	inst_cellmath__79__42__in2,
	inst_cellmath__79__42__in3;

assign inst_cellmath__79__42__out0 = 
	(inst_cellmath__79__42__in0)
	&((~inst_cellmath__79__42__in2))
	&(inst_cellmath__79__42__in3)
	&(inst_cellmath__79__42__in1);
endmodule

module cynw_cm_float_add2_inst_cellmath__79__41__bdw3670301540_bdw (
	inst_cellmath__79__41__out0,
	inst_cellmath__79__41__in0,
	inst_cellmath__79__41__in1,
	inst_cellmath__79__41__in2,
	inst_cellmath__79__41__in3
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__79__41__out0;
input  inst_cellmath__79__41__in0,
	inst_cellmath__79__41__in1,
	inst_cellmath__79__41__in2,
	inst_cellmath__79__41__in3;

assign inst_cellmath__79__41__out0 = 
	(inst_cellmath__79__41__in0)
	&(inst_cellmath__79__41__in2)
	&((~inst_cellmath__79__41__in3))
	&(inst_cellmath__79__41__in1);
endmodule

module cynw_cm_float_add2_inst_cellmath__47_0_bdw3670301540_bdw (
	inst_cellmath__47_0_out0,
	inst_cellmath__47_0_in0,
	inst_cellmath__47_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__47_0_out0;
input [0:0] inst_cellmath__47_0_in0,
	inst_cellmath__47_0_in1;

assign inst_cellmath__47_0_out0 = 
	(inst_cellmath__47_0_in1)
	&((~inst_cellmath__47_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__48_0_bdw3670301540_bdw (
	inst_cellmath__48_0_out0,
	inst_cellmath__48_0_in0,
	inst_cellmath__48_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__48_0_out0;
input [0:0] inst_cellmath__48_0_in0,
	inst_cellmath__48_0_in1;

assign inst_cellmath__48_0_out0 = 
	(inst_cellmath__48_0_in1)
	&((~inst_cellmath__48_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__79_1_bdw3670301540_bdw (
	inst_cellmath__79_1_out0,
	inst_cellmath__79_1_in0,
	inst_cellmath__79_1_in1,
	inst_cellmath__79_1_in2,
	inst_cellmath__79_1_in3
	); /* architecture "behavioural" */ 
output  inst_cellmath__79_1_out0;
input [0:0] inst_cellmath__79_1_in0,
	inst_cellmath__79_1_in1;
input  inst_cellmath__79_1_in2,
	inst_cellmath__79_1_in3;

assign inst_cellmath__79_1_out0 = 
	(inst_cellmath__79_1_in0)
	|(inst_cellmath__79_1_in1)
	|(inst_cellmath__79_1_in3)
	|(inst_cellmath__79_1_in2);
endmodule

module cynw_cm_float_add2_inst_cellmath__43_1_bdw3670301540_bdw (
	inst_cellmath__43_1_out0,
	inst_cellmath__43_1_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__43_1_out0;
input [7:0] inst_cellmath__43_1_in0;

assign inst_cellmath__43_1_out0 = (12'B000000000000==inst_cellmath__43_1_in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__44_1_bdw3670301540_bdw (
	inst_cellmath__44_1_out0,
	inst_cellmath__44_1_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__44_1_out0;
input [7:0] inst_cellmath__44_1_in0;

assign inst_cellmath__44_1_out0 = (12'B000000000000==inst_cellmath__44_1_in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__52_0_bdw3670301540_bdw (
	inst_cellmath__52_0_out0,
	inst_cellmath__52_0_in0,
	inst_cellmath__52_0_in1,
	inst_cellmath__52_0_in2,
	inst_cellmath__52_0_in3
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__52_0_out0;
input  inst_cellmath__52_0_in0,
	inst_cellmath__52_0_in1,
	inst_cellmath__52_0_in2;
input [7:0] inst_cellmath__52_0_in3;
wire [2:0] inst_cellmath__44_0;

assign inst_cellmath__44_0 = {inst_cellmath__52_0_in2,inst_cellmath__52_0_in1,inst_cellmath__52_0_in0};

reg [7:0] inst_cellmath__52_0_out0_tmp_0;
assign inst_cellmath__52_0_out0 = inst_cellmath__52_0_out0_tmp_0;
always @ (inst_cellmath__44_0 or inst_cellmath__52_0_in3) begin
	casez (inst_cellmath__44_0)
		3'B000 : inst_cellmath__52_0_out0_tmp_0 = inst_cellmath__52_0_in3 ;
		3'B001 : inst_cellmath__52_0_out0_tmp_0 = 8'B11111111 ;
		3'B01? : inst_cellmath__52_0_out0_tmp_0 = 8'B11111111 ;
		default : inst_cellmath__52_0_out0_tmp_0 = {8{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__51_0_bdw3670301540_bdw (
	inst_cellmath__51_0_out0,
	inst_cellmath__51_0_in0,
	inst_cellmath__51_0_in1,
	inst_cellmath__51_0_in2,
	inst_cellmath__51_0_in3
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__51_0_out0;
input  inst_cellmath__51_0_in0,
	inst_cellmath__51_0_in1,
	inst_cellmath__51_0_in2;
input [7:0] inst_cellmath__51_0_in3;
wire [2:0] inst_cellmath__43_0;

assign inst_cellmath__43_0 = {inst_cellmath__51_0_in2,inst_cellmath__51_0_in1,inst_cellmath__51_0_in0};

reg [7:0] inst_cellmath__51_0_out0_tmp_0;
assign inst_cellmath__51_0_out0 = inst_cellmath__51_0_out0_tmp_0;
always @ (inst_cellmath__43_0 or inst_cellmath__51_0_in3) begin
	casez (inst_cellmath__43_0)
		3'B000 : inst_cellmath__51_0_out0_tmp_0 = inst_cellmath__51_0_in3 ;
		3'B001 : inst_cellmath__51_0_out0_tmp_0 = 8'B11111111 ;
		3'B01? : inst_cellmath__51_0_out0_tmp_0 = 8'B11111111 ;
		default : inst_cellmath__51_0_out0_tmp_0 = {8{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__57_0_bdw3670301540_bdw (
	inst_cellmath__57_0_out0,
	inst_cellmath__57_0_in0,
	inst_cellmath__57_0_in1
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__57_0_out0;
input [7:0] inst_cellmath__57_0_in0,
	inst_cellmath__57_0_in1;

wire [8:0] inst_cellmath__57_0_out0_tmp_0;
assign inst_cellmath__57_0_out0_tmp_0 = inst_cellmath__57_0_in0;
wire [8:0] inst_cellmath__57_0_out0_tmp_1;
assign inst_cellmath__57_0_out0_tmp_1 = (((inst_cellmath__57_0_in1) ^ (9'B1<<8)) > (inst_cellmath__57_0_out0_tmp_0 ^ (9'B1<<8))) ? inst_cellmath__57_0_in1  : inst_cellmath__57_0_out0_tmp_0;
assign inst_cellmath__57_0_out0 = inst_cellmath__57_0_out0_tmp_1;
endmodule

module cynw_cm_float_add2_inst_cellmath__58_0_bdw3670301540_bdw (
	inst_cellmath__58_0_out0,
	inst_cellmath__58_0_in0,
	inst_cellmath__58_0_in1
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__58_0_out0;
input [7:0] inst_cellmath__58_0_in0,
	inst_cellmath__58_0_in1;

assign inst_cellmath__58_0_out0 = 
	+(inst_cellmath__58_0_in0)
	-(inst_cellmath__58_0_in1);
endmodule

module cynw_cm_float_add2_inst_cellmath__60__28__bdw3670301540_bdw (
	inst_cellmath__60__28__out0,
	inst_cellmath__60__28__in0,
	inst_cellmath__60__28__in1
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__60__28__out0;
input [7:0] inst_cellmath__60__28__in0;
input [22:0] inst_cellmath__60__28__in1;
wire [25:0] inst_cellmath__55;

assign inst_cellmath__55 = {2'B01,inst_cellmath__60__28__in1,1'B0};

assign inst_cellmath__60__28__out0 = inst_cellmath__55 >> {|inst_cellmath__60__28__in0[7:5], inst_cellmath__60__28__in0[4:0]};
endmodule

module cynw_cm_float_add2_inst_cellmath__60_0_bdw3670301540_bdw (
	inst_cellmath__60_0_out0,
	inst_cellmath__60_0_in0,
	inst_cellmath__60_0_in1
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__60_0_out0;
input [25:0] inst_cellmath__60_0_in0;
input  inst_cellmath__60_0_in1;

reg [25:0] inst_cellmath__60_0_out0_tmp_0;
assign inst_cellmath__60_0_out0 = inst_cellmath__60_0_out0_tmp_0;
always @ (inst_cellmath__60_0_in1 or inst_cellmath__60_0_in0) begin
	case (inst_cellmath__60_0_in1)
		1'B0 : inst_cellmath__60_0_out0_tmp_0 = inst_cellmath__60_0_in0 ;
		default : inst_cellmath__60_0_out0_tmp_0 = {26{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__64__32__bdw3670301540_bdw (
	inst_cellmath__64__32__out0,
	inst_cellmath__64__32__in0
	); /* architecture "behavioural" */ 
output [26:0] inst_cellmath__64__32__out0;
input [25:0] inst_cellmath__64__32__in0;

assign inst_cellmath__64__32__out0 = 
	-(inst_cellmath__64__32__in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__64_0_bdw3670301540_bdw (
	inst_cellmath__64_0_out0,
	inst_cellmath__64_0_in0,
	inst_cellmath__64_0_in1,
	inst_cellmath__64_0_in2
	); /* architecture "behavioural" */ 
output [26:0] inst_cellmath__64_0_out0;
input [26:0] inst_cellmath__64_0_in0;
input [25:0] inst_cellmath__64_0_in1;
input  inst_cellmath__64_0_in2;

reg [26:0] inst_cellmath__64_0_out0_tmp_0;
assign inst_cellmath__64_0_out0 = inst_cellmath__64_0_out0_tmp_0;
always @ (inst_cellmath__64_0_in2 or inst_cellmath__64_0_in1 or inst_cellmath__64_0_in0) begin
	case (inst_cellmath__64_0_in2)
		1'B0 : inst_cellmath__64_0_out0_tmp_0 = inst_cellmath__64_0_in1 ;
		default : inst_cellmath__64_0_out0_tmp_0 = inst_cellmath__64_0_in0 ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__59_0_bdw3670301540_bdw (
	inst_cellmath__59_0_out0,
	inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__59_0_out0;
input [7:0] inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1;

assign inst_cellmath__59_0_out0 = 
	+(inst_cellmath__59_0_in0)
	-(inst_cellmath__59_0_in1);
endmodule

module cynw_cm_float_add2_inst_cellmath__61__30__bdw3670301540_bdw (
	inst_cellmath__61__30__out0,
	inst_cellmath__61__30__in0,
	inst_cellmath__61__30__in1
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__61__30__out0;
input [7:0] inst_cellmath__61__30__in0;
input [22:0] inst_cellmath__61__30__in1;
wire [25:0] inst_cellmath__56;

assign inst_cellmath__56 = {2'B01,inst_cellmath__61__30__in1,1'B0};

assign inst_cellmath__61__30__out0 = inst_cellmath__56 >> {|inst_cellmath__61__30__in0[7:5], inst_cellmath__61__30__in0[4:0]};
endmodule

module cynw_cm_float_add2_inst_cellmath__61_0_bdw3670301540_bdw (
	inst_cellmath__61_0_out0,
	inst_cellmath__61_0_in0,
	inst_cellmath__61_0_in1
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__61_0_out0;
input [25:0] inst_cellmath__61_0_in0;
input  inst_cellmath__61_0_in1;

reg [25:0] inst_cellmath__61_0_out0_tmp_0;
assign inst_cellmath__61_0_out0 = inst_cellmath__61_0_out0_tmp_0;
always @ (inst_cellmath__61_0_in1 or inst_cellmath__61_0_in0) begin
	case (inst_cellmath__61_0_in1)
		1'B0 : inst_cellmath__61_0_out0_tmp_0 = inst_cellmath__61_0_in0 ;
		default : inst_cellmath__61_0_out0_tmp_0 = {26{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__65__34__bdw3670301540_bdw (
	inst_cellmath__65__34__out0,
	inst_cellmath__65__34__in0
	); /* architecture "behavioural" */ 
output [26:0] inst_cellmath__65__34__out0;
input [25:0] inst_cellmath__65__34__in0;

assign inst_cellmath__65__34__out0 = 
	-(inst_cellmath__65__34__in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__65_0_bdw3670301540_bdw (
	inst_cellmath__65_0_out0,
	inst_cellmath__65_0_in0,
	inst_cellmath__65_0_in1,
	inst_cellmath__65_0_in2
	); /* architecture "behavioural" */ 
output [26:0] inst_cellmath__65_0_out0;
input [26:0] inst_cellmath__65_0_in0;
input [25:0] inst_cellmath__65_0_in1;
input  inst_cellmath__65_0_in2;

reg [26:0] inst_cellmath__65_0_out0_tmp_0;
assign inst_cellmath__65_0_out0 = inst_cellmath__65_0_out0_tmp_0;
always @ (inst_cellmath__65_0_in2 or inst_cellmath__65_0_in1 or inst_cellmath__65_0_in0) begin
	case (inst_cellmath__65_0_in2)
		1'B0 : inst_cellmath__65_0_out0_tmp_0 = inst_cellmath__65_0_in1 ;
		default : inst_cellmath__65_0_out0_tmp_0 = inst_cellmath__65_0_in0 ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__66_0_bdw3670301540_bdw (
	inst_cellmath__66_0_out0,
	inst_cellmath__66_0_in0,
	inst_cellmath__66_0_in1
	); /* architecture "behavioural" */ 
output [26:0] inst_cellmath__66_0_out0;
input [26:0] inst_cellmath__66_0_in0,
	inst_cellmath__66_0_in1;

assign inst_cellmath__66_0_out0 = 
	+(inst_cellmath__66_0_in1)
	+(inst_cellmath__66_0_in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__67__35__bdw3670301540_bdw (
	inst_cellmath__67__35__out0,
	inst_cellmath__67__35__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__67__35__out0;
input [26:0] inst_cellmath__67__35__in0;

assign inst_cellmath__67__35__out0 = ((31'B1000000000000000000000000000000 ^ 31'B0000000000000000000000000000000)>(31'B1000000000000000000000000000000 ^ {{4{inst_cellmath__67__35__in0[26]}}, inst_cellmath__67__35__in0}));
endmodule

module cynw_cm_float_add2_inst_cellmath__67__36__bdw3670301540_bdw (
	inst_cellmath__67__36__out0,
	inst_cellmath__67__36__in0,
	inst_cellmath__67__36__in1,
	inst_cellmath__67__36__in2,
	inst_cellmath__67__36__in3
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__67__36__out0;
input  inst_cellmath__67__36__in0,
	inst_cellmath__67__36__in1,
	inst_cellmath__67__36__in2,
	inst_cellmath__67__36__in3;

assign inst_cellmath__67__36__out0 = 
	(inst_cellmath__67__36__in2)
	&(inst_cellmath__67__36__in0)
	&(inst_cellmath__67__36__in1)
	&(inst_cellmath__67__36__in3);
endmodule

module cynw_cm_float_add2_inst_cellmath__67_0_bdw3670301540_bdw (
	inst_cellmath__67_0_out0,
	inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__67_0_out0;
input [0:0] inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1;

assign inst_cellmath__67_0_out0 = 
	(inst_cellmath__67_0_in1)
	|(inst_cellmath__67_0_in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__88_0_bdw3670301540_bdw (
	inst_cellmath__88_0_out0,
	inst_cellmath__88_0_in0,
	inst_cellmath__88_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__88_0_out0;
input  inst_cellmath__88_0_in0,
	inst_cellmath__88_0_in1;

reg [0:0] inst_cellmath__88_0_out0_tmp_0;
assign inst_cellmath__88_0_out0 = inst_cellmath__88_0_out0_tmp_0;
always @ (inst_cellmath__88_0_in0 or inst_cellmath__88_0_in1) begin
	case (inst_cellmath__88_0_in0)
		1'B0 : inst_cellmath__88_0_out0_tmp_0 = inst_cellmath__88_0_in1 ;
		default : inst_cellmath__88_0_out0_tmp_0 = {1{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__68__38__bdw3670301540_bdw (
	inst_cellmath__68__38__out0,
	inst_cellmath__68__38__in0
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__68__38__out0;
input [25:0] inst_cellmath__68__38__in0;

assign inst_cellmath__68__38__out0 = 
	-(inst_cellmath__68__38__in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__68_0_bdw3670301540_bdw (
	inst_cellmath__68_0_out0,
	inst_cellmath__68_0_in0,
	inst_cellmath__68_0_in1,
	inst_cellmath__68_0_in2
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__68_0_out0;
input [25:0] inst_cellmath__68_0_in0;
input  inst_cellmath__68_0_in1;
input [25:0] inst_cellmath__68_0_in2;

reg [25:0] inst_cellmath__68_0_out0_tmp_0;
assign inst_cellmath__68_0_out0 = inst_cellmath__68_0_out0_tmp_0;
always @ (inst_cellmath__68_0_in1 or inst_cellmath__68_0_in2 or inst_cellmath__68_0_in0) begin
	case (inst_cellmath__68_0_in1)
		1'B0 : inst_cellmath__68_0_out0_tmp_0 = inst_cellmath__68_0_in2 ;
		default : inst_cellmath__68_0_out0_tmp_0 = inst_cellmath__68_0_in0 ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__69_0_bdw3670301540_bdw (
	inst_cellmath__69_0_out0,
	inst_cellmath__69_0_in0
	); /* architecture "behavioural" */ 
output [5:0] inst_cellmath__69_0_out0;
input [25:0] inst_cellmath__69_0_in0;

reg [5:0] inst_cellmath__69_0_out0_tmp_0;
assign inst_cellmath__69_0_out0 = inst_cellmath__69_0_out0_tmp_0;
always @ (inst_cellmath__69_0_in0) begin
	casez (inst_cellmath__69_0_in0)
		26'B1????????????????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B000000 ;
		26'B01???????????????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B000001 ;
		26'B001??????????????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B000010 ;
		26'B0001?????????????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B000011 ;
		26'B00001????????????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B000100 ;
		26'B000001???????????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B000101 ;
		26'B0000001??????????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B000110 ;
		26'B00000001?????????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B000111 ;
		26'B000000001????????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B001000 ;
		26'B0000000001???????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B001001 ;
		26'B00000000001??????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B001010 ;
		26'B000000000001?????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B001011 ;
		26'B0000000000001????????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B001100 ;
		26'B00000000000001???????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B001101 ;
		26'B000000000000001??????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B001110 ;
		26'B0000000000000001?????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B001111 ;
		26'B00000000000000001????????? : inst_cellmath__69_0_out0_tmp_0 = 6'B010000 ;
		26'B000000000000000001???????? : inst_cellmath__69_0_out0_tmp_0 = 6'B010001 ;
		26'B0000000000000000001??????? : inst_cellmath__69_0_out0_tmp_0 = 6'B010010 ;
		26'B00000000000000000001?????? : inst_cellmath__69_0_out0_tmp_0 = 6'B010011 ;
		26'B000000000000000000001????? : inst_cellmath__69_0_out0_tmp_0 = 6'B010100 ;
		26'B0000000000000000000001???? : inst_cellmath__69_0_out0_tmp_0 = 6'B010101 ;
		26'B00000000000000000000001??? : inst_cellmath__69_0_out0_tmp_0 = 6'B010110 ;
		26'B000000000000000000000001?? : inst_cellmath__69_0_out0_tmp_0 = 6'B010111 ;
		26'B0000000000000000000000001? : inst_cellmath__69_0_out0_tmp_0 = 6'B011000 ;
		26'B00000000000000000000000001 : inst_cellmath__69_0_out0_tmp_0 = 6'B011001 ;
		default : inst_cellmath__69_0_out0_tmp_0 = 6'B100000 ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__74_bdw3670301540_bdw (
	inst_cellmath__74_out0,
	inst_cellmath__74_in0,
	inst_cellmath__74_in1
	); /* architecture "behavioural" */ 
output [9:0] inst_cellmath__74_out0;
input [4:0] inst_cellmath__74_in0;
input [7:0] inst_cellmath__74_in1;

wire [9:0] inst_cellmath__74_out0_tmp_0;
assign inst_cellmath__74_out0_tmp_0 = 
	-(inst_cellmath__74_in0)
	+(inst_cellmath__74_in1);
assign inst_cellmath__74_out0 = inst_cellmath__74_out0_tmp_0
	+(10'B0000000001);
endmodule

module cynw_cm_float_add2_inst_cellmath__77__39__bdw3670301540_bdw (
	inst_cellmath__77__39__out0,
	inst_cellmath__77__39__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__77__39__out0;
input [9:0] inst_cellmath__77__39__in0;

assign inst_cellmath__77__39__out0 = ((14'B10000000000000 ^ 14'B00000011111110)<(14'B10000000000000 ^ {{4{inst_cellmath__77__39__in0[9]}}, inst_cellmath__77__39__in0}));
endmodule

module cynw_cm_float_add2_inst_cellmath__77_0_bdw3670301540_bdw (
	inst_cellmath__77_0_out0,
	inst_cellmath__77_0_in0,
	inst_cellmath__77_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__77_0_out0;
input [0:0] inst_cellmath__77_0_in0;
input [5:5] inst_cellmath__77_0_in1;

assign inst_cellmath__77_0_out0 = 
	((~inst_cellmath__77_0_in1))
	&(inst_cellmath__77_0_in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__80__43__bdw3670301540_bdw (
	inst_cellmath__80__43__out0,
	inst_cellmath__80__43__in0,
	inst_cellmath__80__43__in1,
	inst_cellmath__80__43__in2
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__80__43__out0;
input  inst_cellmath__80__43__in0,
	inst_cellmath__80__43__in1,
	inst_cellmath__80__43__in2;

assign inst_cellmath__80__43__out0 = 
	(inst_cellmath__80__43__in0)
	|(inst_cellmath__80__43__in2)
	|(inst_cellmath__80__43__in1);
endmodule

module cynw_cm_float_add2_inst_cellmath__80_0_bdw3670301540_bdw (
	inst_cellmath__80_0_out0,
	inst_cellmath__80_0_in0,
	inst_cellmath__80_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__80_0_out0;
input [0:0] inst_cellmath__80_0_in0;
input  inst_cellmath__80_0_in1;

assign inst_cellmath__80_0_out0 = 
	(inst_cellmath__80_0_in0)
	&((~inst_cellmath__80_0_in1));
endmodule

module cynw_cm_float_add2_inst_cellmath__78__40__bdw3670301540_bdw (
	inst_cellmath__78__40__out0,
	inst_cellmath__78__40__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__78__40__out0;
input [9:0] inst_cellmath__78__40__in0;

assign inst_cellmath__78__40__out0 = ((14'B10000000000000 ^ {{4{inst_cellmath__78__40__in0[9]}}, inst_cellmath__78__40__in0})<=(14'B10000000000000 ^ 14'B00000000000000));
endmodule

module cynw_cm_float_add2_inst_cellmath__78_0_bdw3670301540_bdw (
	inst_cellmath__78_0_out0,
	inst_cellmath__78_0_in0,
	inst_cellmath__78_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__78_0_out0;
input [0:0] inst_cellmath__78_0_in0;
input [5:5] inst_cellmath__78_0_in1;

assign inst_cellmath__78_0_out0 = 
	(inst_cellmath__78_0_in1)
	|(inst_cellmath__78_0_in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__81_0_bdw3670301540_bdw (
	inst_cellmath__81_0_out0,
	inst_cellmath__81_0_in0,
	inst_cellmath__81_0_in1,
	inst_cellmath__81_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__81_0_out0;
input  inst_cellmath__81_0_in0,
	inst_cellmath__81_0_in1,
	inst_cellmath__81_0_in2;

assign inst_cellmath__81_0_out0 = 
	((~inst_cellmath__81_0_in0))
	&(inst_cellmath__81_0_in2)
	&((~inst_cellmath__81_0_in1));
endmodule

module cynw_cm_float_add2_inst_cellmath__83_0_bdw3670301540_bdw (
	inst_cellmath__83_0_out0,
	inst_cellmath__83_0_in0,
	inst_cellmath__83_0_in1,
	inst_cellmath__83_0_in2,
	inst_cellmath__83_0_in3
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__83_0_out0;
input  inst_cellmath__83_0_in0,
	inst_cellmath__83_0_in1,
	inst_cellmath__83_0_in2;
input [7:0] inst_cellmath__83_0_in3;
wire [2:0] inst_cellmath__79_0;

assign inst_cellmath__79_0 = {inst_cellmath__83_0_in2,inst_cellmath__83_0_in1,inst_cellmath__83_0_in0};

reg [7:0] inst_cellmath__83_0_out0_tmp_0;
assign inst_cellmath__83_0_out0 = inst_cellmath__83_0_out0_tmp_0;
always @ (inst_cellmath__79_0 or inst_cellmath__83_0_in3) begin
	casez (inst_cellmath__79_0)
		3'B000 : inst_cellmath__83_0_out0_tmp_0 = inst_cellmath__83_0_in3 ;
		3'B01? : inst_cellmath__83_0_out0_tmp_0 = 8'B11111111 ;
		3'B1?? : inst_cellmath__83_0_out0_tmp_0 = 8'B11111111 ;
		default : inst_cellmath__83_0_out0_tmp_0 = {8{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__86__56__bdw3670301540_bdw (
	inst_cellmath__86__56__out0,
	inst_cellmath__86__56__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__86__56__out0;
input [7:0] inst_cellmath__86__56__in0;

assign inst_cellmath__86__56__out0 = ((15'B100000000000000 ^ inst_cellmath__86__56__in0)>=(15'B100000000000000 ^ 15'B000000011111111));
endmodule

module cynw_cm_float_add2_inst_cellmath__86__55__bdw3670301540_bdw (
	inst_cellmath__86__55__out0,
	inst_cellmath__86__55__in0,
	inst_cellmath__86__55__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__86__55__out0;
input [0:0] inst_cellmath__86__55__in0;
input  inst_cellmath__86__55__in1;

assign inst_cellmath__86__55__out0 = 
	(inst_cellmath__86__55__in1)
	|(inst_cellmath__86__55__in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__86_0_bdw3670301540_bdw (
	inst_cellmath__86_0_out0,
	inst_cellmath__86_0_in0,
	inst_cellmath__86_0_in1,
	inst_cellmath__86_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__86_0_out0;
input [0:0] inst_cellmath__86_0_in0;
input  inst_cellmath__86_0_in1,
	inst_cellmath__86_0_in2;

assign inst_cellmath__86_0_out0 = 
	(inst_cellmath__86_0_in0)
	&((~inst_cellmath__86_0_in2))
	&((~inst_cellmath__86_0_in1));
endmodule

module cynw_cm_float_add2_inst_cellmath__87__58__bdw3670301540_bdw (
	inst_cellmath__87__58__out0,
	inst_cellmath__87__58__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__87__58__out0;
input [7:0] inst_cellmath__87__58__in0;

assign inst_cellmath__87__58__out0 = ((12'B100000000000 ^ inst_cellmath__87__58__in0)<=(12'B100000000000 ^ 12'B000000000000));
endmodule

module cynw_cm_float_add2_inst_cellmath__87__57__bdw3670301540_bdw (
	inst_cellmath__87__57__out0,
	inst_cellmath__87__57__in0,
	inst_cellmath__87__57__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__87__57__out0;
input [0:0] inst_cellmath__87__57__in0;
input  inst_cellmath__87__57__in1;

assign inst_cellmath__87__57__out0 = 
	(inst_cellmath__87__57__in1)
	|(inst_cellmath__87__57__in0);
endmodule

module cynw_cm_float_add2_inst_cellmath__87_0_bdw3670301540_bdw (
	inst_cellmath__87_0_out0,
	inst_cellmath__87_0_in0,
	inst_cellmath__87_0_in1,
	inst_cellmath__87_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__87_0_out0;
input [0:0] inst_cellmath__87_0_in0;
input  inst_cellmath__87_0_in1,
	inst_cellmath__87_0_in2;

assign inst_cellmath__87_0_out0 = 
	(inst_cellmath__87_0_in0)
	&((~inst_cellmath__87_0_in2))
	&((~inst_cellmath__87_0_in1));
endmodule

module cynw_cm_float_add2_inst_cellmath__89_0_bdw3670301540_bdw (
	inst_cellmath__89_0_out0,
	inst_cellmath__89_0_in0,
	inst_cellmath__89_0_in1,
	inst_cellmath__89_0_in2,
	inst_cellmath__89_0_in3
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__89_0_out0;
input  inst_cellmath__89_0_in0,
	inst_cellmath__89_0_in1;
input [7:0] inst_cellmath__89_0_in2;
input  inst_cellmath__89_0_in3;
wire [2:0] inst_cellmath__79_2;

assign inst_cellmath__79_2 = {inst_cellmath__89_0_in3,inst_cellmath__89_0_in1,inst_cellmath__89_0_in0};

reg [7:0] inst_cellmath__89_0_out0_tmp_0;
assign inst_cellmath__89_0_out0 = inst_cellmath__89_0_out0_tmp_0;
always @ (inst_cellmath__79_2 or inst_cellmath__89_0_in2) begin
	casez (inst_cellmath__79_2)
		3'B000 : inst_cellmath__89_0_out0_tmp_0 = inst_cellmath__89_0_in2 ;
		3'B01? : inst_cellmath__89_0_out0_tmp_0 = 8'B11111111 ;
		3'B1?? : inst_cellmath__89_0_out0_tmp_0 = 8'B11111111 ;
		default : inst_cellmath__89_0_out0_tmp_0 = {8{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_add2_inst_cellmath__71_0_bdw3670301540_bdw (
	inst_cellmath__71_0_out0,
	inst_cellmath__71_0_in0,
	inst_cellmath__71_0_in1
	); /* architecture "behavioural" */ 
output [24:0] inst_cellmath__71_0_out0;
input [4:0] inst_cellmath__71_0_in0;
input [25:0] inst_cellmath__71_0_in1;

assign inst_cellmath__71_0_out0 = inst_cellmath__71_0_in1[24:0] << inst_cellmath__71_0_in0;
endmodule

module cynw_cm_float_add2_inst_cellmath__90_0_bdw3670301540_bdw (
	inst_cellmath__90_0_out0,
	inst_cellmath__90_0_in0,
	inst_cellmath__90_0_in1,
	inst_cellmath__90_0_in2,
	inst_cellmath__90_0_in3,
	inst_cellmath__90_0_in4,
	inst_cellmath__90_0_in5
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__90_0_out0;
input  inst_cellmath__90_0_in0,
	inst_cellmath__90_0_in1,
	inst_cellmath__90_0_in2,
	inst_cellmath__90_0_in3,
	inst_cellmath__90_0_in4;
input [24:2] inst_cellmath__90_0_in5;
wire [4:0] inst_cellmath__79_3;

assign inst_cellmath__79_3 = {inst_cellmath__90_0_in4,inst_cellmath__90_0_in1,inst_cellmath__90_0_in0,inst_cellmath__90_0_in3,inst_cellmath__90_0_in2};

reg [22:0] inst_cellmath__90_0_out0_tmp_0;
assign inst_cellmath__90_0_out0 = inst_cellmath__90_0_out0_tmp_0;
always @ (inst_cellmath__79_3 or inst_cellmath__90_0_in5) begin
	casez (inst_cellmath__79_3)
		5'B00000 : inst_cellmath__90_0_out0_tmp_0 = inst_cellmath__90_0_in5 ;
		5'B1???? : inst_cellmath__90_0_out0_tmp_0 = 23'B11111111111111111111111 ;
		default : inst_cellmath__90_0_out0_tmp_0 = {23{1'b0}} ;
	endcase
end
endmodule

/* CADENCE  v7fwSQrYog== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




