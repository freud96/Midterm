`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:18:43 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_LessThanEQ_4Sx3S_1U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [3:0] in2;
input [2:0] in1;
output  out1;
wire  asc001;

assign asc001 = ((9'B100000000 ^ {{5{in2[3]}}, in2})<=(9'B100000000 ^ {{6{in1[2]}}, in1}));

assign out1 = asc001;
endmodule

/* CADENCE  ubjwTA0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


