module DFT_compute_cynw_cm_float_sin_E8_M23_4( a_sign, a_exp, a_man, x, aclk, astall );
input a_sign;
input [7:0] a_exp;
input [22:0] a_man;
output [36:0] x;
wire[36:0] x_wire;
input aclk;
input astall;
DFT_compute_cynw_cm_float_sin_E8_M23_2_bdw1955802540_bdw DFT_compute_cynw_cm_float_sin_E8_M23_2_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .x(x_wire));
reg [36:0] x_reg_0;
/* $A : movable_reg */
always @(posedge aclk) begin
    if ( !astall) x_reg_0 <= x_wire;
end
/* $A : movable_reg = reset */
reg [36:0] x_reg_1;
/* $A : movable_reg */
always @(posedge aclk) begin
    if ( !astall) x_reg_1 <= x_reg_0;
end
/* $A : movable_reg = reset */
assign x = x_reg_1;
endmodule
/*****************************************************************************
    Verilog Hierarchical RTL Description
    
    Configured at: 11:23:19 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_cynw_cm_float_sin_E8_M23_2_bdw1955802540_bdw (
	a_sign,
	a_exp,
	a_man,
	x
	); /* architecture "behavioural" */ 
input  a_sign;
input [7:0] a_exp;
input [22:0] a_man;
output [36:0] x;
wire  inst_cellmath__17,
	inst_cellmath__19,
	inst_cellmath__24;
wire [8:0] inst_cellmath__42;
wire [22:0] inst_cellmath__61;
wire  inst_cellmath__66,
	inst_cellmath__67,
	inst_cellmath__68,
	inst_cellmath__69,
	inst_cellmath__82;
wire [0:0] inst_cellmath__115__W1;
wire [29:0] inst_cellmath__195;
wire [20:0] inst_cellmath__197;
wire [32:0] inst_cellmath__198;
wire [49:0] inst_cellmath__200,
	inst_cellmath__201;
wire [30:0] inst_cellmath__210;
wire [4:0] inst_cellmath__215;
wire  inst_cellmath__219,
	inst_cellmath__223;
wire [7:0] inst_cellmath__228;
wire [22:0] inst_cellmath__231;
wire [31:0] inst_cellmath__237;
wire [0:0] inst_cellmath__79__46;
wire [20:0] inst_cellmath__197__131;
wire [31:0] inst_cellmath__211__183;
wire [5:0] inst_cellmath__211__182;
wire [0:0] inst_cellmath__216__184;
wire [53:0] inst_cellmath__220__188;
wire [6:0] inst_cellmath__221__195;
wire [0:0] inst_cellmath__223__207,
	inst_cellmath__223__208,
	inst_cellmath__223__199,
	inst_cellmath__224__212,
	inst_cellmath__228__231;
wire [55:0] inst_blk01_cellmath__39_56_0_;
wire [1:0] inst_cellmath__216_0;
wire [30:0] inst_cellmath__220_22_0_,
	inst_cellmath__220_22_0__0,
	inst_cellmath__220_22_0__1;
wire [29:0] inst_cellmath__48_32_0_;
wire [1:0] inst_cellmath__231__242_0_0_0;
wire [72:0] inst_cellmath__195__80_0_0;
wire [23:0] inst_blk01_cellmath__39__12_10_0,
	inst_blk01_cellmath__39__12_10_1,
	inst_blk01_cellmath__39__12_10_2,
	inst_blk01_cellmath__39__12_10_3,
	inst_blk01_cellmath__39__12_10_4,
	inst_blk01_cellmath__39__12_10_5,
	inst_blk01_cellmath__39__12_10_6,
	inst_blk01_cellmath__39__12_10_7,
	inst_blk01_cellmath__39__12_10_8,
	inst_blk01_cellmath__39__12_10_9,
	inst_blk01_cellmath__39__12_10_10;
wire [16:0] inst_cellmath__113_0_0,
	inst_cellmath__113_0_1;
wire [1:0] inst_cellmath__116__W1_0_0_1_0,
	inst_cellmath__116__W1_0_0_1_1;

assign x[32] = 1'B0;

