`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Apr 24 2022 14:16:45 CST (Apr 24 2022 06:16:45 UTC)

module DFT_compute_LessThanEQ_4Sx3S_1U_0(in2, in1, out1);
  input [3:0] in2;
  input [2:0] in1;
  output out1;
  wire [3:0] in2;
  wire [2:0] in1;
  wire out1;
  wire n_0, n_18, n_19, n_23, n_24, n_25, n_26, n_28;
  wire n_29;
  OAI21X2 g862(.A0 (n_29), .A1 (n_26), .B0 (n_28), .Y (out1));
  INVX8 g871(.A (in1[0]), .Y (n_0));
  INVX1 fopt(.A (in1[1]), .Y (n_18));
  CLKINVX4 fopt873(.A (in1[1]), .Y (n_19));
  AOI21X4 g76(.A0 (n_23), .A1 (n_24), .B0 (n_25), .Y (n_26));
  NAND2X8 g79(.A (in2[0]), .B (n_0), .Y (n_23));
  NAND2X4 g77(.A (in2[1]), .B (n_19), .Y (n_24));
  NOR2X4 g78(.A (in2[1]), .B (n_18), .Y (n_25));
  OAI2BB1X1 g2(.A0N (in2[2]), .A1N (in1[2]), .B0 (in2[3]), .Y (n_28));
  AOI2BB1X1 g877(.A0N (in1[2]), .A1N (in2[2]), .B0 (in2[3]), .Y (n_29));
endmodule


