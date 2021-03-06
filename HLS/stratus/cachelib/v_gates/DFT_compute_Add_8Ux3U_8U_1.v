`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Apr 24 2022 11:24:53 CST (Apr 24 2022 03:24:53 UTC)

module DFT_compute_Add_8Ux3U_8U_1(in2, in1, out1);
  input [7:0] in2;
  input [2:0] in1;
  output [7:0] out1;
  wire [7:0] in2;
  wire [2:0] in1;
  wire [7:0] out1;
  wire add_23_2_n_1, add_23_2_n_4, add_23_2_n_5, add_23_2_n_6,
       add_23_2_n_7, add_23_2_n_8, add_23_2_n_9, add_23_2_n_10;
  wire add_23_2_n_11, add_23_2_n_12, add_23_2_n_13, add_23_2_n_14,
       add_23_2_n_15, add_23_2_n_16, add_23_2_n_17, add_23_2_n_18;
  wire add_23_2_n_19, add_23_2_n_20, add_23_2_n_22, add_23_2_n_23,
       add_23_2_n_25, add_23_2_n_26, add_23_2_n_27, add_23_2_n_28;
  wire add_23_2_n_45, add_23_2_n_46, add_23_2_n_48, add_23_2_n_49;
  MXI2X1 add_23_2_g145(.A (add_23_2_n_5), .B (in2[5]), .S0
       (add_23_2_n_28), .Y (out1[5]));
  MXI2X1 add_23_2_g146(.A (add_23_2_n_6), .B (in2[7]), .S0
       (add_23_2_n_26), .Y (out1[7]));
  MXI2X1 add_23_2_g147(.A (add_23_2_n_8), .B (in2[6]), .S0
       (add_23_2_n_27), .Y (out1[6]));
  MXI2X1 add_23_2_g148(.A (add_23_2_n_4), .B (in2[4]), .S0
       (add_23_2_n_48), .Y (out1[4]));
  MXI2XL add_23_2_g149(.A (add_23_2_n_7), .B (in2[3]), .S0
       (add_23_2_n_25), .Y (out1[3]));
  NOR2X1 add_23_2_g150(.A (add_23_2_n_4), .B (add_23_2_n_49), .Y
       (add_23_2_n_28));
  NOR2X1 add_23_2_g151(.A (add_23_2_n_11), .B (add_23_2_n_49), .Y
       (add_23_2_n_27));
  NOR2X1 add_23_2_g152(.A (add_23_2_n_16), .B (add_23_2_n_49), .Y
       (add_23_2_n_26));
  OAI21X1 add_23_2_g153(.A0 (add_23_2_n_15), .A1 (add_23_2_n_46), .B0
       (add_23_2_n_12), .Y (add_23_2_n_25));
  NAND2X2 add_23_2_g155(.A (add_23_2_n_18), .B (add_23_2_n_22), .Y
       (add_23_2_n_23));
  NAND2X2 add_23_2_g157(.A (add_23_2_n_19), .B (add_23_2_n_20), .Y
       (add_23_2_n_22));
  OAI21X4 add_23_2_g159(.A0 (add_23_2_n_10), .A1 (add_23_2_n_9), .B0
       (add_23_2_n_13), .Y (add_23_2_n_20));
  NOR2X2 add_23_2_g163(.A (add_23_2_n_15), .B (add_23_2_n_7), .Y
       (add_23_2_n_19));
  OR2XL add_23_2_g164(.A (add_23_2_n_7), .B (add_23_2_n_12), .Y
       (add_23_2_n_18));
  NAND2X1 add_23_2_g166(.A (add_23_2_n_12), .B (add_23_2_n_14), .Y
       (add_23_2_n_17));
  OR2XL add_23_2_g167(.A (add_23_2_n_8), .B (add_23_2_n_11), .Y
       (add_23_2_n_16));
  INVX1 add_23_2_g169(.A (add_23_2_n_15), .Y (add_23_2_n_14));
  NOR2X4 add_23_2_g170(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_15));
  NAND2X4 add_23_2_g172(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_13));
  NAND2X2 add_23_2_g173(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_12));
  NAND2X1 add_23_2_g174(.A (in2[5]), .B (in2[4]), .Y (add_23_2_n_11));
  NOR2X8 add_23_2_g175(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_10));
  NAND2X8 add_23_2_g176(.A (in2[0]), .B (in1[0]), .Y (add_23_2_n_9));
  INVX1 add_23_2_g177(.A (in2[6]), .Y (add_23_2_n_8));
  INVX1 add_23_2_g178(.A (in2[3]), .Y (add_23_2_n_7));
  INVXL add_23_2_g179(.A (in2[7]), .Y (add_23_2_n_6));
  INVXL add_23_2_g180(.A (in2[5]), .Y (add_23_2_n_5));
  INVX1 add_23_2_g182(.A (in2[4]), .Y (add_23_2_n_4));
  XNOR2X1 add_23_2_g2(.A (add_23_2_n_9), .B (add_23_2_n_1), .Y
       (out1[1]));
  XNOR2X1 add_23_2_g183(.A (add_23_2_n_17), .B (add_23_2_n_45), .Y
       (out1[2]));
  NOR2BX1 add_23_2_g184(.AN (add_23_2_n_13), .B (add_23_2_n_10), .Y
       (add_23_2_n_1));
  XOR2XL add_23_2_g185(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  INVXL add_23_2_fopt(.A (add_23_2_n_46), .Y (add_23_2_n_45));
  CLKINVX1 add_23_2_fopt186(.A (add_23_2_n_20), .Y (add_23_2_n_46));
  CLKINVX1 add_23_2_fopt187(.A (add_23_2_n_49), .Y (add_23_2_n_48));
  CLKINVX2 add_23_2_fopt188(.A (add_23_2_n_23), .Y (add_23_2_n_49));
endmodule