assign inst_blk01_cellmath__39__12_10_0 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_1 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_2 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_3 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_4 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_5 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_6 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_7 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_8 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_9 = {1'B1,a_man};

assign inst_blk01_cellmath__39__12_10_10 = {1'B1,a_man};
cynw_cm_float_sin_inst_blk01_cellmath__39_bdw1955802540_bdw inst_blk01_cellmath__39_0(
	.inst_blk01_cellmath__39_out0(inst_blk01_cellmath__39_56_0_),
	.inst_blk01_cellmath__39_in0(a_man)
	) ;
cynw_cm_float_sin_inst_cellmath__42_0_bdw1955802540_bdw inst_cellmath__42_0_0(
	.inst_cellmath__42_0_out0(inst_cellmath__42[5:0]),
	.inst_cellmath__42_0_in0(a_exp[5:0])
	) ;
cynw_cm_float_sin_inst_cellmath__48_bdw1955802540_bdw inst_cellmath__48_0(
	.inst_cellmath__48_out0(inst_cellmath__48_32_0_[24:0]),
	.inst_cellmath__48_in0(inst_cellmath__42[5:0]),
	.inst_cellmath__48_in1(inst_blk01_cellmath__39_56_0_[55:26])
	) ;
cynw_cm_float_sin_inst_cellmath__61_0_bdw1955802540_bdw inst_cellmath__61_0_0(
	.inst_cellmath__61_0_out0(inst_cellmath__61),
	.inst_cellmath__61_0_in0(inst_cellmath__48_32_0_[23:0])
	) ;

assign inst_cellmath__115__W1 = ~inst_cellmath__61[16];

assign inst_cellmath__116__W1_0_0_1_0 = {inst_cellmath__115__W1,inst_cellmath__61[15]};

assign inst_cellmath__116__W1_0_0_1_1 = {inst_cellmath__115__W1,inst_cellmath__61[15]};

assign inst_cellmath__113_0_0 = {inst_cellmath__116__W1_0_0_1_1,inst_cellmath__61[14:0]};

assign inst_cellmath__113_0_1 = {inst_cellmath__116__W1_0_0_1_0,inst_cellmath__61[14:0]};
cynw_cm_float_sin_inst_cellmath__195__80__2WWMM_2WWMM_bdw1955802540_bdw inst_cellmath__195__80__2WWMM_2WWMM_0(
	.inst_cellmath__195__80__2WWMM_2WWMM_out0(inst_cellmath__195__80_0_0),
	.inst_cellmath__195__80__2WWMM_2WWMM_in0(inst_cellmath__61[22:17])
	) ;

assign inst_cellmath__195[29:4] = inst_cellmath__195__80_0_0[72:47];

assign inst_cellmath__195[3:0] = inst_cellmath__195__80_0_0[46:43];

assign inst_cellmath__197__131[20] = 1'B1;

assign inst_cellmath__197[2:0] = inst_cellmath__195__80_0_0[25:23];

assign inst_cellmath__197__131[19:0] = inst_cellmath__195__80_0_0[42:23];

assign inst_cellmath__197[20:18] = inst_cellmath__197__131[20:18];

assign inst_cellmath__197[17:3] = inst_cellmath__195__80_0_0[40:26];
cynw_cm_float_sin_inst_cellmath__198_0_bdw1955802540_bdw inst_cellmath__198_0_0(
	.inst_cellmath__198_0_out0(inst_cellmath__198),
	.inst_cellmath__198_0_in0(inst_cellmath__61[15:0]),
	.inst_cellmath__198_0_in1(inst_cellmath__115__W1)
	) ;
cynw_cm_float_sin_inst_cellmath__201_0_bdw1955802540_bdw inst_cellmath__201_0_0(
	.inst_cellmath__201_0_out0(inst_cellmath__201),
	.inst_cellmath__201_0_in0(inst_cellmath__61[15:0]),
	.inst_cellmath__201_0_in1(inst_cellmath__198[32:17]),
	.inst_cellmath__201_0_in2(inst_cellmath__195__80_0_0[72:23]),
	.inst_cellmath__201_0_in3(inst_cellmath__195__80_0_0[21:0]),
	.inst_cellmath__201_0_in4(inst_cellmath__115__W1)
	) ;
cynw_cm_float_sin_inst_cellmath__200_0_bdw1955802540_bdw inst_cellmath__200_0_0(
	.inst_cellmath__200_0_out0(inst_cellmath__200[48:0]),
	.inst_cellmath__200_0_in0(inst_cellmath__201)
	) ;

assign inst_cellmath__210 = {{8{1'B0}}, inst_cellmath__200[47:25]};
cynw_cm_float_sin_inst_cellmath__19_0_bdw1955802540_bdw inst_cellmath__19_0_0(
	.inst_cellmath__19_0_out0(inst_cellmath__19),
	.inst_cellmath__19_0_in0(a_exp)
	) ;
cynw_cm_float_sin_inst_cellmath__24_0_bdw1955802540_bdw inst_cellmath__24_0_0(
	.inst_cellmath__24_0_out0(inst_cellmath__24),
	.inst_cellmath__24_0_in0(a_man)
	) ;
cynw_cm_float_sin_inst_cellmath__66_0_bdw1955802540_bdw inst_cellmath__66_0_0(
	.inst_cellmath__66_0_out0(inst_cellmath__66),
	.inst_cellmath__66_0_in0(inst_cellmath__24),
	.inst_cellmath__66_0_in1(inst_cellmath__19),
	.inst_cellmath__66_0_in2(a_sign)
	) ;
cynw_cm_float_sin_inst_cellmath__67_0_bdw1955802540_bdw inst_cellmath__67_0_0(
	.inst_cellmath__67_0_out0(inst_cellmath__67),
	.inst_cellmath__67_0_in0(inst_cellmath__24),
	.inst_cellmath__67_0_in1(inst_cellmath__19),
	.inst_cellmath__67_0_in2(a_sign)
	) ;
cynw_cm_float_sin_inst_cellmath__68_0_bdw1955802540_bdw inst_cellmath__68_0_0(
	.inst_cellmath__68_0_out0(inst_cellmath__68),
	.inst_cellmath__68_0_in0(inst_cellmath__67),
	.inst_cellmath__68_0_in1(inst_cellmath__66)
	) ;
cynw_cm_float_sin_inst_cellmath__69_0_bdw1955802540_bdw inst_cellmath__69_0_0(
	.inst_cellmath__69_0_out0(inst_cellmath__69),
	.inst_cellmath__69_0_in0(inst_cellmath__24),
	.inst_cellmath__69_0_in1(inst_cellmath__19)
	) ;
cynw_cm_float_sin_inst_cellmath__82_0_bdw1955802540_bdw inst_cellmath__82_0_0(
	.inst_cellmath__82_0_out0(inst_cellmath__82),
	.inst_cellmath__82_0_in0(inst_cellmath__69),
	.inst_cellmath__82_0_in1(inst_cellmath__19)
	) ;
cynw_cm_float_sin_inst_cellmath__17_0_bdw1955802540_bdw inst_cellmath__17_0_0(
	.inst_cellmath__17_0_out0(inst_cellmath__17),
	.inst_cellmath__17_0_in0(a_exp)
	) ;
cynw_cm_float_sin_inst_cellmath__79__46__bdw1955802540_bdw inst_cellmath__79__46__0(
	.inst_cellmath__79__46__out0(inst_cellmath__79__46),
	.inst_cellmath__79__46__in0(inst_cellmath__68),
	.inst_cellmath__79__46__in1(inst_cellmath__17)
	) ;
cynw_cm_float_sin_inst_cellmath__228__231__bdw1955802540_bdw inst_cellmath__228__231__0(
	.inst_cellmath__228__231__out0(inst_cellmath__228__231),
	.inst_cellmath__228__231__in0(inst_cellmath__82),
	.inst_cellmath__228__231__in1(inst_cellmath__79__46),
	.inst_cellmath__228__231__in2(inst_cellmath__68)
	) ;

assign inst_cellmath__231__242_0_0_0 = {inst_cellmath__228__231,inst_cellmath__200[46]};
cynw_cm_float_sin_inst_cellmath__216__184__bdw1955802540_bdw inst_cellmath__216__184__0(
	.inst_cellmath__216__184__out0(inst_cellmath__216__184),
	.inst_cellmath__216__184__in0(a_exp)
	) ;
cynw_cm_float_sin_inst_cellmath__219_0_bdw1955802540_bdw inst_cellmath__219_0_0(
	.inst_cellmath__219_0_out0(inst_cellmath__219),
	.inst_cellmath__219_0_in0(inst_cellmath__61[22]),
	.inst_cellmath__219_0_in1(inst_cellmath__200[48])
	) ;

assign inst_cellmath__216_0 = {inst_cellmath__216__184,inst_cellmath__219};

assign inst_cellmath__211__183 = {inst_cellmath__210,1'B1};
cynw_cm_float_sin_inst_cellmath__211__182__bdw1955802540_bdw inst_cellmath__211__182__0(
	.inst_cellmath__211__182__out0(inst_cellmath__211__182[4:0]),
	.inst_cellmath__211__182__in0(inst_cellmath__200[47:25])
	) ;
cynw_cm_float_sin_inst_cellmath__215_0_bdw1955802540_bdw inst_cellmath__215_0_0(
	.inst_cellmath__215_0_out0(inst_cellmath__215),
	.inst_cellmath__215_0_in0(inst_cellmath__211__182[4:0])
	) ;
cynw_cm_float_sin_inst_cellmath__220__188__bdw1955802540_bdw inst_cellmath__220__188__0(
	.inst_cellmath__220__188__out0(inst_cellmath__220__188[22:0]),
	.inst_cellmath__220__188__in0(inst_cellmath__215),
	.inst_cellmath__220__188__in1(inst_cellmath__200[47:25])
	) ;
cynw_cm_float_sin_inst_cellmath__221__195__bdw1955802540_bdw inst_cellmath__221__195__0(
	.inst_cellmath__221__195__out0(inst_cellmath__221__195),
	.inst_cellmath__221__195__in0(inst_cellmath__215)
	) ;

assign inst_cellmath__220_22_0__0 = {inst_cellmath__220__188[22:0],1'B0,inst_cellmath__221__195};

assign inst_cellmath__220_22_0__1 = {a_man,a_exp};
cynw_cm_float_sin_inst_cellmath__220_2WWMM_bdw1955802540_bdw inst_cellmath__220_2WWMM_0(
	.inst_cellmath__220_2WWMM_out0(inst_cellmath__220_22_0_),
	.inst_cellmath__220_2WWMM_in0(inst_cellmath__221__195),
	.inst_cellmath__220_2WWMM_in1(inst_cellmath__220__188[22:0]),
	.inst_cellmath__220_2WWMM_in2(inst_cellmath__219),
	.inst_cellmath__220_2WWMM_in3(inst_cellmath__216__184),
	.inst_cellmath__220_2WWMM_in4(a_man),
	.inst_cellmath__220_2WWMM_in5(a_exp)
	) ;
cynw_cm_float_sin_inst_cellmath__223__208__bdw1955802540_bdw inst_cellmath__223__208__0(
	.inst_cellmath__223__208__out0(inst_cellmath__223__208),
	.inst_cellmath__223__208__in0(inst_cellmath__220_22_0_[29:0])
	) ;
cynw_cm_float_sin_inst_cellmath__223__207__bdw1955802540_bdw inst_cellmath__223__207__0(
	.inst_cellmath__223__207__out0(inst_cellmath__223__207),
	.inst_cellmath__223__207__in0(inst_cellmath__48_32_0_[24]),
	.inst_cellmath__223__207__in1(a_sign)
	) ;
cynw_cm_float_sin_inst_cellmath__223__199__bdw1955802540_bdw inst_cellmath__223__199__0(
	.inst_cellmath__223__199__out0(inst_cellmath__223__199),
	.inst_cellmath__223__199__in0(inst_cellmath__82),
	.inst_cellmath__223__199__in1(inst_cellmath__79__46),
	.inst_cellmath__223__199__in2(inst_cellmath__223__208),
	.inst_cellmath__223__199__in3(inst_cellmath__223__207)
	) ;
cynw_cm_float_sin_inst_cellmath__223_0_bdw1955802540_bdw inst_cellmath__223_0_0(
	.inst_cellmath__223_0_out0(inst_cellmath__223),
	.inst_cellmath__223_0_in0(inst_cellmath__223__199),
	.inst_cellmath__223_0_in1(inst_cellmath__216__184),
	.inst_cellmath__223_0_in2(a_sign)
	) ;
cynw_cm_float_sin_inst_cellmath__224__212__bdw1955802540_bdw inst_cellmath__224__212__0(
	.inst_cellmath__224__212__out0(inst_cellmath__224__212),
	.inst_cellmath__224__212__in0(inst_cellmath__82),
	.inst_cellmath__224__212__in1(inst_cellmath__79__46)
	) ;
cynw_cm_float_sin_inst_cellmath__228_0_bdw1955802540_bdw inst_cellmath__228_0_0(
	.inst_cellmath__228_0_out0(inst_cellmath__228),
	.inst_cellmath__228_0_in0(inst_cellmath__228__231),
	.inst_cellmath__228_0_in1(inst_cellmath__224__212),
	.inst_cellmath__228_0_in2(inst_cellmath__220_22_0_[7:0])
	) ;
cynw_cm_float_sin_inst_cellmath__231_0_bdw1955802540_bdw inst_cellmath__231_0_0(
	.inst_cellmath__231_0_out0(inst_cellmath__231),
	.inst_cellmath__231_0_in0(inst_cellmath__82),
	.inst_cellmath__231_0_in1(inst_cellmath__228__231),
	.inst_cellmath__231_0_in2(inst_cellmath__220_22_0_[30:8]),
	.inst_cellmath__231_0_in3(inst_cellmath__200[46])
	) ;

assign inst_cellmath__237 = {inst_cellmath__223,inst_cellmath__228,inst_cellmath__231};

assign x[31:0] = inst_cellmath__237;

assign x[36:33] = 4'B0000;
endmodule

module cynw_cm_float_sin_inst_blk01_cellmath__39_bdw1955802540_bdw (
	inst_blk01_cellmath__39_out0,
	inst_blk01_cellmath__39_in0
	); /* architecture "behavioural" */ 
output [55:0] inst_blk01_cellmath__39_out0;
input [22:0] inst_blk01_cellmath__39_in0;
wire [23:0] inst_blk01_cellmath__39__12_10_9,
	inst_blk01_cellmath__39__12_10_8,
	inst_blk01_cellmath__39__12_10_7,
	inst_blk01_cellmath__39__12_10_6,
	inst_blk01_cellmath__39__12_10_5,
	inst_blk01_cellmath__39__12_10_4,
	inst_blk01_cellmath__39__12_10_3,
	inst_blk01_cellmath__39__12_10_2,
	inst_blk01_cellmath__39__12_10_1,
	inst_blk01_cellmath__39__12_10_0,
	inst_blk01_cellmath__39__12_10_10;

assign inst_blk01_cellmath__39__12_10_9 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_8 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_7 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_6 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_5 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_4 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_3 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_2 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_1 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_0 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39__12_10_10 = {1'B1,inst_blk01_cellmath__39_in0};

assign inst_blk01_cellmath__39_out0 = 
	-((inst_blk01_cellmath__39__12_10_9<<1))
	-((inst_blk01_cellmath__39__12_10_8<<4))
	-((inst_blk01_cellmath__39__12_10_7<<7))
	+((inst_blk01_cellmath__39__12_10_6<<10))
	-((inst_blk01_cellmath__39__12_10_5<<15))
	+((inst_blk01_cellmath__39__12_10_4<<17))
	-((inst_blk01_cellmath__39__12_10_3<<19))
	-((inst_blk01_cellmath__39__12_10_2<<24))
	+((inst_blk01_cellmath__39__12_10_1<<26))
	+((inst_blk01_cellmath__39__12_10_0<<29))
	+((inst_blk01_cellmath__39__12_10_10<<31));
endmodule

module cynw_cm_float_sin_inst_cellmath__42_0_bdw1955802540_bdw (
	inst_cellmath__42_0_out0,
	inst_cellmath__42_0_in0
	); /* architecture "behavioural" */ 
output [5:0] inst_cellmath__42_0_out0;
input [5:0] inst_cellmath__42_0_in0;

assign inst_cellmath__42_0_out0 = 
	-(inst_cellmath__42_0_in0)
	+(6'B000101);
endmodule

module cynw_cm_float_sin_inst_cellmath__48_bdw1955802540_bdw (
	inst_cellmath__48_out0,
	inst_cellmath__48_in0,
	inst_cellmath__48_in1
	); /* architecture "behavioural" */ 
output [24:0] inst_cellmath__48_out0;
input [5:0] inst_cellmath__48_in0;
input [55:26] inst_cellmath__48_in1;

assign inst_cellmath__48_out0 = inst_cellmath__48_in1 >> inst_cellmath__48_in0;
endmodule

module cynw_cm_float_sin_inst_cellmath__61_0_bdw1955802540_bdw (
	inst_cellmath__61_0_out0,
	inst_cellmath__61_0_in0
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__61_0_out0;
input [23:0] inst_cellmath__61_0_in0;

reg [22:0] inst_cellmath__61_0_out0_tmp_0;
assign inst_cellmath__61_0_out0 = inst_cellmath__61_0_out0_tmp_0;
always @ (inst_cellmath__61_0_in0[23] or inst_cellmath__61_0_in0[22:0]) begin
	case (inst_cellmath__61_0_in0[23])
		1'B0 : inst_cellmath__61_0_out0_tmp_0 = inst_cellmath__61_0_in0[22:0] ;
		default : inst_cellmath__61_0_out0_tmp_0 = ~inst_cellmath__61_0_in0[22:0] ;
	endcase
end
endmodule

module cynw_cm_float_sin_inst_cellmath__195__80__2WWMM_2WWMM_bdw1955802540_bdw (
	inst_cellmath__195__80__2WWMM_2WWMM_out0,
	inst_cellmath__195__80__2WWMM_2WWMM_in0
	); /* architecture "behavioural" */ 
output [72:0] inst_cellmath__195__80__2WWMM_2WWMM_out0;
input [22:17] inst_cellmath__195__80__2WWMM_2WWMM_in0;

reg [72:0] inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0;
assign inst_cellmath__195__80__2WWMM_2WWMM_out0 = inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0;
always @ (inst_cellmath__195__80__2WWMM_2WWMM_in0) begin
	case (inst_cellmath__195__80__2WWMM_2WWMM_in0)
		6'B000000 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0000001100100100001110100100001111111000010000000001100100100001011000001 ;
		6'B000001 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0000100101101100001100101011111111101000110000001001100100011101100000000 ;
		6'B000010 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0000111110110010101101110011111111011001010001001001100100010101110000001 ;
		6'B000011 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0001010111110110110100000000111111001001110011101001100100001010001000110 ;
		6'B000100 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0001110000110111100001011100101110111010011000010001100011111010101010001 ;
		6'B000101 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0010001001110011111000011001111110101010111111100001100011100111010101001 ;
		6'B000110 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0010100010101010111011010110011110011011101010000101100011010000001010010 ;
		6'B000111 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0010111011011011101100111011111110001100011000100001100010110101001010100 ;
		6'B001000 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0011010100000101010000000100111101111101001011011001100010010110010110111 ;
		6'B001001 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0011101100100110100111111100111101101110000011010101100001110011110000101 ;
		6'B001010 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0100000100111110111000000011101101011111000000111001100001001101011001001 ;
		6'B001011 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0100011101001101000100001111111101010000000100101001100000100011010001101 ;
		6'B001100 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0100110101010000010000110000111101000001001111001101011111110101011100000 ;
		6'B001101 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0101001101000111100010010000101100110010100001001001011111000011111010000 ;
		6'B001110 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0101100100110001111101110111011100100011111010111101011110001110101101011 ;
		6'B001111 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0101111100001110101001001100011100010101011101010001011101010101111000010 ;
		6'B010000 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0110010011011100101010011001001100000111001000100101011100011001011100111 ;
		6'B010001 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0110101010011011001000001010111011111000111101100001011011011001011101100 ;
		6'B010010 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0111000001001001001001110110001011101010111100101001011010010101111100100 ;
		6'B010011 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0111010111100101110111010111001011011101000110011001011001001110111100110 ;
		6'B010100 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B0111101101110000011001010100111011001111011011011001011000000100100000111 ;
		6'B010101 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1000000011100111111001000011111011000001111100000101010110110110101011101 ;
		6'B010110 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1000011001001011100000100110111010110100101001000101010101100101100000000 ;
		6'B010111 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1000101110011010011010110010001010100111100010110101010100010001000001011 ;
		6'B011000 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1001000011010011110011001100101010011010101001111001010010111001010010110 ;
		6'B011001 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1001010111110110110110010011001010001101111110101101010001011110010111101 ;
		6'B011010 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1001101100000010110001011000101010000001100001110001010000000000010011100 ;
		6'B011011 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1001111111110110110010101001111001110101010011100101001110011111001001111 ;
		6'B011100 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1010010011010010001001001101111001101001010100100101001100111010111110110 ;
		6'B011101 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1010100110010100000101001001011001011101100101010101001011010011110101110 ;
		6'B011110 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1010111000111011110111011111011001010010000110001001001001101001110010111 ;
		6'B011111 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1011001011001000110010010011001001000110110111100101000111111100111010011 ;
		6'B100000 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1011011100111010001000101010101000111011111010000001000110001101010000011 ;
		6'B100001 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1011101110001111001110101111101000110001001101111001000100011010111001001 ;
		6'B100010 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1011111111000111011001110001111000100110110011100101000010100101111001000 ;
		6'B100011 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1100001111100010000000000111111000011100101011100001000000101110010100101 ;
		6'B100100 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1100011111011110011001010010001000010010110110000100111110110100010000101 ;
		6'B100101 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1100101110111011111101111010101000001001010011101000111100110111110001100 ;
		6'B100110 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1100111101111010000111110111101000000000000100101000111010111000111100010 ;
		6'B100111 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1101001100011000010010001101100111110111001001010100111000110111110101110 ;
		6'B101000 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1101011010010101111001001111000111101110100010000100110110110100100010111 ;
		6'B101001 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1101100111110010011010011111100111100110001111010000110100101111001000110 ;
		6'B101010 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1101110100101101010100110011100111011110010001001100110010100111101100100 ;
		6'B101011 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1110000001000110001000010011010111010110101000001000110000011110010011011 ;
		6'B101100 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1110001100111100010110011010010111001111010100011100101110010011000010101 ;
		6'B101101 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1110011000001111100001111010000111001000010110010100101100000101111111110 ;
		6'B101110 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1110100010111111001110111010000111000001101110001000101001110111010000000 ;
		6'B101111 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1110101101001011000010111010000110111011011100000100100111100110111001000 ;
		6'B110000 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1110110110110010100100110001000110110101100000011000100101010101000000010 ;
		6'B110001 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1110111111110101011100110001000110101111111011010100100011000001101011011 ;
		6'B110010 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111001000010011010100100101100110101010101101000100100000101101000000001 ;
		6'B110011 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111010000001011110111010101110110100101110101110100011110010111000100001 ;
		6'B110100 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111010111011110110001100100100110100001010101110100011011111111111101010 ;
		6'B110101 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111011110001011110001010010000110011101001101001100011001100111110001010 ;
		6'B110110 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111100100010010100101111011110110011001011100000100010111001110100110001 ;
		6'B110111 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111101001110011000000011101100110010110000010101100010100110100100001101 ;
		6'B111000 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111101110101100110011010001110110010011000001001000010010011001101001110 ;
		6'B111001 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111110010111111110010010010100110010000010111100000001111111110000100100 ;
		6'B111010 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111110110101011110010111000110110001110000101111100001101100001110111111 ;
		6'B111011 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111111001110000101011111110110110001100001100100000001011000101001001111 ;
		6'B111100 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111111100001110010101111110010110001010101011010000001000101000000000100 ;
		6'B111101 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111111110000100101010110010110110001001100010010000000110001010100001111 ;
		6'B111110 : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111111111010011100101111000000110001000110001100100000011101100110100000 ;
		default : inst_cellmath__195__80__2WWMM_2WWMM_out0_tmp_0 = 73'B1111111111111011000100001011010110001000011001001100000001001110111101000 ;
	endcase
end
endmodule

module cynw_cm_float_sin_inst_cellmath__198_0_bdw1955802540_bdw (
	inst_cellmath__198_0_out0,
	inst_cellmath__198_0_in0,
	inst_cellmath__198_0_in1
	); /* architecture "behavioural" */ 
output [32:0] inst_cellmath__198_0_out0;
input [15:0] inst_cellmath__198_0_in0;
input [0:0] inst_cellmath__198_0_in1;
wire [16:0] inst_cellmath__113_0_0;
wire [1:0] inst_cellmath__116__W1_0_0_1_1;

assign inst_cellmath__116__W1_0_0_1_1 = {inst_cellmath__198_0_in1,inst_cellmath__198_0_in0[15]};

assign inst_cellmath__113_0_0 = {inst_cellmath__116__W1_0_0_1_1,inst_cellmath__198_0_in0[14:0]};

assign inst_cellmath__198_0_out0 = 
	+(
		 (({1{inst_cellmath__113_0_0[16]}}&{1'B1}) << 32)
		+(({3{inst_cellmath__113_0_0[15]}}&{inst_cellmath__113_0_0[16],1'B0,1'B1}) << 30)
		+(({5{inst_cellmath__113_0_0[14]}}&{{{1{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:15]},1'B0,1'B1}) << 28)
		+(({7{inst_cellmath__113_0_0[13]}}&{{{2{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:14]},1'B0,1'B1}) << 26)
		+(({9{inst_cellmath__113_0_0[12]}}&{{{3{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:13]},1'B0,1'B1}) << 24)
		+(({11{inst_cellmath__113_0_0[11]}}&{{{4{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:12]},1'B0,1'B1}) << 22)
		+(({13{inst_cellmath__113_0_0[10]}}&{{{5{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:11]},1'B0,1'B1}) << 20)
		+(({15{inst_cellmath__113_0_0[9]}}&{{{6{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:10]},1'B0,1'B1}) << 18)
		+(({17{inst_cellmath__113_0_0[8]}}&{{{7{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:9]},1'B0,1'B1}) << 16)
		+(({19{inst_cellmath__113_0_0[7]}}&{{{8{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:8]},1'B0,1'B1}) << 14)
		+(({21{inst_cellmath__113_0_0[6]}}&{{{9{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:7]},1'B0,1'B1}) << 12)
		+(({23{inst_cellmath__113_0_0[5]}}&{{{10{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:6]},1'B0,1'B1}) << 10)
		+(({25{inst_cellmath__113_0_0[4]}}&{{{11{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:5]},1'B0,1'B1}) << 8)
		+(({27{inst_cellmath__113_0_0[3]}}&{{{12{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:4]},1'B0,1'B1}) << 6)
		+(({29{inst_cellmath__113_0_0[2]}}&{{{13{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:3]},1'B0,1'B1}) << 4)
		+(({31{inst_cellmath__113_0_0[1]}}&{{{14{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:2]},1'B0,1'B1}) << 2)
		+(({33{inst_cellmath__113_0_0[0]}}&{{{15{inst_cellmath__113_0_0[16]}}, inst_cellmath__113_0_0[16:1]},1'B0,1'B1}) << 0)
	);
endmodule

module cynw_cm_float_sin_inst_cellmath__201_0_bdw1955802540_bdw (
	inst_cellmath__201_0_out0,
	inst_cellmath__201_0_in0,
	inst_cellmath__201_0_in1,
	inst_cellmath__201_0_in2,
	inst_cellmath__201_0_in3,
	inst_cellmath__201_0_in4
	); /* architecture "behavioural" */ 
output [49:0] inst_cellmath__201_0_out0;
input [15:0] inst_cellmath__201_0_in0;
input [32:17] inst_cellmath__201_0_in1;
input [72:23] inst_cellmath__201_0_in2;
input [21:0] inst_cellmath__201_0_in3;
input [0:0] inst_cellmath__201_0_in4;
wire [29:0] inst_cellmath__195;
wire [20:0] inst_cellmath__197;
wire [16:0] inst_cellmath__113_0_1;
wire [20:0] inst_cellmath__197__131;
wire [1:0] inst_cellmath__116__W1_0_0_1_0;

assign inst_cellmath__195[29:4] = inst_cellmath__201_0_in2[72:47];

assign inst_cellmath__195[3:0] = inst_cellmath__201_0_in2[46:43];

assign inst_cellmath__197[17:3] = inst_cellmath__201_0_in2[40:26];

assign inst_cellmath__197[2:0] = inst_cellmath__201_0_in2[25:23];

assign inst_cellmath__197__131[19:0] = inst_cellmath__201_0_in2[42:23];

assign inst_cellmath__197__131[20] = 1'B1;

assign inst_cellmath__197[20:18] = inst_cellmath__197__131[20:18];

assign inst_cellmath__116__W1_0_0_1_0 = {inst_cellmath__201_0_in4,inst_cellmath__201_0_in0[15]};

assign inst_cellmath__113_0_1 = {inst_cellmath__116__W1_0_0_1_0,inst_cellmath__201_0_in0[14:0]};

wire [49:0] inst_cellmath__201_0_out0_tmp_0;
wire [49:0] inst_cellmath__201_0_out0_tmp_1;
wire [49:0] inst_cellmath__201_0_out0_tmp_2;
assign inst_cellmath__201_0_out0_tmp_2 = 
	+((inst_cellmath__195<<18));
assign inst_cellmath__201_0_out0_tmp_1 = inst_cellmath__201_0_out0_tmp_2
	+({{29{inst_cellmath__197[20]}}, inst_cellmath__197} * inst_cellmath__201_0_in1);
assign inst_cellmath__201_0_out0_tmp_0 = inst_cellmath__201_0_out0_tmp_1
	+((inst_cellmath__201_0_in3 * {{33{inst_cellmath__113_0_1[16]}}, inst_cellmath__113_0_1})<<4);
assign inst_cellmath__201_0_out0 = inst_cellmath__201_0_out0_tmp_0
	+(50'B00000000000000000000000001000000000000000000000000);
endmodule

module cynw_cm_float_sin_inst_cellmath__200_0_bdw1955802540_bdw (
	inst_cellmath__200_0_out0,
	inst_cellmath__200_0_in0
	); /* architecture "behavioural" */ 
output [48:0] inst_cellmath__200_0_out0;
input [49:0] inst_cellmath__200_0_in0;

reg [48:0] inst_cellmath__200_0_out0_tmp_0;
assign inst_cellmath__200_0_out0 = inst_cellmath__200_0_out0_tmp_0;
always @ (inst_cellmath__200_0_in0[49] or inst_cellmath__200_0_in0[48:0]) begin
	case (inst_cellmath__200_0_in0[49])
		1'B0 : inst_cellmath__200_0_out0_tmp_0 = inst_cellmath__200_0_in0[48:0] ;
		default : inst_cellmath__200_0_out0_tmp_0 = {49{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_sin_inst_cellmath__19_0_bdw1955802540_bdw (
	inst_cellmath__19_0_out0,
	inst_cellmath__19_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__19_0_out0;
input [7:0] inst_cellmath__19_0_in0;

assign inst_cellmath__19_0_out0 = 
	(inst_cellmath__19_0_in0[7])
	&(inst_cellmath__19_0_in0[0])
	&(inst_cellmath__19_0_in0[1])
	&(inst_cellmath__19_0_in0[2])
	&(inst_cellmath__19_0_in0[3])
	&(inst_cellmath__19_0_in0[4])
	&(inst_cellmath__19_0_in0[5])
	&(inst_cellmath__19_0_in0[6]);
endmodule

module cynw_cm_float_sin_inst_cellmath__24_0_bdw1955802540_bdw (
	inst_cellmath__24_0_out0,
	inst_cellmath__24_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__24_0_out0;
input [22:0] inst_cellmath__24_0_in0;

assign inst_cellmath__24_0_out0 = 
	((~inst_cellmath__24_0_in0[0]))
	&((~inst_cellmath__24_0_in0[1]))
	&((~inst_cellmath__24_0_in0[2]))
	&((~inst_cellmath__24_0_in0[3]))
	&((~inst_cellmath__24_0_in0[4]))
	&((~inst_cellmath__24_0_in0[5]))
	&((~inst_cellmath__24_0_in0[6]))
	&((~inst_cellmath__24_0_in0[7]))
	&((~inst_cellmath__24_0_in0[8]))
	&((~inst_cellmath__24_0_in0[9]))
	&((~inst_cellmath__24_0_in0[10]))
	&((~inst_cellmath__24_0_in0[11]))
	&((~inst_cellmath__24_0_in0[12]))
	&((~inst_cellmath__24_0_in0[13]))
	&((~inst_cellmath__24_0_in0[14]))
	&((~inst_cellmath__24_0_in0[15]))
	&((~inst_cellmath__24_0_in0[16]))
	&((~inst_cellmath__24_0_in0[17]))
	&((~inst_cellmath__24_0_in0[18]))
	&((~inst_cellmath__24_0_in0[19]))
	&((~inst_cellmath__24_0_in0[20]))
	&((~inst_cellmath__24_0_in0[21]))
	&((~inst_cellmath__24_0_in0[22]));
endmodule

module cynw_cm_float_sin_inst_cellmath__66_0_bdw1955802540_bdw (
	inst_cellmath__66_0_out0,
	inst_cellmath__66_0_in0,
	inst_cellmath__66_0_in1,
	inst_cellmath__66_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__66_0_out0;
input  inst_cellmath__66_0_in0,
	inst_cellmath__66_0_in1,
	inst_cellmath__66_0_in2;

assign inst_cellmath__66_0_out0 = 
	((~inst_cellmath__66_0_in2))
	&(inst_cellmath__66_0_in1)
	&(inst_cellmath__66_0_in0);
endmodule

module cynw_cm_float_sin_inst_cellmath__67_0_bdw1955802540_bdw (
	inst_cellmath__67_0_out0,
	inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1,
	inst_cellmath__67_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__67_0_out0;
input  inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1,
	inst_cellmath__67_0_in2;

assign inst_cellmath__67_0_out0 = 
	(inst_cellmath__67_0_in2)
	&(inst_cellmath__67_0_in1)
	&(inst_cellmath__67_0_in0);
endmodule

module cynw_cm_float_sin_inst_cellmath__68_0_bdw1955802540_bdw (
	inst_cellmath__68_0_out0,
	inst_cellmath__68_0_in0,
	inst_cellmath__68_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__68_0_out0;
input  inst_cellmath__68_0_in0,
	inst_cellmath__68_0_in1;

assign inst_cellmath__68_0_out0 = 
	(inst_cellmath__68_0_in1)
	|(inst_cellmath__68_0_in0);
endmodule

module cynw_cm_float_sin_inst_cellmath__69_0_bdw1955802540_bdw (
	inst_cellmath__69_0_out0,
	inst_cellmath__69_0_in0,
	inst_cellmath__69_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__69_0_out0;
input  inst_cellmath__69_0_in0,
	inst_cellmath__69_0_in1;

assign inst_cellmath__69_0_out0 = 
	(inst_cellmath__69_0_in1)
	&((~inst_cellmath__69_0_in0));
endmodule

module cynw_cm_float_sin_inst_cellmath__82_0_bdw1955802540_bdw (
	inst_cellmath__82_0_out0,
	inst_cellmath__82_0_in0,
	inst_cellmath__82_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__82_0_out0;
input  inst_cellmath__82_0_in0,
	inst_cellmath__82_0_in1;

assign inst_cellmath__82_0_out0 = 
	(inst_cellmath__82_0_in1)
	|(inst_cellmath__82_0_in0);
endmodule

module cynw_cm_float_sin_inst_cellmath__17_0_bdw1955802540_bdw (
	inst_cellmath__17_0_out0,
	inst_cellmath__17_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__17_0_out0;
input [7:0] inst_cellmath__17_0_in0;

assign inst_cellmath__17_0_out0 = 
	((~inst_cellmath__17_0_in0[7]))
	&((~inst_cellmath__17_0_in0[0]))
	&((~inst_cellmath__17_0_in0[1]))
	&((~inst_cellmath__17_0_in0[2]))
	&((~inst_cellmath__17_0_in0[3]))
	&((~inst_cellmath__17_0_in0[4]))
	&((~inst_cellmath__17_0_in0[5]))
	&((~inst_cellmath__17_0_in0[6]));
endmodule

module cynw_cm_float_sin_inst_cellmath__79__46__bdw1955802540_bdw (
	inst_cellmath__79__46__out0,
	inst_cellmath__79__46__in0,
	inst_cellmath__79__46__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__79__46__out0;
input  inst_cellmath__79__46__in0,
	inst_cellmath__79__46__in1;

assign inst_cellmath__79__46__out0 = 
	(inst_cellmath__79__46__in1)
	|(inst_cellmath__79__46__in0);
endmodule

module cynw_cm_float_sin_inst_cellmath__228__231__bdw1955802540_bdw (
	inst_cellmath__228__231__out0,
	inst_cellmath__228__231__in0,
	inst_cellmath__228__231__in1,
	inst_cellmath__228__231__in2
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__228__231__out0;
input  inst_cellmath__228__231__in0;
input [0:0] inst_cellmath__228__231__in1;
input  inst_cellmath__228__231__in2;

assign inst_cellmath__228__231__out0 = 
	(inst_cellmath__228__231__in2)
	|(inst_cellmath__228__231__in0)
	|(inst_cellmath__228__231__in1);
endmodule

module cynw_cm_float_sin_inst_cellmath__216__184__bdw1955802540_bdw (
	inst_cellmath__216__184__out0,
	inst_cellmath__216__184__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__216__184__out0;
input [7:0] inst_cellmath__216__184__in0;

assign inst_cellmath__216__184__out0 = (12'B000001110111>=inst_cellmath__216__184__in0);
endmodule

module cynw_cm_float_sin_inst_cellmath__219_0_bdw1955802540_bdw (
	inst_cellmath__219_0_out0,
	inst_cellmath__219_0_in0,
	inst_cellmath__219_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__219_0_out0;
input [22:22] inst_cellmath__219_0_in0;
input [48:48] inst_cellmath__219_0_in1;

assign inst_cellmath__219_0_out0 = 
	(inst_cellmath__219_0_in1)
	&(inst_cellmath__219_0_in0);
endmodule

module cynw_cm_float_sin_inst_cellmath__211__182__bdw1955802540_bdw (
	inst_cellmath__211__182__out0,
	inst_cellmath__211__182__in0
	); /* architecture "behavioural" */ 
output [4:0] inst_cellmath__211__182__out0;
input [47:25] inst_cellmath__211__182__in0;
wire [31:0] inst_cellmath__211__183;
wire [30:0] inst_cellmath__210;

assign inst_cellmath__210 = {{8{1'B0}}, inst_cellmath__211__182__in0};

assign inst_cellmath__211__183 = {inst_cellmath__210,1'B1};

reg [4:0] inst_cellmath__211__182__out0_tmp_0;
assign inst_cellmath__211__182__out0 = inst_cellmath__211__182__out0_tmp_0;
always @ (inst_cellmath__211__183) begin
	casez (inst_cellmath__211__183)
		32'B01?????????????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B00001 ;
		32'B001????????????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B00010 ;
		32'B0001???????????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B00011 ;
		32'B00001??????????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B00100 ;
		32'B000001?????????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B00101 ;
		32'B0000001????????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B00110 ;
		32'B00000001???????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B00111 ;
		32'B000000001??????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B01000 ;
		32'B0000000001?????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B01001 ;
		32'B00000000001????????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B01010 ;
		32'B000000000001???????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B01011 ;
		32'B0000000000001??????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B01100 ;
		32'B00000000000001?????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B01101 ;
		32'B000000000000001????????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B01110 ;
		32'B0000000000000001???????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B01111 ;
		32'B00000000000000001??????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B10000 ;
		32'B000000000000000001?????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B10001 ;
		32'B0000000000000000001????????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B10010 ;
		32'B00000000000000000001???????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B10011 ;
		32'B000000000000000000001??????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B10100 ;
		32'B0000000000000000000001?????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B10101 ;
		32'B00000000000000000000001????????? : inst_cellmath__211__182__out0_tmp_0 = 5'B10110 ;
		32'B000000000000000000000001???????? : inst_cellmath__211__182__out0_tmp_0 = 5'B10111 ;
		32'B0000000000000000000000001??????? : inst_cellmath__211__182__out0_tmp_0 = 5'B11000 ;
		32'B00000000000000000000000001?????? : inst_cellmath__211__182__out0_tmp_0 = 5'B11001 ;
		32'B000000000000000000000000001????? : inst_cellmath__211__182__out0_tmp_0 = 5'B11010 ;
		32'B0000000000000000000000000001???? : inst_cellmath__211__182__out0_tmp_0 = 5'B11011 ;
		32'B00000000000000000000000000001??? : inst_cellmath__211__182__out0_tmp_0 = 5'B11100 ;
		32'B000000000000000000000000000001?? : inst_cellmath__211__182__out0_tmp_0 = 5'B11101 ;
		32'B0000000000000000000000000000001? : inst_cellmath__211__182__out0_tmp_0 = 5'B11110 ;
		32'B00000000000000000000000000000001 : inst_cellmath__211__182__out0_tmp_0 = 5'B11111 ;
		default : inst_cellmath__211__182__out0_tmp_0 = 5'B00000 ;
	endcase
end
endmodule

module cynw_cm_float_sin_inst_cellmath__215_0_bdw1955802540_bdw (
	inst_cellmath__215_0_out0,
	inst_cellmath__215_0_in0
	); /* architecture "behavioural" */ 
output [4:0] inst_cellmath__215_0_out0;
input [4:0] inst_cellmath__215_0_in0;

assign inst_cellmath__215_0_out0 = 
	+(inst_cellmath__215_0_in0)
	-(5'B00111);
endmodule

module cynw_cm_float_sin_inst_cellmath__220__188__bdw1955802540_bdw (
	inst_cellmath__220__188__out0,
	inst_cellmath__220__188__in0,
	inst_cellmath__220__188__in1
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__220__188__out0;
input [4:0] inst_cellmath__220__188__in0;
input [47:25] inst_cellmath__220__188__in1;

assign inst_cellmath__220__188__out0 = inst_cellmath__220__188__in1 << inst_cellmath__220__188__in0;
endmodule

module cynw_cm_float_sin_inst_cellmath__221__195__bdw1955802540_bdw (
	inst_cellmath__221__195__out0,
	inst_cellmath__221__195__in0
	); /* architecture "behavioural" */ 
output [6:0] inst_cellmath__221__195__out0;
input [4:0] inst_cellmath__221__195__in0;

assign inst_cellmath__221__195__out0 = 
	-(inst_cellmath__221__195__in0)
	+(7'B1111111);
endmodule

module cynw_cm_float_sin_inst_cellmath__220_2WWMM_bdw1955802540_bdw (
	inst_cellmath__220_2WWMM_out0,
	inst_cellmath__220_2WWMM_in0,
	inst_cellmath__220_2WWMM_in1,
	inst_cellmath__220_2WWMM_in2,
	inst_cellmath__220_2WWMM_in3,
	inst_cellmath__220_2WWMM_in4,
	inst_cellmath__220_2WWMM_in5
	); /* architecture "behavioural" */ 
output [30:0] inst_cellmath__220_2WWMM_out0;
input [6:0] inst_cellmath__220_2WWMM_in0;
input [22:0] inst_cellmath__220_2WWMM_in1;
input  inst_cellmath__220_2WWMM_in2;
input [0:0] inst_cellmath__220_2WWMM_in3;
input [22:0] inst_cellmath__220_2WWMM_in4;
input [7:0] inst_cellmath__220_2WWMM_in5;
wire [1:0] inst_cellmath__216_0;
wire [30:0] inst_cellmath__220_22_0__0,
	inst_cellmath__220_22_0__1;

assign inst_cellmath__216_0 = {inst_cellmath__220_2WWMM_in3,inst_cellmath__220_2WWMM_in2};

assign inst_cellmath__220_22_0__0 = {inst_cellmath__220_2WWMM_in1,1'B0,inst_cellmath__220_2WWMM_in0};

assign inst_cellmath__220_22_0__1 = {inst_cellmath__220_2WWMM_in4,inst_cellmath__220_2WWMM_in5};

reg [30:0] inst_cellmath__220_2WWMM_out0_tmp_0;
assign inst_cellmath__220_2WWMM_out0 = inst_cellmath__220_2WWMM_out0_tmp_0;
always @ (inst_cellmath__216_0 or inst_cellmath__220_22_0__0 or inst_cellmath__220_22_0__1) begin
	casez (inst_cellmath__216_0)
		2'B00 : inst_cellmath__220_2WWMM_out0_tmp_0 = inst_cellmath__220_22_0__0 ;
		2'B1? : inst_cellmath__220_2WWMM_out0_tmp_0 = inst_cellmath__220_22_0__1 ;
		default : inst_cellmath__220_2WWMM_out0_tmp_0 = 31'B0000000000000000000000001111111 ;
	endcase
end
endmodule

module cynw_cm_float_sin_inst_cellmath__223__208__bdw1955802540_bdw (
	inst_cellmath__223__208__out0,
	inst_cellmath__223__208__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__223__208__out0;
input [29:0] inst_cellmath__223__208__in0;

assign inst_cellmath__223__208__out0 = 
	(inst_cellmath__223__208__in0[8])
	|(inst_cellmath__223__208__in0[9])
	|(inst_cellmath__223__208__in0[10])
	|(inst_cellmath__223__208__in0[11])
	|(inst_cellmath__223__208__in0[12])
	|(inst_cellmath__223__208__in0[13])
	|(inst_cellmath__223__208__in0[14])
	|(inst_cellmath__223__208__in0[15])
	|(inst_cellmath__223__208__in0[16])
	|(inst_cellmath__223__208__in0[17])
	|(inst_cellmath__223__208__in0[18])
	|(inst_cellmath__223__208__in0[19])
	|(inst_cellmath__223__208__in0[20])
	|(inst_cellmath__223__208__in0[21])
	|(inst_cellmath__223__208__in0[22])
	|(inst_cellmath__223__208__in0[23])
	|(inst_cellmath__223__208__in0[24])
	|(inst_cellmath__223__208__in0[25])
	|(inst_cellmath__223__208__in0[26])
	|(inst_cellmath__223__208__in0[27])
	|(inst_cellmath__223__208__in0[28])
	|(inst_cellmath__223__208__in0[29])
	|(inst_cellmath__223__208__in0[0])
	|(inst_cellmath__223__208__in0[1])
	|(inst_cellmath__223__208__in0[2])
	|(inst_cellmath__223__208__in0[3])
	|(inst_cellmath__223__208__in0[4])
	|(inst_cellmath__223__208__in0[5])
	|(inst_cellmath__223__208__in0[6])
	|(inst_cellmath__223__208__in0[7]);
endmodule

module cynw_cm_float_sin_inst_cellmath__223__207__bdw1955802540_bdw (
	inst_cellmath__223__207__out0,
	inst_cellmath__223__207__in0,
	inst_cellmath__223__207__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__223__207__out0;
input [24:24] inst_cellmath__223__207__in0;
input  inst_cellmath__223__207__in1;

assign inst_cellmath__223__207__out0 = 
	(inst_cellmath__223__207__in0)
	^(inst_cellmath__223__207__in1);
endmodule

module cynw_cm_float_sin_inst_cellmath__223__199__bdw1955802540_bdw (
	inst_cellmath__223__199__out0,
	inst_cellmath__223__199__in0,
	inst_cellmath__223__199__in1,
	inst_cellmath__223__199__in2,
	inst_cellmath__223__199__in3
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__223__199__out0;
input  inst_cellmath__223__199__in0;
input [0:0] inst_cellmath__223__199__in1,
	inst_cellmath__223__199__in2,
	inst_cellmath__223__199__in3;

assign inst_cellmath__223__199__out0 = 
	((~inst_cellmath__223__199__in0))
	&((~inst_cellmath__223__199__in1))
	&(inst_cellmath__223__199__in2)
	&(inst_cellmath__223__199__in3);
endmodule

module cynw_cm_float_sin_inst_cellmath__223_0_bdw1955802540_bdw (
	inst_cellmath__223_0_out0,
	inst_cellmath__223_0_in0,
	inst_cellmath__223_0_in1,
	inst_cellmath__223_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__223_0_out0;
input [0:0] inst_cellmath__223_0_in0,
	inst_cellmath__223_0_in1;
input  inst_cellmath__223_0_in2;

reg [0:0] inst_cellmath__223_0_out0_tmp_0;
assign inst_cellmath__223_0_out0 = inst_cellmath__223_0_out0_tmp_0;
always @ (inst_cellmath__223_0_in1 or inst_cellmath__223_0_in0 or inst_cellmath__223_0_in2) begin
	case (inst_cellmath__223_0_in1)
		1'B0 : inst_cellmath__223_0_out0_tmp_0 = inst_cellmath__223_0_in0 ;
		default : inst_cellmath__223_0_out0_tmp_0 = inst_cellmath__223_0_in2 ;
	endcase
end
endmodule

module cynw_cm_float_sin_inst_cellmath__224__212__bdw1955802540_bdw (
	inst_cellmath__224__212__out0,
	inst_cellmath__224__212__in0,
	inst_cellmath__224__212__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__224__212__out0;
input  inst_cellmath__224__212__in0;
input [0:0] inst_cellmath__224__212__in1;

assign inst_cellmath__224__212__out0 = 
	(inst_cellmath__224__212__in0)
	|((~inst_cellmath__224__212__in1));
endmodule

module cynw_cm_float_sin_inst_cellmath__228_0_bdw1955802540_bdw (
	inst_cellmath__228_0_out0,
	inst_cellmath__228_0_in0,
	inst_cellmath__228_0_in1,
	inst_cellmath__228_0_in2
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__228_0_out0;
input [0:0] inst_cellmath__228_0_in0,
	inst_cellmath__228_0_in1;
input [7:0] inst_cellmath__228_0_in2;

reg [7:0] inst_cellmath__228_0_out0_tmp_0;
assign inst_cellmath__228_0_out0 = inst_cellmath__228_0_out0_tmp_0;
always @ (inst_cellmath__228_0_in0 or inst_cellmath__228_0_in2 or inst_cellmath__228_0_in1) begin
	case (inst_cellmath__228_0_in0)
		1'B0 : inst_cellmath__228_0_out0_tmp_0 = inst_cellmath__228_0_in2 ;
		default : inst_cellmath__228_0_out0_tmp_0 = {{7{inst_cellmath__228_0_in1}}, inst_cellmath__228_0_in1} ;
	endcase
end
endmodule

module cynw_cm_float_sin_inst_cellmath__231_0_bdw1955802540_bdw (
	inst_cellmath__231_0_out0,
	inst_cellmath__231_0_in0,
	inst_cellmath__231_0_in1,
	inst_cellmath__231_0_in2,
	inst_cellmath__231_0_in3
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__231_0_out0;
input  inst_cellmath__231_0_in0;
input [0:0] inst_cellmath__231_0_in1;
input [30:8] inst_cellmath__231_0_in2;
input [46:46] inst_cellmath__231_0_in3;
wire [1:0] inst_cellmath__231__242_0_0_0;

assign inst_cellmath__231__242_0_0_0 = {inst_cellmath__231_0_in1,inst_cellmath__231_0_in3};

reg [22:0] inst_cellmath__231_0_out0_tmp_0;
assign inst_cellmath__231_0_out0 = inst_cellmath__231_0_out0_tmp_0;
always @ (inst_cellmath__231__242_0_0_0 or inst_cellmath__231_0_in2 or inst_cellmath__231_0_in0) begin
	casez (inst_cellmath__231__242_0_0_0)
		2'B0? : inst_cellmath__231_0_out0_tmp_0 = inst_cellmath__231_0_in2 ;
		default : inst_cellmath__231_0_out0_tmp_0 = {{22{inst_cellmath__231_0_in0}}, inst_cellmath__231_0_in0} ;
	endcase
end
endmodule

/* CADENCE  vrP3TQ/Wrw== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/






