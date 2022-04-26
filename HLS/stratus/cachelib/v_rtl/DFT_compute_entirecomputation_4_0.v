`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:13:35 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_entirecomputation_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [1:0] in1;
output [47:0] out1;
wire [7:0] fDFTpts;
wire [4:0] asc002;
wire [7:0] asc005;
wire  asc007;
wire [31:0] fcizSig_i2;
wire [8:0] asc010,
	asc011;
wire [5:0] asc013;
wire  asc014;
wire [5:0] asc015;
wire  asc016;
wire [5:0] asc017,
	asc018,
	asc020,
	asc022,
	asc024,
	asc026,
	asc028,
	asc030,
	asc032,
	asc034,
	asc036,
	asc038,
	asc040,
	asc042;
wire [4:0] asc045;
wire  asc046;
wire [15:0] asc047;
wire [4:0] asc048,
	asc050,
	asc052,
	asc054,
	asc056,
	asc058,
	asc060;
wire [3:0] asc063,
	asc065,
	asc067,
	asc069;
wire [2:0] asc072,
	asc074;
wire [1:0] asc077;
wire  asc082;
wire [5:0] asc084;
wire  asc085;
wire [5:0] asc086;
wire [23:0] asc087;
wire [31:0] asc088,
	asc089;
wire  asc092;
wire [22:0] asc095,
	asc097;
wire [5:0] asc099;
wire  asc100,
	asc102;
wire [6:0] asc103;
wire  asc105,
	asc106,
	asc107,
	asc108;
wire [31:0] asc109,
	asc110;
wire [6:0] asc111;
wire  asc114,
	asc115;
wire [7:0] asc116;
wire  asc117;
wire [7:0] asc118;
wire  asc119;
wire [22:0] asc120;
wire  asc121;
wire [22:0] asc123;
wire [47:0] asc124;
wire [7:0] asc125;

assign asc002 = 5'B00001 << in1;

assign fDFTpts = {{3{asc002[4]}}, asc002};

assign asc007 = 
	(1'B0)
	&(asc002[0]);

assign asc005 = 
	+(asc007)
	+(fDFTpts[7:1]);

assign asc011 = 
	-(fDFTpts);

reg [8:0] asc010_tmp_0;
assign asc010 = asc010_tmp_0;
always @(asc011 or fDFTpts) begin
	case (1'B0)
		1'B1 : asc010_tmp_0 = asc011 ;
		default : asc010_tmp_0 = fDFTpts ;
	endcase
end

assign fcizSig_i2 = {{23{asc010[8]}}, asc010};

assign asc014 = 
	(|fcizSig_i2[31:16]);

assign asc016 = 
	(|fcizSig_i2[31:25]);

reg [5:0] asc026_tmp_1;
assign asc026 = asc026_tmp_1;
always @ (asc010[8]) begin
	case (asc010[8])
		1'B1 : asc026_tmp_1 = 6'B011010 ;
		default : asc026_tmp_1 = 6'B011001 ;
	endcase
end

reg [5:0] asc024_tmp_2;
assign asc024 = asc024_tmp_2;
always @ (asc010[8] or asc026) begin
	case (asc010[8])
		1'B1 : asc024_tmp_2 = 6'B011011 ;
		default : asc024_tmp_2 = asc026 ;
	endcase
end

reg [5:0] asc022_tmp_3;
assign asc022 = asc022_tmp_3;
always @ (asc010[8] or asc024) begin
	case (asc010[8])
		1'B1 : asc022_tmp_3 = 6'B011100 ;
		default : asc022_tmp_3 = asc024 ;
	endcase
end

reg [5:0] asc020_tmp_4;
assign asc020 = asc020_tmp_4;
always @ (asc010[8] or asc022) begin
	case (asc010[8])
		1'B1 : asc020_tmp_4 = 6'B011101 ;
		default : asc020_tmp_4 = asc022 ;
	endcase
end

reg [5:0] asc018_tmp_5;
assign asc018 = asc018_tmp_5;
always @ (asc010[8] or asc020) begin
	case (asc010[8])
		1'B1 : asc018_tmp_5 = 6'B011110 ;
		default : asc018_tmp_5 = asc020 ;
	endcase
end

reg [5:0] asc017_tmp_6;
assign asc017 = asc017_tmp_6;
always @ (asc010[8] or asc018) begin
	case (asc010[8])
		1'B1 : asc017_tmp_6 = 6'B011111 ;
		default : asc017_tmp_6 = asc018 ;
	endcase
end

assign asc042 = {5'B01000,asc010[8]};

reg [5:0] asc040_tmp_7;
assign asc040 = asc040_tmp_7;
always @ (asc010[8] or asc042) begin
	case (asc010[8])
		1'B1 : asc040_tmp_7 = 6'B010010 ;
		default : asc040_tmp_7 = asc042 ;
	endcase
end

reg [5:0] asc038_tmp_8;
assign asc038 = asc038_tmp_8;
always @ (asc010[8] or asc040) begin
	case (asc010[8])
		1'B1 : asc038_tmp_8 = 6'B010011 ;
		default : asc038_tmp_8 = asc040 ;
	endcase
end

reg [5:0] asc036_tmp_9;
assign asc036 = asc036_tmp_9;
always @ (asc010[8] or asc038) begin
	case (asc010[8])
		1'B1 : asc036_tmp_9 = 6'B010100 ;
		default : asc036_tmp_9 = asc038 ;
	endcase
end

reg [5:0] asc034_tmp_10;
assign asc034 = asc034_tmp_10;
always @ (asc010[8] or asc036) begin
	case (asc010[8])
		1'B1 : asc034_tmp_10 = 6'B010101 ;
		default : asc034_tmp_10 = asc036 ;
	endcase
end

reg [5:0] asc032_tmp_11;
assign asc032 = asc032_tmp_11;
always @ (asc010[8] or asc034) begin
	case (asc010[8])
		1'B1 : asc032_tmp_11 = 6'B010110 ;
		default : asc032_tmp_11 = asc034 ;
	endcase
end

reg [5:0] asc030_tmp_12;
assign asc030 = asc030_tmp_12;
always @ (asc010[8] or asc032) begin
	case (asc010[8])
		1'B1 : asc030_tmp_12 = 6'B010111 ;
		default : asc030_tmp_12 = asc032 ;
	endcase
end

reg [5:0] asc028_tmp_13;
assign asc028 = asc028_tmp_13;
always @ (asc010[8] or asc030) begin
	case (asc010[8])
		1'B1 : asc028_tmp_13 = 6'B011000 ;
		default : asc028_tmp_13 = asc030 ;
	endcase
end

reg [5:0] asc015_tmp_14;
assign asc015 = asc015_tmp_14;
always @ (asc016 or asc017 or asc028) begin
	case (asc016)
		1'B1 : asc015_tmp_14 = asc017 ;
		default : asc015_tmp_14 = asc028 ;
	endcase
end

assign asc047 = {{7{asc010[8]}}, asc010};

assign asc046 = 
	(|asc047[15:8]);

assign asc060 = {4'B0100,asc010[8]};

reg [4:0] asc058_tmp_15;
assign asc058 = asc058_tmp_15;
always @ (asc010[8] or asc060) begin
	case (asc010[8])
		1'B1 : asc058_tmp_15 = 5'B01010 ;
		default : asc058_tmp_15 = asc060 ;
	endcase
end

reg [4:0] asc056_tmp_16;
assign asc056 = asc056_tmp_16;
always @ (asc010[8] or asc058) begin
	case (asc010[8])
		1'B1 : asc056_tmp_16 = 5'B01011 ;
		default : asc056_tmp_16 = asc058 ;
	endcase
end

reg [4:0] asc054_tmp_17;
assign asc054 = asc054_tmp_17;
always @ (asc010[8] or asc056) begin
	case (asc010[8])
		1'B1 : asc054_tmp_17 = 5'B01100 ;
		default : asc054_tmp_17 = asc056 ;
	endcase
end

reg [4:0] asc052_tmp_18;
assign asc052 = asc052_tmp_18;
always @ (asc010[8] or asc054) begin
	case (asc010[8])
		1'B1 : asc052_tmp_18 = 5'B01101 ;
		default : asc052_tmp_18 = asc054 ;
	endcase
end

reg [4:0] asc050_tmp_19;
assign asc050 = asc050_tmp_19;
always @ (asc010[8] or asc052) begin
	case (asc010[8])
		1'B1 : asc050_tmp_19 = 5'B01110 ;
		default : asc050_tmp_19 = asc052 ;
	endcase
end

reg [4:0] asc048_tmp_20;
assign asc048 = asc048_tmp_20;
always @ (asc010[8] or asc050) begin
	case (asc010[8])
		1'B1 : asc048_tmp_20 = 5'B01111 ;
		default : asc048_tmp_20 = asc050 ;
	endcase
end

assign asc082 = 
	((~asc010[0]));

reg [1:0] asc077_tmp_21;
assign asc077 = asc077_tmp_21;
always @ (asc010[1] or asc082) begin
	case (asc010[1])
		1'B1 : asc077_tmp_21 = 2'B01 ;
		default : asc077_tmp_21 = {asc082, asc082} ;
	endcase
end

reg [2:0] asc074_tmp_22;
assign asc074 = asc074_tmp_22;
always @ (asc010[2] or asc077) begin
	case (asc010[2])
		1'B1 : asc074_tmp_22 = 3'B010 ;
		default : asc074_tmp_22 = {asc077[1], asc077} ;
	endcase
end

reg [2:0] asc072_tmp_23;
assign asc072 = asc072_tmp_23;
always @ (asc010[3] or asc074) begin
	case (asc010[3])
		1'B1 : asc072_tmp_23 = 3'B011 ;
		default : asc072_tmp_23 = asc074 ;
	endcase
end

reg [3:0] asc069_tmp_24;
assign asc069 = asc069_tmp_24;
always @ (asc010[4] or asc072) begin
	case (asc010[4])
		1'B1 : asc069_tmp_24 = 4'B0100 ;
		default : asc069_tmp_24 = {asc072[2], asc072} ;
	endcase
end

reg [3:0] asc067_tmp_25;
assign asc067 = asc067_tmp_25;
always @ (asc010[5] or asc069) begin
	case (asc010[5])
		1'B1 : asc067_tmp_25 = 4'B0101 ;
		default : asc067_tmp_25 = asc069 ;
	endcase
end

reg [3:0] asc065_tmp_26;
assign asc065 = asc065_tmp_26;
always @ (asc010[6] or asc067) begin
	case (asc010[6])
		1'B1 : asc065_tmp_26 = 4'B0110 ;
		default : asc065_tmp_26 = asc067 ;
	endcase
end

reg [3:0] asc063_tmp_27;
assign asc063 = asc063_tmp_27;
always @ (asc010[7] or asc065) begin
	case (asc010[7])
		1'B1 : asc063_tmp_27 = 4'B0111 ;
		default : asc063_tmp_27 = asc065 ;
	endcase
end

reg [4:0] asc045_tmp_28;
assign asc045 = asc045_tmp_28;
always @ (asc046 or asc048 or asc063) begin
	case (asc046)
		1'B1 : asc045_tmp_28 = asc048 ;
		default : asc045_tmp_28 = {asc063[3], asc063} ;
	endcase
end

reg [5:0] asc013_tmp_29;
assign asc013 = asc013_tmp_29;
always @ (asc014 or asc015 or asc045) begin
	case (asc014)
		1'B1 : asc013_tmp_29 = asc015 ;
		default : asc013_tmp_29 = {asc045[4], asc045} ;
	endcase
end

assign asc085 = ((11'B10000000000 ^ {{5{asc013[5]}}, asc013})>(11'B10000000000 ^ 11'B00000010111));

assign asc086 = 
	+(asc013)
	-(6'B010111);

reg [5:0] asc084_tmp_30;
assign asc084 = asc084_tmp_30;
always @ (asc085 or asc086) begin
	case (asc085)
		1'B1 : asc084_tmp_30 = asc086 ;
		default : asc084_tmp_30 = 6'B000000 ;
	endcase
end

assign asc089 = 32'B11111111111111111111111111111110 << asc013;

assign asc088 = 
	({{23{asc010[8]}}, asc010})
	&((~asc089));

assign asc087 = asc088 >> asc084;

assign asc092 = ((11'B10000000000 ^ {{5{asc013[5]}}, asc013})>(11'B10000000000 ^ 11'B00000010111));

assign asc099 = 
	+(6'B010111)
	-(asc013);

assign asc097 = asc087[22:0] << asc099;

reg [22:0] asc095_tmp_31;
assign asc095 = asc095_tmp_31;
always @ (asc092 or asc087[22:0] or asc097) begin
	case (asc092)
		1'B1 : asc095_tmp_31 = asc087[22:0] ;
		default : asc095_tmp_31 = asc097 ;
	endcase
end

assign asc103 = 
	+({asc084[5], asc084})
	-(7'B0000001);

assign asc102 = fcizSig_i2 >> {|asc103[6:5], asc103[4:0]};

assign asc107 = ((11'B10000000000 ^ {{5{asc084[5]}}, asc084})>(11'B10000000000 ^ 11'B00000000001));

assign asc111 = 
	+({asc084[5], asc084})
	-(7'B0000010);

assign asc110 = 32'B11111111111111111111111111111110 << asc111;

assign asc109 = 
	({{23{asc010[8]}}, asc010})
	&((~asc110));

assign asc108 = 
	(|asc109);

assign asc106 = 
	(asc092)
	&(asc107)
	&(asc108);

assign asc105 = 
	(asc106)
	|(asc095[0]);

assign asc100 = 
	(asc092)
	&(asc102)
	&(asc105);

assign asc115 = 
	(|fDFTpts);

assign asc114 = 
	(asc115)
	&(1'B0);

assign asc117 = 
	(|fDFTpts);

assign asc119 = 
	(asc100)
	&(&asc095);

wire [7:0] asc118_tmp_32;
assign asc118_tmp_32 = 
	+({{2{asc013[5]}}, asc013})
	+(8'B01111111);
assign asc118 = asc118_tmp_32
	+(asc119);

reg [7:0] asc116_tmp_33;
assign asc116 = asc116_tmp_33;
always @ (asc117 or asc118) begin
	case (asc117)
		1'B1 : asc116_tmp_33 = asc118 ;
		default : asc116_tmp_33 = 8'B00000000 ;
	endcase
end

assign asc121 = 
	(|fDFTpts);

assign asc123 = 
	+(asc095)
	+(asc100);

reg [22:0] asc120_tmp_34;
assign asc120 = asc120_tmp_34;
always @ (asc121 or asc123) begin
	case (asc121)
		1'B1 : asc120_tmp_34 = asc123 ;
		default : asc120_tmp_34 = 23'B00000000000000000000000 ;
	endcase
end

assign asc125 = {{3{asc002[4]}}, asc002};

assign asc124 = {asc125,asc005,asc114,asc116,asc120};

assign out1 = asc124;
endmodule

/* CADENCE  urDzSw/cqw== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/


