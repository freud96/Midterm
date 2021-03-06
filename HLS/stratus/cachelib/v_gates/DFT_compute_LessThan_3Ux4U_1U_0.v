`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Apr 24 2022 14:19:27 CST (Apr 24 2022 06:19:27 UTC)

module DFT_compute_LessThan_3Ux4U_1U_0(in2, in1, out1);
  input [2:0] in2;
  input [3:0] in1;
  output out1;
  wire [2:0] in2;
  wire [3:0] in1;
  wire out1;
  wire n_0, n_3, n_4, n_7, n_8, n_10, n_31, n_32;
  wire n_33, n_34, n_35, n_36, n_37;
  OAI21X4 g975(.A0 (in2[2]), .A1 (n_4), .B0 (n_3), .Y (n_8));
  NOR2X2 g977(.A (in2[1]), .B (n_0), .Y (n_7));
  NAND2X4 g980(.A (in2[2]), .B (n_4), .Y (n_10));
  CLKINVX6 g981(.A (in1[3]), .Y (n_3));
  INVX2 g984(.A (in1[1]), .Y (n_0));
  CLKINVX6 g985(.A (in1[2]), .Y (n_4));
  NOR2X4 g48(.A (n_32), .B (n_34), .Y (n_35));
  NOR2X4 g49(.A (in1[1]), .B (n_31), .Y (n_32));
  INVX3 g51(.A (in2[1]), .Y (n_31));
  NAND2X8 g50(.A (in1[0]), .B (n_33), .Y (n_34));
  INVX8 g52(.A (in2[0]), .Y (n_33));
  NAND2X2 g990(.A (n_36), .B (n_37), .Y (out1));
  NAND2X2 g53(.A (n_10), .B (n_35), .Y (n_36));
  AOI21X2 g991(.A0 (n_7), .A1 (n_10), .B0 (n_8), .Y (n_37));
endmodule


