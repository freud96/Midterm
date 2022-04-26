`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:18:58 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_int_to_cynw_cm_float_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [8:0] in1;
output [31:0] out1;
wire [31:0] asc005,
	asc006;
wire [5:0] asc009;
wire  asc010;
wire [5:0] asc011;
wire  asc012;
wire [5:0] asc013,
	asc014,
	asc016,
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
	asc038;
wire [4:0] asc041;
wire  asc042;
wire [4:0] asc044,
	asc046,
	asc048,
	asc050,
	asc052,
	asc054,
	asc056;
wire [3:0] asc059,
	asc061,
	asc063,
	asc065;
wire [2:0] asc068,
	asc070;
wire [1:0] asc073;
wire  asc078;
wire [5:0] asc080;
wire  asc081;
wire [5:0] asc082;
wire [23:0] asc083;
wire [31:0] asc084,
	asc085;
wire  asc088;
wire [22:0] asc091,
	asc093;
wire [5:0] asc095;
wire  asc096,
	asc098;
wire [6:0] asc099;
wire  asc101,
	asc102,
	asc103,
	asc104;
wire [31:0] asc105,
	asc106;
wire [6:0] asc107;
wire  asc110,
	asc111,
	asc112,
	asc113;
wire [7:0] asc115;
wire  asc116;
wire [7:0] asc117;
wire  asc118;
wire [7:0] asc120;
wire  asc121;
wire [22:0] asc122;
wire  asc124,
	asc125,
	asc126;
wire [22:0] asc129;
wire [31:0] asc130;

assign asc006 = 
	-({{23{in1[8]}}, in1});

reg [31:0] asc005_tmp_0;
assign asc005 = asc005_tmp_0;
always @ (in1[8] or asc006 or in1) begin
	case (in1[8])
		1'B1 : asc005_tmp_0 = asc006 ;
		default : asc005_tmp_0 = {{23{in1[8]}}, in1} ;
	endcase
end

assign asc010 = 
	(|asc005[31:16]);

assign asc012 = 
	(|asc005[31:25]);

reg [5:0] asc022_tmp_1;
assign asc022 = asc022_tmp_1;
always @ (asc005[26]) begin
	case (asc005[26])
		1'B1 : asc022_tmp_1 = 6'B011010 ;
		default : asc022_tmp_1 = 6'B011001 ;
	endcase
end

reg [5:0] asc020_tmp_2;
assign asc020 = asc020_tmp_2;
always @ (asc005[27] or asc022) begin
	case (asc005[27])
		1'B1 : asc020_tmp_2 = 6'B011011 ;
		default : asc020_tmp_2 = asc022 ;
	endcase
end

reg [5:0] asc018_tmp_3;
assign asc018 = asc018_tmp_3;
always @ (asc005[28] or asc020) begin
	case (asc005[28])
		1'B1 : asc018_tmp_3 = 6'B011100 ;
		default : asc018_tmp_3 = asc020 ;
	endcase
end

reg [5:0] asc016_tmp_4;
assign asc016 = asc016_tmp_4;
always @ (asc005[29] or asc018) begin
	case (asc005[29])
		1'B1 : asc016_tmp_4 = 6'B011101 ;
		default : asc016_tmp_4 = asc018 ;
	endcase
end

reg [5:0] asc014_tmp_5;
assign asc014 = asc014_tmp_5;
always @ (asc005[30] or asc016) begin
	case (asc005[30])
		1'B1 : asc014_tmp_5 = 6'B011110 ;
		default : asc014_tmp_5 = asc016 ;
	endcase
end

reg [5:0] asc013_tmp_6;
assign asc013 = asc013_tmp_6;
always @ (asc005[31] or asc014) begin
	case (asc005[31])
		1'B1 : asc013_tmp_6 = 6'B011111 ;
		default : asc013_tmp_6 = asc014 ;
	endcase
end

assign asc038 = {5'B01000,asc005[17]};

reg [5:0] asc036_tmp_7;
assign asc036 = asc036_tmp_7;
always @ (asc005[18] or asc038) begin
	case (asc005[18])
		1'B1 : asc036_tmp_7 = 6'B010010 ;
		default : asc036_tmp_7 = asc038 ;
	endcase
end

reg [5:0] asc034_tmp_8;
assign asc034 = asc034_tmp_8;
always @ (asc005[19] or asc036) begin
	case (asc005[19])
		1'B1 : asc034_tmp_8 = 6'B010011 ;
		default : asc034_tmp_8 = asc036 ;
	endcase
end

reg [5:0] asc032_tmp_9;
assign asc032 = asc032_tmp_9;
always @ (asc005[20] or asc034) begin
	case (asc005[20])
		1'B1 : asc032_tmp_9 = 6'B010100 ;
		default : asc032_tmp_9 = asc034 ;
	endcase
end

reg [5:0] asc030_tmp_10;
assign asc030 = asc030_tmp_10;
always @ (asc005[21] or asc032) begin
	case (asc005[21])
		1'B1 : asc030_tmp_10 = 6'B010101 ;
		default : asc030_tmp_10 = asc032 ;
	endcase
end

reg [5:0] asc028_tmp_11;
assign asc028 = asc028_tmp_11;
always @ (asc005[22] or asc030) begin
	case (asc005[22])
		1'B1 : asc028_tmp_11 = 6'B010110 ;
		default : asc028_tmp_11 = asc030 ;
	endcase
end

reg [5:0] asc026_tmp_12;
assign asc026 = asc026_tmp_12;
always @ (asc005[23] or asc028) begin
	case (asc005[23])
		1'B1 : asc026_tmp_12 = 6'B010111 ;
		default : asc026_tmp_12 = asc028 ;
	endcase
end

reg [5:0] asc024_tmp_13;
assign asc024 = asc024_tmp_13;
always @ (asc005[24] or asc026) begin
	case (asc005[24])
		1'B1 : asc024_tmp_13 = 6'B011000 ;
		default : asc024_tmp_13 = asc026 ;
	endcase
end

reg [5:0] asc011_tmp_14;
assign asc011 = asc011_tmp_14;
always @ (asc012 or asc013 or asc024) begin
	case (asc012)
		1'B1 : asc011_tmp_14 = asc013 ;
		default : asc011_tmp_14 = asc024 ;
	endcase
end

assign asc042 = 
	(|asc005[15:8]);

assign asc056 = {4'B0100,asc005[9]};

reg [4:0] asc054_tmp_15;
assign asc054 = asc054_tmp_15;
always @ (asc005[10] or asc056) begin
	case (asc005[10])
		1'B1 : asc054_tmp_15 = 5'B01010 ;
		default : asc054_tmp_15 = asc056 ;
	endcase
end

reg [4:0] asc052_tmp_16;
assign asc052 = asc052_tmp_16;
always @ (asc005[11] or asc054) begin
	case (asc005[11])
		1'B1 : asc052_tmp_16 = 5'B01011 ;
		default : asc052_tmp_16 = asc054 ;
	endcase
end

reg [4:0] asc050_tmp_17;
assign asc050 = asc050_tmp_17;
always @ (asc005[12] or asc052) begin
	case (asc005[12])
		1'B1 : asc050_tmp_17 = 5'B01100 ;
		default : asc050_tmp_17 = asc052 ;
	endcase
end

reg [4:0] asc048_tmp_18;
assign asc048 = asc048_tmp_18;
always @ (asc005[13] or asc050) begin
	case (asc005[13])
		1'B1 : asc048_tmp_18 = 5'B01101 ;
		default : asc048_tmp_18 = asc050 ;
	endcase
end

reg [4:0] asc046_tmp_19;
assign asc046 = asc046_tmp_19;
always @ (asc005[14] or asc048) begin
	case (asc005[14])
		1'B1 : asc046_tmp_19 = 5'B01110 ;
		default : asc046_tmp_19 = asc048 ;
	endcase
end

reg [4:0] asc044_tmp_20;
assign asc044 = asc044_tmp_20;
always @ (asc005[15] or asc046) begin
	case (asc005[15])
		1'B1 : asc044_tmp_20 = 5'B01111 ;
		default : asc044_tmp_20 = asc046 ;
	endcase
end

assign asc078 = 
	((~asc005[0]));

reg [1:0] asc073_tmp_21;
assign asc073 = asc073_tmp_21;
always @ (asc005[1] or asc078) begin
	case (asc005[1])
		1'B1 : asc073_tmp_21 = 2'B01 ;
		default : asc073_tmp_21 = {asc078, asc078} ;
	endcase
end

reg [2:0] asc070_tmp_22;
assign asc070 = asc070_tmp_22;
always @ (asc005[2] or asc073) begin
	case (asc005[2])
		1'B1 : asc070_tmp_22 = 3'B010 ;
		default : asc070_tmp_22 = {asc073[1], asc073} ;
	endcase
end

reg [2:0] asc068_tmp_23;
assign asc068 = asc068_tmp_23;
always @ (asc005[3] or asc070) begin
	case (asc005[3])
		1'B1 : asc068_tmp_23 = 3'B011 ;
		default : asc068_tmp_23 = asc070 ;
	endcase
end

reg [3:0] asc065_tmp_24;
assign asc065 = asc065_tmp_24;
always @ (asc005[4] or asc068) begin
	case (asc005[4])
		1'B1 : asc065_tmp_24 = 4'B0100 ;
		default : asc065_tmp_24 = {asc068[2], asc068} ;
	endcase
end

reg [3:0] asc063_tmp_25;
assign asc063 = asc063_tmp_25;
always @ (asc005[5] or asc065) begin
	case (asc005[5])
		1'B1 : asc063_tmp_25 = 4'B0101 ;
		default : asc063_tmp_25 = asc065 ;
	endcase
end

reg [3:0] asc061_tmp_26;
assign asc061 = asc061_tmp_26;
always @ (asc005[6] or asc063) begin
	case (asc005[6])
		1'B1 : asc061_tmp_26 = 4'B0110 ;
		default : asc061_tmp_26 = asc063 ;
	endcase
end

reg [3:0] asc059_tmp_27;
assign asc059 = asc059_tmp_27;
always @ (asc005[7] or asc061) begin
	case (asc005[7])
		1'B1 : asc059_tmp_27 = 4'B0111 ;
		default : asc059_tmp_27 = asc061 ;
	endcase
end

reg [4:0] asc041_tmp_28;
assign asc041 = asc041_tmp_28;
always @ (asc042 or asc044 or asc059) begin
	case (asc042)
		1'B1 : asc041_tmp_28 = asc044 ;
		default : asc041_tmp_28 = {asc059[3], asc059} ;
	endcase
end

reg [5:0] asc009_tmp_29;
assign asc009 = asc009_tmp_29;
always @ (asc010 or asc011 or asc041) begin
	case (asc010)
		1'B1 : asc009_tmp_29 = asc011 ;
		default : asc009_tmp_29 = {asc041[4], asc041} ;
	endcase
end

assign asc081 = ((11'B10000000000 ^ {{5{asc009[5]}}, asc009})>(11'B10000000000 ^ 11'B00000010111));

assign asc082 = 
	+(asc009)
	-(6'B010111);

reg [5:0] asc080_tmp_30;
assign asc080 = asc080_tmp_30;
always @ (asc081 or asc082) begin
	case (asc081)
		1'B1 : asc080_tmp_30 = asc082 ;
		default : asc080_tmp_30 = 6'B000000 ;
	endcase
end

assign asc085 = 32'B11111111111111111111111111111110 << asc009;

assign asc084 = 
	(asc005)
	&((~asc085));

assign asc083 = asc084 >> asc080;

assign asc088 = ((11'B10000000000 ^ {{5{asc009[5]}}, asc009})>(11'B10000000000 ^ 11'B00000010111));

assign asc095 = 
	+(6'B010111)
	-(asc009);

assign asc093 = asc083[22:0] << asc095;

reg [22:0] asc091_tmp_31;
assign asc091 = asc091_tmp_31;
always @ (asc088 or asc083[22:0] or asc093) begin
	case (asc088)
		1'B1 : asc091_tmp_31 = asc083[22:0] ;
		default : asc091_tmp_31 = asc093 ;
	endcase
end

assign asc099 = 
	+({asc080[5], asc080})
	-(7'B0000001);

assign asc098 = asc005 >> {|asc099[6:5], asc099[4:0]};

assign asc103 = ((11'B10000000000 ^ {{5{asc080[5]}}, asc080})>(11'B10000000000 ^ 11'B00000000001));

assign asc107 = 
	+({asc080[5], asc080})
	-(7'B0000010);

assign asc106 = 32'B11111111111111111111111111111110 << asc107;

assign asc105 = 
	(asc005)
	&((~asc106));

assign asc104 = 
	(|asc105);

assign asc102 = 
	(asc088)
	&(asc103)
	&(asc104);

assign asc101 = 
	(asc102)
	|(asc091[0]);

assign asc096 = 
	(asc088)
	&(asc098)
	&(asc101);

assign asc111 = 
	(|in1);

assign asc113 = (37'B1111110000000000000000000000000000000=={{28{in1[8]}}, in1});

assign asc112 = 
	(asc113)
	|(in1[8]);

assign asc110 = 
	(asc111)
	&(asc112);

assign asc116 = 
	(|in1);

assign asc118 = (37'B1111110000000000000000000000000000000=={{28{in1[8]}}, in1});

assign asc121 = 
	(asc096)
	&(&asc091);

wire [7:0] asc120_tmp_32;
assign asc120_tmp_32 = 
	+({{2{asc009[5]}}, asc009})
	+(8'B01111111);
assign asc120 = asc120_tmp_32
	+(asc121);

reg [7:0] asc117_tmp_33;
assign asc117 = asc117_tmp_33;
always @ (asc118 or asc120) begin
	case (asc118)
		1'B1 : asc117_tmp_33 = 8'B10011110 ;
		default : asc117_tmp_33 = asc120 ;
	endcase
end

reg [7:0] asc115_tmp_34;
assign asc115 = asc115_tmp_34;
always @ (asc116 or asc117) begin
	case (asc116)
		1'B1 : asc115_tmp_34 = asc117 ;
		default : asc115_tmp_34 = 8'B00000000 ;
	endcase
end

assign asc125 = 
	(|in1);

assign asc126 = (37'B1111110000000000000000000000000000000=={{28{in1[8]}}, in1});

assign asc124 = 
	(asc125)
	&((~asc126));

assign asc129 = 
	+(asc091)
	+(asc096);

reg [22:0] asc122_tmp_35;
assign asc122 = asc122_tmp_35;
always @ (asc124 or asc129) begin
	case (asc124)
		1'B1 : asc122_tmp_35 = asc129 ;
		default : asc122_tmp_35 = 23'B00000000000000000000000 ;
	endcase
end

assign asc130 = {asc110,asc115,asc122};

assign out1 = asc130;
endmodule

/* CADENCE  urD1SAzZqA== : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/


