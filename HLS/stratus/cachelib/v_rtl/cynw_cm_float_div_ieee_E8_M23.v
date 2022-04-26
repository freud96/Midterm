/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:17:58 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_cynw_cm_float_div_ieee_E8_M23 (
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
wire [31:0] tmp_0,
	tmp_1,
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

assign tmp_0 = {a_sign,a_exp,a_man};

assign tmp_1 = {b_sign,b_exp,b_man};

reg [31:0] inst_cellmath__9_0_reg;
assign inst_cellmath__9 = inst_cellmath__9_0_reg;
always @ (posedge clk) begin
	begin
		if (accept==1'B1) inst_cellmath__9_0_reg <= tmp_1;
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

assign inst_cellmath__23 = 
	+(inst_cellmath__16[25:21])
	+(inst_cellmath__17[25:21]);

reg [31:0] inst_cellmath__8_0_reg;
assign inst_cellmath__8 = inst_cellmath__8_0_reg;
always @ (posedge clk) begin
	begin
		if (accept==1'B1) inst_cellmath__8_0_reg <= tmp_0;
	end
end

assign inst_cellmath__22__27 = {2'B01,inst_cellmath__8[22:20]};

assign inst_cellmath__22__29 = ~inst_cellmath__9[22:20];

assign inst_cellmath__22__28 = {2'B10,inst_cellmath__22__29};

assign inst_cellmath__22 = 
	+(inst_cellmath__22__27)
	+(inst_cellmath__22__28);

reg [4:0] inst_cellmath__24_tmp_0;
assign inst_cellmath__24 = inst_cellmath__24_tmp_0;
always @ (inst_cellmath__11 or inst_cellmath__23 or inst_cellmath__22) begin
	case (inst_cellmath__11)
		1'B0 : inst_cellmath__24_tmp_0 = inst_cellmath__23 ;
		default : inst_cellmath__24_tmp_0 = inst_cellmath__22 ;
	endcase
end

assign inst_lookup0_cellmath__27 = {inst_cellmath__24,inst_cellmath__9[22:21]};

reg [2:0] inst_lookup0_cellmath__29_tmp_1;
assign inst_lookup0_cellmath__29 = inst_lookup0_cellmath__29_tmp_1;
always @ (inst_lookup0_cellmath__27) begin
	case (inst_lookup0_cellmath__27)
		7'B0000100 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0000101 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0001000 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0001001 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0001010 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0001011 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0001100 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0001101 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0001110 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0001111 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0010000 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0010001 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0010010 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0010011 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0010100 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0010101 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0010110 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0010111 : inst_lookup0_cellmath__29_tmp_1 = 3'B001 ;
		7'B0011000 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0011001 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0011010 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0011011 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0011100 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0011101 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0011110 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0011111 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0100000 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0100001 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0100010 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0100011 : inst_lookup0_cellmath__29_tmp_1 = 3'B010 ;
		7'B0100100 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0100101 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0100110 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0100111 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0101000 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0101001 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0101010 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0101011 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0101100 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0101101 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0101110 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0101111 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0110000 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0110001 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0110010 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0110011 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0110100 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0110101 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0110110 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0110111 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0111000 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0111001 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0111010 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0111011 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0111100 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0111101 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0111110 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B0111111 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1000000 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1000001 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1000010 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1000011 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1000100 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1000101 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1000110 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1000111 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1001000 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1001001 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1001010 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1001011 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1001100 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1001101 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1001110 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1001111 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1010000 : inst_lookup0_cellmath__29_tmp_1 = 3'B011 ;
		7'B1010001 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1010010 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1010011 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1010100 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1010101 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1010110 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1010111 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1011000 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1011001 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1011010 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1011011 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1011100 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1011101 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1011110 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1011111 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1100000 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1100001 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1100010 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1100011 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1100100 : inst_lookup0_cellmath__29_tmp_1 = 3'B111 ;
		7'B1100101 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1100110 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1100111 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1101000 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1101001 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1101010 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1101011 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1101100 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1101101 : inst_lookup0_cellmath__29_tmp_1 = 3'B110 ;
		7'B1101110 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1101111 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1110000 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1110001 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1110010 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1110011 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1110100 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1110101 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1110110 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1110111 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1111000 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1111001 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1111010 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		7'B1111011 : inst_lookup0_cellmath__29_tmp_1 = 3'B101 ;
		default : inst_lookup0_cellmath__29_tmp_1 = {3{1'b0}} ;
	endcase
end

reg [24:0] inst_cellmath__30__31_0_24_0_;
assign inst_cellmath__30__31_0[24:0] = inst_cellmath__30__31_0_24_0_;
always @ (inst_lookup0_cellmath__29[0] or inst_cellmath__19__21_25_1__0_1) begin
	case (inst_lookup0_cellmath__29[0])
		1'B1 : inst_cellmath__30__31_0_24_0_ = inst_cellmath__19__21_25_1__0_1 ;
		default : inst_cellmath__30__31_0_24_0_ = {25{1'b0}} ;
	endcase
end

assign inst_cellmath__30__31_1_0 = {1'B0,inst_cellmath__30__31_0[24:1],1'B0};

assign inst_cellmath__30__31_1_1 = {1'B0,inst_cellmath__30__31_0[24:1],1'B0};

assign inst_cellmath__31__37_0_0 = {1'B1,inst_cellmath__9[22:0],2'B00};

assign inst_cellmath__31__37_0_1 = {1'B1,inst_cellmath__9[22:0],2'B00};

reg [25:0] inst_cellmath__31__35_0_0_tmp_2;
assign inst_cellmath__31__35_0_0 = inst_cellmath__31__35_0_0_tmp_2;
always @ (inst_lookup0_cellmath__29[1] or inst_cellmath__31__37_0_0) begin
	case (inst_lookup0_cellmath__29[1])
		1'B1 : inst_cellmath__31__35_0_0_tmp_2 = inst_cellmath__31__37_0_0 ;
		default : inst_cellmath__31__35_0_0_tmp_2 = {26{1'b0}} ;
	endcase
end

assign inst_cellmath__31__35_0_25_1__0_0 = {inst_cellmath__31__35_0_0[25:2],1'B0};

assign inst_cellmath__31__35_0_25_1__0_1 = {inst_cellmath__31__35_0_0[25:2],1'B0};

assign inst_cellmath__31__35_1_0 = {inst_cellmath__31__35_0_25_1__0_1,1'B0};

assign inst_cellmath__31__35_1_1 = {inst_cellmath__31__35_0_25_1__0_0,1'B0};

assign inst_cellmath__18__20[23:0] = {inst_cellmath__8[22:0],1'B0};

assign inst_cellmath__20__23[23:0] = {inst_cellmath__18__20[23:1],1'B1};

reg [23:0] inst_cellmath__20_23_0_;
assign inst_cellmath__20[23:0] = inst_cellmath__20_23_0_;
always @ (inst_cellmath__11 or inst_cellmath__16[23:0] or inst_cellmath__20__23[23:0]) begin
	case (inst_cellmath__11)
		1'B0 : inst_cellmath__20_23_0_ = inst_cellmath__16[23:0] ;
		default : inst_cellmath__20_23_0_ = inst_cellmath__20__23[23:0] ;
	endcase
end

assign inst_cellmath__32 = ~inst_lookup0_cellmath__29[2];

assign inst_cellmath__34 = {inst_cellmath__20[23:0],1'B0,inst_cellmath__32};

assign inst_cellmath__19__21_24_1_ = {inst_cellmath__9[22:0],1'B0};

reg [23:0] inst_cellmath__21_23_0_;
assign inst_cellmath__21[23:0] = inst_cellmath__21_23_0_;
always @ (inst_cellmath__11 or inst_cellmath__17[23:0] or inst_cellmath__19__21_24_1_) begin
	case (inst_cellmath__11)
		1'B0 : inst_cellmath__21_23_0_ = inst_cellmath__17[23:0] ;
		default : inst_cellmath__21_23_0_ = ~inst_cellmath__19__21_24_1_ ;
	endcase
end

assign inst_cellmath__35 = {inst_cellmath__21[23:0],1'B0,inst_cellmath__32};

reg [25:0] inst_cellmath__30_tmp_3;
assign inst_cellmath__30 = inst_cellmath__30_tmp_3;
always @ (inst_lookup0_cellmath__29[2] or inst_cellmath__30__31_1_0 or inst_cellmath__30__31_1_1) begin
	case (inst_lookup0_cellmath__29[2])
		1'B0 : inst_cellmath__30_tmp_3 = ~inst_cellmath__30__31_1_0 ;
		default : inst_cellmath__30_tmp_3 = inst_cellmath__30__31_1_1 ;
	endcase
end

assign inst_cellmath__38__W1 = (inst_cellmath__34 ^ inst_cellmath__35) ^ inst_cellmath__30;
assign inst_cellmath__38__W0[24:0] = (inst_cellmath__34 & inst_cellmath__35) | (inst_cellmath__30 & (inst_cellmath__34 | inst_cellmath__35));

assign inst_cellmath__39__41 = {inst_cellmath__38__W0[24:0],1'B0};

reg [25:0] inst_cellmath__31_tmp_4;
assign inst_cellmath__31 = inst_cellmath__31_tmp_4;
always @ (inst_lookup0_cellmath__29[2] or inst_cellmath__31__35_1_0 or inst_cellmath__31__35_1_1) begin
	case (inst_lookup0_cellmath__29[2])
		1'B0 : inst_cellmath__31_tmp_4 = ~inst_cellmath__31__35_1_0 ;
		default : inst_cellmath__31_tmp_4 = inst_cellmath__31__35_1_1 ;
	endcase
end

assign inst_cellmath__39__W1 = (inst_cellmath__38__W1 ^ inst_cellmath__39__41) ^ inst_cellmath__31;
assign inst_cellmath__39__W0[24:0] = (inst_cellmath__38__W1 & inst_cellmath__39__41) | (inst_cellmath__31 & (inst_cellmath__38__W1 | inst_cellmath__39__41));

assign inst_it2_cellmath__51 = 
	+(inst_cellmath__39__W0[24:20])
	+(inst_cellmath__39__W1[25:21]);

assign inst_it2_lookup1_cellmath__53 = {inst_it2_cellmath__51,inst_cellmath__9[22:21]};

reg [2:0] inst_it2_lookup1_cellmath__55_tmp_5;
assign inst_it2_lookup1_cellmath__55 = inst_it2_lookup1_cellmath__55_tmp_5;
always @ (inst_it2_lookup1_cellmath__53) begin
	case (inst_it2_lookup1_cellmath__53)
		7'B0000100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0000101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0001000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0001001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0001010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0001011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0001100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0001101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0001110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0001111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0010000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0010001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0010010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0010011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0010100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0010101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0010110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0010111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B001 ;
		7'B0011000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0011001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0011010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0011011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0011100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0011101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0011110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0011111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0100000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0100001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0100010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0100011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B010 ;
		7'B0100100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0100101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0100110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0100111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0101000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0101001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0101010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0101011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0101100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0101101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0101110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0101111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0110000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0110001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0110010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0110011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0110100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0110101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0110110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0110111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0111000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0111001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0111010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0111011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0111100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0111101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0111110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B0111111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1000000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1000001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1000010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1000011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1000100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1000101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1000110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1000111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1001000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1001001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1001010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1001011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1001100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1001101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1001110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1001111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1010000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B011 ;
		7'B1010001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1010010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1010011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1010100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1010101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1010110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1010111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1011000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1011001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1011010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1011011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1011100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1011101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1011110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1011111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1100000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1100001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1100010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1100011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1100100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B111 ;
		7'B1100101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1100110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1100111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1101000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1101001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1101010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1101011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1101100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1101101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B110 ;
		7'B1101110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1101111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1110000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1110001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1110010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1110011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1110100 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1110101 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1110110 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1110111 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1111000 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1111001 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1111010 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		7'B1111011 : inst_it2_lookup1_cellmath__55_tmp_5 = 3'B101 ;
		default : inst_it2_lookup1_cellmath__55_tmp_5 = {3{1'b0}} ;
	endcase
end

reg [24:0] inst_it2_cellmath__56__57_0_24_0_;
assign inst_it2_cellmath__56__57_0[24:0] = inst_it2_cellmath__56__57_0_24_0_;
always @ (inst_it2_lookup1_cellmath__55[0] or inst_cellmath__19__21_25_1__0_0) begin
	case (inst_it2_lookup1_cellmath__55[0])
		1'B1 : inst_it2_cellmath__56__57_0_24_0_ = inst_cellmath__19__21_25_1__0_0 ;
		default : inst_it2_cellmath__56__57_0_24_0_ = {25{1'b0}} ;
	endcase
end

assign inst_it2_cellmath__56__57_1_0 = {1'B0,inst_it2_cellmath__56__57_0[24:1],1'B0};

assign inst_it2_cellmath__56__57_1_1 = {1'B0,inst_it2_cellmath__56__57_0[24:1],1'B0};

reg [25:0] inst_it2_cellmath__57__61_0_0_tmp_6;
assign inst_it2_cellmath__57__61_0_0 = inst_it2_cellmath__57__61_0_0_tmp_6;
always @ (inst_it2_lookup1_cellmath__55[1] or inst_cellmath__31__37_0_1) begin
	case (inst_it2_lookup1_cellmath__55[1])
		1'B1 : inst_it2_cellmath__57__61_0_0_tmp_6 = inst_cellmath__31__37_0_1 ;
		default : inst_it2_cellmath__57__61_0_0_tmp_6 = {26{1'b0}} ;
	endcase
end

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

assign inst_cellmath__120 = 
	+(inst_cellmath__16)
	+(inst_cellmath__17);

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

reg [28:0] inst_cellmath__124_tmp_7;
assign inst_cellmath__124 = inst_cellmath__124_tmp_7;
always @ (inst_cellmath__120[25] or inst_cellmath__44 or inst_cellmath__45) begin
	case (inst_cellmath__120[25])
		1'B0 : inst_cellmath__124_tmp_7 = inst_cellmath__44 ;
		default : inst_cellmath__124_tmp_7 = inst_cellmath__45 ;
	endcase
end

assign inst_cellmath__122 = ~inst_cellmath__124[28];

reg [22:0] inst_cellmath__125_tmp_8;
assign inst_cellmath__125 = inst_cellmath__125_tmp_8;
always @ (inst_cellmath__122 or inst_cellmath__124[27:5] or inst_cellmath__124[26:4]) begin
	case (inst_cellmath__122)
		1'B0 : inst_cellmath__125_tmp_8 = inst_cellmath__124[27:5] ;
		default : inst_cellmath__125_tmp_8 = inst_cellmath__124[26:4] ;
	endcase
end

reg [0:0] inst_cellmath__126_tmp_9;
assign inst_cellmath__126 = inst_cellmath__126_tmp_9;
always @ (inst_cellmath__122 or inst_cellmath__124[4] or inst_cellmath__124[3]) begin
	case (inst_cellmath__122)
		1'B0 : inst_cellmath__126_tmp_9 = inst_cellmath__124[4] ;
		default : inst_cellmath__126_tmp_9 = inst_cellmath__124[3] ;
	endcase
end

assign inst_cellmath__129 = 
	+(inst_cellmath__125)
	+(inst_cellmath__126);

assign inst_cellmath__127__104 = 
	(inst_cellmath__124[0])
	|(inst_cellmath__124[1])
	|(inst_cellmath__124[2])
	|(inst_cellmath__124[3]);

assign inst_cellmath__127__103 = 
	(inst_cellmath__124[0])
	|(inst_cellmath__124[1])
	|(inst_cellmath__124[2]);

reg [0:0] inst_cellmath__127_tmp_10;
assign inst_cellmath__127 = inst_cellmath__127_tmp_10;
always @ (inst_cellmath__122 or inst_cellmath__127__104 or inst_cellmath__127__103) begin
	case (inst_cellmath__122)
		1'B0 : inst_cellmath__127_tmp_10 = inst_cellmath__127__104 ;
		default : inst_cellmath__127_tmp_10 = inst_cellmath__127__103 ;
	endcase
end

assign inst_cellmath__130__105 = 
	(inst_cellmath__125[0])
	|(inst_cellmath__127)
	|(inst_cellmath__120[0])
	|(inst_cellmath__120[1])
	|(inst_cellmath__120[2])
	|(inst_cellmath__120[3])
	|(inst_cellmath__120[4])
	|(inst_cellmath__120[5])
	|(inst_cellmath__120[6])
	|(inst_cellmath__120[7])
	|(inst_cellmath__120[8])
	|(inst_cellmath__120[9])
	|(inst_cellmath__120[10])
	|(inst_cellmath__120[11])
	|(inst_cellmath__120[12])
	|(inst_cellmath__120[13])
	|(inst_cellmath__120[14])
	|(inst_cellmath__120[15])
	|(inst_cellmath__120[16])
	|(inst_cellmath__120[17])
	|(inst_cellmath__120[18])
	|(inst_cellmath__120[19])
	|(inst_cellmath__120[20])
	|(inst_cellmath__120[21])
	|(inst_cellmath__120[22])
	|(inst_cellmath__120[23])
	|(inst_cellmath__120[24])
	|(inst_cellmath__120[25]);

assign inst_cellmath__121__106 = 
	(inst_cellmath__129[0])
	&(inst_cellmath__130__105);

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

assign inst_cellmath__12__18[3:0] = 
	+(inst_cellmath__13)
	+(4'B0001);

assign inst_cellmath__12__19 = 
	(inst_cellmath__13[0])
	&(inst_cellmath__13[1])
	&(inst_cellmath__13[2])
	&(inst_cellmath__13[3]);

reg [3:0] inst_cellmath__12_tmp_11;
assign inst_cellmath__12 = inst_cellmath__12_tmp_11;
always @ (inst_cellmath__12__19 or inst_cellmath__12__18[3:0]) begin
	case (inst_cellmath__12__19)
		1'B0 : inst_cellmath__12_tmp_11 = inst_cellmath__12__18[3:0] ;
		default : inst_cellmath__12_tmp_11 = 4'B1111 ;
	endcase
end

assign inst_cellmath__36[0] = 1'B0;

assign inst_cellmath__36[23:1] = inst_cellmath__39__W0[22:0];

reg [24:0] inst_cellmath__46_24_0_;
assign inst_cellmath__46[24:0] = inst_cellmath__46_24_0_;
always @ (inst_cellmath__11 or inst_cellmath__44[24:0]) begin
	case (inst_cellmath__11)
		1'B0 : inst_cellmath__46_24_0_ = inst_cellmath__44[24:0] ;
		default : inst_cellmath__46_24_0_ = 25'B0000000000000000000000001 ;
	endcase
end

reg [24:0] inst_cellmath__47_24_0_;
assign inst_cellmath__47[24:0] = inst_cellmath__47_24_0_;
always @ (inst_cellmath__11 or inst_cellmath__45[24:0]) begin
	case (inst_cellmath__11)
		1'B0 : inst_cellmath__47_24_0_ = inst_cellmath__45[24:0] ;
		default : inst_cellmath__47_24_0_ = {25{1'b0}} ;
	endcase
end

assign inst_cellmath__48__46 = ~(
	(inst_lookup0_cellmath__29[0])
	&(inst_lookup0_cellmath__29[1]));

reg [0:0] inst_cellmath__48__44_tmp_12;
assign inst_cellmath__48__44 = inst_cellmath__48__44_tmp_12;
always @ (inst_lookup0_cellmath__29[2] or inst_lookup0_cellmath__29[1] or inst_cellmath__48__46) begin
	case (inst_lookup0_cellmath__29[2])
		1'B0 : inst_cellmath__48__44_tmp_12 = inst_lookup0_cellmath__29[1] ;
		default : inst_cellmath__48__44_tmp_12 = inst_cellmath__48__46 ;
	endcase
end

assign inst_cellmath__48_1_0__1 = {inst_cellmath__48__44,inst_lookup0_cellmath__29[0]};

assign inst_cellmath__42__49[26:0] = {inst_cellmath__46[24:0],inst_cellmath__48__44,inst_lookup0_cellmath__29[0]};

assign inst_cellmath__42__50[26:0] = {inst_cellmath__47[24:0],inst_cellmath__48__44,inst_lookup0_cellmath__29[0]};

reg [26:0] inst_cellmath__42_26_0_;
assign inst_cellmath__42[26:0] = inst_cellmath__42_26_0_;
always @ (inst_cellmath__32 or inst_cellmath__42__50[26:0] or inst_cellmath__42__49[26:0]) begin
	case (inst_cellmath__32)
		1'B0 : inst_cellmath__42_26_0_ = inst_cellmath__42__50[26:0] ;
		default : inst_cellmath__42_26_0_ = inst_cellmath__42__49[26:0] ;
	endcase
end

assign inst_cellmath__50 = 
	+(inst_cellmath__48_1_0__1)
	-(2'B01);

assign inst_cellmath__43__53[26:0] = {inst_cellmath__46[24:0],inst_cellmath__50};

assign inst_cellmath__43__54[26:0] = {inst_cellmath__47[24:0],inst_cellmath__50};

assign inst_cellmath__43__56 = 
	(inst_lookup0_cellmath__29[0])
	|(inst_cellmath__48__44);

assign inst_cellmath__43__55 = 
	((~inst_lookup0_cellmath__29[2]))
	&(inst_cellmath__43__56);

reg [26:0] inst_cellmath__43_26_0_;
assign inst_cellmath__43[26:0] = inst_cellmath__43_26_0_;
always @ (inst_cellmath__43__55 or inst_cellmath__43__54[26:0] or inst_cellmath__43__53[26:0]) begin
	case (inst_cellmath__43__55)
		1'B0 : inst_cellmath__43_26_0_ = inst_cellmath__43__54[26:0] ;
		default : inst_cellmath__43_26_0_ = inst_cellmath__43__53[26:0] ;
	endcase
end

reg [25:0] inst_it2_cellmath__56_tmp_13;
assign inst_it2_cellmath__56 = inst_it2_cellmath__56_tmp_13;
always @ (inst_it2_lookup1_cellmath__55[2] or inst_it2_cellmath__56__57_1_0 or inst_it2_cellmath__56__57_1_1) begin
	case (inst_it2_lookup1_cellmath__55[2])
		1'B0 : inst_it2_cellmath__56_tmp_13 = ~inst_it2_cellmath__56__57_1_0 ;
		default : inst_it2_cellmath__56_tmp_13 = inst_it2_cellmath__56__57_1_1 ;
	endcase
end

reg [25:0] inst_it2_cellmath__57_tmp_14;
assign inst_it2_cellmath__57 = inst_it2_cellmath__57_tmp_14;
always @ (inst_it2_lookup1_cellmath__55[2] or inst_it2_cellmath__57__61_1_0 or inst_it2_cellmath__57__61_1_1) begin
	case (inst_it2_lookup1_cellmath__55[2])
		1'B0 : inst_it2_cellmath__57_tmp_14 = ~inst_it2_cellmath__57__61_1_0 ;
		default : inst_it2_cellmath__57_tmp_14 = inst_it2_cellmath__57__61_1_1 ;
	endcase
end

assign inst_it2_cellmath__58 = ~inst_it2_lookup1_cellmath__55[2];

assign inst_it2_cellmath__60 = {inst_cellmath__36[23:0],1'B0,inst_it2_cellmath__58};

assign inst_it2_cellmath__61 = {inst_cellmath__39__W1[23:0],1'B0,inst_it2_cellmath__58};

assign inst_it2_cellmath__62__W1 = (inst_it2_cellmath__60 ^ inst_it2_cellmath__61) ^ inst_it2_cellmath__56;
assign inst_it2_cellmath__62__W0[24:0] = (inst_it2_cellmath__60 & inst_it2_cellmath__61) | (inst_it2_cellmath__56 & (inst_it2_cellmath__60 | inst_it2_cellmath__61));

assign inst_it2_cellmath__63__67 = {inst_it2_cellmath__62__W0[24:0],1'B0};

assign inst_it2_cellmath__63__W1 = (inst_it2_cellmath__62__W1 ^ inst_it2_cellmath__63__67) ^ inst_it2_cellmath__57;
assign inst_it2_cellmath__63__W0[24:0] = (inst_it2_cellmath__62__W1 & inst_it2_cellmath__63__67) | (inst_it2_cellmath__57 & (inst_it2_cellmath__62__W1 | inst_it2_cellmath__63__67));

assign inst_cellmath__14[0] = 1'B0;

assign inst_cellmath__14[25:1] = inst_it2_cellmath__63__W0[24:0];

assign inst_it2_cellmath__64__70 = ~(
	(inst_it2_lookup1_cellmath__55[0])
	&(inst_it2_lookup1_cellmath__55[1]));

reg [0:0] inst_it2_cellmath__64__68_tmp_15;
assign inst_it2_cellmath__64__68 = inst_it2_cellmath__64__68_tmp_15;
always @ (inst_it2_lookup1_cellmath__55[2] or inst_it2_lookup1_cellmath__55[1] or inst_it2_cellmath__64__70) begin
	case (inst_it2_lookup1_cellmath__55[2])
		1'B0 : inst_it2_cellmath__64__68_tmp_15 = inst_it2_lookup1_cellmath__55[1] ;
		default : inst_it2_cellmath__64__68_tmp_15 = inst_it2_cellmath__64__70 ;
	endcase
end

assign inst_it2_cellmath__64_1_0__1 = {inst_it2_cellmath__64__68,inst_it2_lookup1_cellmath__55[0]};

assign inst_cellmath__40__73[28:0] = {inst_cellmath__42[26:0],inst_it2_cellmath__64__68,inst_it2_lookup1_cellmath__55[0]};

assign inst_cellmath__40__74[28:0] = {inst_cellmath__43[26:0],inst_it2_cellmath__64__68,inst_it2_lookup1_cellmath__55[0]};

reg [28:0] inst_cellmath__40_tmp_16;
assign inst_cellmath__40 = inst_cellmath__40_tmp_16;
always @ (inst_it2_cellmath__58 or inst_cellmath__40__74[28:0] or inst_cellmath__40__73[28:0]) begin
	case (inst_it2_cellmath__58)
		1'B0 : inst_cellmath__40_tmp_16 = inst_cellmath__40__74[28:0] ;
		default : inst_cellmath__40_tmp_16 = inst_cellmath__40__73[28:0] ;
	endcase
end

assign inst_it2_cellmath__66 = 
	+(inst_it2_cellmath__64_1_0__1)
	-(2'B01);

assign inst_cellmath__41__77[28:0] = {inst_cellmath__42[26:0],inst_it2_cellmath__66};

assign inst_cellmath__41__78[28:0] = {inst_cellmath__43[26:0],inst_it2_cellmath__66};

assign inst_cellmath__41__80 = 
	(inst_it2_lookup1_cellmath__55[0])
	|(inst_it2_cellmath__64__68);

assign inst_cellmath__41__79 = 
	((~inst_it2_lookup1_cellmath__55[2]))
	&(inst_cellmath__41__80);

reg [28:0] inst_cellmath__41_tmp_17;
assign inst_cellmath__41 = inst_cellmath__41_tmp_17;
always @ (inst_cellmath__41__79 or inst_cellmath__41__78[28:0] or inst_cellmath__41__77[28:0]) begin
	case (inst_cellmath__41__79)
		1'B0 : inst_cellmath__41_tmp_17 = inst_cellmath__41__78[28:0] ;
		default : inst_cellmath__41_tmp_17 = inst_cellmath__41__77[28:0] ;
	endcase
end

wire [7:0] inst_cellmath__67_tmp_18;
assign inst_cellmath__67_tmp_18 = 
	+(inst_cellmath__8[30:23])
	-(inst_cellmath__9[30:23]);
assign inst_cellmath__67[7:0] = inst_cellmath__67_tmp_18
	+(8'B01111110);

wire [9:0] inst_cellmath__68_tmp_19;
assign inst_cellmath__68_tmp_19 = 
	+(inst_cellmath__8[30:23])
	-(inst_cellmath__9[30:23]);
assign inst_cellmath__68 = inst_cellmath__68_tmp_19
	+(10'B0001111111);

assign inst_cellmath__69__82 = 
	(inst_cellmath__68[0])
	&(inst_cellmath__68[1])
	&(inst_cellmath__68[2])
	&(inst_cellmath__68[3])
	&(inst_cellmath__68[4])
	&(inst_cellmath__68[5])
	&(inst_cellmath__68[6])
	&(inst_cellmath__68[7]);

assign inst_cellmath__69__81 = 
	(inst_cellmath__68[8])
	|(inst_cellmath__69__82);

assign inst_cellmath__69 = 
	((~inst_cellmath__68[9]))
	&(inst_cellmath__69__81);

assign inst_cellmath__70__83 = 
	(inst_cellmath__68[0])
	|(inst_cellmath__68[1])
	|(inst_cellmath__68[2])
	|(inst_cellmath__68[3])
	|(inst_cellmath__68[4])
	|(inst_cellmath__68[5])
	|(inst_cellmath__68[6])
	|(inst_cellmath__68[7])
	|(inst_cellmath__68[8]);

assign inst_cellmath__70 = 
	(inst_cellmath__68[9])
	|((~inst_cellmath__70__83));

assign inst_cellmath__71 = 
	((~inst_cellmath__68[9]))
	&((~inst_cellmath__68[8]))
	&(inst_cellmath__68[0])
	&(inst_cellmath__68[1])
	&(inst_cellmath__68[2])
	&(inst_cellmath__68[3])
	&(inst_cellmath__68[4])
	&(inst_cellmath__68[5])
	&(inst_cellmath__68[6])
	&(inst_cellmath__68[7]);

assign inst_cellmath__72 = 
	(inst_cellmath__68[0])
	&((~inst_cellmath__68[1]))
	&((~inst_cellmath__68[2]))
	&((~inst_cellmath__68[3]))
	&((~inst_cellmath__68[4]))
	&((~inst_cellmath__68[5]))
	&((~inst_cellmath__68[6]))
	&((~inst_cellmath__68[7]))
	&((~inst_cellmath__68[8]));

assign inst_cellmath__73 = 
	(inst_cellmath__69)
	&((~inst_cellmath__71));

assign inst_cellmath__74 = 
	(inst_cellmath__70)
	|(inst_cellmath__72);

assign inst_cellmath__75 = 
	(inst_cellmath__8[23])
	&(inst_cellmath__8[24])
	&(inst_cellmath__8[25])
	&(inst_cellmath__8[26])
	&(inst_cellmath__8[27])
	&(inst_cellmath__8[28])
	&(inst_cellmath__8[29])
	&(inst_cellmath__8[30]);

assign inst_cellmath__76 = 
	(inst_cellmath__9[23])
	&(inst_cellmath__9[24])
	&(inst_cellmath__9[25])
	&(inst_cellmath__9[26])
	&(inst_cellmath__9[27])
	&(inst_cellmath__9[28])
	&(inst_cellmath__9[29])
	&(inst_cellmath__9[30]);

assign inst_cellmath__77 = 
	(inst_cellmath__8[0])
	|(inst_cellmath__8[1])
	|(inst_cellmath__8[2])
	|(inst_cellmath__8[3])
	|(inst_cellmath__8[4])
	|(inst_cellmath__8[5])
	|(inst_cellmath__8[6])
	|(inst_cellmath__8[7])
	|(inst_cellmath__8[8])
	|(inst_cellmath__8[9])
	|(inst_cellmath__8[10])
	|(inst_cellmath__8[11])
	|(inst_cellmath__8[12])
	|(inst_cellmath__8[13])
	|(inst_cellmath__8[14])
	|(inst_cellmath__8[15])
	|(inst_cellmath__8[16])
	|(inst_cellmath__8[17])
	|(inst_cellmath__8[18])
	|(inst_cellmath__8[19])
	|(inst_cellmath__8[20])
	|(inst_cellmath__8[21])
	|(inst_cellmath__8[22]);

assign inst_cellmath__78 = 
	(inst_cellmath__9[0])
	|(inst_cellmath__9[1])
	|(inst_cellmath__9[2])
	|(inst_cellmath__9[3])
	|(inst_cellmath__9[4])
	|(inst_cellmath__9[5])
	|(inst_cellmath__9[6])
	|(inst_cellmath__9[7])
	|(inst_cellmath__9[8])
	|(inst_cellmath__9[9])
	|(inst_cellmath__9[10])
	|(inst_cellmath__9[11])
	|(inst_cellmath__9[12])
	|(inst_cellmath__9[13])
	|(inst_cellmath__9[14])
	|(inst_cellmath__9[15])
	|(inst_cellmath__9[16])
	|(inst_cellmath__9[17])
	|(inst_cellmath__9[18])
	|(inst_cellmath__9[19])
	|(inst_cellmath__9[20])
	|(inst_cellmath__9[21])
	|(inst_cellmath__9[22]);

assign inst_cellmath__79 = 
	(inst_cellmath__75)
	&(inst_cellmath__77);

assign inst_cellmath__80 = 
	(inst_cellmath__76)
	&(inst_cellmath__78);

assign inst_cellmath__83 = 
	(inst_cellmath__75)
	&((~inst_cellmath__77));

assign inst_cellmath__84 = 
	(inst_cellmath__76)
	&((~inst_cellmath__78));

assign inst_cellmath__85 = ~(
	(inst_cellmath__8[23])
	|(inst_cellmath__8[24])
	|(inst_cellmath__8[25])
	|(inst_cellmath__8[26])
	|(inst_cellmath__8[27])
	|(inst_cellmath__8[28])
	|(inst_cellmath__8[29])
	|(inst_cellmath__8[30]));

assign inst_cellmath__86 = ~(
	(inst_cellmath__9[23])
	|(inst_cellmath__9[24])
	|(inst_cellmath__9[25])
	|(inst_cellmath__9[26])
	|(inst_cellmath__9[27])
	|(inst_cellmath__9[28])
	|(inst_cellmath__9[29])
	|(inst_cellmath__9[30]));

assign inst_cellmath__87__87 = 
	(inst_cellmath__83)
	&(inst_cellmath__84);

assign inst_cellmath__87__88 = 
	(inst_cellmath__85)
	&(inst_cellmath__86);

assign inst_cellmath__87 = 
	(inst_cellmath__87__88)
	|(inst_cellmath__87__87)
	|(inst_cellmath__79)
	|(inst_cellmath__80);

assign inst_cellmath__88 = 
	(inst_cellmath__83)
	|(inst_cellmath__86);

assign inst_cellmath__89 = 
	(inst_cellmath__84)
	|(inst_cellmath__85);

assign inst_cellmath__79_0 = {inst_cellmath__79,inst_cellmath__80};

assign inst_cellmath__90_1 = {inst_cellmath__9[21:0],inst_cellmath__9[31]};

assign inst_cellmath__90_2 = {inst_cellmath__8[21:0],inst_cellmath__8[31]};

assign inst_cellmath__91 = 
	(inst_cellmath__8[31])
	^(inst_cellmath__9[31]);

assign inst_cellmath__92__95 = 
	(inst_cellmath__87)
	|(inst_cellmath__91);

reg [22:0] inst_cellmath__90_0_tmp_20;
assign inst_cellmath__90_0 = inst_cellmath__90_0_tmp_20;
always @ (inst_cellmath__79_0 or inst_cellmath__90_1 or inst_cellmath__90_2 or inst_cellmath__92__95) begin
	casez (inst_cellmath__79_0)
		2'B01 : inst_cellmath__90_0_tmp_20 = inst_cellmath__90_1 ;
		2'B1? : inst_cellmath__90_0_tmp_20 = inst_cellmath__90_2 ;
		default : inst_cellmath__90_0_tmp_20 = inst_cellmath__92__95 ;
	endcase
end

assign inst_cellmath__96 = (8'B00000110==(inst_cellmath__12 - 8'B00000001));

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

assign inst_cellmath__133__109 = 
	(inst_cellmath__103)
	|(inst_cellmath__100)
	|(inst_cellmath__101);

assign inst_cellmath__135 = 
	(inst_cellmath__105)
	|(inst_cellmath__103)
	|(inst_cellmath__102)
	|(inst_cellmath__100)
	|(inst_cellmath__101);

assign inst_cellmath__136 = 
	(inst_cellmath__106)
	|(inst_cellmath__104)
	|(inst_cellmath__102)
	|(inst_cellmath__100)
	|(inst_cellmath__101);

reg [0:0] inst_cellmath__137_tmp_21;
assign inst_cellmath__137 = inst_cellmath__137_tmp_21;
always @ (inst_cellmath__122 or inst_cellmath__135 or inst_cellmath__136) begin
	case (inst_cellmath__122)
		1'B0 : inst_cellmath__137_tmp_21 = inst_cellmath__135 ;
		default : inst_cellmath__137_tmp_21 = inst_cellmath__136 ;
	endcase
end

assign inst_cellmath__137_0 = {inst_cellmath__137,inst_cellmath__122};

reg [7:0] inst_cellmath__113__113_tmp_22;
assign inst_cellmath__113__113 = inst_cellmath__113__113_tmp_22;
always @ (inst_cellmath__137_0 or inst_cellmath__111 or inst_cellmath__110 or inst_cellmath__133__109) begin
	casez (inst_cellmath__137_0)
		2'B00 : inst_cellmath__113__113_tmp_22 = inst_cellmath__111 ;
		2'B01 : inst_cellmath__113__113_tmp_22 = inst_cellmath__110 ;
		default : inst_cellmath__113__113_tmp_22 = {{7{inst_cellmath__133__109}}, inst_cellmath__133__109} ;
	endcase
end

assign inst_cellmath__137_1 = {inst_cellmath__137,inst_cellmath__100};

reg [22:0] inst_cellmath__113__115_22_1__tmp_23;
assign inst_cellmath__113__115_22_1_ = inst_cellmath__113__115_22_1__tmp_23;
always @ (inst_cellmath__137_1 or inst_cellmath__113__115_22_1__0 or inst_cellmath__113__115_22_1__1) begin
	casez (inst_cellmath__137_1)
		2'B0? : inst_cellmath__113__115_22_1__tmp_23 = inst_cellmath__113__115_22_1__0 ;
		2'B11 : inst_cellmath__113__115_22_1__tmp_23 = inst_cellmath__113__115_22_1__1 ;
		default : inst_cellmath__113__115_22_1__tmp_23 = {23{1'b0}} ;
	endcase
end

assign inst_cellmath__113 = {inst_cellmath__98,inst_cellmath__113__113,inst_cellmath__113__115_22_1_};
endmodule

/* CADENCE  vrP1SA/brw== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/



