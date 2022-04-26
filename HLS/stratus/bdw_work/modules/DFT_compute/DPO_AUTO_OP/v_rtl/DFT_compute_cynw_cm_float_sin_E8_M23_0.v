/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:20:27 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_cynw_cm_float_sin_E8_M23_0 (
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

assign inst_blk01_cellmath__39_56_0_ = 
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

assign inst_cellmath__42[5:0] = 
	-(a_exp[5:0])
	+(6'B000101);

assign inst_cellmath__48_32_0_[24:0] = inst_blk01_cellmath__39_56_0_[55:26] >> inst_cellmath__42[5:0];

reg [22:0] inst_cellmath__61_tmp_0;
assign inst_cellmath__61 = inst_cellmath__61_tmp_0;
always @ (inst_cellmath__48_32_0_[23] or inst_cellmath__48_32_0_[22:0]) begin
	case (inst_cellmath__48_32_0_[23])
		1'B0 : inst_cellmath__61_tmp_0 = inst_cellmath__48_32_0_[22:0] ;
		default : inst_cellmath__61_tmp_0 = ~inst_cellmath__48_32_0_[22:0] ;
	endcase
end

assign inst_cellmath__115__W1 = ~inst_cellmath__61[16];

assign inst_cellmath__116__W1_0_0_1_0 = {inst_cellmath__115__W1,inst_cellmath__61[15]};

assign inst_cellmath__116__W1_0_0_1_1 = {inst_cellmath__115__W1,inst_cellmath__61[15]};

assign inst_cellmath__113_0_0 = {inst_cellmath__116__W1_0_0_1_1,inst_cellmath__61[14:0]};

assign inst_cellmath__113_0_1 = {inst_cellmath__116__W1_0_0_1_0,inst_cellmath__61[14:0]};

reg [72:0] inst_cellmath__195__80_0_0_tmp_1;
assign inst_cellmath__195__80_0_0 = inst_cellmath__195__80_0_0_tmp_1;
always @ (inst_cellmath__61[22:17]) begin
	case (inst_cellmath__61[22:17])
		6'B000000 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0000001100100100001110100100001111111000010000000001100100100001011000001 ;
		6'B000001 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0000100101101100001100101011111111101000110000001001100100011101100000000 ;
		6'B000010 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0000111110110010101101110011111111011001010001001001100100010101110000001 ;
		6'B000011 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0001010111110110110100000000111111001001110011101001100100001010001000110 ;
		6'B000100 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0001110000110111100001011100101110111010011000010001100011111010101010001 ;
		6'B000101 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0010001001110011111000011001111110101010111111100001100011100111010101001 ;
		6'B000110 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0010100010101010111011010110011110011011101010000101100011010000001010010 ;
		6'B000111 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0010111011011011101100111011111110001100011000100001100010110101001010100 ;
		6'B001000 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0011010100000101010000000100111101111101001011011001100010010110010110111 ;
		6'B001001 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0011101100100110100111111100111101101110000011010101100001110011110000101 ;
		6'B001010 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0100000100111110111000000011101101011111000000111001100001001101011001001 ;
		6'B001011 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0100011101001101000100001111111101010000000100101001100000100011010001101 ;
		6'B001100 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0100110101010000010000110000111101000001001111001101011111110101011100000 ;
		6'B001101 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0101001101000111100010010000101100110010100001001001011111000011111010000 ;
		6'B001110 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0101100100110001111101110111011100100011111010111101011110001110101101011 ;
		6'B001111 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0101111100001110101001001100011100010101011101010001011101010101111000010 ;
		6'B010000 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0110010011011100101010011001001100000111001000100101011100011001011100111 ;
		6'B010001 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0110101010011011001000001010111011111000111101100001011011011001011101100 ;
		6'B010010 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0111000001001001001001110110001011101010111100101001011010010101111100100 ;
		6'B010011 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0111010111100101110111010111001011011101000110011001011001001110111100110 ;
		6'B010100 : inst_cellmath__195__80_0_0_tmp_1 = 73'B0111101101110000011001010100111011001111011011011001011000000100100000111 ;
		6'B010101 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1000000011100111111001000011111011000001111100000101010110110110101011101 ;
		6'B010110 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1000011001001011100000100110111010110100101001000101010101100101100000000 ;
		6'B010111 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1000101110011010011010110010001010100111100010110101010100010001000001011 ;
		6'B011000 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1001000011010011110011001100101010011010101001111001010010111001010010110 ;
		6'B011001 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1001010111110110110110010011001010001101111110101101010001011110010111101 ;
		6'B011010 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1001101100000010110001011000101010000001100001110001010000000000010011100 ;
		6'B011011 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1001111111110110110010101001111001110101010011100101001110011111001001111 ;
		6'B011100 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1010010011010010001001001101111001101001010100100101001100111010111110110 ;
		6'B011101 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1010100110010100000101001001011001011101100101010101001011010011110101110 ;
		6'B011110 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1010111000111011110111011111011001010010000110001001001001101001110010111 ;
		6'B011111 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1011001011001000110010010011001001000110110111100101000111111100111010011 ;
		6'B100000 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1011011100111010001000101010101000111011111010000001000110001101010000011 ;
		6'B100001 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1011101110001111001110101111101000110001001101111001000100011010111001001 ;
		6'B100010 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1011111111000111011001110001111000100110110011100101000010100101111001000 ;
		6'B100011 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1100001111100010000000000111111000011100101011100001000000101110010100101 ;
		6'B100100 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1100011111011110011001010010001000010010110110000100111110110100010000101 ;
		6'B100101 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1100101110111011111101111010101000001001010011101000111100110111110001100 ;
		6'B100110 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1100111101111010000111110111101000000000000100101000111010111000111100010 ;
		6'B100111 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1101001100011000010010001101100111110111001001010100111000110111110101110 ;
		6'B101000 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1101011010010101111001001111000111101110100010000100110110110100100010111 ;
		6'B101001 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1101100111110010011010011111100111100110001111010000110100101111001000110 ;
		6'B101010 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1101110100101101010100110011100111011110010001001100110010100111101100100 ;
		6'B101011 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1110000001000110001000010011010111010110101000001000110000011110010011011 ;
		6'B101100 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1110001100111100010110011010010111001111010100011100101110010011000010101 ;
		6'B101101 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1110011000001111100001111010000111001000010110010100101100000101111111110 ;
		6'B101110 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1110100010111111001110111010000111000001101110001000101001110111010000000 ;
		6'B101111 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1110101101001011000010111010000110111011011100000100100111100110111001000 ;
		6'B110000 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1110110110110010100100110001000110110101100000011000100101010101000000010 ;
		6'B110001 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1110111111110101011100110001000110101111111011010100100011000001101011011 ;
		6'B110010 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111001000010011010100100101100110101010101101000100100000101101000000001 ;
		6'B110011 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111010000001011110111010101110110100101110101110100011110010111000100001 ;
		6'B110100 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111010111011110110001100100100110100001010101110100011011111111111101010 ;
		6'B110101 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111011110001011110001010010000110011101001101001100011001100111110001010 ;
		6'B110110 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111100100010010100101111011110110011001011100000100010111001110100110001 ;
		6'B110111 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111101001110011000000011101100110010110000010101100010100110100100001101 ;
		6'B111000 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111101110101100110011010001110110010011000001001000010010011001101001110 ;
		6'B111001 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111110010111111110010010010100110010000010111100000001111111110000100100 ;
		6'B111010 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111110110101011110010111000110110001110000101111100001101100001110111111 ;
		6'B111011 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111111001110000101011111110110110001100001100100000001011000101001001111 ;
		6'B111100 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111111100001110010101111110010110001010101011010000001000101000000000100 ;
		6'B111101 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111111110000100101010110010110110001001100010010000000110001010100001111 ;
		6'B111110 : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111111111010011100101111000000110001000110001100100000011101100110100000 ;
		default : inst_cellmath__195__80_0_0_tmp_1 = 73'B1111111111111011000100001011010110001000011001001100000001001110111101000 ;
	endcase
end

assign inst_cellmath__195[29:4] = inst_cellmath__195__80_0_0[72:47];

assign inst_cellmath__195[3:0] = inst_cellmath__195__80_0_0[46:43];

assign inst_cellmath__197__131[20] = 1'B1;

assign inst_cellmath__197[2:0] = inst_cellmath__195__80_0_0[25:23];

assign inst_cellmath__197__131[19:0] = inst_cellmath__195__80_0_0[42:23];

assign inst_cellmath__197[20:18] = inst_cellmath__197__131[20:18];

assign inst_cellmath__197[17:3] = inst_cellmath__195__80_0_0[40:26];

assign inst_cellmath__198 = 
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

wire [49:0] inst_cellmath__201_tmp_2;
wire [49:0] inst_cellmath__201_tmp_3;
wire [49:0] inst_cellmath__201_tmp_4;
assign inst_cellmath__201_tmp_4 = 
	+((inst_cellmath__195<<18));
assign inst_cellmath__201_tmp_3 = inst_cellmath__201_tmp_4
	+({{29{inst_cellmath__197[20]}}, inst_cellmath__197} * inst_cellmath__198[32:17]);
assign inst_cellmath__201_tmp_2 = inst_cellmath__201_tmp_3
	+((inst_cellmath__195__80_0_0[21:0] * {{33{inst_cellmath__113_0_1[16]}}, inst_cellmath__113_0_1})<<4);
assign inst_cellmath__201 = inst_cellmath__201_tmp_2
	+(50'B00000000000000000000000001000000000000000000000000);

reg [48:0] inst_cellmath__200_48_0_;
assign inst_cellmath__200[48:0] = inst_cellmath__200_48_0_;
always @ (inst_cellmath__201[49] or inst_cellmath__201[48:0]) begin
	case (inst_cellmath__201[49])
		1'B0 : inst_cellmath__200_48_0_ = inst_cellmath__201[48:0] ;
		default : inst_cellmath__200_48_0_ = {49{1'b0}} ;
	endcase
end

assign inst_cellmath__210 = {{8{1'B0}}, inst_cellmath__200[47:25]};

assign inst_cellmath__19 = 
	(a_exp[7])
	&(a_exp[0])
	&(a_exp[1])
	&(a_exp[2])
	&(a_exp[3])
	&(a_exp[4])
	&(a_exp[5])
	&(a_exp[6]);

assign inst_cellmath__24 = 
	((~a_man[0]))
	&((~a_man[1]))
	&((~a_man[2]))
	&((~a_man[3]))
	&((~a_man[4]))
	&((~a_man[5]))
	&((~a_man[6]))
	&((~a_man[7]))
	&((~a_man[8]))
	&((~a_man[9]))
	&((~a_man[10]))
	&((~a_man[11]))
	&((~a_man[12]))
	&((~a_man[13]))
	&((~a_man[14]))
	&((~a_man[15]))
	&((~a_man[16]))
	&((~a_man[17]))
	&((~a_man[18]))
	&((~a_man[19]))
	&((~a_man[20]))
	&((~a_man[21]))
	&((~a_man[22]));

assign inst_cellmath__66 = 
	((~a_sign))
	&(inst_cellmath__19)
	&(inst_cellmath__24);

assign inst_cellmath__67 = 
	(a_sign)
	&(inst_cellmath__19)
	&(inst_cellmath__24);

assign inst_cellmath__68 = 
	(inst_cellmath__66)
	|(inst_cellmath__67);

assign inst_cellmath__69 = 
	(inst_cellmath__19)
	&((~inst_cellmath__24));

assign inst_cellmath__82 = 
	(inst_cellmath__19)
	|(inst_cellmath__69);

assign inst_cellmath__17 = 
	((~a_exp[7]))
	&((~a_exp[0]))
	&((~a_exp[1]))
	&((~a_exp[2]))
	&((~a_exp[3]))
	&((~a_exp[4]))
	&((~a_exp[5]))
	&((~a_exp[6]));

assign inst_cellmath__79__46 = 
	(inst_cellmath__17)
	|(inst_cellmath__68);

assign inst_cellmath__228__231 = 
	(inst_cellmath__68)
	|(inst_cellmath__82)
	|(inst_cellmath__79__46);

assign inst_cellmath__231__242_0_0_0 = {inst_cellmath__228__231,inst_cellmath__200[46]};

assign inst_cellmath__216__184 = (12'B000001110111>=a_exp);

assign inst_cellmath__219 = 
	(inst_cellmath__200[48])
	&(inst_cellmath__61[22]);

assign inst_cellmath__216_0 = {inst_cellmath__216__184,inst_cellmath__219};

assign inst_cellmath__211__183 = {inst_cellmath__210,1'B1};

reg [4:0] inst_cellmath__211__182_4_0_;
assign inst_cellmath__211__182[4:0] = inst_cellmath__211__182_4_0_;
always @ (inst_cellmath__211__183) begin
	casez (inst_cellmath__211__183)
		32'B01?????????????????????????????? : inst_cellmath__211__182_4_0_ = 5'B00001 ;
		32'B001????????????????????????????? : inst_cellmath__211__182_4_0_ = 5'B00010 ;
		32'B0001???????????????????????????? : inst_cellmath__211__182_4_0_ = 5'B00011 ;
		32'B00001??????????????????????????? : inst_cellmath__211__182_4_0_ = 5'B00100 ;
		32'B000001?????????????????????????? : inst_cellmath__211__182_4_0_ = 5'B00101 ;
		32'B0000001????????????????????????? : inst_cellmath__211__182_4_0_ = 5'B00110 ;
		32'B00000001???????????????????????? : inst_cellmath__211__182_4_0_ = 5'B00111 ;
		32'B000000001??????????????????????? : inst_cellmath__211__182_4_0_ = 5'B01000 ;
		32'B0000000001?????????????????????? : inst_cellmath__211__182_4_0_ = 5'B01001 ;
		32'B00000000001????????????????????? : inst_cellmath__211__182_4_0_ = 5'B01010 ;
		32'B000000000001???????????????????? : inst_cellmath__211__182_4_0_ = 5'B01011 ;
		32'B0000000000001??????????????????? : inst_cellmath__211__182_4_0_ = 5'B01100 ;
		32'B00000000000001?????????????????? : inst_cellmath__211__182_4_0_ = 5'B01101 ;
		32'B000000000000001????????????????? : inst_cellmath__211__182_4_0_ = 5'B01110 ;
		32'B0000000000000001???????????????? : inst_cellmath__211__182_4_0_ = 5'B01111 ;
		32'B00000000000000001??????????????? : inst_cellmath__211__182_4_0_ = 5'B10000 ;
		32'B000000000000000001?????????????? : inst_cellmath__211__182_4_0_ = 5'B10001 ;
		32'B0000000000000000001????????????? : inst_cellmath__211__182_4_0_ = 5'B10010 ;
		32'B00000000000000000001???????????? : inst_cellmath__211__182_4_0_ = 5'B10011 ;
		32'B000000000000000000001??????????? : inst_cellmath__211__182_4_0_ = 5'B10100 ;
		32'B0000000000000000000001?????????? : inst_cellmath__211__182_4_0_ = 5'B10101 ;
		32'B00000000000000000000001????????? : inst_cellmath__211__182_4_0_ = 5'B10110 ;
		32'B000000000000000000000001???????? : inst_cellmath__211__182_4_0_ = 5'B10111 ;
		32'B0000000000000000000000001??????? : inst_cellmath__211__182_4_0_ = 5'B11000 ;
		32'B00000000000000000000000001?????? : inst_cellmath__211__182_4_0_ = 5'B11001 ;
		32'B000000000000000000000000001????? : inst_cellmath__211__182_4_0_ = 5'B11010 ;
		32'B0000000000000000000000000001???? : inst_cellmath__211__182_4_0_ = 5'B11011 ;
		32'B00000000000000000000000000001??? : inst_cellmath__211__182_4_0_ = 5'B11100 ;
		32'B000000000000000000000000000001?? : inst_cellmath__211__182_4_0_ = 5'B11101 ;
		32'B0000000000000000000000000000001? : inst_cellmath__211__182_4_0_ = 5'B11110 ;
		32'B00000000000000000000000000000001 : inst_cellmath__211__182_4_0_ = 5'B11111 ;
		default : inst_cellmath__211__182_4_0_ = 5'B00000 ;
	endcase
end

assign inst_cellmath__215 = 
	+(inst_cellmath__211__182[4:0])
	-(5'B00111);

assign inst_cellmath__220__188[22:0] = inst_cellmath__200[47:25] << inst_cellmath__215;

assign inst_cellmath__221__195 = 
	-(inst_cellmath__215)
	+(7'B1111111);

assign inst_cellmath__220_22_0__0 = {inst_cellmath__220__188[22:0],1'B0,inst_cellmath__221__195};

assign inst_cellmath__220_22_0__1 = {a_man,a_exp};

reg [30:0] inst_cellmath__220_22_0__tmp_5;
assign inst_cellmath__220_22_0_ = inst_cellmath__220_22_0__tmp_5;
always @ (inst_cellmath__216_0 or inst_cellmath__220_22_0__0 or inst_cellmath__220_22_0__1) begin
	casez (inst_cellmath__216_0)
		2'B00 : inst_cellmath__220_22_0__tmp_5 = inst_cellmath__220_22_0__0 ;
		2'B1? : inst_cellmath__220_22_0__tmp_5 = inst_cellmath__220_22_0__1 ;
		default : inst_cellmath__220_22_0__tmp_5 = 31'B0000000000000000000000001111111 ;
	endcase
end

assign inst_cellmath__223__208 = 
	(inst_cellmath__220_22_0_[8])
	|(inst_cellmath__220_22_0_[9])
	|(inst_cellmath__220_22_0_[10])
	|(inst_cellmath__220_22_0_[11])
	|(inst_cellmath__220_22_0_[12])
	|(inst_cellmath__220_22_0_[13])
	|(inst_cellmath__220_22_0_[14])
	|(inst_cellmath__220_22_0_[15])
	|(inst_cellmath__220_22_0_[16])
	|(inst_cellmath__220_22_0_[17])
	|(inst_cellmath__220_22_0_[18])
	|(inst_cellmath__220_22_0_[19])
	|(inst_cellmath__220_22_0_[20])
	|(inst_cellmath__220_22_0_[21])
	|(inst_cellmath__220_22_0_[22])
	|(inst_cellmath__220_22_0_[23])
	|(inst_cellmath__220_22_0_[24])
	|(inst_cellmath__220_22_0_[25])
	|(inst_cellmath__220_22_0_[26])
	|(inst_cellmath__220_22_0_[27])
	|(inst_cellmath__220_22_0_[28])
	|(inst_cellmath__220_22_0_[29])
	|(inst_cellmath__220_22_0_[0])
	|(inst_cellmath__220_22_0_[1])
	|(inst_cellmath__220_22_0_[2])
	|(inst_cellmath__220_22_0_[3])
	|(inst_cellmath__220_22_0_[4])
	|(inst_cellmath__220_22_0_[5])
	|(inst_cellmath__220_22_0_[6])
	|(inst_cellmath__220_22_0_[7]);

assign inst_cellmath__223__207 = 
	(inst_cellmath__48_32_0_[24])
	^(a_sign);

assign inst_cellmath__223__199 = 
	((~inst_cellmath__82))
	&((~inst_cellmath__79__46))
	&(inst_cellmath__223__208)
	&(inst_cellmath__223__207);

reg [0:0] inst_cellmath__223_tmp_6;
assign inst_cellmath__223 = inst_cellmath__223_tmp_6;
always @ (inst_cellmath__216__184 or inst_cellmath__223__199 or a_sign) begin
	case (inst_cellmath__216__184)
		1'B0 : inst_cellmath__223_tmp_6 = inst_cellmath__223__199 ;
		default : inst_cellmath__223_tmp_6 = a_sign ;
	endcase
end

assign inst_cellmath__224__212 = 
	(inst_cellmath__82)
	|((~inst_cellmath__79__46));

reg [7:0] inst_cellmath__228_tmp_7;
assign inst_cellmath__228 = inst_cellmath__228_tmp_7;
always @ (inst_cellmath__228__231 or inst_cellmath__220_22_0_[7:0] or inst_cellmath__224__212) begin
	case (inst_cellmath__228__231)
		1'B0 : inst_cellmath__228_tmp_7 = inst_cellmath__220_22_0_[7:0] ;
		default : inst_cellmath__228_tmp_7 = {{7{inst_cellmath__224__212}}, inst_cellmath__224__212} ;
	endcase
end

reg [22:0] inst_cellmath__231_tmp_8;
assign inst_cellmath__231 = inst_cellmath__231_tmp_8;
always @ (inst_cellmath__231__242_0_0_0 or inst_cellmath__220_22_0_[30:8] or inst_cellmath__82) begin
	casez (inst_cellmath__231__242_0_0_0)
		2'B0? : inst_cellmath__231_tmp_8 = inst_cellmath__220_22_0_[30:8] ;
		default : inst_cellmath__231_tmp_8 = {{22{inst_cellmath__82}}, inst_cellmath__82} ;
	endcase
end

assign inst_cellmath__237 = {inst_cellmath__223,inst_cellmath__228,inst_cellmath__231};

assign x[31:0] = inst_cellmath__237;

assign x[36:33] = 4'B0000;
endmodule

/* CADENCE  ubf4SQrWow== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




