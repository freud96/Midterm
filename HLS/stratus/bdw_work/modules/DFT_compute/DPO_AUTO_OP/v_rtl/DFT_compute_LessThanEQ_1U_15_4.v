`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:17:28 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_LessThanEQ_1U_15_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [3:0] in1;
output  out1;
wire  asc001;

assign asc001 = ((9'B100000000 ^ {{5{in1[3]}}, in1})<=(9'B100000000 ^ 9'B000000011));

assign out1 = asc001;
endmodule

/* CADENCE  ubP0Sw0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/

