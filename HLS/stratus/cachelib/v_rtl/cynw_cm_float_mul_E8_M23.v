/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:18:17 CST (+0800), Sunday 24 April 2022
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

assign inst_cellmath__32__5 = (13'B0000011111110==(a_exp - 13'B0000000000001));

assign inst_cellmath__32__6 = (27'B000000000000000000000000000==a_man);

assign inst_cellmath__34 = 
	(inst_cellmath__32__5)
	&((~inst_cellmath__32__6));

assign inst_cellmath__33__7 = (13'B0000011111110==(b_exp - 13'B0000000000001));

assign inst_cellmath__33__8 = (27'B000000000000000000000000000==b_man);

assign inst_cellmath__35 = 
	(inst_cellmath__33__7)
	&((~inst_cellmath__33__8));

assign inst_cellmath__38 = 
	(inst_cellmath__34)
	|(inst_cellmath__35);

assign inst_cellmath__32 = 
	(inst_cellmath__32__5)
	&(inst_cellmath__32__6);

assign inst_cellmath__33 = 
	(inst_cellmath__33__7)
	&(inst_cellmath__33__8);

assign inst_cellmath__37 = 
	(inst_cellmath__32)
	|(inst_cellmath__33);

assign inst_cellmath__30 = (12'B000000000000==a_exp);

assign inst_cellmath__31 = (12'B000000000000==b_exp);

assign inst_cellmath__36 = 
	(inst_cellmath__30)
	|(inst_cellmath__31);

assign inst_cellmath__50__15 = 
	(inst_cellmath__37)
	&(inst_cellmath__36);

assign inst_cellmath__50 = 
	(inst_cellmath__38)
	|(inst_cellmath__50__15);

assign inst_cellmath__52__21 = 
	(inst_cellmath__37)
	&((~inst_cellmath__36));

assign inst_cellmath__26 = {1'B1,b_man};

assign inst_cellmath__25 = {1'B1,a_man};

wire [47:0] inst_i_mul_int_mult_datapath_prodSum_tmp_0;
assign inst_i_mul_int_mult_datapath_prodSum_tmp_0 = 
	+(inst_cellmath__25 * inst_cellmath__26);
assign inst_i_mul_int_mult_datapath_prodSum[47:0] = inst_i_mul_int_mult_datapath_prodSum_tmp_0
	+(48'B000000000000000000000000010000000000000000000000);

wire [9:0] inst_cellmath__45_tmp_1;
wire [9:0] inst_cellmath__45_tmp_2;
assign inst_cellmath__45_tmp_2 = 
	+(inst_i_mul_int_mult_datapath_prodSum[47])
	+(b_exp);
assign inst_cellmath__45_tmp_1 = inst_cellmath__45_tmp_2
	+(a_exp);
assign inst_cellmath__45 = inst_cellmath__45_tmp_1
	-(10'B0001111111);

assign inst_cellmath__49 = ((14'B10000000000000 ^ 14'B00000011111110)<(14'B10000000000000 ^ {{4{inst_cellmath__45[9]}}, inst_cellmath__45}));

assign inst_cellmath__52__20 = 
	(inst_cellmath__52__21)
	|(inst_cellmath__49);

assign inst_cellmath__52 = 
	((~inst_cellmath__50__15))
	&(inst_cellmath__52__20)
	&((~inst_cellmath__38));

assign inst_cellmath__54__30 = 
	(inst_cellmath__50)
	|(inst_cellmath__52);

assign inst_cellmath__51__17 = 
	(inst_cellmath__36)
	&((~inst_cellmath__37));

assign inst_cellmath__48 = ((14'B10000000000000 ^ {{4{inst_cellmath__45[9]}}, inst_cellmath__45})<=(14'B10000000000000 ^ 14'B00000000000000));

assign inst_cellmath__51__16 = 
	(inst_cellmath__51__17)
	|(inst_cellmath__48);

assign inst_cellmath__51 = 
	((~inst_cellmath__50__15))
	&(inst_cellmath__51__16)
	&((~inst_cellmath__38));

assign inst_cellmath__54__30_0 = {inst_cellmath__54__30,inst_cellmath__51};

assign inst_cellmath__39 = 
	(a_sign)
	^(b_sign);

reg [0:0] inst_cellmath__53_tmp_3;
assign inst_cellmath__53 = inst_cellmath__53_tmp_3;
always @ (inst_cellmath__50 or inst_cellmath__39) begin
	case (inst_cellmath__50)
		1'B0 : inst_cellmath__53_tmp_3 = inst_cellmath__39 ;
		default : inst_cellmath__53_tmp_3 = {1{1'b0}} ;
	endcase
end

reg [7:0] inst_cellmath__54_tmp_4;
assign inst_cellmath__54 = inst_cellmath__54_tmp_4;
always @ (inst_cellmath__54__30_0 or inst_cellmath__45[7:0]) begin
	casez (inst_cellmath__54__30_0)
		2'B00 : inst_cellmath__54_tmp_4 = inst_cellmath__45[7:0] ;
		2'B1? : inst_cellmath__54_tmp_4 = 8'B11111111 ;
		default : inst_cellmath__54_tmp_4 = {8{1'b0}} ;
	endcase
end

assign inst_cellmath__55__36 = 
	(inst_cellmath__52)
	|(inst_cellmath__51);

assign inst_cellmath__50_0 = {inst_cellmath__50,inst_cellmath__55__36,inst_i_mul_int_mult_datapath_prodSum[47]};

reg [22:0] inst_cellmath__55_tmp_5;
assign inst_cellmath__55 = inst_cellmath__55_tmp_5;
always @ (inst_cellmath__50_0 or inst_i_mul_int_mult_datapath_prodSum[45:23] or inst_i_mul_int_mult_datapath_prodSum[46:24]) begin
	casez (inst_cellmath__50_0)
		3'B000 : inst_cellmath__55_tmp_5 = inst_i_mul_int_mult_datapath_prodSum[45:23] ;
		3'B001 : inst_cellmath__55_tmp_5 = inst_i_mul_int_mult_datapath_prodSum[46:24] ;
		3'B1?? : inst_cellmath__55_tmp_5 = 23'B11111111111111111111111 ;
		default : inst_cellmath__55_tmp_5 = {23{1'b0}} ;
	endcase
end

assign inst_cellmath__65 = {inst_cellmath__53,inst_cellmath__54,inst_cellmath__55};

assign x = inst_cellmath__65;
endmodule

/* CADENCE  vbH2SAva : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/



