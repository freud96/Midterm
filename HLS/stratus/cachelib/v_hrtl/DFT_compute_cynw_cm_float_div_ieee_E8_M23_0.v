/*****************************************************************************
    Verilog Hierarchical RTL Description
    
    Configured at: 11:22:12 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_cynw_cm_float_div_ieee_E8_M23_0 (
	clk,
	a_sign,
	a_exp,
	a_man,
	b_sign,
	b_exp,
	b_man,
	accept,
	x
	); /* architecture "behavioural" */ 
input  clk;
input  a_sign;
input [7:0] a_exp;
input [22:0] a_man;
input  b_sign;
input [7:0] b_exp;
input [22:0] b_man;
input  accept;
output [31:0] x;
wire [31:0] tmp_380,
	tmp_381,
	inst_cellmath__0,
	inst_cellmath__8,
	inst_cellmath__9;
wire  inst_cellmath__11;
wire [3:0] inst_cellmath__12,
	inst_cellmath__13;
wire [25:0] inst_cellmath__14,
	inst_cellmath__16,
	inst_cellmath__17,
	inst_cellmath__20,
	inst_cellmath__21;
wire [4:0] inst_cellmath__22,
	inst_cellmath__23,
	inst_cellmath__24;
wire [6:0] inst_lookup0_cellmath__27;
wire [2:0] inst_lookup0_cellmath__29;
wire [25:0] inst_cellmath__30,
	inst_cellmath__31;
wire  inst_cellmath__32;
wire [25:0] inst_cellmath__34,
	inst_cellmath__35,
	inst_cellmath__36,
	inst_cellmath__38__W0,
	inst_cellmath__38__W1,
	inst_cellmath__39__W0,
	inst_cellmath__39__W1;
wire [28:0] inst_cellmath__40,
	inst_cellmath__41,
	inst_cellmath__42,
	inst_cellmath__43,
	inst_cellmath__44,
	inst_cellmath__45,
	inst_cellmath__46,
	inst_cellmath__47;
wire [1:0] inst_cellmath__50;
wire [4:0] inst_it2_cellmath__51;
wire [6:0] inst_it2_lookup1_cellmath__53;
wire [2:0] inst_it2_lookup1_cellmath__55;
wire [25:0] inst_it2_cellmath__56,
	inst_it2_cellmath__57;
wire  inst_it2_cellmath__58;
wire [25:0] inst_it2_cellmath__60,
	inst_it2_cellmath__61,
	inst_it2_cellmath__62__W0,
	inst_it2_cellmath__62__W1,
	inst_it2_cellmath__63__W0,
	inst_it2_cellmath__63__W1;
wire [1:0] inst_it2_cellmath__66;
wire [9:0] inst_cellmath__67,
	inst_cellmath__68;
wire  inst_cellmath__69,
	inst_cellmath__70,
	inst_cellmath__71,
	inst_cellmath__72,
	inst_cellmath__73,
	inst_cellmath__74,
	inst_cellmath__75,
	inst_cellmath__76,
	inst_cellmath__77,
	inst_cellmath__78,
	inst_cellmath__79,
	inst_cellmath__80,
	inst_cellmath__83,
	inst_cellmath__84,
	inst_cellmath__85,
	inst_cellmath__86,
	inst_cellmath__87,
	inst_cellmath__88,
	inst_cellmath__89,
	inst_cellmath__91,
	inst_cellmath__96,
	inst_cellmath__98,
	inst_cellmath__100,
	inst_cellmath__101,
	inst_cellmath__102,
	inst_cellmath__103,
	inst_cellmath__104,
	inst_cellmath__105,
	inst_cellmath__106,
	inst_cellmath__109;
wire [7:0] inst_cellmath__110,
	inst_cellmath__111;
wire [21:0] inst_cellmath__112;
wire [31:0] inst_cellmath__113;
wire [25:0] inst_cellmath__120;
wire  inst_cellmath__122;
wire [28:0] inst_cellmath__124;
wire [22:0] inst_cellmath__125;
wire  inst_cellmath__126,
	inst_cellmath__127;
wire [22:0] inst_cellmath__129;
wire  inst_cellmath__135,
	inst_cellmath__136,
	inst_cellmath__137;
wire [0:0] inst_cellmath__13__14;
wire [4:0] inst_cellmath__12__18;
wire [0:0] inst_cellmath__12__19;
wire [25:0] inst_cellmath__18__20,
	inst_cellmath__20__23;
wire [4:0] inst_cellmath__22__27;
wire [2:0] inst_cellmath__22__29;
wire [4:0] inst_cellmath__22__28;
wire [25:0] inst_cellmath__39__41;
wire [0:0] inst_cellmath__48__46,
	inst_cellmath__48__44;
wire [30:0] inst_cellmath__42__49,
	inst_cellmath__42__50,
	inst_cellmath__43__53,
	inst_cellmath__43__54;
wire [0:0] inst_cellmath__43__56,
	inst_cellmath__43__55;
wire [25:0] inst_it2_cellmath__63__67;
wire [0:0] inst_it2_cellmath__64__70,
	inst_it2_cellmath__64__68;
wire [30:0] inst_cellmath__40__73,
	inst_cellmath__40__74,
	inst_cellmath__41__77,
	inst_cellmath__41__78;
wire [0:0] inst_cellmath__41__80,
	inst_cellmath__41__79,
	inst_cellmath__69__82,
	inst_cellmath__69__81,
	inst_cellmath__70__83,
	inst_cellmath__87__87,
	inst_cellmath__87__88,
	inst_cellmath__92__95,
	inst_cellmath__127__103,
	inst_cellmath__127__104,
	inst_cellmath__130__105,
	inst_cellmath__121__106,
	inst_cellmath__133__109;
wire [7:0] inst_cellmath__113__113;
wire [25:0] inst_cellmath__30__31_0,
	inst_it2_cellmath__56__57_0;
wire [1:0] inst_cellmath__79_0,
	inst_cellmath__137_0,
	inst_cellmath__137_1;
wire [22:0] inst_cellmath__90_0,
	inst_cellmath__90_1,
	inst_cellmath__90_2;
wire [23:0] inst_cellmath__19__21_24_1_;
wire [1:0] inst_cellmath__48_1_0__1,
	inst_it2_cellmath__64_1_0__1;
wire [25:0] inst_cellmath__31__35_0_0,
	inst_it2_cellmath__57__61_0_0;
wire [22:0] inst_cellmath__113__115_22_1_,
	inst_cellmath__113__115_22_1__0,
	inst_cellmath__113__115_22_1__1;
wire [24:0] inst_cellmath__19__21_25_1__0_0,
	inst_cellmath__19__21_25_1__0_1;
wire [25:0] inst_cellmath__30__31_1_0,
	inst_cellmath__30__31_1_1,
	inst_cellmath__31__37_0_0,
	inst_cellmath__31__37_0_1,
	inst_cellmath__31__35_1_0,
	inst_cellmath__31__35_1_1,
	inst_it2_cellmath__56__57_1_0,
	inst_it2_cellmath__56__57_1_1,
	inst_it2_cellmath__57__61_1_0,
	inst_it2_cellmath__57__61_1_1;
wire [21:0] inst_cellmath__134__111_22_1_;
wire [24:0] inst_cellmath__31__35_0_25_1__0_0,
	inst_cellmath__31__35_0_25_1__0_1,
	inst_it2_cellmath__57__61_0_25_1__0_0,
	inst_it2_cellmath__57__61_0_25_1__0_1;

