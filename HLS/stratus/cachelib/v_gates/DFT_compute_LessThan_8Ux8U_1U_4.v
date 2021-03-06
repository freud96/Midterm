`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Apr 24 2022 11:18:44 CST (Apr 24 2022 03:18:44 UTC)

module DFT_compute_LessThan_8Ux8U_1U_4(in2, in1, out1);
  input [7:0] in2, in1;
  output out1;
  wire [7:0] in2, in1;
  wire out1;
  wire gt_21_21_n_0, gt_21_21_n_1, gt_21_21_n_2, gt_21_21_n_3,
       gt_21_21_n_4, gt_21_21_n_5, gt_21_21_n_6, gt_21_21_n_7;
  wire gt_21_21_n_8, gt_21_21_n_9, gt_21_21_n_10, gt_21_21_n_11,
       gt_21_21_n_12, gt_21_21_n_13, gt_21_21_n_14, gt_21_21_n_15;
  wire gt_21_21_n_16, gt_21_21_n_17, gt_21_21_n_18, gt_21_21_n_19,
       gt_21_21_n_20;
  AOI31X1 gt_21_21_g217(.A0 (gt_21_21_n_11), .A1 (gt_21_21_n_10), .A2
       (gt_21_21_n_20), .B0 (gt_21_21_n_19), .Y (out1));
  OAI211X1 gt_21_21_g218(.A0 (gt_21_21_n_1), .A1 (in1[3]), .B0
       (gt_21_21_n_12), .C0 (gt_21_21_n_18), .Y (gt_21_21_n_20));
  OAI211X1 gt_21_21_g219(.A0 (gt_21_21_n_2), .A1 (in1[7]), .B0
       (gt_21_21_n_13), .C0 (gt_21_21_n_17), .Y (gt_21_21_n_19));
  OAI211X1 gt_21_21_g220(.A0 (gt_21_21_n_5), .A1 (in2[2]), .B0
       (gt_21_21_n_9), .C0 (gt_21_21_n_16), .Y (gt_21_21_n_18));
  NAND2X1 gt_21_21_g221(.A (gt_21_21_n_10), .B (gt_21_21_n_15), .Y
       (gt_21_21_n_17));
  OAI21X1 gt_21_21_g222(.A0 (in1[1]), .A1 (gt_21_21_n_7), .B0
       (gt_21_21_n_14), .Y (gt_21_21_n_16));
  OAI32X1 gt_21_21_g223(.A0 (gt_21_21_n_0), .A1 (in1[4]), .A2
       (gt_21_21_n_8), .B0 (gt_21_21_n_4), .B1 (in1[5]), .Y
       (gt_21_21_n_15));
  OAI2BB1X1 gt_21_21_g224(.A0N (in1[1]), .A1N (gt_21_21_n_7), .B0
       (in2[1]), .Y (gt_21_21_n_14));
  NAND3BXL gt_21_21_g225(.AN (in1[6]), .B (in2[6]), .C (gt_21_21_n_6),
       .Y (gt_21_21_n_13));
  NAND3X1 gt_21_21_g226(.A (in2[2]), .B (gt_21_21_n_5), .C
       (gt_21_21_n_9), .Y (gt_21_21_n_12));
  AOI21X1 gt_21_21_g227(.A0 (in1[4]), .A1 (gt_21_21_n_0), .B0
       (gt_21_21_n_8), .Y (gt_21_21_n_11));
  OA21X1 gt_21_21_g228(.A0 (gt_21_21_n_3), .A1 (in2[6]), .B0
       (gt_21_21_n_6), .Y (gt_21_21_n_10));
  NAND2X1 gt_21_21_g229(.A (in1[3]), .B (gt_21_21_n_1), .Y
       (gt_21_21_n_9));
  NOR2BX1 gt_21_21_g230(.AN (in1[5]), .B (in2[5]), .Y (gt_21_21_n_8));
  NOR2BX1 gt_21_21_g231(.AN (in1[0]), .B (in2[0]), .Y (gt_21_21_n_7));
  NAND2X1 gt_21_21_g232(.A (in1[7]), .B (gt_21_21_n_2), .Y
       (gt_21_21_n_6));
  INVX1 gt_21_21_g233(.A (in1[2]), .Y (gt_21_21_n_5));
  INVX1 gt_21_21_g234(.A (in2[5]), .Y (gt_21_21_n_4));
  INVX1 gt_21_21_g235(.A (in1[6]), .Y (gt_21_21_n_3));
  INVX1 gt_21_21_g236(.A (in2[7]), .Y (gt_21_21_n_2));
  INVX1 gt_21_21_g237(.A (in2[3]), .Y (gt_21_21_n_1));
  INVX1 gt_21_21_g238(.A (in2[4]), .Y (gt_21_21_n_0));
endmodule


