`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Apr 24 2022 14:17:03 CST (Apr 24 2022 06:17:03 UTC)

module DFT_compute_LessThan_8Ux8U_1U_0(in2, in1, out1);
  input [7:0] in2, in1;
  output out1;
  wire [7:0] in2, in1;
  wire out1;
  wire n_3, n_63, n_65, n_66, n_73, n_76, n_78, n_79;
  wire n_80, n_81, n_82, n_83, n_84, n_85, n_88, n_90;
  wire n_91, n_94, n_95, n_98, n_99, n_100, n_106, n_107;
  wire n_108, n_109, n_110, n_111, n_112, n_114, n_117, n_119;
  wire n_120, n_121, n_122, n_123;
  NAND2X4 g3812(.A (in2[7]), .B (in2[6]), .Y (n_3));
  AOI21X2 g1168(.A0 (n_63), .A1 (n_73), .B0 (n_76), .Y (out1));
  NOR2X2 g1173(.A (n_120), .B (n_91), .Y (n_63));
  OAI21X4 g1170(.A0 (n_66), .A1 (n_112), .B0 (n_83), .Y (n_73));
  NAND2X2 g1174(.A (n_85), .B (n_65), .Y (n_66));
  NAND2X2 g1177(.A (in1[2]), .B (n_78), .Y (n_65));
  OAI21X2 g1169(.A0 (n_91), .A1 (n_100), .B0 (n_107), .Y (n_76));
  OAI21X4 g123(.A0 (n_79), .A1 (n_81), .B0 (n_82), .Y (n_83));
  NOR2X4 g126(.A (in1[2]), .B (n_78), .Y (n_79));
  CLKINVX8 g130(.A (in2[2]), .Y (n_78));
  NOR2X4 g125(.A (in1[3]), .B (n_80), .Y (n_81));
  INVX3 fopt131(.A (in2[3]), .Y (n_80));
  NAND2X4 g124_dup(.A (in1[3]), .B (n_80), .Y (n_82));
  NAND2X2 g124(.A (in1[3]), .B (n_84), .Y (n_85));
  CLKINVX8 fopt(.A (in2[3]), .Y (n_84));
  NAND2X2 g20(.A (n_88), .B (n_90), .Y (n_91));
  NAND2X2 g22(.A (in1[7]), .B (n_122), .Y (n_88));
  NAND2X2 g21(.A (in1[6]), .B (n_121), .Y (n_90));
  AOI21X2 g101(.A0 (n_95), .A1 (n_119), .B0 (n_99), .Y (n_100));
  NOR2X2 g104(.A (in1[4]), .B (n_94), .Y (n_95));
  CLKINVX8 g108(.A (in2[4]), .Y (n_94));
  NOR2X1 g102(.A (in1[5]), .B (n_98), .Y (n_99));
  NAND2X2 g39(.A (n_123), .B (n_106), .Y (n_107));
  OAI21X2 g40(.A0 (in1[6]), .A1 (n_3), .B0 (in1[7]), .Y (n_106));
  AOI21X4 g72(.A0 (n_109), .A1 (n_111), .B0 (n_114), .Y (n_112));
  NAND2X6 g73(.A (in1[0]), .B (n_108), .Y (n_109));
  CLKINVX8 g75(.A (in2[0]), .Y (n_108));
  NAND2X6 g74(.A (in1[1]), .B (n_110), .Y (n_111));
  CLKINVX6 g76(.A (in2[1]), .Y (n_110));
  NOR2X4 g11(.A (in1[1]), .B (n_110), .Y (n_114));
  NAND2X1 g3834(.A (n_117), .B (n_119), .Y (n_120));
  NAND2X2 g23(.A (in1[4]), .B (n_94), .Y (n_117));
  NAND2X4 g3835(.A (in1[5]), .B (n_98), .Y (n_119));
  CLKINVX6 g3836(.A (in2[5]), .Y (n_98));
  OAI21X2 g3837(.A0 (in1[6]), .A1 (n_121), .B0 (n_122), .Y (n_123));
  CLKINVX4 g3838(.A (in2[6]), .Y (n_121));
  CLKINVX6 g3839(.A (in2[7]), .Y (n_122));
endmodule