reg [31:0] inst_cellmath__0_0_reg;
assign inst_cellmath__0 = inst_cellmath__0_0_reg;
always @ (posedge clk) begin
	begin
		if (inst_cellmath__109==1'B1) inst_cellmath__0_0_reg <= inst_cellmath__113;
	end
end

assign x = inst_cellmath__0;

assign tmp_380 = {a_sign,a_exp,a_man};

assign tmp_381 = {b_sign,b_exp,b_man};

reg [31:0] inst_cellmath__9_0_reg;
assign inst_cellmath__9 = inst_cellmath__9_0_reg;
always @ (posedge clk) begin
	begin
		if (accept==1'B1) inst_cellmath__9_0_reg <= tmp_381;
	end
end

assign inst_cellmath__19__21_25_1__0_0 = {1'B1,inst_cellmath__9[22:0],1'B0};

assign inst_cellmath__19__21_25_1__0_1 = {1'B1,inst_cellmath__9[22:0],1'B0};

reg  inst_cellmath__11_0_reg;
assign inst_cellmath__11 = inst_cellmath__11_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__11_0_reg <= accept;
	end
end

reg [25:0] inst_cellmath__16_0_reg;
assign inst_cellmath__16 = inst_cellmath__16_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__16_0_reg <= inst_cellmath__14;
	end
end

reg [25:0] inst_cellmath__17_0_reg;
assign inst_cellmath__17 = inst_cellmath__17_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__17_0_reg <= inst_it2_cellmath__63__W1;
	end
end
cynw_cm_float_div_ieee_inst_cellmath__23_0_bdw410776230_bdw inst_cellmath__23_0_0(
	.inst_cellmath__23_0_out0(inst_cellmath__23),
	.inst_cellmath__23_0_in0(inst_cellmath__17[25:21]),
	.inst_cellmath__23_0_in1(inst_cellmath__16[25:21])
	) ;

reg [31:0] inst_cellmath__8_0_reg;
assign inst_cellmath__8 = inst_cellmath__8_0_reg;
always @ (posedge clk) begin
	begin
		if (accept==1'B1) inst_cellmath__8_0_reg <= tmp_380;
	end
end

assign inst_cellmath__22__27 = {2'B01,inst_cellmath__8[22:20]};

assign inst_cellmath__22__29 = ~inst_cellmath__9[22:20];

assign inst_cellmath__22__28 = {2'B10,inst_cellmath__22__29};
cynw_cm_float_div_ieee_inst_cellmath__22_0_bdw410776230_bdw inst_cellmath__22_0_0(
	.inst_cellmath__22_0_out0(inst_cellmath__22),
	.inst_cellmath__22_0_in0(inst_cellmath__8[22:20]),
	.inst_cellmath__22_0_in1(inst_cellmath__22__29)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__24_0_bdw410776230_bdw inst_cellmath__24_0_0(
	.inst_cellmath__24_0_out0(inst_cellmath__24),
	.inst_cellmath__24_0_in0(inst_cellmath__23),
	.inst_cellmath__24_0_in1(inst_cellmath__22),
	.inst_cellmath__24_0_in2(inst_cellmath__11)
	) ;

assign inst_lookup0_cellmath__27 = {inst_cellmath__24,inst_cellmath__9[22:21]};
cynw_cm_float_div_ieee_inst_lookup0_cellmath__29_0_bdw410776230_bdw inst_lookup0_cellmath__29_0_0(
	.inst_lookup0_cellmath__29_0_out0(inst_lookup0_cellmath__29),
	.inst_lookup0_cellmath__29_0_in0(inst_cellmath__9[22:21]),
	.inst_lookup0_cellmath__29_0_in1(inst_cellmath__24)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__30__31__bdw410776230_bdw inst_cellmath__30__31__0(
	.inst_cellmath__30__31__out0(inst_cellmath__30__31_0[24:0]),
	.inst_cellmath__30__31__in0(inst_lookup0_cellmath__29[0]),
	.inst_cellmath__30__31__in1(inst_cellmath__9[22:0])
	) ;

assign inst_cellmath__30__31_1_0 = {1'B0,inst_cellmath__30__31_0[24:1],1'B0};

assign inst_cellmath__30__31_1_1 = {1'B0,inst_cellmath__30__31_0[24:1],1'B0};

assign inst_cellmath__31__37_0_0 = {1'B1,inst_cellmath__9[22:0],2'B00};

assign inst_cellmath__31__37_0_1 = {1'B1,inst_cellmath__9[22:0],2'B00};
cynw_cm_float_div_ieee_inst_cellmath__31__35__bdw410776230_bdw inst_cellmath__31__35__0(
	.inst_cellmath__31__35__out0(inst_cellmath__31__35_0_0),
	.inst_cellmath__31__35__in0(inst_lookup0_cellmath__29[1]),
	.inst_cellmath__31__35__in1(inst_cellmath__9[22:0])
	) ;

assign inst_cellmath__31__35_0_25_1__0_0 = {inst_cellmath__31__35_0_0[25:2],1'B0};

assign inst_cellmath__31__35_0_25_1__0_1 = {inst_cellmath__31__35_0_0[25:2],1'B0};

assign inst_cellmath__31__35_1_0 = {inst_cellmath__31__35_0_25_1__0_1,1'B0};

assign inst_cellmath__31__35_1_1 = {inst_cellmath__31__35_0_25_1__0_0,1'B0};

assign inst_cellmath__18__20[23:0] = {inst_cellmath__8[22:0],1'B0};

assign inst_cellmath__20__23[23:0] = {inst_cellmath__18__20[23:1],1'B1};
cynw_cm_float_div_ieee_inst_cellmath__20_0_bdw410776230_bdw inst_cellmath__20_0_0(
	.inst_cellmath__20_0_out0(inst_cellmath__20[23:0]),
	.inst_cellmath__20_0_in0(inst_cellmath__8[22:0]),
	.inst_cellmath__20_0_in1(inst_cellmath__16[23:0]),
	.inst_cellmath__20_0_in2(inst_cellmath__11)
	) ;

assign inst_cellmath__32 = ~inst_lookup0_cellmath__29[2];

assign inst_cellmath__34 = {inst_cellmath__20[23:0],1'B0,inst_cellmath__32};

assign inst_cellmath__19__21_24_1_ = {inst_cellmath__9[22:0],1'B0};
cynw_cm_float_div_ieee_inst_cellmath__21_0_bdw410776230_bdw inst_cellmath__21_0_0(
	.inst_cellmath__21_0_out0(inst_cellmath__21[23:0]),
	.inst_cellmath__21_0_in0(inst_cellmath__9[22:0]),
	.inst_cellmath__21_0_in1(inst_cellmath__17[23:0]),
	.inst_cellmath__21_0_in2(inst_cellmath__11)
	) ;

assign inst_cellmath__35 = {inst_cellmath__21[23:0],1'B0,inst_cellmath__32};
cynw_cm_float_div_ieee_inst_cellmath__30_2mx_bdw410776230_bdw inst_cellmath__30_2mx_0(
	.inst_cellmath__30_2mx_out0(inst_cellmath__30),
	.inst_cellmath__30_2mx_in0(inst_lookup0_cellmath__29[2]),
	.inst_cellmath__30_2mx_in1(inst_cellmath__30__31_0[24:1])
	) ;
cynw_cm_float_div_ieee_inst_fa_1033_10_bdw410776230_bdw inst_fa_1033_10_0(
	.inst_fa_1033_10_out0(inst_cellmath__38__W1),
	.inst_fa_1033_10_out1(inst_cellmath__38__W0[24:0]),
	.inst_fa_1033_10_in0(inst_cellmath__32),
	.inst_fa_1033_10_in1(inst_cellmath__30),
	.inst_fa_1033_10_in2(inst_cellmath__21[23:0]),
	.inst_fa_1033_10_in3(inst_cellmath__20[23:0])
	) ;

assign inst_cellmath__39__41 = {inst_cellmath__38__W0[24:0],1'B0};
cynw_cm_float_div_ieee_inst_cellmath__31_2mx_bdw410776230_bdw inst_cellmath__31_2mx_0(
	.inst_cellmath__31_2mx_out0(inst_cellmath__31),
	.inst_cellmath__31_2mx_in0(inst_lookup0_cellmath__29[2]),
	.inst_cellmath__31_2mx_in1(inst_cellmath__31__35_0_0[25:2])
	) ;
cynw_cm_float_div_ieee_inst_fa_1052_10_bdw410776230_bdw inst_fa_1052_10_0(
	.inst_fa_1052_10_out0(inst_cellmath__39__W1),
	.inst_fa_1052_10_out1(inst_cellmath__39__W0[24:0]),
	.inst_fa_1052_10_in0(inst_cellmath__38__W1),
	.inst_fa_1052_10_in1(inst_cellmath__38__W0[24:0]),
	.inst_fa_1052_10_in2(inst_cellmath__31)
	) ;
cynw_cm_float_div_ieee_inst_it2_cellmath__51_0_bdw410776230_bdw inst_it2_cellmath__51_0_0(
	.inst_it2_cellmath__51_0_out0(inst_it2_cellmath__51),
	.inst_it2_cellmath__51_0_in0(inst_cellmath__39__W1[25:21]),
	.inst_it2_cellmath__51_0_in1(inst_cellmath__39__W0[24:20])
	) ;

assign inst_it2_lookup1_cellmath__53 = {inst_it2_cellmath__51,inst_cellmath__9[22:21]};
cynw_cm_float_div_ieee_inst_it2_lookup1_cellmath__55_0_bdw410776230_bdw inst_it2_lookup1_cellmath__55_0_0(
	.inst_it2_lookup1_cellmath__55_0_out0(inst_it2_lookup1_cellmath__55),
	.inst_it2_lookup1_cellmath__55_0_in0(inst_it2_cellmath__51),
	.inst_it2_lookup1_cellmath__55_0_in1(inst_cellmath__9[22:21])
	) ;
cynw_cm_float_div_ieee_inst_it2_cellmath__56__57__bdw410776230_bdw inst_it2_cellmath__56__57__0(
	.inst_it2_cellmath__56__57__out0(inst_it2_cellmath__56__57_0[24:0]),
	.inst_it2_cellmath__56__57__in0(inst_it2_lookup1_cellmath__55[0]),
	.inst_it2_cellmath__56__57__in1(inst_cellmath__9[22:0])
	) ;

assign inst_it2_cellmath__56__57_1_0 = {1'B0,inst_it2_cellmath__56__57_0[24:1],1'B0};

assign inst_it2_cellmath__56__57_1_1 = {1'B0,inst_it2_cellmath__56__57_0[24:1],1'B0};
cynw_cm_float_div_ieee_inst_it2_cellmath__57__61__bdw410776230_bdw inst_it2_cellmath__57__61__0(
	.inst_it2_cellmath__57__61__out0(inst_it2_cellmath__57__61_0_0),
	.inst_it2_cellmath__57__61__in0(inst_it2_lookup1_cellmath__55[1]),
	.inst_it2_cellmath__57__61__in1(inst_cellmath__9[22:0])
	) ;

assign inst_it2_cellmath__57__61_0_25_1__0_0 = {inst_it2_cellmath__57__61_0_0[25:2],1'B0};

assign inst_it2_cellmath__57__61_0_25_1__0_1 = {inst_it2_cellmath__57__61_0_0[25:2],1'B0};

assign inst_it2_cellmath__57__61_1_0 = {inst_it2_cellmath__57__61_0_25_1__0_1,1'B0};

assign inst_it2_cellmath__57__61_1_1 = {inst_it2_cellmath__57__61_0_25_1__0_0,1'B0};

reg [21:0] inst_cellmath__112_0_reg;
assign inst_cellmath__112 = inst_cellmath__112_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__112_0_reg <= inst_cellmath__90_0[22:1];
	end
end

assign inst_cellmath__134__111_22_1_ = {1'B1,inst_cellmath__112[21:1]};
cynw_cm_float_div_ieee_inst_cellmath__120_0_bdw410776230_bdw inst_cellmath__120_0_0(
	.inst_cellmath__120_0_out0(inst_cellmath__120),
	.inst_cellmath__120_0_in0(inst_cellmath__17),
	.inst_cellmath__120_0_in1(inst_cellmath__16)
	) ;

reg [28:0] inst_cellmath__44_0_reg;
assign inst_cellmath__44 = inst_cellmath__44_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__44_0_reg <= inst_cellmath__40;
	end
end

reg [28:0] inst_cellmath__45_0_reg;
assign inst_cellmath__45 = inst_cellmath__45_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__45_0_reg <= inst_cellmath__41;
	end
end
cynw_cm_float_div_ieee_inst_cellmath__124_0_bdw410776230_bdw inst_cellmath__124_0_0(
	.inst_cellmath__124_0_out0(inst_cellmath__124),
	.inst_cellmath__124_0_in0(inst_cellmath__45),
	.inst_cellmath__124_0_in1(inst_cellmath__44),
	.inst_cellmath__124_0_in2(inst_cellmath__120[25])
	) ;

assign inst_cellmath__122 = ~inst_cellmath__124[28];
cynw_cm_float_div_ieee_inst_cellmath__125_0_bdw410776230_bdw inst_cellmath__125_0_0(
	.inst_cellmath__125_0_out0(inst_cellmath__125),
	.inst_cellmath__125_0_in0(inst_cellmath__124[27:4]),
	.inst_cellmath__125_0_in1(inst_cellmath__122)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__126_0_bdw410776230_bdw inst_cellmath__126_0_0(
	.inst_cellmath__126_0_out0(inst_cellmath__126),
	.inst_cellmath__126_0_in0(inst_cellmath__124[4:3]),
	.inst_cellmath__126_0_in1(inst_cellmath__122)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__129_0_bdw410776230_bdw inst_cellmath__129_0_0(
	.inst_cellmath__129_0_out0(inst_cellmath__129),
	.inst_cellmath__129_0_in0(inst_cellmath__126),
	.inst_cellmath__129_0_in1(inst_cellmath__125)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__127__104__bdw410776230_bdw inst_cellmath__127__104__0(
	.inst_cellmath__127__104__out0(inst_cellmath__127__104),
	.inst_cellmath__127__104__in0(inst_cellmath__124[3:0])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__127__103__bdw410776230_bdw inst_cellmath__127__103__0(
	.inst_cellmath__127__103__out0(inst_cellmath__127__103),
	.inst_cellmath__127__103__in0(inst_cellmath__124[2:0])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__127_0_bdw410776230_bdw inst_cellmath__127_0_0(
	.inst_cellmath__127_0_out0(inst_cellmath__127),
	.inst_cellmath__127_0_in0(inst_cellmath__127__104),
	.inst_cellmath__127_0_in1(inst_cellmath__127__103),
	.inst_cellmath__127_0_in2(inst_cellmath__122)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__130__105__bdw410776230_bdw inst_cellmath__130__105__0(
	.inst_cellmath__130__105__out0(inst_cellmath__130__105),
	.inst_cellmath__130__105__in0(inst_cellmath__127),
	.inst_cellmath__130__105__in1(inst_cellmath__125[0]),
	.inst_cellmath__130__105__in2(inst_cellmath__120)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__121__106__bdw410776230_bdw inst_cellmath__121__106__0(
	.inst_cellmath__121__106__out0(inst_cellmath__121__106),
	.inst_cellmath__121__106__in0(inst_cellmath__130__105),
	.inst_cellmath__121__106__in1(inst_cellmath__129[0])
	) ;

assign inst_cellmath__113__115_22_1__0 = {inst_cellmath__129[22:1],inst_cellmath__121__106};

assign inst_cellmath__113__115_22_1__1 = {inst_cellmath__134__111_22_1_,inst_cellmath__112[0]};

assign inst_cellmath__13__14 = ~accept;

reg [3:0] inst_cellmath__13_0_reg;
assign inst_cellmath__13 = inst_cellmath__13_0_reg;
always @ (posedge clk) begin
	if (inst_cellmath__13__14==1'B0) begin
		inst_cellmath__13_0_reg <= {4{1'B0}};
	end else begin
		inst_cellmath__13_0_reg <= inst_cellmath__12;
	end
end
cynw_cm_float_div_ieee_inst_cellmath__12__18__bdw410776230_bdw inst_cellmath__12__18__0(
	.inst_cellmath__12__18__out0(inst_cellmath__12__18[3:0]),
	.inst_cellmath__12__18__in0(inst_cellmath__13)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__12__19__bdw410776230_bdw inst_cellmath__12__19__0(
	.inst_cellmath__12__19__out0(inst_cellmath__12__19),
	.inst_cellmath__12__19__in0(inst_cellmath__13)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__12_0_bdw410776230_bdw inst_cellmath__12_0_0(
	.inst_cellmath__12_0_out0(inst_cellmath__12),
	.inst_cellmath__12_0_in0(inst_cellmath__12__19),
	.inst_cellmath__12_0_in1(inst_cellmath__12__18[3:0])
	) ;

assign inst_cellmath__36[0] = 1'B0;

assign inst_cellmath__36[23:1] = inst_cellmath__39__W0[22:0];
cynw_cm_float_div_ieee_inst_cellmath__46_0_bdw410776230_bdw inst_cellmath__46_0_0(
	.inst_cellmath__46_0_out0(inst_cellmath__46[24:0]),
	.inst_cellmath__46_0_in0(inst_cellmath__44[24:0]),
	.inst_cellmath__46_0_in1(inst_cellmath__11)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__47_0_bdw410776230_bdw inst_cellmath__47_0_0(
	.inst_cellmath__47_0_out0(inst_cellmath__47[24:0]),
	.inst_cellmath__47_0_in0(inst_cellmath__45[24:0]),
	.inst_cellmath__47_0_in1(inst_cellmath__11)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__48__47__bdw410776230_bdw inst_cellmath__48__47__0(
	.inst_cellmath__48__47__out0(inst_cellmath__48__46),
	.inst_cellmath__48__47__in0(inst_lookup0_cellmath__29[1:0])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__48__44__bdw410776230_bdw inst_cellmath__48__44__0(
	.inst_cellmath__48__44__out0(inst_cellmath__48__44),
	.inst_cellmath__48__44__in0(inst_lookup0_cellmath__29[2:1]),
	.inst_cellmath__48__44__in1(inst_cellmath__48__46)
	) ;

assign inst_cellmath__48_1_0__1 = {inst_cellmath__48__44,inst_lookup0_cellmath__29[0]};

assign inst_cellmath__42__49[26:0] = {inst_cellmath__46[24:0],inst_cellmath__48__44,inst_lookup0_cellmath__29[0]};

assign inst_cellmath__42__50[26:0] = {inst_cellmath__47[24:0],inst_cellmath__48__44,inst_lookup0_cellmath__29[0]};
cynw_cm_float_div_ieee_inst_cellmath__42_0_bdw410776230_bdw inst_cellmath__42_0_0(
	.inst_cellmath__42_0_out0(inst_cellmath__42[26:0]),
	.inst_cellmath__42_0_in0(inst_lookup0_cellmath__29[0]),
	.inst_cellmath__42_0_in1(inst_cellmath__48__44),
	.inst_cellmath__42_0_in2(inst_cellmath__47[24:0]),
	.inst_cellmath__42_0_in3(inst_cellmath__46[24:0]),
	.inst_cellmath__42_0_in4(inst_cellmath__32)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__50_0_bdw410776230_bdw inst_cellmath__50_0_0(
	.inst_cellmath__50_0_out0(inst_cellmath__50),
	.inst_cellmath__50_0_in0(inst_lookup0_cellmath__29[0]),
	.inst_cellmath__50_0_in1(inst_cellmath__48__44)
	) ;

assign inst_cellmath__43__53[26:0] = {inst_cellmath__46[24:0],inst_cellmath__50};

assign inst_cellmath__43__54[26:0] = {inst_cellmath__47[24:0],inst_cellmath__50};
cynw_cm_float_div_ieee_inst_cellmath__43__56__bdw410776230_bdw inst_cellmath__43__56__0(
	.inst_cellmath__43__56__out0(inst_cellmath__43__56),
	.inst_cellmath__43__56__in0(inst_lookup0_cellmath__29[0]),
	.inst_cellmath__43__56__in1(inst_cellmath__48__44)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__43__55__bdw410776230_bdw inst_cellmath__43__55__0(
	.inst_cellmath__43__55__out0(inst_cellmath__43__55),
	.inst_cellmath__43__55__in0(inst_lookup0_cellmath__29[2]),
	.inst_cellmath__43__55__in1(inst_cellmath__43__56)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__43_0_bdw410776230_bdw inst_cellmath__43_0_0(
	.inst_cellmath__43_0_out0(inst_cellmath__43[26:0]),
	.inst_cellmath__43_0_in0(inst_cellmath__50),
	.inst_cellmath__43_0_in1(inst_cellmath__47[24:0]),
	.inst_cellmath__43_0_in2(inst_cellmath__46[24:0]),
	.inst_cellmath__43_0_in3(inst_cellmath__43__55)
	) ;
cynw_cm_float_div_ieee_inst_it2_cellmath__56_2mx_bdw410776230_bdw inst_it2_cellmath__56_2mx_0(
	.inst_it2_cellmath__56_2mx_out0(inst_it2_cellmath__56),
	.inst_it2_cellmath__56_2mx_in0(inst_it2_lookup1_cellmath__55[2]),
	.inst_it2_cellmath__56_2mx_in1(inst_it2_cellmath__56__57_0[24:1])
	) ;
cynw_cm_float_div_ieee_inst_it2_cellmath__57_2mx_bdw410776230_bdw inst_it2_cellmath__57_2mx_0(
	.inst_it2_cellmath__57_2mx_out0(inst_it2_cellmath__57),
	.inst_it2_cellmath__57_2mx_in0(inst_it2_lookup1_cellmath__55[2]),
	.inst_it2_cellmath__57_2mx_in1(inst_it2_cellmath__57__61_0_0[25:2])
	) ;

assign inst_it2_cellmath__58 = ~inst_it2_lookup1_cellmath__55[2];

assign inst_it2_cellmath__60 = {inst_cellmath__36[23:0],1'B0,inst_it2_cellmath__58};

assign inst_it2_cellmath__61 = {inst_cellmath__39__W1[23:0],1'B0,inst_it2_cellmath__58};
cynw_cm_float_div_ieee_inst_fa_1820_10_bdw410776230_bdw inst_fa_1820_10_0(
	.inst_fa_1820_10_out0(inst_it2_cellmath__62__W1),
	.inst_fa_1820_10_out1(inst_it2_cellmath__62__W0[24:0]),
	.inst_fa_1820_10_in0(inst_it2_cellmath__58),
	.inst_fa_1820_10_in1(inst_it2_cellmath__56),
	.inst_fa_1820_10_in2(inst_cellmath__39__W1[23:0]),
	.inst_fa_1820_10_in3(inst_cellmath__39__W0[22:0])
	) ;

assign inst_it2_cellmath__63__67 = {inst_it2_cellmath__62__W0[24:0],1'B0};
cynw_cm_float_div_ieee_inst_fa_1839_10_bdw410776230_bdw inst_fa_1839_10_0(
	.inst_fa_1839_10_out0(inst_it2_cellmath__63__W1),
	.inst_fa_1839_10_out1(inst_it2_cellmath__63__W0[24:0]),
	.inst_fa_1839_10_in0(inst_it2_cellmath__62__W1),
	.inst_fa_1839_10_in1(inst_it2_cellmath__62__W0[24:0]),
	.inst_fa_1839_10_in2(inst_it2_cellmath__57)
	) ;

assign inst_cellmath__14[0] = 1'B0;

assign inst_cellmath__14[25:1] = inst_it2_cellmath__63__W0[24:0];
cynw_cm_float_div_ieee_inst_it2_cellmath__64__71__bdw410776230_bdw inst_it2_cellmath__64__71__0(
	.inst_it2_cellmath__64__71__out0(inst_it2_cellmath__64__70),
	.inst_it2_cellmath__64__71__in0(inst_it2_lookup1_cellmath__55[1:0])
	) ;
cynw_cm_float_div_ieee_inst_it2_cellmath__64__68__bdw410776230_bdw inst_it2_cellmath__64__68__0(
	.inst_it2_cellmath__64__68__out0(inst_it2_cellmath__64__68),
	.inst_it2_cellmath__64__68__in0(inst_it2_lookup1_cellmath__55[2:1]),
	.inst_it2_cellmath__64__68__in1(inst_it2_cellmath__64__70)
	) ;

assign inst_it2_cellmath__64_1_0__1 = {inst_it2_cellmath__64__68,inst_it2_lookup1_cellmath__55[0]};

assign inst_cellmath__40__73[28:0] = {inst_cellmath__42[26:0],inst_it2_cellmath__64__68,inst_it2_lookup1_cellmath__55[0]};

assign inst_cellmath__40__74[28:0] = {inst_cellmath__43[26:0],inst_it2_cellmath__64__68,inst_it2_lookup1_cellmath__55[0]};
cynw_cm_float_div_ieee_inst_cellmath__40_0_bdw410776230_bdw inst_cellmath__40_0_0(
	.inst_cellmath__40_0_out0(inst_cellmath__40),
	.inst_cellmath__40_0_in0(inst_it2_lookup1_cellmath__55[0]),
	.inst_cellmath__40_0_in1(inst_it2_cellmath__64__68),
	.inst_cellmath__40_0_in2(inst_it2_cellmath__58),
	.inst_cellmath__40_0_in3(inst_cellmath__43[26:0]),
	.inst_cellmath__40_0_in4(inst_cellmath__42[26:0])
	) ;
cynw_cm_float_div_ieee_inst_it2_cellmath__66_0_bdw410776230_bdw inst_it2_cellmath__66_0_0(
	.inst_it2_cellmath__66_0_out0(inst_it2_cellmath__66),
	.inst_it2_cellmath__66_0_in0(inst_it2_lookup1_cellmath__55[0]),
	.inst_it2_cellmath__66_0_in1(inst_it2_cellmath__64__68)
	) ;

assign inst_cellmath__41__77[28:0] = {inst_cellmath__42[26:0],inst_it2_cellmath__66};

assign inst_cellmath__41__78[28:0] = {inst_cellmath__43[26:0],inst_it2_cellmath__66};
cynw_cm_float_div_ieee_inst_cellmath__41__80__bdw410776230_bdw inst_cellmath__41__80__0(
	.inst_cellmath__41__80__out0(inst_cellmath__41__80),
	.inst_cellmath__41__80__in0(inst_it2_lookup1_cellmath__55[0]),
	.inst_cellmath__41__80__in1(inst_it2_cellmath__64__68)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__41__79__bdw410776230_bdw inst_cellmath__41__79__0(
	.inst_cellmath__41__79__out0(inst_cellmath__41__79),
	.inst_cellmath__41__79__in0(inst_it2_lookup1_cellmath__55[2]),
	.inst_cellmath__41__79__in1(inst_cellmath__41__80)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__41_0_bdw410776230_bdw inst_cellmath__41_0_0(
	.inst_cellmath__41_0_out0(inst_cellmath__41),
	.inst_cellmath__41_0_in0(inst_it2_cellmath__66),
	.inst_cellmath__41_0_in1(inst_cellmath__43[26:0]),
	.inst_cellmath__41_0_in2(inst_cellmath__42[26:0]),
	.inst_cellmath__41_0_in3(inst_cellmath__41__79)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__67_0_bdw410776230_bdw inst_cellmath__67_0_0(
	.inst_cellmath__67_0_out0(inst_cellmath__67[7:0]),
	.inst_cellmath__67_0_in0(inst_cellmath__9[30:23]),
	.inst_cellmath__67_0_in1(inst_cellmath__8[30:23])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__68_0_bdw410776230_bdw inst_cellmath__68_0_0(
	.inst_cellmath__68_0_out0(inst_cellmath__68),
	.inst_cellmath__68_0_in0(inst_cellmath__9[30:23]),
	.inst_cellmath__68_0_in1(inst_cellmath__8[30:23])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__69__82__bdw410776230_bdw inst_cellmath__69__82__0(
	.inst_cellmath__69__82__out0(inst_cellmath__69__82),
	.inst_cellmath__69__82__in0(inst_cellmath__68[7:0])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__69__81__bdw410776230_bdw inst_cellmath__69__81__0(
	.inst_cellmath__69__81__out0(inst_cellmath__69__81),
	.inst_cellmath__69__81__in0(inst_cellmath__69__82),
	.inst_cellmath__69__81__in1(inst_cellmath__68[8])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__69_0_bdw410776230_bdw inst_cellmath__69_0_0(
	.inst_cellmath__69_0_out0(inst_cellmath__69),
	.inst_cellmath__69_0_in0(inst_cellmath__69__81),
	.inst_cellmath__69_0_in1(inst_cellmath__68[9])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__70__83__bdw410776230_bdw inst_cellmath__70__83__0(
	.inst_cellmath__70__83__out0(inst_cellmath__70__83),
	.inst_cellmath__70__83__in0(inst_cellmath__68[8:0])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__70_0_bdw410776230_bdw inst_cellmath__70_0_0(
	.inst_cellmath__70_0_out0(inst_cellmath__70),
	.inst_cellmath__70_0_in0(inst_cellmath__70__83),
	.inst_cellmath__70_0_in1(inst_cellmath__68[9])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__71_0_bdw410776230_bdw inst_cellmath__71_0_0(
	.inst_cellmath__71_0_out0(inst_cellmath__71),
	.inst_cellmath__71_0_in0(inst_cellmath__68)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__72_0_bdw410776230_bdw inst_cellmath__72_0_0(
	.inst_cellmath__72_0_out0(inst_cellmath__72),
	.inst_cellmath__72_0_in0(inst_cellmath__68[8:0])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__73_0_bdw410776230_bdw inst_cellmath__73_0_0(
	.inst_cellmath__73_0_out0(inst_cellmath__73),
	.inst_cellmath__73_0_in0(inst_cellmath__71),
	.inst_cellmath__73_0_in1(inst_cellmath__69)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__74_0_bdw410776230_bdw inst_cellmath__74_0_0(
	.inst_cellmath__74_0_out0(inst_cellmath__74),
	.inst_cellmath__74_0_in0(inst_cellmath__72),
	.inst_cellmath__74_0_in1(inst_cellmath__70)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__75_0_bdw410776230_bdw inst_cellmath__75_0_0(
	.inst_cellmath__75_0_out0(inst_cellmath__75),
	.inst_cellmath__75_0_in0(inst_cellmath__8[30:23])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__76_0_bdw410776230_bdw inst_cellmath__76_0_0(
	.inst_cellmath__76_0_out0(inst_cellmath__76),
	.inst_cellmath__76_0_in0(inst_cellmath__9[30:23])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__77_0_bdw410776230_bdw inst_cellmath__77_0_0(
	.inst_cellmath__77_0_out0(inst_cellmath__77),
	.inst_cellmath__77_0_in0(inst_cellmath__8[22:0])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__78_0_bdw410776230_bdw inst_cellmath__78_0_0(
	.inst_cellmath__78_0_out0(inst_cellmath__78),
	.inst_cellmath__78_0_in0(inst_cellmath__9[22:0])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__79_1_bdw410776230_bdw inst_cellmath__79_1_0(
	.inst_cellmath__79_1_out0(inst_cellmath__79),
	.inst_cellmath__79_1_in0(inst_cellmath__77),
	.inst_cellmath__79_1_in1(inst_cellmath__75)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__80_0_bdw410776230_bdw inst_cellmath__80_0_0(
	.inst_cellmath__80_0_out0(inst_cellmath__80),
	.inst_cellmath__80_0_in0(inst_cellmath__78),
	.inst_cellmath__80_0_in1(inst_cellmath__76)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__83_0_bdw410776230_bdw inst_cellmath__83_0_0(
	.inst_cellmath__83_0_out0(inst_cellmath__83),
	.inst_cellmath__83_0_in0(inst_cellmath__77),
	.inst_cellmath__83_0_in1(inst_cellmath__75)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__84_0_bdw410776230_bdw inst_cellmath__84_0_0(
	.inst_cellmath__84_0_out0(inst_cellmath__84),
	.inst_cellmath__84_0_in0(inst_cellmath__78),
	.inst_cellmath__84_0_in1(inst_cellmath__76)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__85__85__bdw410776230_bdw inst_cellmath__85__85__0(
	.inst_cellmath__85__85__out0(inst_cellmath__85),
	.inst_cellmath__85__85__in0(inst_cellmath__8[30:23])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__86__86__bdw410776230_bdw inst_cellmath__86__86__0(
	.inst_cellmath__86__86__out0(inst_cellmath__86),
	.inst_cellmath__86__86__in0(inst_cellmath__9[30:23])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__87__87__bdw410776230_bdw inst_cellmath__87__87__0(
	.inst_cellmath__87__87__out0(inst_cellmath__87__87),
	.inst_cellmath__87__87__in0(inst_cellmath__84),
	.inst_cellmath__87__87__in1(inst_cellmath__83)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__87__88__bdw410776230_bdw inst_cellmath__87__88__0(
	.inst_cellmath__87__88__out0(inst_cellmath__87__88),
	.inst_cellmath__87__88__in0(inst_cellmath__86),
	.inst_cellmath__87__88__in1(inst_cellmath__85)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__87_0_bdw410776230_bdw inst_cellmath__87_0_0(
	.inst_cellmath__87_0_out0(inst_cellmath__87),
	.inst_cellmath__87_0_in0(inst_cellmath__87__88),
	.inst_cellmath__87_0_in1(inst_cellmath__87__87),
	.inst_cellmath__87_0_in2(inst_cellmath__80),
	.inst_cellmath__87_0_in3(inst_cellmath__79)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__88_0_bdw410776230_bdw inst_cellmath__88_0_0(
	.inst_cellmath__88_0_out0(inst_cellmath__88),
	.inst_cellmath__88_0_in0(inst_cellmath__86),
	.inst_cellmath__88_0_in1(inst_cellmath__83)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__89_0_bdw410776230_bdw inst_cellmath__89_0_0(
	.inst_cellmath__89_0_out0(inst_cellmath__89),
	.inst_cellmath__89_0_in0(inst_cellmath__85),
	.inst_cellmath__89_0_in1(inst_cellmath__84)
	) ;

assign inst_cellmath__79_0 = {inst_cellmath__79,inst_cellmath__80};

assign inst_cellmath__90_1 = {inst_cellmath__9[21:0],inst_cellmath__9[31]};

assign inst_cellmath__90_2 = {inst_cellmath__8[21:0],inst_cellmath__8[31]};
cynw_cm_float_div_ieee_inst_cellmath__91_0_bdw410776230_bdw inst_cellmath__91_0_0(
	.inst_cellmath__91_0_out0(inst_cellmath__91),
	.inst_cellmath__91_0_in0(inst_cellmath__9[31]),
	.inst_cellmath__91_0_in1(inst_cellmath__8[31])
	) ;
cynw_cm_float_div_ieee_inst_cellmath__92__95__bdw410776230_bdw inst_cellmath__92__95__0(
	.inst_cellmath__92__95__out0(inst_cellmath__92__95),
	.inst_cellmath__92__95__in0(inst_cellmath__91),
	.inst_cellmath__92__95__in1(inst_cellmath__87)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__90_2WWMM_bdw410776230_bdw inst_cellmath__90_2WWMM_0(
	.inst_cellmath__90_2WWMM_out0(inst_cellmath__90_0),
	.inst_cellmath__90_2WWMM_in0(inst_cellmath__9[31]),
	.inst_cellmath__90_2WWMM_in1(inst_cellmath__9[21:0]),
	.inst_cellmath__90_2WWMM_in2(inst_cellmath__92__95),
	.inst_cellmath__90_2WWMM_in3(inst_cellmath__8[31]),
	.inst_cellmath__90_2WWMM_in4(inst_cellmath__8[21:0]),
	.inst_cellmath__90_2WWMM_in5(inst_cellmath__80),
	.inst_cellmath__90_2WWMM_in6(inst_cellmath__79)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__96_0_bdw410776230_bdw inst_cellmath__96_0_0(
	.inst_cellmath__96_0_out0(inst_cellmath__96),
	.inst_cellmath__96_0_in0(inst_cellmath__12)
	) ;

reg  inst_cellmath__98_0_reg;
assign inst_cellmath__98 = inst_cellmath__98_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__98_0_reg <= inst_cellmath__90_0[0];
	end
end

reg  inst_cellmath__100_0_reg;
assign inst_cellmath__100 = inst_cellmath__100_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__100_0_reg <= inst_cellmath__87;
	end
end

reg  inst_cellmath__101_0_reg;
assign inst_cellmath__101 = inst_cellmath__101_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__101_0_reg <= inst_cellmath__88;
	end
end

reg  inst_cellmath__102_0_reg;
assign inst_cellmath__102 = inst_cellmath__102_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__102_0_reg <= inst_cellmath__89;
	end
end

reg  inst_cellmath__103_0_reg;
assign inst_cellmath__103 = inst_cellmath__103_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__103_0_reg <= inst_cellmath__69;
	end
end

reg  inst_cellmath__104_0_reg;
assign inst_cellmath__104 = inst_cellmath__104_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__104_0_reg <= inst_cellmath__73;
	end
end

reg  inst_cellmath__105_0_reg;
assign inst_cellmath__105 = inst_cellmath__105_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__105_0_reg <= inst_cellmath__70;
	end
end

reg  inst_cellmath__106_0_reg;
assign inst_cellmath__106 = inst_cellmath__106_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__106_0_reg <= inst_cellmath__74;
	end
end

reg [7:0] inst_cellmath__110_0_reg;
assign inst_cellmath__110 = inst_cellmath__110_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__110_0_reg <= inst_cellmath__67[7:0];
	end
end

reg [7:0] inst_cellmath__111_0_reg;
assign inst_cellmath__111 = inst_cellmath__111_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__111_0_reg <= inst_cellmath__68[7:0];
	end
end

reg  inst_cellmath__109_0_reg;
assign inst_cellmath__109 = inst_cellmath__109_0_reg;
always @ (posedge clk) begin
	begin
		inst_cellmath__109_0_reg <= inst_cellmath__96;
	end
end
cynw_cm_float_div_ieee_inst_cellmath__133__109__bdw410776230_bdw inst_cellmath__133__109__0(
	.inst_cellmath__133__109__out0(inst_cellmath__133__109),
	.inst_cellmath__133__109__in0(inst_cellmath__103),
	.inst_cellmath__133__109__in1(inst_cellmath__101),
	.inst_cellmath__133__109__in2(inst_cellmath__100)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__135_0_bdw410776230_bdw inst_cellmath__135_0_0(
	.inst_cellmath__135_0_out0(inst_cellmath__135),
	.inst_cellmath__135_0_in0(inst_cellmath__105),
	.inst_cellmath__135_0_in1(inst_cellmath__103),
	.inst_cellmath__135_0_in2(inst_cellmath__102),
	.inst_cellmath__135_0_in3(inst_cellmath__101),
	.inst_cellmath__135_0_in4(inst_cellmath__100)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__136_0_bdw410776230_bdw inst_cellmath__136_0_0(
	.inst_cellmath__136_0_out0(inst_cellmath__136),
	.inst_cellmath__136_0_in0(inst_cellmath__106),
	.inst_cellmath__136_0_in1(inst_cellmath__104),
	.inst_cellmath__136_0_in2(inst_cellmath__102),
	.inst_cellmath__136_0_in3(inst_cellmath__101),
	.inst_cellmath__136_0_in4(inst_cellmath__100)
	) ;
cynw_cm_float_div_ieee_inst_cellmath__137_2_bdw410776230_bdw inst_cellmath__137_2_0(
	.inst_cellmath__137_2_out0(inst_cellmath__137),
	.inst_cellmath__137_2_in0(inst_cellmath__136),
	.inst_cellmath__137_2_in1(inst_cellmath__135),
	.inst_cellmath__137_2_in2(inst_cellmath__122)
	) ;

assign inst_cellmath__137_0 = {inst_cellmath__137,inst_cellmath__122};
cynw_cm_float_div_ieee_inst_cellmath__113__113__bdw410776230_bdw inst_cellmath__113__113__0(
	.inst_cellmath__113__113__out0(inst_cellmath__113__113),
	.inst_cellmath__113__113__in0(inst_cellmath__137),
	.inst_cellmath__113__113__in1(inst_cellmath__133__109),
	.inst_cellmath__113__113__in2(inst_cellmath__122),
	.inst_cellmath__113__113__in3(inst_cellmath__111),
	.inst_cellmath__113__113__in4(inst_cellmath__110)
	) ;

assign inst_cellmath__137_1 = {inst_cellmath__137,inst_cellmath__100};
cynw_cm_float_div_ieee_inst_cellmath__113__115__U_2WWMM_bdw410776230_bdw inst_cellmath__113__115__U_2WWMM_0(
	.inst_cellmath__113__115__U_2WWMM_out0(inst_cellmath__113__115_22_1_),
	.inst_cellmath__113__115__U_2WWMM_in0(inst_cellmath__137),
	.inst_cellmath__113__115__U_2WWMM_in1(inst_cellmath__129[22:1]),
	.inst_cellmath__113__115__U_2WWMM_in2(inst_cellmath__121__106),
	.inst_cellmath__113__115__U_2WWMM_in3(inst_cellmath__112),
	.inst_cellmath__113__115__U_2WWMM_in4(inst_cellmath__100)
	) ;

assign inst_cellmath__113 = {inst_cellmath__98,inst_cellmath__113__113,inst_cellmath__113__115_22_1_};
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__23_0_bdw410776230_bdw (
	inst_cellmath__23_0_out0,
	inst_cellmath__23_0_in0,
	inst_cellmath__23_0_in1
	); /* architecture "behavioural" */ 
output [4:0] inst_cellmath__23_0_out0;
input [25:21] inst_cellmath__23_0_in0,
	inst_cellmath__23_0_in1;

assign inst_cellmath__23_0_out0 = 
	+(inst_cellmath__23_0_in1)
	+(inst_cellmath__23_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__22_0_bdw410776230_bdw (
	inst_cellmath__22_0_out0,
	inst_cellmath__22_0_in0,
	inst_cellmath__22_0_in1
	); /* architecture "behavioural" */ 
output [4:0] inst_cellmath__22_0_out0;
input [22:20] inst_cellmath__22_0_in0;
input [2:0] inst_cellmath__22_0_in1;
wire [4:0] inst_cellmath__22__27,
	inst_cellmath__22__28;

assign inst_cellmath__22__27 = {2'B01,inst_cellmath__22_0_in0};

assign inst_cellmath__22__28 = {2'B10,inst_cellmath__22_0_in1};

assign inst_cellmath__22_0_out0 = 
	+(inst_cellmath__22__27)
	+(inst_cellmath__22__28);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__24_0_bdw410776230_bdw (
	inst_cellmath__24_0_out0,
	inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1,
	inst_cellmath__24_0_in2
	); /* architecture "behavioural" */ 
output [4:0] inst_cellmath__24_0_out0;
input [4:0] inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1;
input  inst_cellmath__24_0_in2;

reg [4:0] inst_cellmath__24_0_out0_tmp_0;
assign inst_cellmath__24_0_out0 = inst_cellmath__24_0_out0_tmp_0;
always @ (inst_cellmath__24_0_in2 or inst_cellmath__24_0_in0 or inst_cellmath__24_0_in1) begin
	case (inst_cellmath__24_0_in2)
		1'B0 : inst_cellmath__24_0_out0_tmp_0 = inst_cellmath__24_0_in0 ;
		default : inst_cellmath__24_0_out0_tmp_0 = inst_cellmath__24_0_in1 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_lookup0_cellmath__29_0_bdw410776230_bdw (
	inst_lookup0_cellmath__29_0_out0,
	inst_lookup0_cellmath__29_0_in0,
	inst_lookup0_cellmath__29_0_in1
	); /* architecture "behavioural" */ 
output [2:0] inst_lookup0_cellmath__29_0_out0;
input [22:21] inst_lookup0_cellmath__29_0_in0;
input [4:0] inst_lookup0_cellmath__29_0_in1;
wire [6:0] inst_lookup0_cellmath__27;

assign inst_lookup0_cellmath__27 = {inst_lookup0_cellmath__29_0_in1,inst_lookup0_cellmath__29_0_in0};

reg [2:0] inst_lookup0_cellmath__29_0_out0_tmp_0;
assign inst_lookup0_cellmath__29_0_out0 = inst_lookup0_cellmath__29_0_out0_tmp_0;
always @ (inst_lookup0_cellmath__27) begin
	case (inst_lookup0_cellmath__27)
		7'B0000100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0000101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0001000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0001001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0001010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0001011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0001100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0001101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0001110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0001111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0010000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0010001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0010010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0010011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0010100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0010101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0010110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0010111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B001 ;
		7'B0011000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0011001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0011010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0011011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0011100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0011101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0011110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0011111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0100000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0100001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0100010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0100011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B010 ;
		7'B0100100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0100101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0100110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0100111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0101000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0101001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0101010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0101011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0101100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0101101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0101110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0101111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0110000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0110001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0110010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0110011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0110100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0110101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0110110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0110111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0111000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0111001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0111010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0111011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0111100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0111101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0111110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B0111111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1000000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1000001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1000010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1000011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1000100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1000101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1000110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1000111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1001000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1001001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1001010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1001011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1001100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1001101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1001110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1001111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1010000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B011 ;
		7'B1010001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1010010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1010011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1010100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1010101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1010110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1010111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1011000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1011001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1011010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1011011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1011100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1011101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1011110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1011111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1100000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1100001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1100010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1100011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1100100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B111 ;
		7'B1100101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1100110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1100111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1101000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1101001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1101010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1101011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1101100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1101101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B110 ;
		7'B1101110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1101111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1110000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1110001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1110010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1110011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1110100 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1110101 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1110110 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1110111 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1111000 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1111001 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1111010 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		7'B1111011 : inst_lookup0_cellmath__29_0_out0_tmp_0 = 3'B101 ;
		default : inst_lookup0_cellmath__29_0_out0_tmp_0 = {3{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__30__31__bdw410776230_bdw (
	inst_cellmath__30__31__out0,
	inst_cellmath__30__31__in0,
	inst_cellmath__30__31__in1
	); /* architecture "behavioural" */ 
output [24:0] inst_cellmath__30__31__out0;
input [0:0] inst_cellmath__30__31__in0;
input [22:0] inst_cellmath__30__31__in1;
wire [24:0] inst_cellmath__19__21_25_1__0_1;

assign inst_cellmath__19__21_25_1__0_1 = {1'B1,inst_cellmath__30__31__in1,1'B0};

reg [24:0] inst_cellmath__30__31__out0_tmp_0;
assign inst_cellmath__30__31__out0 = inst_cellmath__30__31__out0_tmp_0;
always @ (inst_cellmath__30__31__in0 or inst_cellmath__19__21_25_1__0_1) begin
	case (inst_cellmath__30__31__in0)
		1'B1 : inst_cellmath__30__31__out0_tmp_0 = inst_cellmath__19__21_25_1__0_1 ;
		default : inst_cellmath__30__31__out0_tmp_0 = {25{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__31__35__bdw410776230_bdw (
	inst_cellmath__31__35__out0,
	inst_cellmath__31__35__in0,
	inst_cellmath__31__35__in1
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__31__35__out0;
input [1:1] inst_cellmath__31__35__in0;
input [22:0] inst_cellmath__31__35__in1;
wire [25:0] inst_cellmath__31__37_0_0;

assign inst_cellmath__31__37_0_0 = {1'B1,inst_cellmath__31__35__in1,2'B00};

reg [25:0] inst_cellmath__31__35__out0_tmp_0;
assign inst_cellmath__31__35__out0 = inst_cellmath__31__35__out0_tmp_0;
always @ (inst_cellmath__31__35__in0 or inst_cellmath__31__37_0_0) begin
	case (inst_cellmath__31__35__in0)
		1'B1 : inst_cellmath__31__35__out0_tmp_0 = inst_cellmath__31__37_0_0 ;
		default : inst_cellmath__31__35__out0_tmp_0 = {26{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__20_0_bdw410776230_bdw (
	inst_cellmath__20_0_out0,
	inst_cellmath__20_0_in0,
	inst_cellmath__20_0_in1,
	inst_cellmath__20_0_in2
	); /* architecture "behavioural" */ 
output [23:0] inst_cellmath__20_0_out0;
input [22:0] inst_cellmath__20_0_in0;
input [23:0] inst_cellmath__20_0_in1;
input  inst_cellmath__20_0_in2;
wire [25:0] inst_cellmath__20__23,
	inst_cellmath__18__20;

assign inst_cellmath__18__20[23:0] = {inst_cellmath__20_0_in0,1'B0};

assign inst_cellmath__20__23[23:0] = {inst_cellmath__18__20[23:1],1'B1};

reg [23:0] inst_cellmath__20_0_out0_tmp_0;
assign inst_cellmath__20_0_out0 = inst_cellmath__20_0_out0_tmp_0;
always @ (inst_cellmath__20_0_in2 or inst_cellmath__20_0_in1 or inst_cellmath__20__23[23:0]) begin
	case (inst_cellmath__20_0_in2)
		1'B0 : inst_cellmath__20_0_out0_tmp_0 = inst_cellmath__20_0_in1 ;
		default : inst_cellmath__20_0_out0_tmp_0 = inst_cellmath__20__23[23:0] ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__21_0_bdw410776230_bdw (
	inst_cellmath__21_0_out0,
	inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1,
	inst_cellmath__21_0_in2
	); /* architecture "behavioural" */ 
output [23:0] inst_cellmath__21_0_out0;
input [22:0] inst_cellmath__21_0_in0;
input [23:0] inst_cellmath__21_0_in1;
input  inst_cellmath__21_0_in2;
wire [23:0] inst_cellmath__19__21_24_1_;

assign inst_cellmath__19__21_24_1_ = {inst_cellmath__21_0_in0,1'B0};

reg [23:0] inst_cellmath__21_0_out0_tmp_0;
assign inst_cellmath__21_0_out0 = inst_cellmath__21_0_out0_tmp_0;
always @ (inst_cellmath__21_0_in2 or inst_cellmath__21_0_in1 or inst_cellmath__19__21_24_1_) begin
	case (inst_cellmath__21_0_in2)
		1'B0 : inst_cellmath__21_0_out0_tmp_0 = inst_cellmath__21_0_in1 ;
		default : inst_cellmath__21_0_out0_tmp_0 = ~inst_cellmath__19__21_24_1_ ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__30_2mx_bdw410776230_bdw (
	inst_cellmath__30_2mx_out0,
	inst_cellmath__30_2mx_in0,
	inst_cellmath__30_2mx_in1
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__30_2mx_out0;
input [2:2] inst_cellmath__30_2mx_in0;
input [24:1] inst_cellmath__30_2mx_in1;
wire [25:0] inst_cellmath__30__31_1_0,
	inst_cellmath__30__31_1_1;

assign inst_cellmath__30__31_1_0 = {1'B0,inst_cellmath__30_2mx_in1,1'B0};

assign inst_cellmath__30__31_1_1 = {1'B0,inst_cellmath__30_2mx_in1,1'B0};

reg [25:0] inst_cellmath__30_2mx_out0_tmp_0;
assign inst_cellmath__30_2mx_out0 = inst_cellmath__30_2mx_out0_tmp_0;
always @ (inst_cellmath__30_2mx_in0 or inst_cellmath__30__31_1_0 or inst_cellmath__30__31_1_1) begin
	case (inst_cellmath__30_2mx_in0)
		1'B0 : inst_cellmath__30_2mx_out0_tmp_0 = ~inst_cellmath__30__31_1_0 ;
		default : inst_cellmath__30_2mx_out0_tmp_0 = inst_cellmath__30__31_1_1 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_fa_1033_10_bdw410776230_bdw (
	inst_fa_1033_10_out0,
	inst_fa_1033_10_out1,
	inst_fa_1033_10_in0,
	inst_fa_1033_10_in1,
	inst_fa_1033_10_in2,
	inst_fa_1033_10_in3
	); /* architecture "behavioural" */ 
output [25:0] inst_fa_1033_10_out0;
output [24:0] inst_fa_1033_10_out1;
input  inst_fa_1033_10_in0;
input [25:0] inst_fa_1033_10_in1;
input [23:0] inst_fa_1033_10_in2,
	inst_fa_1033_10_in3;
wire [25:0] inst_cellmath__34,
	inst_cellmath__35;

assign inst_cellmath__34 = {inst_fa_1033_10_in3,1'B0,inst_fa_1033_10_in0};

assign inst_cellmath__35 = {inst_fa_1033_10_in2,1'B0,inst_fa_1033_10_in0};

assign inst_fa_1033_10_out0 = (inst_cellmath__34 ^ inst_cellmath__35) ^ inst_fa_1033_10_in1;
assign inst_fa_1033_10_out1 = (inst_cellmath__34 & inst_cellmath__35) | (inst_fa_1033_10_in1 & (inst_cellmath__34 | inst_cellmath__35));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__31_2mx_bdw410776230_bdw (
	inst_cellmath__31_2mx_out0,
	inst_cellmath__31_2mx_in0,
	inst_cellmath__31_2mx_in1
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__31_2mx_out0;
input [2:2] inst_cellmath__31_2mx_in0;
input [25:2] inst_cellmath__31_2mx_in1;
wire [25:0] inst_cellmath__31__35_1_0,
	inst_cellmath__31__35_1_1;
wire [24:0] inst_cellmath__31__35_0_25_1__0_1,
	inst_cellmath__31__35_0_25_1__0_0;

assign inst_cellmath__31__35_0_25_1__0_1 = {inst_cellmath__31_2mx_in1,1'B0};

assign inst_cellmath__31__35_1_0 = {inst_cellmath__31__35_0_25_1__0_1,1'B0};

assign inst_cellmath__31__35_0_25_1__0_0 = {inst_cellmath__31_2mx_in1,1'B0};

assign inst_cellmath__31__35_1_1 = {inst_cellmath__31__35_0_25_1__0_0,1'B0};

reg [25:0] inst_cellmath__31_2mx_out0_tmp_0;
assign inst_cellmath__31_2mx_out0 = inst_cellmath__31_2mx_out0_tmp_0;
always @ (inst_cellmath__31_2mx_in0 or inst_cellmath__31__35_1_0 or inst_cellmath__31__35_1_1) begin
	case (inst_cellmath__31_2mx_in0)
		1'B0 : inst_cellmath__31_2mx_out0_tmp_0 = ~inst_cellmath__31__35_1_0 ;
		default : inst_cellmath__31_2mx_out0_tmp_0 = inst_cellmath__31__35_1_1 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_fa_1052_10_bdw410776230_bdw (
	inst_fa_1052_10_out0,
	inst_fa_1052_10_out1,
	inst_fa_1052_10_in0,
	inst_fa_1052_10_in1,
	inst_fa_1052_10_in2
	); /* architecture "behavioural" */ 
output [25:0] inst_fa_1052_10_out0;
output [24:0] inst_fa_1052_10_out1;
input [25:0] inst_fa_1052_10_in0;
input [24:0] inst_fa_1052_10_in1;
input [25:0] inst_fa_1052_10_in2;
wire [25:0] inst_cellmath__39__41;

assign inst_cellmath__39__41 = {inst_fa_1052_10_in1,1'B0};

assign inst_fa_1052_10_out0 = (inst_fa_1052_10_in0 ^ inst_cellmath__39__41) ^ inst_fa_1052_10_in2;
assign inst_fa_1052_10_out1 = (inst_fa_1052_10_in0 & inst_cellmath__39__41) | (inst_fa_1052_10_in2 & (inst_fa_1052_10_in0 | inst_cellmath__39__41));
endmodule

module cynw_cm_float_div_ieee_inst_it2_cellmath__51_0_bdw410776230_bdw (
	inst_it2_cellmath__51_0_out0,
	inst_it2_cellmath__51_0_in0,
	inst_it2_cellmath__51_0_in1
	); /* architecture "behavioural" */ 
output [4:0] inst_it2_cellmath__51_0_out0;
input [25:21] inst_it2_cellmath__51_0_in0;
input [24:20] inst_it2_cellmath__51_0_in1;

assign inst_it2_cellmath__51_0_out0 = 
	+(inst_it2_cellmath__51_0_in1)
	+(inst_it2_cellmath__51_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_it2_lookup1_cellmath__55_0_bdw410776230_bdw (
	inst_it2_lookup1_cellmath__55_0_out0,
	inst_it2_lookup1_cellmath__55_0_in0,
	inst_it2_lookup1_cellmath__55_0_in1
	); /* architecture "behavioural" */ 
output [2:0] inst_it2_lookup1_cellmath__55_0_out0;
input [4:0] inst_it2_lookup1_cellmath__55_0_in0;
input [22:21] inst_it2_lookup1_cellmath__55_0_in1;
wire [6:0] inst_it2_lookup1_cellmath__53;

assign inst_it2_lookup1_cellmath__53 = {inst_it2_lookup1_cellmath__55_0_in0,inst_it2_lookup1_cellmath__55_0_in1};

reg [2:0] inst_it2_lookup1_cellmath__55_0_out0_tmp_0;
assign inst_it2_lookup1_cellmath__55_0_out0 = inst_it2_lookup1_cellmath__55_0_out0_tmp_0;
always @ (inst_it2_lookup1_cellmath__53) begin
	case (inst_it2_lookup1_cellmath__53)
		7'B0000100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0000101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0001000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0001001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0001010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0001011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0001100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0001101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0001110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0001111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0010000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0010001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0010010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0010011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0010100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0010101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0010110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0010111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B001 ;
		7'B0011000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0011001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0011010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0011011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0011100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0011101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0011110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0011111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0100000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0100001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0100010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0100011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B010 ;
		7'B0100100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0100101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0100110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0100111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0101000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0101001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0101010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0101011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0101100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0101101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0101110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0101111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0110000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0110001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0110010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0110011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0110100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0110101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0110110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0110111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0111000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0111001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0111010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0111011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0111100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0111101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0111110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B0111111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1000000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1000001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1000010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1000011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1000100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1000101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1000110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1000111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1001000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1001001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1001010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1001011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1001100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1001101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1001110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1001111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1010000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B011 ;
		7'B1010001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1010010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1010011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1010100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1010101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1010110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1010111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1011000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1011001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1011010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1011011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1011100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1011101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1011110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1011111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1100000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1100001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1100010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1100011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1100100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B111 ;
		7'B1100101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1100110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1100111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1101000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1101001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1101010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1101011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1101100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1101101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B110 ;
		7'B1101110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1101111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1110000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1110001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1110010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1110011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1110100 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1110101 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1110110 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1110111 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1111000 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1111001 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1111010 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		7'B1111011 : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = 3'B101 ;
		default : inst_it2_lookup1_cellmath__55_0_out0_tmp_0 = {3{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_it2_cellmath__56__57__bdw410776230_bdw (
	inst_it2_cellmath__56__57__out0,
	inst_it2_cellmath__56__57__in0,
	inst_it2_cellmath__56__57__in1
	); /* architecture "behavioural" */ 
output [24:0] inst_it2_cellmath__56__57__out0;
input [0:0] inst_it2_cellmath__56__57__in0;
input [22:0] inst_it2_cellmath__56__57__in1;
wire [24:0] inst_cellmath__19__21_25_1__0_0;

assign inst_cellmath__19__21_25_1__0_0 = {1'B1,inst_it2_cellmath__56__57__in1,1'B0};

reg [24:0] inst_it2_cellmath__56__57__out0_tmp_0;
assign inst_it2_cellmath__56__57__out0 = inst_it2_cellmath__56__57__out0_tmp_0;
always @ (inst_it2_cellmath__56__57__in0 or inst_cellmath__19__21_25_1__0_0) begin
	case (inst_it2_cellmath__56__57__in0)
		1'B1 : inst_it2_cellmath__56__57__out0_tmp_0 = inst_cellmath__19__21_25_1__0_0 ;
		default : inst_it2_cellmath__56__57__out0_tmp_0 = {25{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_it2_cellmath__57__61__bdw410776230_bdw (
	inst_it2_cellmath__57__61__out0,
	inst_it2_cellmath__57__61__in0,
	inst_it2_cellmath__57__61__in1
	); /* architecture "behavioural" */ 
output [25:0] inst_it2_cellmath__57__61__out0;
input [1:1] inst_it2_cellmath__57__61__in0;
input [22:0] inst_it2_cellmath__57__61__in1;
wire [25:0] inst_cellmath__31__37_0_1;

assign inst_cellmath__31__37_0_1 = {1'B1,inst_it2_cellmath__57__61__in1,2'B00};

reg [25:0] inst_it2_cellmath__57__61__out0_tmp_0;
assign inst_it2_cellmath__57__61__out0 = inst_it2_cellmath__57__61__out0_tmp_0;
always @ (inst_it2_cellmath__57__61__in0 or inst_cellmath__31__37_0_1) begin
	case (inst_it2_cellmath__57__61__in0)
		1'B1 : inst_it2_cellmath__57__61__out0_tmp_0 = inst_cellmath__31__37_0_1 ;
		default : inst_it2_cellmath__57__61__out0_tmp_0 = {26{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__120_0_bdw410776230_bdw (
	inst_cellmath__120_0_out0,
	inst_cellmath__120_0_in0,
	inst_cellmath__120_0_in1
	); /* architecture "behavioural" */ 
output [25:0] inst_cellmath__120_0_out0;
input [25:0] inst_cellmath__120_0_in0,
	inst_cellmath__120_0_in1;

assign inst_cellmath__120_0_out0 = 
	+(inst_cellmath__120_0_in1)
	+(inst_cellmath__120_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__124_0_bdw410776230_bdw (
	inst_cellmath__124_0_out0,
	inst_cellmath__124_0_in0,
	inst_cellmath__124_0_in1,
	inst_cellmath__124_0_in2
	); /* architecture "behavioural" */ 
output [28:0] inst_cellmath__124_0_out0;
input [28:0] inst_cellmath__124_0_in0,
	inst_cellmath__124_0_in1;
input [25:25] inst_cellmath__124_0_in2;

reg [28:0] inst_cellmath__124_0_out0_tmp_0;
assign inst_cellmath__124_0_out0 = inst_cellmath__124_0_out0_tmp_0;
always @ (inst_cellmath__124_0_in2 or inst_cellmath__124_0_in1 or inst_cellmath__124_0_in0) begin
	case (inst_cellmath__124_0_in2)
		1'B0 : inst_cellmath__124_0_out0_tmp_0 = inst_cellmath__124_0_in1 ;
		default : inst_cellmath__124_0_out0_tmp_0 = inst_cellmath__124_0_in0 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__125_0_bdw410776230_bdw (
	inst_cellmath__125_0_out0,
	inst_cellmath__125_0_in0,
	inst_cellmath__125_0_in1
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__125_0_out0;
input [27:4] inst_cellmath__125_0_in0;
input  inst_cellmath__125_0_in1;

reg [22:0] inst_cellmath__125_0_out0_tmp_0;
assign inst_cellmath__125_0_out0 = inst_cellmath__125_0_out0_tmp_0;
always @ (inst_cellmath__125_0_in1 or inst_cellmath__125_0_in0[27:5] or inst_cellmath__125_0_in0[26:4]) begin
	case (inst_cellmath__125_0_in1)
		1'B0 : inst_cellmath__125_0_out0_tmp_0 = inst_cellmath__125_0_in0[27:5] ;
		default : inst_cellmath__125_0_out0_tmp_0 = inst_cellmath__125_0_in0[26:4] ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__126_0_bdw410776230_bdw (
	inst_cellmath__126_0_out0,
	inst_cellmath__126_0_in0,
	inst_cellmath__126_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__126_0_out0;
input [4:3] inst_cellmath__126_0_in0;
input  inst_cellmath__126_0_in1;

reg [0:0] inst_cellmath__126_0_out0_tmp_0;
assign inst_cellmath__126_0_out0 = inst_cellmath__126_0_out0_tmp_0;
always @ (inst_cellmath__126_0_in1 or inst_cellmath__126_0_in0[4] or inst_cellmath__126_0_in0[3]) begin
	case (inst_cellmath__126_0_in1)
		1'B0 : inst_cellmath__126_0_out0_tmp_0 = inst_cellmath__126_0_in0[4] ;
		default : inst_cellmath__126_0_out0_tmp_0 = inst_cellmath__126_0_in0[3] ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__129_0_bdw410776230_bdw (
	inst_cellmath__129_0_out0,
	inst_cellmath__129_0_in0,
	inst_cellmath__129_0_in1
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__129_0_out0;
input  inst_cellmath__129_0_in0;
input [22:0] inst_cellmath__129_0_in1;

assign inst_cellmath__129_0_out0 = 
	+(inst_cellmath__129_0_in1)
	+(inst_cellmath__129_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__127__104__bdw410776230_bdw (
	inst_cellmath__127__104__out0,
	inst_cellmath__127__104__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__127__104__out0;
input [3:0] inst_cellmath__127__104__in0;

assign inst_cellmath__127__104__out0 = 
	(inst_cellmath__127__104__in0[0])
	|(inst_cellmath__127__104__in0[1])
	|(inst_cellmath__127__104__in0[2])
	|(inst_cellmath__127__104__in0[3]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__127__103__bdw410776230_bdw (
	inst_cellmath__127__103__out0,
	inst_cellmath__127__103__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__127__103__out0;
input [2:0] inst_cellmath__127__103__in0;

assign inst_cellmath__127__103__out0 = 
	(inst_cellmath__127__103__in0[0])
	|(inst_cellmath__127__103__in0[1])
	|(inst_cellmath__127__103__in0[2]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__127_0_bdw410776230_bdw (
	inst_cellmath__127_0_out0,
	inst_cellmath__127_0_in0,
	inst_cellmath__127_0_in1,
	inst_cellmath__127_0_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__127_0_out0;
input [0:0] inst_cellmath__127_0_in0,
	inst_cellmath__127_0_in1;
input  inst_cellmath__127_0_in2;

reg [0:0] inst_cellmath__127_0_out0_tmp_0;
assign inst_cellmath__127_0_out0 = inst_cellmath__127_0_out0_tmp_0;
always @ (inst_cellmath__127_0_in2 or inst_cellmath__127_0_in0 or inst_cellmath__127_0_in1) begin
	case (inst_cellmath__127_0_in2)
		1'B0 : inst_cellmath__127_0_out0_tmp_0 = inst_cellmath__127_0_in0 ;
		default : inst_cellmath__127_0_out0_tmp_0 = inst_cellmath__127_0_in1 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__130__105__bdw410776230_bdw (
	inst_cellmath__130__105__out0,
	inst_cellmath__130__105__in0,
	inst_cellmath__130__105__in1,
	inst_cellmath__130__105__in2
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__130__105__out0;
input  inst_cellmath__130__105__in0;
input [0:0] inst_cellmath__130__105__in1;
input [25:0] inst_cellmath__130__105__in2;

assign inst_cellmath__130__105__out0 = 
	(inst_cellmath__130__105__in1)
	|(inst_cellmath__130__105__in0)
	|(inst_cellmath__130__105__in2[0])
	|(inst_cellmath__130__105__in2[1])
	|(inst_cellmath__130__105__in2[2])
	|(inst_cellmath__130__105__in2[3])
	|(inst_cellmath__130__105__in2[4])
	|(inst_cellmath__130__105__in2[5])
	|(inst_cellmath__130__105__in2[6])
	|(inst_cellmath__130__105__in2[7])
	|(inst_cellmath__130__105__in2[8])
	|(inst_cellmath__130__105__in2[9])
	|(inst_cellmath__130__105__in2[10])
	|(inst_cellmath__130__105__in2[11])
	|(inst_cellmath__130__105__in2[12])
	|(inst_cellmath__130__105__in2[13])
	|(inst_cellmath__130__105__in2[14])
	|(inst_cellmath__130__105__in2[15])
	|(inst_cellmath__130__105__in2[16])
	|(inst_cellmath__130__105__in2[17])
	|(inst_cellmath__130__105__in2[18])
	|(inst_cellmath__130__105__in2[19])
	|(inst_cellmath__130__105__in2[20])
	|(inst_cellmath__130__105__in2[21])
	|(inst_cellmath__130__105__in2[22])
	|(inst_cellmath__130__105__in2[23])
	|(inst_cellmath__130__105__in2[24])
	|(inst_cellmath__130__105__in2[25]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__121__106__bdw410776230_bdw (
	inst_cellmath__121__106__out0,
	inst_cellmath__121__106__in0,
	inst_cellmath__121__106__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__121__106__out0;
input [0:0] inst_cellmath__121__106__in0,
	inst_cellmath__121__106__in1;

assign inst_cellmath__121__106__out0 = 
	(inst_cellmath__121__106__in1)
	&(inst_cellmath__121__106__in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__12__18__bdw410776230_bdw (
	inst_cellmath__12__18__out0,
	inst_cellmath__12__18__in0
	); /* architecture "behavioural" */ 
output [3:0] inst_cellmath__12__18__out0;
input [3:0] inst_cellmath__12__18__in0;

assign inst_cellmath__12__18__out0 = 
	+(inst_cellmath__12__18__in0)
	+(4'B0001);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__12__19__bdw410776230_bdw (
	inst_cellmath__12__19__out0,
	inst_cellmath__12__19__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__12__19__out0;
input [3:0] inst_cellmath__12__19__in0;

assign inst_cellmath__12__19__out0 = 
	(inst_cellmath__12__19__in0[0])
	&(inst_cellmath__12__19__in0[1])
	&(inst_cellmath__12__19__in0[2])
	&(inst_cellmath__12__19__in0[3]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__12_0_bdw410776230_bdw (
	inst_cellmath__12_0_out0,
	inst_cellmath__12_0_in0,
	inst_cellmath__12_0_in1
	); /* architecture "behavioural" */ 
output [3:0] inst_cellmath__12_0_out0;
input [0:0] inst_cellmath__12_0_in0;
input [3:0] inst_cellmath__12_0_in1;

reg [3:0] inst_cellmath__12_0_out0_tmp_0;
assign inst_cellmath__12_0_out0 = inst_cellmath__12_0_out0_tmp_0;
always @ (inst_cellmath__12_0_in0 or inst_cellmath__12_0_in1) begin
	case (inst_cellmath__12_0_in0)
		1'B0 : inst_cellmath__12_0_out0_tmp_0 = inst_cellmath__12_0_in1 ;
		default : inst_cellmath__12_0_out0_tmp_0 = 4'B1111 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__46_0_bdw410776230_bdw (
	inst_cellmath__46_0_out0,
	inst_cellmath__46_0_in0,
	inst_cellmath__46_0_in1
	); /* architecture "behavioural" */ 
output [24:0] inst_cellmath__46_0_out0;
input [24:0] inst_cellmath__46_0_in0;
input  inst_cellmath__46_0_in1;

reg [24:0] inst_cellmath__46_0_out0_tmp_0;
assign inst_cellmath__46_0_out0 = inst_cellmath__46_0_out0_tmp_0;
always @ (inst_cellmath__46_0_in1 or inst_cellmath__46_0_in0) begin
	case (inst_cellmath__46_0_in1)
		1'B0 : inst_cellmath__46_0_out0_tmp_0 = inst_cellmath__46_0_in0 ;
		default : inst_cellmath__46_0_out0_tmp_0 = 25'B0000000000000000000000001 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__47_0_bdw410776230_bdw (
	inst_cellmath__47_0_out0,
	inst_cellmath__47_0_in0,
	inst_cellmath__47_0_in1
	); /* architecture "behavioural" */ 
output [24:0] inst_cellmath__47_0_out0;
input [24:0] inst_cellmath__47_0_in0;
input  inst_cellmath__47_0_in1;

reg [24:0] inst_cellmath__47_0_out0_tmp_0;
assign inst_cellmath__47_0_out0 = inst_cellmath__47_0_out0_tmp_0;
always @ (inst_cellmath__47_0_in1 or inst_cellmath__47_0_in0) begin
	case (inst_cellmath__47_0_in1)
		1'B0 : inst_cellmath__47_0_out0_tmp_0 = inst_cellmath__47_0_in0 ;
		default : inst_cellmath__47_0_out0_tmp_0 = {25{1'b0}} ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__48__47__bdw410776230_bdw (
	inst_cellmath__48__47__out0,
	inst_cellmath__48__47__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__48__47__out0;
input [1:0] inst_cellmath__48__47__in0;

assign inst_cellmath__48__47__out0 = ~(
	(inst_cellmath__48__47__in0[0])
	&(inst_cellmath__48__47__in0[1]));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__48__44__bdw410776230_bdw (
	inst_cellmath__48__44__out0,
	inst_cellmath__48__44__in0,
	inst_cellmath__48__44__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__48__44__out0;
input [2:1] inst_cellmath__48__44__in0;
input [0:0] inst_cellmath__48__44__in1;

reg [0:0] inst_cellmath__48__44__out0_tmp_0;
assign inst_cellmath__48__44__out0 = inst_cellmath__48__44__out0_tmp_0;
always @ (inst_cellmath__48__44__in0[2] or inst_cellmath__48__44__in0[1] or inst_cellmath__48__44__in1) begin
	case (inst_cellmath__48__44__in0[2])
		1'B0 : inst_cellmath__48__44__out0_tmp_0 = inst_cellmath__48__44__in0[1] ;
		default : inst_cellmath__48__44__out0_tmp_0 = inst_cellmath__48__44__in1 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__42_0_bdw410776230_bdw (
	inst_cellmath__42_0_out0,
	inst_cellmath__42_0_in0,
	inst_cellmath__42_0_in1,
	inst_cellmath__42_0_in2,
	inst_cellmath__42_0_in3,
	inst_cellmath__42_0_in4
	); /* architecture "behavioural" */ 
output [26:0] inst_cellmath__42_0_out0;
input [0:0] inst_cellmath__42_0_in0,
	inst_cellmath__42_0_in1;
input [24:0] inst_cellmath__42_0_in2,
	inst_cellmath__42_0_in3;
input  inst_cellmath__42_0_in4;
wire [30:0] inst_cellmath__42__50,
	inst_cellmath__42__49;

assign inst_cellmath__42__50[26:0] = {inst_cellmath__42_0_in2,inst_cellmath__42_0_in1,inst_cellmath__42_0_in0};

assign inst_cellmath__42__49[26:0] = {inst_cellmath__42_0_in3,inst_cellmath__42_0_in1,inst_cellmath__42_0_in0};

reg [26:0] inst_cellmath__42_0_out0_tmp_0;
assign inst_cellmath__42_0_out0 = inst_cellmath__42_0_out0_tmp_0;
always @ (inst_cellmath__42_0_in4 or inst_cellmath__42__50[26:0] or inst_cellmath__42__49[26:0]) begin
	case (inst_cellmath__42_0_in4)
		1'B0 : inst_cellmath__42_0_out0_tmp_0 = inst_cellmath__42__50[26:0] ;
		default : inst_cellmath__42_0_out0_tmp_0 = inst_cellmath__42__49[26:0] ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__50_0_bdw410776230_bdw (
	inst_cellmath__50_0_out0,
	inst_cellmath__50_0_in0,
	inst_cellmath__50_0_in1
	); /* architecture "behavioural" */ 
output [1:0] inst_cellmath__50_0_out0;
input [0:0] inst_cellmath__50_0_in0,
	inst_cellmath__50_0_in1;
wire [1:0] inst_cellmath__48_1_0__1;

assign inst_cellmath__48_1_0__1 = {inst_cellmath__50_0_in1,inst_cellmath__50_0_in0};

assign inst_cellmath__50_0_out0 = 
	+(inst_cellmath__48_1_0__1)
	-(2'B01);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__43__56__bdw410776230_bdw (
	inst_cellmath__43__56__out0,
	inst_cellmath__43__56__in0,
	inst_cellmath__43__56__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__43__56__out0;
input [0:0] inst_cellmath__43__56__in0,
	inst_cellmath__43__56__in1;

assign inst_cellmath__43__56__out0 = 
	(inst_cellmath__43__56__in0)
	|(inst_cellmath__43__56__in1);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__43__55__bdw410776230_bdw (
	inst_cellmath__43__55__out0,
	inst_cellmath__43__55__in0,
	inst_cellmath__43__55__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__43__55__out0;
input [2:2] inst_cellmath__43__55__in0;
input [0:0] inst_cellmath__43__55__in1;

assign inst_cellmath__43__55__out0 = 
	((~inst_cellmath__43__55__in0))
	&(inst_cellmath__43__55__in1);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__43_0_bdw410776230_bdw (
	inst_cellmath__43_0_out0,
	inst_cellmath__43_0_in0,
	inst_cellmath__43_0_in1,
	inst_cellmath__43_0_in2,
	inst_cellmath__43_0_in3
	); /* architecture "behavioural" */ 
output [26:0] inst_cellmath__43_0_out0;
input [1:0] inst_cellmath__43_0_in0;
input [24:0] inst_cellmath__43_0_in1,
	inst_cellmath__43_0_in2;
input [0:0] inst_cellmath__43_0_in3;
wire [30:0] inst_cellmath__43__54,
	inst_cellmath__43__53;

assign inst_cellmath__43__54[26:0] = {inst_cellmath__43_0_in1,inst_cellmath__43_0_in0};

assign inst_cellmath__43__53[26:0] = {inst_cellmath__43_0_in2,inst_cellmath__43_0_in0};

reg [26:0] inst_cellmath__43_0_out0_tmp_0;
assign inst_cellmath__43_0_out0 = inst_cellmath__43_0_out0_tmp_0;
always @ (inst_cellmath__43_0_in3 or inst_cellmath__43__54[26:0] or inst_cellmath__43__53[26:0]) begin
	case (inst_cellmath__43_0_in3)
		1'B0 : inst_cellmath__43_0_out0_tmp_0 = inst_cellmath__43__54[26:0] ;
		default : inst_cellmath__43_0_out0_tmp_0 = inst_cellmath__43__53[26:0] ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_it2_cellmath__56_2mx_bdw410776230_bdw (
	inst_it2_cellmath__56_2mx_out0,
	inst_it2_cellmath__56_2mx_in0,
	inst_it2_cellmath__56_2mx_in1
	); /* architecture "behavioural" */ 
output [25:0] inst_it2_cellmath__56_2mx_out0;
input [2:2] inst_it2_cellmath__56_2mx_in0;
input [24:1] inst_it2_cellmath__56_2mx_in1;
wire [25:0] inst_it2_cellmath__56__57_1_0,
	inst_it2_cellmath__56__57_1_1;

assign inst_it2_cellmath__56__57_1_0 = {1'B0,inst_it2_cellmath__56_2mx_in1,1'B0};

assign inst_it2_cellmath__56__57_1_1 = {1'B0,inst_it2_cellmath__56_2mx_in1,1'B0};

reg [25:0] inst_it2_cellmath__56_2mx_out0_tmp_0;
assign inst_it2_cellmath__56_2mx_out0 = inst_it2_cellmath__56_2mx_out0_tmp_0;
always @ (inst_it2_cellmath__56_2mx_in0 or inst_it2_cellmath__56__57_1_0 or inst_it2_cellmath__56__57_1_1) begin
	case (inst_it2_cellmath__56_2mx_in0)
		1'B0 : inst_it2_cellmath__56_2mx_out0_tmp_0 = ~inst_it2_cellmath__56__57_1_0 ;
		default : inst_it2_cellmath__56_2mx_out0_tmp_0 = inst_it2_cellmath__56__57_1_1 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_it2_cellmath__57_2mx_bdw410776230_bdw (
	inst_it2_cellmath__57_2mx_out0,
	inst_it2_cellmath__57_2mx_in0,
	inst_it2_cellmath__57_2mx_in1
	); /* architecture "behavioural" */ 
output [25:0] inst_it2_cellmath__57_2mx_out0;
input [2:2] inst_it2_cellmath__57_2mx_in0;
input [25:2] inst_it2_cellmath__57_2mx_in1;
wire [25:0] inst_it2_cellmath__57__61_1_0,
	inst_it2_cellmath__57__61_1_1;
wire [24:0] inst_it2_cellmath__57__61_0_25_1__0_1,
	inst_it2_cellmath__57__61_0_25_1__0_0;

assign inst_it2_cellmath__57__61_0_25_1__0_1 = {inst_it2_cellmath__57_2mx_in1,1'B0};

assign inst_it2_cellmath__57__61_1_0 = {inst_it2_cellmath__57__61_0_25_1__0_1,1'B0};

assign inst_it2_cellmath__57__61_0_25_1__0_0 = {inst_it2_cellmath__57_2mx_in1,1'B0};

assign inst_it2_cellmath__57__61_1_1 = {inst_it2_cellmath__57__61_0_25_1__0_0,1'B0};

reg [25:0] inst_it2_cellmath__57_2mx_out0_tmp_0;
assign inst_it2_cellmath__57_2mx_out0 = inst_it2_cellmath__57_2mx_out0_tmp_0;
always @ (inst_it2_cellmath__57_2mx_in0 or inst_it2_cellmath__57__61_1_0 or inst_it2_cellmath__57__61_1_1) begin
	case (inst_it2_cellmath__57_2mx_in0)
		1'B0 : inst_it2_cellmath__57_2mx_out0_tmp_0 = ~inst_it2_cellmath__57__61_1_0 ;
		default : inst_it2_cellmath__57_2mx_out0_tmp_0 = inst_it2_cellmath__57__61_1_1 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_fa_1820_10_bdw410776230_bdw (
	inst_fa_1820_10_out0,
	inst_fa_1820_10_out1,
	inst_fa_1820_10_in0,
	inst_fa_1820_10_in1,
	inst_fa_1820_10_in2,
	inst_fa_1820_10_in3
	); /* architecture "behavioural" */ 
output [25:0] inst_fa_1820_10_out0;
output [24:0] inst_fa_1820_10_out1;
input  inst_fa_1820_10_in0;
input [25:0] inst_fa_1820_10_in1;
input [23:0] inst_fa_1820_10_in2;
input [22:0] inst_fa_1820_10_in3;
wire [25:0] inst_it2_cellmath__60,
	inst_it2_cellmath__61,
	inst_cellmath__36;

assign inst_cellmath__36[0] = 1'B0;

assign inst_cellmath__36[23:1] = inst_fa_1820_10_in3;

assign inst_it2_cellmath__60 = {inst_cellmath__36[23:0],1'B0,inst_fa_1820_10_in0};

assign inst_it2_cellmath__61 = {inst_fa_1820_10_in2,1'B0,inst_fa_1820_10_in0};

assign inst_fa_1820_10_out0 = (inst_it2_cellmath__60 ^ inst_it2_cellmath__61) ^ inst_fa_1820_10_in1;
assign inst_fa_1820_10_out1 = (inst_it2_cellmath__60 & inst_it2_cellmath__61) | (inst_fa_1820_10_in1 & (inst_it2_cellmath__60 | inst_it2_cellmath__61));
endmodule

module cynw_cm_float_div_ieee_inst_fa_1839_10_bdw410776230_bdw (
	inst_fa_1839_10_out0,
	inst_fa_1839_10_out1,
	inst_fa_1839_10_in0,
	inst_fa_1839_10_in1,
	inst_fa_1839_10_in2
	); /* architecture "behavioural" */ 
output [25:0] inst_fa_1839_10_out0;
output [24:0] inst_fa_1839_10_out1;
input [25:0] inst_fa_1839_10_in0;
input [24:0] inst_fa_1839_10_in1;
input [25:0] inst_fa_1839_10_in2;
wire [25:0] inst_it2_cellmath__63__67;

assign inst_it2_cellmath__63__67 = {inst_fa_1839_10_in1,1'B0};

assign inst_fa_1839_10_out0 = (inst_fa_1839_10_in0 ^ inst_it2_cellmath__63__67) ^ inst_fa_1839_10_in2;
assign inst_fa_1839_10_out1 = (inst_fa_1839_10_in0 & inst_it2_cellmath__63__67) | (inst_fa_1839_10_in2 & (inst_fa_1839_10_in0 | inst_it2_cellmath__63__67));
endmodule

module cynw_cm_float_div_ieee_inst_it2_cellmath__64__71__bdw410776230_bdw (
	inst_it2_cellmath__64__71__out0,
	inst_it2_cellmath__64__71__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_it2_cellmath__64__71__out0;
input [1:0] inst_it2_cellmath__64__71__in0;

assign inst_it2_cellmath__64__71__out0 = ~(
	(inst_it2_cellmath__64__71__in0[0])
	&(inst_it2_cellmath__64__71__in0[1]));
endmodule

module cynw_cm_float_div_ieee_inst_it2_cellmath__64__68__bdw410776230_bdw (
	inst_it2_cellmath__64__68__out0,
	inst_it2_cellmath__64__68__in0,
	inst_it2_cellmath__64__68__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_it2_cellmath__64__68__out0;
input [2:1] inst_it2_cellmath__64__68__in0;
input [0:0] inst_it2_cellmath__64__68__in1;

reg [0:0] inst_it2_cellmath__64__68__out0_tmp_0;
assign inst_it2_cellmath__64__68__out0 = inst_it2_cellmath__64__68__out0_tmp_0;
always @ (inst_it2_cellmath__64__68__in0[2] or inst_it2_cellmath__64__68__in0[1] or inst_it2_cellmath__64__68__in1) begin
	case (inst_it2_cellmath__64__68__in0[2])
		1'B0 : inst_it2_cellmath__64__68__out0_tmp_0 = inst_it2_cellmath__64__68__in0[1] ;
		default : inst_it2_cellmath__64__68__out0_tmp_0 = inst_it2_cellmath__64__68__in1 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__40_0_bdw410776230_bdw (
	inst_cellmath__40_0_out0,
	inst_cellmath__40_0_in0,
	inst_cellmath__40_0_in1,
	inst_cellmath__40_0_in2,
	inst_cellmath__40_0_in3,
	inst_cellmath__40_0_in4
	); /* architecture "behavioural" */ 
output [28:0] inst_cellmath__40_0_out0;
input [0:0] inst_cellmath__40_0_in0,
	inst_cellmath__40_0_in1;
input  inst_cellmath__40_0_in2;
input [26:0] inst_cellmath__40_0_in3,
	inst_cellmath__40_0_in4;
wire [30:0] inst_cellmath__40__74,
	inst_cellmath__40__73;

assign inst_cellmath__40__74[28:0] = {inst_cellmath__40_0_in3,inst_cellmath__40_0_in1,inst_cellmath__40_0_in0};

assign inst_cellmath__40__73[28:0] = {inst_cellmath__40_0_in4,inst_cellmath__40_0_in1,inst_cellmath__40_0_in0};

reg [28:0] inst_cellmath__40_0_out0_tmp_0;
assign inst_cellmath__40_0_out0 = inst_cellmath__40_0_out0_tmp_0;
always @ (inst_cellmath__40_0_in2 or inst_cellmath__40__74[28:0] or inst_cellmath__40__73[28:0]) begin
	case (inst_cellmath__40_0_in2)
		1'B0 : inst_cellmath__40_0_out0_tmp_0 = inst_cellmath__40__74[28:0] ;
		default : inst_cellmath__40_0_out0_tmp_0 = inst_cellmath__40__73[28:0] ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_it2_cellmath__66_0_bdw410776230_bdw (
	inst_it2_cellmath__66_0_out0,
	inst_it2_cellmath__66_0_in0,
	inst_it2_cellmath__66_0_in1
	); /* architecture "behavioural" */ 
output [1:0] inst_it2_cellmath__66_0_out0;
input [0:0] inst_it2_cellmath__66_0_in0,
	inst_it2_cellmath__66_0_in1;
wire [1:0] inst_it2_cellmath__64_1_0__1;

assign inst_it2_cellmath__64_1_0__1 = {inst_it2_cellmath__66_0_in1,inst_it2_cellmath__66_0_in0};

assign inst_it2_cellmath__66_0_out0 = 
	+(inst_it2_cellmath__64_1_0__1)
	-(2'B01);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__41__80__bdw410776230_bdw (
	inst_cellmath__41__80__out0,
	inst_cellmath__41__80__in0,
	inst_cellmath__41__80__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__41__80__out0;
input [0:0] inst_cellmath__41__80__in0,
	inst_cellmath__41__80__in1;

assign inst_cellmath__41__80__out0 = 
	(inst_cellmath__41__80__in0)
	|(inst_cellmath__41__80__in1);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__41__79__bdw410776230_bdw (
	inst_cellmath__41__79__out0,
	inst_cellmath__41__79__in0,
	inst_cellmath__41__79__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__41__79__out0;
input [2:2] inst_cellmath__41__79__in0;
input [0:0] inst_cellmath__41__79__in1;

assign inst_cellmath__41__79__out0 = 
	((~inst_cellmath__41__79__in0))
	&(inst_cellmath__41__79__in1);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__41_0_bdw410776230_bdw (
	inst_cellmath__41_0_out0,
	inst_cellmath__41_0_in0,
	inst_cellmath__41_0_in1,
	inst_cellmath__41_0_in2,
	inst_cellmath__41_0_in3
	); /* architecture "behavioural" */ 
output [28:0] inst_cellmath__41_0_out0;
input [1:0] inst_cellmath__41_0_in0;
input [26:0] inst_cellmath__41_0_in1,
	inst_cellmath__41_0_in2;
input [0:0] inst_cellmath__41_0_in3;
wire [30:0] inst_cellmath__41__78,
	inst_cellmath__41__77;

assign inst_cellmath__41__78[28:0] = {inst_cellmath__41_0_in1,inst_cellmath__41_0_in0};

assign inst_cellmath__41__77[28:0] = {inst_cellmath__41_0_in2,inst_cellmath__41_0_in0};

reg [28:0] inst_cellmath__41_0_out0_tmp_0;
assign inst_cellmath__41_0_out0 = inst_cellmath__41_0_out0_tmp_0;
always @ (inst_cellmath__41_0_in3 or inst_cellmath__41__78[28:0] or inst_cellmath__41__77[28:0]) begin
	case (inst_cellmath__41_0_in3)
		1'B0 : inst_cellmath__41_0_out0_tmp_0 = inst_cellmath__41__78[28:0] ;
		default : inst_cellmath__41_0_out0_tmp_0 = inst_cellmath__41__77[28:0] ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__67_0_bdw410776230_bdw (
	inst_cellmath__67_0_out0,
	inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__67_0_out0;
input [30:23] inst_cellmath__67_0_in0,
	inst_cellmath__67_0_in1;

wire [7:0] inst_cellmath__67_0_out0_tmp_0;
assign inst_cellmath__67_0_out0_tmp_0 = 
	+(inst_cellmath__67_0_in1)
	-(inst_cellmath__67_0_in0);
assign inst_cellmath__67_0_out0 = inst_cellmath__67_0_out0_tmp_0
	+(8'B01111110);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__68_0_bdw410776230_bdw (
	inst_cellmath__68_0_out0,
	inst_cellmath__68_0_in0,
	inst_cellmath__68_0_in1
	); /* architecture "behavioural" */ 
output [9:0] inst_cellmath__68_0_out0;
input [30:23] inst_cellmath__68_0_in0,
	inst_cellmath__68_0_in1;

wire [9:0] inst_cellmath__68_0_out0_tmp_0;
assign inst_cellmath__68_0_out0_tmp_0 = 
	+(inst_cellmath__68_0_in1)
	-(inst_cellmath__68_0_in0);
assign inst_cellmath__68_0_out0 = inst_cellmath__68_0_out0_tmp_0
	+(10'B0001111111);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__69__82__bdw410776230_bdw (
	inst_cellmath__69__82__out0,
	inst_cellmath__69__82__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__69__82__out0;
input [7:0] inst_cellmath__69__82__in0;

assign inst_cellmath__69__82__out0 = 
	(inst_cellmath__69__82__in0[0])
	&(inst_cellmath__69__82__in0[1])
	&(inst_cellmath__69__82__in0[2])
	&(inst_cellmath__69__82__in0[3])
	&(inst_cellmath__69__82__in0[4])
	&(inst_cellmath__69__82__in0[5])
	&(inst_cellmath__69__82__in0[6])
	&(inst_cellmath__69__82__in0[7]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__69__81__bdw410776230_bdw (
	inst_cellmath__69__81__out0,
	inst_cellmath__69__81__in0,
	inst_cellmath__69__81__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__69__81__out0;
input [0:0] inst_cellmath__69__81__in0;
input [8:8] inst_cellmath__69__81__in1;

assign inst_cellmath__69__81__out0 = 
	(inst_cellmath__69__81__in1)
	|(inst_cellmath__69__81__in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__69_0_bdw410776230_bdw (
	inst_cellmath__69_0_out0,
	inst_cellmath__69_0_in0,
	inst_cellmath__69_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__69_0_out0;
input [0:0] inst_cellmath__69_0_in0;
input [9:9] inst_cellmath__69_0_in1;

assign inst_cellmath__69_0_out0 = 
	((~inst_cellmath__69_0_in1))
	&(inst_cellmath__69_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__70__83__bdw410776230_bdw (
	inst_cellmath__70__83__out0,
	inst_cellmath__70__83__in0
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__70__83__out0;
input [8:0] inst_cellmath__70__83__in0;

assign inst_cellmath__70__83__out0 = 
	(inst_cellmath__70__83__in0[0])
	|(inst_cellmath__70__83__in0[1])
	|(inst_cellmath__70__83__in0[2])
	|(inst_cellmath__70__83__in0[3])
	|(inst_cellmath__70__83__in0[4])
	|(inst_cellmath__70__83__in0[5])
	|(inst_cellmath__70__83__in0[6])
	|(inst_cellmath__70__83__in0[7])
	|(inst_cellmath__70__83__in0[8]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__70_0_bdw410776230_bdw (
	inst_cellmath__70_0_out0,
	inst_cellmath__70_0_in0,
	inst_cellmath__70_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__70_0_out0;
input [0:0] inst_cellmath__70_0_in0;
input [9:9] inst_cellmath__70_0_in1;

assign inst_cellmath__70_0_out0 = 
	(inst_cellmath__70_0_in1)
	|((~inst_cellmath__70_0_in0));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__71_0_bdw410776230_bdw (
	inst_cellmath__71_0_out0,
	inst_cellmath__71_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__71_0_out0;
input [9:0] inst_cellmath__71_0_in0;

assign inst_cellmath__71_0_out0 = 
	((~inst_cellmath__71_0_in0[9]))
	&((~inst_cellmath__71_0_in0[8]))
	&(inst_cellmath__71_0_in0[0])
	&(inst_cellmath__71_0_in0[1])
	&(inst_cellmath__71_0_in0[2])
	&(inst_cellmath__71_0_in0[3])
	&(inst_cellmath__71_0_in0[4])
	&(inst_cellmath__71_0_in0[5])
	&(inst_cellmath__71_0_in0[6])
	&(inst_cellmath__71_0_in0[7]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__72_0_bdw410776230_bdw (
	inst_cellmath__72_0_out0,
	inst_cellmath__72_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__72_0_out0;
input [8:0] inst_cellmath__72_0_in0;

assign inst_cellmath__72_0_out0 = 
	(inst_cellmath__72_0_in0[0])
	&((~inst_cellmath__72_0_in0[1]))
	&((~inst_cellmath__72_0_in0[2]))
	&((~inst_cellmath__72_0_in0[3]))
	&((~inst_cellmath__72_0_in0[4]))
	&((~inst_cellmath__72_0_in0[5]))
	&((~inst_cellmath__72_0_in0[6]))
	&((~inst_cellmath__72_0_in0[7]))
	&((~inst_cellmath__72_0_in0[8]));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__73_0_bdw410776230_bdw (
	inst_cellmath__73_0_out0,
	inst_cellmath__73_0_in0,
	inst_cellmath__73_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__73_0_out0;
input  inst_cellmath__73_0_in0,
	inst_cellmath__73_0_in1;

assign inst_cellmath__73_0_out0 = 
	(inst_cellmath__73_0_in1)
	&((~inst_cellmath__73_0_in0));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__74_0_bdw410776230_bdw (
	inst_cellmath__74_0_out0,
	inst_cellmath__74_0_in0,
	inst_cellmath__74_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__74_0_out0;
input  inst_cellmath__74_0_in0,
	inst_cellmath__74_0_in1;

assign inst_cellmath__74_0_out0 = 
	(inst_cellmath__74_0_in1)
	|(inst_cellmath__74_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__75_0_bdw410776230_bdw (
	inst_cellmath__75_0_out0,
	inst_cellmath__75_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__75_0_out0;
input [30:23] inst_cellmath__75_0_in0;

assign inst_cellmath__75_0_out0 = 
	(inst_cellmath__75_0_in0[23])
	&(inst_cellmath__75_0_in0[24])
	&(inst_cellmath__75_0_in0[25])
	&(inst_cellmath__75_0_in0[26])
	&(inst_cellmath__75_0_in0[27])
	&(inst_cellmath__75_0_in0[28])
	&(inst_cellmath__75_0_in0[29])
	&(inst_cellmath__75_0_in0[30]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__76_0_bdw410776230_bdw (
	inst_cellmath__76_0_out0,
	inst_cellmath__76_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__76_0_out0;
input [30:23] inst_cellmath__76_0_in0;

assign inst_cellmath__76_0_out0 = 
	(inst_cellmath__76_0_in0[23])
	&(inst_cellmath__76_0_in0[24])
	&(inst_cellmath__76_0_in0[25])
	&(inst_cellmath__76_0_in0[26])
	&(inst_cellmath__76_0_in0[27])
	&(inst_cellmath__76_0_in0[28])
	&(inst_cellmath__76_0_in0[29])
	&(inst_cellmath__76_0_in0[30]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__77_0_bdw410776230_bdw (
	inst_cellmath__77_0_out0,
	inst_cellmath__77_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__77_0_out0;
input [22:0] inst_cellmath__77_0_in0;

assign inst_cellmath__77_0_out0 = 
	(inst_cellmath__77_0_in0[0])
	|(inst_cellmath__77_0_in0[1])
	|(inst_cellmath__77_0_in0[2])
	|(inst_cellmath__77_0_in0[3])
	|(inst_cellmath__77_0_in0[4])
	|(inst_cellmath__77_0_in0[5])
	|(inst_cellmath__77_0_in0[6])
	|(inst_cellmath__77_0_in0[7])
	|(inst_cellmath__77_0_in0[8])
	|(inst_cellmath__77_0_in0[9])
	|(inst_cellmath__77_0_in0[10])
	|(inst_cellmath__77_0_in0[11])
	|(inst_cellmath__77_0_in0[12])
	|(inst_cellmath__77_0_in0[13])
	|(inst_cellmath__77_0_in0[14])
	|(inst_cellmath__77_0_in0[15])
	|(inst_cellmath__77_0_in0[16])
	|(inst_cellmath__77_0_in0[17])
	|(inst_cellmath__77_0_in0[18])
	|(inst_cellmath__77_0_in0[19])
	|(inst_cellmath__77_0_in0[20])
	|(inst_cellmath__77_0_in0[21])
	|(inst_cellmath__77_0_in0[22]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__78_0_bdw410776230_bdw (
	inst_cellmath__78_0_out0,
	inst_cellmath__78_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__78_0_out0;
input [22:0] inst_cellmath__78_0_in0;

assign inst_cellmath__78_0_out0 = 
	(inst_cellmath__78_0_in0[0])
	|(inst_cellmath__78_0_in0[1])
	|(inst_cellmath__78_0_in0[2])
	|(inst_cellmath__78_0_in0[3])
	|(inst_cellmath__78_0_in0[4])
	|(inst_cellmath__78_0_in0[5])
	|(inst_cellmath__78_0_in0[6])
	|(inst_cellmath__78_0_in0[7])
	|(inst_cellmath__78_0_in0[8])
	|(inst_cellmath__78_0_in0[9])
	|(inst_cellmath__78_0_in0[10])
	|(inst_cellmath__78_0_in0[11])
	|(inst_cellmath__78_0_in0[12])
	|(inst_cellmath__78_0_in0[13])
	|(inst_cellmath__78_0_in0[14])
	|(inst_cellmath__78_0_in0[15])
	|(inst_cellmath__78_0_in0[16])
	|(inst_cellmath__78_0_in0[17])
	|(inst_cellmath__78_0_in0[18])
	|(inst_cellmath__78_0_in0[19])
	|(inst_cellmath__78_0_in0[20])
	|(inst_cellmath__78_0_in0[21])
	|(inst_cellmath__78_0_in0[22]);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__79_1_bdw410776230_bdw (
	inst_cellmath__79_1_out0,
	inst_cellmath__79_1_in0,
	inst_cellmath__79_1_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__79_1_out0;
input  inst_cellmath__79_1_in0,
	inst_cellmath__79_1_in1;

assign inst_cellmath__79_1_out0 = 
	(inst_cellmath__79_1_in1)
	&(inst_cellmath__79_1_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__80_0_bdw410776230_bdw (
	inst_cellmath__80_0_out0,
	inst_cellmath__80_0_in0,
	inst_cellmath__80_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__80_0_out0;
input  inst_cellmath__80_0_in0,
	inst_cellmath__80_0_in1;

assign inst_cellmath__80_0_out0 = 
	(inst_cellmath__80_0_in1)
	&(inst_cellmath__80_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__83_0_bdw410776230_bdw (
	inst_cellmath__83_0_out0,
	inst_cellmath__83_0_in0,
	inst_cellmath__83_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__83_0_out0;
input  inst_cellmath__83_0_in0,
	inst_cellmath__83_0_in1;

assign inst_cellmath__83_0_out0 = 
	(inst_cellmath__83_0_in1)
	&((~inst_cellmath__83_0_in0));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__84_0_bdw410776230_bdw (
	inst_cellmath__84_0_out0,
	inst_cellmath__84_0_in0,
	inst_cellmath__84_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__84_0_out0;
input  inst_cellmath__84_0_in0,
	inst_cellmath__84_0_in1;

assign inst_cellmath__84_0_out0 = 
	(inst_cellmath__84_0_in1)
	&((~inst_cellmath__84_0_in0));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__85__85__bdw410776230_bdw (
	inst_cellmath__85__85__out0,
	inst_cellmath__85__85__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__85__85__out0;
input [30:23] inst_cellmath__85__85__in0;

assign inst_cellmath__85__85__out0 = ~(
	(inst_cellmath__85__85__in0[23])
	|(inst_cellmath__85__85__in0[24])
	|(inst_cellmath__85__85__in0[25])
	|(inst_cellmath__85__85__in0[26])
	|(inst_cellmath__85__85__in0[27])
	|(inst_cellmath__85__85__in0[28])
	|(inst_cellmath__85__85__in0[29])
	|(inst_cellmath__85__85__in0[30]));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__86__86__bdw410776230_bdw (
	inst_cellmath__86__86__out0,
	inst_cellmath__86__86__in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__86__86__out0;
input [30:23] inst_cellmath__86__86__in0;

assign inst_cellmath__86__86__out0 = ~(
	(inst_cellmath__86__86__in0[23])
	|(inst_cellmath__86__86__in0[24])
	|(inst_cellmath__86__86__in0[25])
	|(inst_cellmath__86__86__in0[26])
	|(inst_cellmath__86__86__in0[27])
	|(inst_cellmath__86__86__in0[28])
	|(inst_cellmath__86__86__in0[29])
	|(inst_cellmath__86__86__in0[30]));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__87__87__bdw410776230_bdw (
	inst_cellmath__87__87__out0,
	inst_cellmath__87__87__in0,
	inst_cellmath__87__87__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__87__87__out0;
input  inst_cellmath__87__87__in0,
	inst_cellmath__87__87__in1;

assign inst_cellmath__87__87__out0 = 
	(inst_cellmath__87__87__in1)
	&(inst_cellmath__87__87__in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__87__88__bdw410776230_bdw (
	inst_cellmath__87__88__out0,
	inst_cellmath__87__88__in0,
	inst_cellmath__87__88__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__87__88__out0;
input  inst_cellmath__87__88__in0,
	inst_cellmath__87__88__in1;

assign inst_cellmath__87__88__out0 = 
	(inst_cellmath__87__88__in1)
	&(inst_cellmath__87__88__in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__87_0_bdw410776230_bdw (
	inst_cellmath__87_0_out0,
	inst_cellmath__87_0_in0,
	inst_cellmath__87_0_in1,
	inst_cellmath__87_0_in2,
	inst_cellmath__87_0_in3
	); /* architecture "behavioural" */ 
output  inst_cellmath__87_0_out0;
input [0:0] inst_cellmath__87_0_in0,
	inst_cellmath__87_0_in1;
input  inst_cellmath__87_0_in2,
	inst_cellmath__87_0_in3;

assign inst_cellmath__87_0_out0 = 
	(inst_cellmath__87_0_in0)
	|(inst_cellmath__87_0_in1)
	|(inst_cellmath__87_0_in3)
	|(inst_cellmath__87_0_in2);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__88_0_bdw410776230_bdw (
	inst_cellmath__88_0_out0,
	inst_cellmath__88_0_in0,
	inst_cellmath__88_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__88_0_out0;
input  inst_cellmath__88_0_in0,
	inst_cellmath__88_0_in1;

assign inst_cellmath__88_0_out0 = 
	(inst_cellmath__88_0_in1)
	|(inst_cellmath__88_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__89_0_bdw410776230_bdw (
	inst_cellmath__89_0_out0,
	inst_cellmath__89_0_in0,
	inst_cellmath__89_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__89_0_out0;
input  inst_cellmath__89_0_in0,
	inst_cellmath__89_0_in1;

assign inst_cellmath__89_0_out0 = 
	(inst_cellmath__89_0_in1)
	|(inst_cellmath__89_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__91_0_bdw410776230_bdw (
	inst_cellmath__91_0_out0,
	inst_cellmath__91_0_in0,
	inst_cellmath__91_0_in1
	); /* architecture "behavioural" */ 
output  inst_cellmath__91_0_out0;
input [31:31] inst_cellmath__91_0_in0,
	inst_cellmath__91_0_in1;

assign inst_cellmath__91_0_out0 = 
	(inst_cellmath__91_0_in1)
	^(inst_cellmath__91_0_in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__92__95__bdw410776230_bdw (
	inst_cellmath__92__95__out0,
	inst_cellmath__92__95__in0,
	inst_cellmath__92__95__in1
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__92__95__out0;
input  inst_cellmath__92__95__in0,
	inst_cellmath__92__95__in1;

assign inst_cellmath__92__95__out0 = 
	(inst_cellmath__92__95__in1)
	|(inst_cellmath__92__95__in0);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__90_2WWMM_bdw410776230_bdw (
	inst_cellmath__90_2WWMM_out0,
	inst_cellmath__90_2WWMM_in0,
	inst_cellmath__90_2WWMM_in1,
	inst_cellmath__90_2WWMM_in2,
	inst_cellmath__90_2WWMM_in3,
	inst_cellmath__90_2WWMM_in4,
	inst_cellmath__90_2WWMM_in5,
	inst_cellmath__90_2WWMM_in6
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__90_2WWMM_out0;
input [31:31] inst_cellmath__90_2WWMM_in0;
input [21:0] inst_cellmath__90_2WWMM_in1;
input [0:0] inst_cellmath__90_2WWMM_in2;
input [31:31] inst_cellmath__90_2WWMM_in3;
input [21:0] inst_cellmath__90_2WWMM_in4;
input  inst_cellmath__90_2WWMM_in5,
	inst_cellmath__90_2WWMM_in6;
wire [1:0] inst_cellmath__79_0;
wire [22:0] inst_cellmath__90_1,
	inst_cellmath__90_2;

assign inst_cellmath__79_0 = {inst_cellmath__90_2WWMM_in6,inst_cellmath__90_2WWMM_in5};

assign inst_cellmath__90_1 = {inst_cellmath__90_2WWMM_in1,inst_cellmath__90_2WWMM_in0};

assign inst_cellmath__90_2 = {inst_cellmath__90_2WWMM_in4,inst_cellmath__90_2WWMM_in3};

reg [22:0] inst_cellmath__90_2WWMM_out0_tmp_0;
assign inst_cellmath__90_2WWMM_out0 = inst_cellmath__90_2WWMM_out0_tmp_0;
always @ (inst_cellmath__79_0 or inst_cellmath__90_1 or inst_cellmath__90_2 or inst_cellmath__90_2WWMM_in2) begin
	casez (inst_cellmath__79_0)
		2'B01 : inst_cellmath__90_2WWMM_out0_tmp_0 = inst_cellmath__90_1 ;
		2'B1? : inst_cellmath__90_2WWMM_out0_tmp_0 = inst_cellmath__90_2 ;
		default : inst_cellmath__90_2WWMM_out0_tmp_0 = inst_cellmath__90_2WWMM_in2 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__96_0_bdw410776230_bdw (
	inst_cellmath__96_0_out0,
	inst_cellmath__96_0_in0
	); /* architecture "behavioural" */ 
output  inst_cellmath__96_0_out0;
input [3:0] inst_cellmath__96_0_in0;

assign inst_cellmath__96_0_out0 = (8'B00000110==(inst_cellmath__96_0_in0 - 8'B00000001));
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__133__109__bdw410776230_bdw (
	inst_cellmath__133__109__out0,
	inst_cellmath__133__109__in0,
	inst_cellmath__133__109__in1,
	inst_cellmath__133__109__in2
	); /* architecture "behavioural" */ 
output [0:0] inst_cellmath__133__109__out0;
input  inst_cellmath__133__109__in0,
	inst_cellmath__133__109__in1,
	inst_cellmath__133__109__in2;

assign inst_cellmath__133__109__out0 = 
	(inst_cellmath__133__109__in0)
	|(inst_cellmath__133__109__in2)
	|(inst_cellmath__133__109__in1);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__135_0_bdw410776230_bdw (
	inst_cellmath__135_0_out0,
	inst_cellmath__135_0_in0,
	inst_cellmath__135_0_in1,
	inst_cellmath__135_0_in2,
	inst_cellmath__135_0_in3,
	inst_cellmath__135_0_in4
	); /* architecture "behavioural" */ 
output  inst_cellmath__135_0_out0;
input  inst_cellmath__135_0_in0,
	inst_cellmath__135_0_in1,
	inst_cellmath__135_0_in2,
	inst_cellmath__135_0_in3,
	inst_cellmath__135_0_in4;

assign inst_cellmath__135_0_out0 = 
	(inst_cellmath__135_0_in0)
	|(inst_cellmath__135_0_in1)
	|(inst_cellmath__135_0_in2)
	|(inst_cellmath__135_0_in4)
	|(inst_cellmath__135_0_in3);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__136_0_bdw410776230_bdw (
	inst_cellmath__136_0_out0,
	inst_cellmath__136_0_in0,
	inst_cellmath__136_0_in1,
	inst_cellmath__136_0_in2,
	inst_cellmath__136_0_in3,
	inst_cellmath__136_0_in4
	); /* architecture "behavioural" */ 
output  inst_cellmath__136_0_out0;
input  inst_cellmath__136_0_in0,
	inst_cellmath__136_0_in1,
	inst_cellmath__136_0_in2,
	inst_cellmath__136_0_in3,
	inst_cellmath__136_0_in4;

assign inst_cellmath__136_0_out0 = 
	(inst_cellmath__136_0_in0)
	|(inst_cellmath__136_0_in1)
	|(inst_cellmath__136_0_in2)
	|(inst_cellmath__136_0_in4)
	|(inst_cellmath__136_0_in3);
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__137_2_bdw410776230_bdw (
	inst_cellmath__137_2_out0,
	inst_cellmath__137_2_in0,
	inst_cellmath__137_2_in1,
	inst_cellmath__137_2_in2
	); /* architecture "behavioural" */ 
output  inst_cellmath__137_2_out0;
input  inst_cellmath__137_2_in0,
	inst_cellmath__137_2_in1,
	inst_cellmath__137_2_in2;

reg [0:0] inst_cellmath__137_2_out0_tmp_0;
assign inst_cellmath__137_2_out0 = inst_cellmath__137_2_out0_tmp_0;
always @ (inst_cellmath__137_2_in2 or inst_cellmath__137_2_in1 or inst_cellmath__137_2_in0) begin
	case (inst_cellmath__137_2_in2)
		1'B0 : inst_cellmath__137_2_out0_tmp_0 = inst_cellmath__137_2_in1 ;
		default : inst_cellmath__137_2_out0_tmp_0 = inst_cellmath__137_2_in0 ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__113__113__bdw410776230_bdw (
	inst_cellmath__113__113__out0,
	inst_cellmath__113__113__in0,
	inst_cellmath__113__113__in1,
	inst_cellmath__113__113__in2,
	inst_cellmath__113__113__in3,
	inst_cellmath__113__113__in4
	); /* architecture "behavioural" */ 
output [7:0] inst_cellmath__113__113__out0;
input  inst_cellmath__113__113__in0;
input [0:0] inst_cellmath__113__113__in1;
input  inst_cellmath__113__113__in2;
input [7:0] inst_cellmath__113__113__in3,
	inst_cellmath__113__113__in4;
wire [1:0] inst_cellmath__137_0;

assign inst_cellmath__137_0 = {inst_cellmath__113__113__in0,inst_cellmath__113__113__in2};

reg [7:0] inst_cellmath__113__113__out0_tmp_0;
assign inst_cellmath__113__113__out0 = inst_cellmath__113__113__out0_tmp_0;
always @ (inst_cellmath__137_0 or inst_cellmath__113__113__in3 or inst_cellmath__113__113__in4 or inst_cellmath__113__113__in1) begin
	casez (inst_cellmath__137_0)
		2'B00 : inst_cellmath__113__113__out0_tmp_0 = inst_cellmath__113__113__in3 ;
		2'B01 : inst_cellmath__113__113__out0_tmp_0 = inst_cellmath__113__113__in4 ;
		default : inst_cellmath__113__113__out0_tmp_0 = {{7{inst_cellmath__113__113__in1}}, inst_cellmath__113__113__in1} ;
	endcase
end
endmodule

module cynw_cm_float_div_ieee_inst_cellmath__113__115__U_2WWMM_bdw410776230_bdw (
	inst_cellmath__113__115__U_2WWMM_out0,
	inst_cellmath__113__115__U_2WWMM_in0,
	inst_cellmath__113__115__U_2WWMM_in1,
	inst_cellmath__113__115__U_2WWMM_in2,
	inst_cellmath__113__115__U_2WWMM_in3,
	inst_cellmath__113__115__U_2WWMM_in4
	); /* architecture "behavioural" */ 
output [22:0] inst_cellmath__113__115__U_2WWMM_out0;
input  inst_cellmath__113__115__U_2WWMM_in0;
input [22:1] inst_cellmath__113__115__U_2WWMM_in1;
input [0:0] inst_cellmath__113__115__U_2WWMM_in2;
input [21:0] inst_cellmath__113__115__U_2WWMM_in3;
input  inst_cellmath__113__115__U_2WWMM_in4;
wire [1:0] inst_cellmath__137_1;
wire [22:0] inst_cellmath__113__115_22_1__0,
	inst_cellmath__113__115_22_1__1;
wire [21:0] inst_cellmath__134__111_22_1_;

assign inst_cellmath__137_1 = {inst_cellmath__113__115__U_2WWMM_in0,inst_cellmath__113__115__U_2WWMM_in4};

assign inst_cellmath__113__115_22_1__0 = {inst_cellmath__113__115__U_2WWMM_in1,inst_cellmath__113__115__U_2WWMM_in2};

assign inst_cellmath__134__111_22_1_ = {1'B1,inst_cellmath__113__115__U_2WWMM_in3[21:1]};

assign inst_cellmath__113__115_22_1__1 = {inst_cellmath__134__111_22_1_,inst_cellmath__113__115__U_2WWMM_in3[0]};

reg [22:0] inst_cellmath__113__115__U_2WWMM_out0_tmp_0;
assign inst_cellmath__113__115__U_2WWMM_out0 = inst_cellmath__113__115__U_2WWMM_out0_tmp_0;
always @ (inst_cellmath__137_1 or inst_cellmath__113__115_22_1__0 or inst_cellmath__113__115_22_1__1) begin
	casez (inst_cellmath__137_1)
		2'B0? : inst_cellmath__113__115__U_2WWMM_out0_tmp_0 = inst_cellmath__113__115_22_1__0 ;
		2'B11 : inst_cellmath__113__115__U_2WWMM_out0_tmp_0 = inst_cellmath__113__115_22_1__1 ;
		default : inst_cellmath__113__115__U_2WWMM_out0_tmp_0 = {23{1'b0}} ;
	endcase
end
endmodule

/* CADENCE  urLwSQ/aoho= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/



