`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Apr 24 2022 15:13:37 CST (Apr 24 2022 07:13:37 UTC)

module DFT_compute_entirecomputation_alt5_1_0(in1, in2, out1);
  input [7:0] in1, in2;
  output [7:0] out1;
  wire [7:0] in1, in2;
  wire [7:0] out1;
  wire add_23_2_n_1, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7,
       add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11;
  wire add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15,
       add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19;
  wire add_23_2_n_20, add_23_2_n_21, add_23_2_n_22, add_23_2_n_23,
       add_23_2_n_24, add_23_2_n_25, add_23_2_n_26, add_23_2_n_27;
  wire add_23_2_n_28, add_23_2_n_29, add_23_2_n_30, add_23_2_n_31,
       add_23_2_n_32, add_23_2_n_33, add_23_2_n_34, add_23_2_n_35;
  wire add_23_2_n_36, add_23_2_n_37, add_23_2_n_39, add_23_2_n_41,
       add_23_2_n_42, add_23_2_n_44, add_23_2_n_45, add_23_2_n_68;
  wire add_23_2_n_69, add_23_2_n_70, add_23_2_n_76, add_23_2_n_77,
       add_23_2_n_78, add_23_2_n_79, add_23_2_n_82, add_23_2_n_85;
  MXI2X1 add_23_2_g155(.A (add_23_2_n_24), .B (add_23_2_n_25), .S0
       (add_23_2_n_42), .Y (out1[7]));
  MXI2X1 add_23_2_g156(.A (add_23_2_n_28), .B (add_23_2_n_27), .S0
       (add_23_2_n_45), .Y (out1[6]));
  MXI2X1 add_23_2_g157(.A (add_23_2_n_22), .B (add_23_2_n_23), .S0
       (add_23_2_n_44), .Y (out1[5]));
  OAI21X1 add_23_2_g158(.A0 (add_23_2_n_29), .A1 (add_23_2_n_78), .B0
       (add_23_2_n_34), .Y (add_23_2_n_45));
  OAI21X1 add_23_2_g159(.A0 (add_23_2_n_16), .A1 (add_23_2_n_79), .B0
       (add_23_2_n_5), .Y (add_23_2_n_44));
  MXI2XL add_23_2_g160(.A (add_23_2_n_32), .B (add_23_2_n_31), .S0
       (add_23_2_n_41), .Y (out1[3]));
  OAI21X1 add_23_2_g162(.A0 (add_23_2_n_35), .A1 (add_23_2_n_77), .B0
       (add_23_2_n_37), .Y (add_23_2_n_42));
  OAI21X1 add_23_2_g163(.A0 (add_23_2_n_8), .A1 (add_23_2_n_69), .B0
       (add_23_2_n_17), .Y (add_23_2_n_41));
  OAI21X2 add_23_2_g166(.A0 (add_23_2_n_20), .A1 (add_23_2_n_70), .B0
       (add_23_2_n_33), .Y (add_23_2_n_39));
  AOI2BB1X1 add_23_2_g168(.A0N (add_23_2_n_15), .A1N (add_23_2_n_34),
       .B0 (add_23_2_n_18), .Y (add_23_2_n_37));
  OAI21X2 add_23_2_g169(.A0 (add_23_2_n_6), .A1 (add_23_2_n_12), .B0
       (add_23_2_n_13), .Y (add_23_2_n_36));
  OR2XL add_23_2_g172(.A (add_23_2_n_15), .B (add_23_2_n_29), .Y
       (add_23_2_n_35));
  NOR2BX1 add_23_2_g173(.AN (add_23_2_n_11), .B (add_23_2_n_21), .Y
       (add_23_2_n_34));
  AOI2BB1X1 add_23_2_g174(.A0N (add_23_2_n_17), .A1N (add_23_2_n_14),
       .B0 (add_23_2_n_19), .Y (add_23_2_n_33));
  INVX1 add_23_2_g175(.A (add_23_2_n_31), .Y (add_23_2_n_32));
  INVX1 add_23_2_g177(.A (add_23_2_n_27), .Y (add_23_2_n_28));
  NOR2X1 add_23_2_g179(.A (add_23_2_n_82), .B (add_23_2_n_85), .Y
       (add_23_2_n_31));
  NAND2BX1 add_23_2_g180(.AN (add_23_2_n_16), .B (add_23_2_n_5), .Y
       (add_23_2_n_30));
  NAND2BX1 add_23_2_g181(.AN (add_23_2_n_16), .B (add_23_2_n_10), .Y
       (add_23_2_n_29));
  NOR2X1 add_23_2_g182(.A (add_23_2_n_18), .B (add_23_2_n_15), .Y
       (add_23_2_n_27));
  INVX1 add_23_2_g184(.A (add_23_2_n_24), .Y (add_23_2_n_25));
  INVX1 add_23_2_g185(.A (add_23_2_n_22), .Y (add_23_2_n_23));
  NOR2X1 add_23_2_g186(.A (add_23_2_n_5), .B (add_23_2_n_9), .Y
       (add_23_2_n_21));
  OR2XL add_23_2_g187(.A (add_23_2_n_14), .B (add_23_2_n_8), .Y
       (add_23_2_n_20));
  NAND2X1 add_23_2_g189(.A (add_23_2_n_17), .B (add_23_2_n_7), .Y
       (add_23_2_n_26));
  XNOR2X1 add_23_2_g190(.A (in1[7]), .B (in2[7]), .Y (add_23_2_n_24));
  NAND2X1 add_23_2_g191(.A (add_23_2_n_11), .B (add_23_2_n_10), .Y
       (add_23_2_n_22));
  AND2X1 add_23_2_g192(.A (in1[3]), .B (in2[3]), .Y (add_23_2_n_19));
  AND2X1 add_23_2_g193(.A (in1[6]), .B (in2[6]), .Y (add_23_2_n_18));
  NAND2X2 add_23_2_g194(.A (in1[2]), .B (in2[2]), .Y (add_23_2_n_17));
  NOR2X1 add_23_2_g195(.A (in1[4]), .B (in2[4]), .Y (add_23_2_n_16));
  NOR2X1 add_23_2_g196(.A (in1[6]), .B (in2[6]), .Y (add_23_2_n_15));
  NOR2X4 add_23_2_g197(.A (in1[3]), .B (in2[3]), .Y (add_23_2_n_14));
  INVX1 add_23_2_g199(.A (add_23_2_n_9), .Y (add_23_2_n_10));
  INVX1 add_23_2_g200(.A (add_23_2_n_8), .Y (add_23_2_n_7));
  NAND2X2 add_23_2_g201(.A (in1[1]), .B (in2[1]), .Y (add_23_2_n_13));
  NOR2X8 add_23_2_g202(.A (in1[1]), .B (in2[1]), .Y (add_23_2_n_12));
  NAND2X1 add_23_2_g203(.A (in1[5]), .B (in2[5]), .Y (add_23_2_n_11));
  NOR2X1 add_23_2_g204(.A (in1[5]), .B (in2[5]), .Y (add_23_2_n_9));
  NOR2X4 add_23_2_g205(.A (in1[2]), .B (in2[2]), .Y (add_23_2_n_8));
  NAND2X6 add_23_2_g206(.A (in1[0]), .B (in2[0]), .Y (add_23_2_n_6));
  NAND2X1 add_23_2_g207(.A (in1[4]), .B (in2[4]), .Y (add_23_2_n_5));
  XNOR2X1 add_23_2_g2(.A (add_23_2_n_6), .B (add_23_2_n_1), .Y
       (out1[1]));
  XNOR2X1 add_23_2_g209(.A (add_23_2_n_30), .B (add_23_2_n_76), .Y
       (out1[4]));
  XNOR2X1 add_23_2_g210(.A (add_23_2_n_26), .B (add_23_2_n_68), .Y
       (out1[2]));
  NOR2BX1 add_23_2_g211(.AN (add_23_2_n_13), .B (add_23_2_n_12), .Y
       (add_23_2_n_1));
  XOR2XL add_23_2_g212(.A (in1[0]), .B (in2[0]), .Y (out1[0]));
  INVXL add_23_2_fopt214(.A (add_23_2_n_69), .Y (add_23_2_n_68));
  BUFX3 add_23_2_fopt215(.A (add_23_2_n_70), .Y (add_23_2_n_69));
  CLKINVX2 add_23_2_fopt216(.A (add_23_2_n_36), .Y (add_23_2_n_70));
  CLKINVX1 add_23_2_fopt(.A (add_23_2_n_77), .Y (add_23_2_n_76));
  CLKINVX1 add_23_2_fopt221(.A (add_23_2_n_39), .Y (add_23_2_n_77));
  INVXL add_23_2_fopt222(.A (add_23_2_n_39), .Y (add_23_2_n_78));
  INVXL add_23_2_fopt223(.A (add_23_2_n_39), .Y (add_23_2_n_79));
  BUFX2 add_23_2_fopt224(.A (add_23_2_n_19), .Y (add_23_2_n_82));
  BUFX2 add_23_2_fopt225(.A (add_23_2_n_14), .Y (add_23_2_n_85));
endmodule


