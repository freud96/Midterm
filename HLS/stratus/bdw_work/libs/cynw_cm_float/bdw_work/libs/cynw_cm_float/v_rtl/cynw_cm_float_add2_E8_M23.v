/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:16:03 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module cynw_cm_float_add2_E8_M23 (
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

assign inst_cellmath__46__7 = (13'B0000011111110==(b_exp - 13'B0000000000001));

assign inst_cellmath__46__8 = (27'B000000000000000000000000000==b_man);

assign inst_cellmath__46 = 
	(inst_cellmath__46__7)
	&(inst_cellmath__46__8);

assign inst_cellmath__45__5 = (13'B0000011111110==(a_exp - 13'B0000000000001));

assign inst_cellmath__45__6 = (27'B000000000000000000000000000==a_man);

assign inst_cellmath__45 = 
	(inst_cellmath__45__5)
	&(inst_cellmath__45__6);

assign inst_cellmath__79__42 = 
	(inst_cellmath__46)
	&((~b_sign))
	&(a_sign)
	&(inst_cellmath__45);

assign inst_cellmath__79__41 = 
	(inst_cellmath__46)
	&(b_sign)
	&((~a_sign))
	&(inst_cellmath__45);

assign inst_cellmath__47 = 
	(inst_cellmath__45__5)
	&((~inst_cellmath__45__6));

assign inst_cellmath__48 = 
	(inst_cellmath__46__7)
	&((~inst_cellmath__46__8));

assign inst_cellmath__79 = 
	(inst_cellmath__79__42)
	|(inst_cellmath__79__41)
	|(inst_cellmath__47)
	|(inst_cellmath__48);

assign inst_cellmath__43 = (12'B000000000000==a_exp);

assign inst_cellmath__55 = {2'B01,a_man,1'B0};

assign inst_cellmath__44 = (12'B000000000000==b_exp);

assign inst_cellmath__44_0 = {inst_cellmath__44,inst_cellmath__46,inst_cellmath__48};

reg [7:0] inst_cellmath__52_tmp_0;
assign inst_cellmath__52 = inst_cellmath__52_tmp_0;
always @ (inst_cellmath__44_0 or b_exp) begin
	casez (inst_cellmath__44_0)
		3'B000 : inst_cellmath__52_tmp_0 = b_exp ;
		3'B001 : inst_cellmath__52_tmp_0 = 8'B11111111 ;
		3'B01? : inst_cellmath__52_tmp_0 = 8'B11111111 ;
		default : inst_cellmath__52_tmp_0 = {8{1'b0}} ;
	endcase
end

assign inst_cellmath__43_0 = {inst_cellmath__43,inst_cellmath__45,inst_cellmath__47};

reg [7:0] inst_cellmath__51_tmp_1;
assign inst_cellmath__51 = inst_cellmath__51_tmp_1;
always @ (inst_cellmath__43_0 or a_exp) begin
	casez (inst_cellmath__43_0)
		3'B000 : inst_cellmath__51_tmp_1 = a_exp ;
		3'B001 : inst_cellmath__51_tmp_1 = 8'B11111111 ;
		3'B01? : inst_cellmath__51_tmp_1 = 8'B11111111 ;
		default : inst_cellmath__51_tmp_1 = {8{1'b0}} ;
	endcase
end

wire [8:0] inst_cellmath__57_tmp_2;
assign inst_cellmath__57_tmp_2 = inst_cellmath__52;
wire [8:0] inst_cellmath__57_tmp_3;
assign inst_cellmath__57_tmp_3 = (((inst_cellmath__51) ^ (9'B1<<8)) > (inst_cellmath__57_tmp_2 ^ (9'B1<<8))) ? inst_cellmath__51  : inst_cellmath__57_tmp_2;
assign inst_cellmath__57 = inst_cellmath__57_tmp_3;

assign inst_cellmath__58 = 
	+(inst_cellmath__57)
	-(inst_cellmath__51);

assign inst_cellmath__60__28 = inst_cellmath__55 >> {|inst_cellmath__58[7:5], inst_cellmath__58[4:0]};

reg [25:0] inst_cellmath__60_tmp_4;
assign inst_cellmath__60 = inst_cellmath__60_tmp_4;
always @ (inst_cellmath__43 or inst_cellmath__60__28) begin
	case (inst_cellmath__43)
		1'B0 : inst_cellmath__60_tmp_4 = inst_cellmath__60__28 ;
		default : inst_cellmath__60_tmp_4 = {26{1'b0}} ;
	endcase
end

assign inst_cellmath__64__32_0 = 
	-(inst_cellmath__60);

reg [26:0] inst_cellmath__64_tmp_5;
assign inst_cellmath__64 = inst_cellmath__64_tmp_5;
always @ (a_sign or inst_cellmath__60 or inst_cellmath__64__32_0) begin
	case (a_sign)
		1'B0 : inst_cellmath__64_tmp_5 = inst_cellmath__60 ;
		default : inst_cellmath__64_tmp_5 = inst_cellmath__64__32_0 ;
	endcase
end

assign inst_cellmath__56 = {2'B01,b_man,1'B0};

assign inst_cellmath__59 = 
	+(inst_cellmath__57)
	-(inst_cellmath__52);

assign inst_cellmath__61__30 = inst_cellmath__56 >> {|inst_cellmath__59[7:5], inst_cellmath__59[4:0]};

reg [25:0] inst_cellmath__61_tmp_6;
assign inst_cellmath__61 = inst_cellmath__61_tmp_6;
always @ (inst_cellmath__44 or inst_cellmath__61__30) begin
	case (inst_cellmath__44)
		1'B0 : inst_cellmath__61_tmp_6 = inst_cellmath__61__30 ;
		default : inst_cellmath__61_tmp_6 = {26{1'b0}} ;
	endcase
end

assign inst_cellmath__65__34_0 = 
	-(inst_cellmath__61);

reg [26:0] inst_cellmath__65_tmp_7;
assign inst_cellmath__65 = inst_cellmath__65_tmp_7;
always @ (b_sign or inst_cellmath__61 or inst_cellmath__65__34_0) begin
	case (b_sign)
		1'B0 : inst_cellmath__65_tmp_7 = inst_cellmath__61 ;
		default : inst_cellmath__65_tmp_7 = inst_cellmath__65__34_0 ;
	endcase
end

assign inst_cellmath__66 = 
	+(inst_cellmath__64)
	+(inst_cellmath__65);

assign inst_cellmath__67__35 = ((31'B1000000000000000000000000000000 ^ 31'B0000000000000000000000000000000)>(31'B1000000000000000000000000000000 ^ {{4{inst_cellmath__66[26]}}, inst_cellmath__66}));

assign inst_cellmath__67__36 = 
	(b_sign)
	&(inst_cellmath__44)
	&(inst_cellmath__43)
	&(a_sign);

assign inst_cellmath__67 = 
	(inst_cellmath__67__35)
	|(inst_cellmath__67__36);

reg [0:0] inst_cellmath__88_tmp_8;
assign inst_cellmath__88 = inst_cellmath__88_tmp_8;
always @ (inst_cellmath__79 or inst_cellmath__67) begin
	case (inst_cellmath__79)
		1'B0 : inst_cellmath__88_tmp_8 = inst_cellmath__67 ;
		default : inst_cellmath__88_tmp_8 = {1{1'b0}} ;
	endcase
end

assign inst_cellmath__68__38[25:0] = 
	-(inst_cellmath__66[25:0]);

reg [25:0] inst_cellmath__68_tmp_9;
assign inst_cellmath__68 = inst_cellmath__68_tmp_9;
always @ (inst_cellmath__67 or inst_cellmath__66[25:0] or inst_cellmath__68__38[25:0]) begin
	case (inst_cellmath__67)
		1'B0 : inst_cellmath__68_tmp_9 = inst_cellmath__66[25:0] ;
		default : inst_cellmath__68_tmp_9 = inst_cellmath__68__38[25:0] ;
	endcase
end

reg [5:0] inst_cellmath__69_tmp_10;
assign inst_cellmath__69 = inst_cellmath__69_tmp_10;
always @ (inst_cellmath__68) begin
	casez (inst_cellmath__68)
		26'B1????????????????????????? : inst_cellmath__69_tmp_10 = 6'B000000 ;
		26'B01???????????????????????? : inst_cellmath__69_tmp_10 = 6'B000001 ;
		26'B001??????????????????????? : inst_cellmath__69_tmp_10 = 6'B000010 ;
		26'B0001?????????????????????? : inst_cellmath__69_tmp_10 = 6'B000011 ;
		26'B00001????????????????????? : inst_cellmath__69_tmp_10 = 6'B000100 ;
		26'B000001???????????????????? : inst_cellmath__69_tmp_10 = 6'B000101 ;
		26'B0000001??????????????????? : inst_cellmath__69_tmp_10 = 6'B000110 ;
		26'B00000001?????????????????? : inst_cellmath__69_tmp_10 = 6'B000111 ;
		26'B000000001????????????????? : inst_cellmath__69_tmp_10 = 6'B001000 ;
		26'B0000000001???????????????? : inst_cellmath__69_tmp_10 = 6'B001001 ;
		26'B00000000001??????????????? : inst_cellmath__69_tmp_10 = 6'B001010 ;
		26'B000000000001?????????????? : inst_cellmath__69_tmp_10 = 6'B001011 ;
		26'B0000000000001????????????? : inst_cellmath__69_tmp_10 = 6'B001100 ;
		26'B00000000000001???????????? : inst_cellmath__69_tmp_10 = 6'B001101 ;
		26'B000000000000001??????????? : inst_cellmath__69_tmp_10 = 6'B001110 ;
		26'B0000000000000001?????????? : inst_cellmath__69_tmp_10 = 6'B001111 ;
		26'B00000000000000001????????? : inst_cellmath__69_tmp_10 = 6'B010000 ;
		26'B000000000000000001???????? : inst_cellmath__69_tmp_10 = 6'B010001 ;
		26'B0000000000000000001??????? : inst_cellmath__69_tmp_10 = 6'B010010 ;
		26'B00000000000000000001?????? : inst_cellmath__69_tmp_10 = 6'B010011 ;
		26'B000000000000000000001????? : inst_cellmath__69_tmp_10 = 6'B010100 ;
		26'B0000000000000000000001???? : inst_cellmath__69_tmp_10 = 6'B010101 ;
		26'B00000000000000000000001??? : inst_cellmath__69_tmp_10 = 6'B010110 ;
		26'B000000000000000000000001?? : inst_cellmath__69_tmp_10 = 6'B010111 ;
		26'B0000000000000000000000001? : inst_cellmath__69_tmp_10 = 6'B011000 ;
		26'B00000000000000000000000001 : inst_cellmath__69_tmp_10 = 6'B011001 ;
		default : inst_cellmath__69_tmp_10 = 6'B100000 ;
	endcase
end

wire [9:0] inst_cellmath__74_0_tmp_11;
assign inst_cellmath__74_0_tmp_11 = 
	-(inst_cellmath__69[4:0])
	+(inst_cellmath__57);
assign inst_cellmath__74_0 = inst_cellmath__74_0_tmp_11
	+(10'B0000000001);

assign inst_cellmath__77__39 = ((14'B10000000000000 ^ 14'B00000011111110)<(14'B10000000000000 ^ {{4{inst_cellmath__74_0[9]}}, inst_cellmath__74_0}));

assign inst_cellmath__77 = 
	((~inst_cellmath__69[5]))
	&(inst_cellmath__77__39);

assign inst_cellmath__80__43 = 
	(inst_cellmath__77)
	|(inst_cellmath__45)
	|(inst_cellmath__46);

assign inst_cellmath__80 = 
	(inst_cellmath__80__43)
	&((~inst_cellmath__79));

assign inst_cellmath__78__40 = ((14'B10000000000000 ^ {{4{inst_cellmath__74_0[9]}}, inst_cellmath__74_0})<=(14'B10000000000000 ^ 14'B00000000000000));

assign inst_cellmath__78 = 
	(inst_cellmath__69[5])
	|(inst_cellmath__78__40);

assign inst_cellmath__81 = 
	((~inst_cellmath__80))
	&(inst_cellmath__78)
	&((~inst_cellmath__79));

assign inst_cellmath__79_0 = {inst_cellmath__79,inst_cellmath__80,inst_cellmath__81};

reg [7:0] inst_cellmath__83_tmp_12;
assign inst_cellmath__83 = inst_cellmath__83_tmp_12;
always @ (inst_cellmath__79_0 or inst_cellmath__74_0[7:0]) begin
	casez (inst_cellmath__79_0)
		3'B000 : inst_cellmath__83_tmp_12 = inst_cellmath__74_0[7:0] ;
		3'B01? : inst_cellmath__83_tmp_12 = 8'B11111111 ;
		3'B1?? : inst_cellmath__83_tmp_12 = 8'B11111111 ;
		default : inst_cellmath__83_tmp_12 = {8{1'b0}} ;
	endcase
end

assign inst_cellmath__86__56 = ((15'B100000000000000 ^ inst_cellmath__83)>=(15'B100000000000000 ^ 15'B000000011111111));

assign inst_cellmath__86__55 = 
	(inst_cellmath__80)
	|(inst_cellmath__86__56);

assign inst_cellmath__86 = 
	(inst_cellmath__86__55)
	&((~inst_cellmath__79))
	&((~inst_cellmath__81));

assign inst_cellmath__87__58 = ((12'B100000000000 ^ inst_cellmath__83)<=(12'B100000000000 ^ 12'B000000000000));

assign inst_cellmath__87__57 = 
	(inst_cellmath__81)
	|(inst_cellmath__87__58);

assign inst_cellmath__87 = 
	(inst_cellmath__87__57)
	&((~inst_cellmath__79))
	&((~inst_cellmath__80));

assign inst_cellmath__79_2 = {inst_cellmath__79,inst_cellmath__86,inst_cellmath__87};

reg [7:0] inst_cellmath__89_tmp_13;
assign inst_cellmath__89 = inst_cellmath__89_tmp_13;
always @ (inst_cellmath__79_2 or inst_cellmath__83) begin
	casez (inst_cellmath__79_2)
		3'B000 : inst_cellmath__89_tmp_13 = inst_cellmath__83 ;
		3'B01? : inst_cellmath__89_tmp_13 = 8'B11111111 ;
		3'B1?? : inst_cellmath__89_tmp_13 = 8'B11111111 ;
		default : inst_cellmath__89_tmp_13 = {8{1'b0}} ;
	endcase
end

assign inst_cellmath__79_3 = {inst_cellmath__79,inst_cellmath__86,inst_cellmath__87,inst_cellmath__80,inst_cellmath__81};

assign inst_cellmath__71[24:0] = inst_cellmath__68[24:0] << inst_cellmath__69[4:0];

reg [22:0] inst_cellmath__90_tmp_14;
assign inst_cellmath__90 = inst_cellmath__90_tmp_14;
always @ (inst_cellmath__79_3 or inst_cellmath__71[24:2]) begin
	casez (inst_cellmath__79_3)
		5'B00000 : inst_cellmath__90_tmp_14 = inst_cellmath__71[24:2] ;
		5'B1???? : inst_cellmath__90_tmp_14 = 23'B11111111111111111111111 ;
		default : inst_cellmath__90_tmp_14 = {23{1'b0}} ;
	endcase
end

assign inst_cellmath__100 = {inst_cellmath__88,inst_cellmath__89,inst_cellmath__90};

assign x = inst_cellmath__100;
endmodule

/* CADENCE  urTwTQrfqQ== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/


