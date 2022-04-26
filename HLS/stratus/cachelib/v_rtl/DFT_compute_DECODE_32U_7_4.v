`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:25:25 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_DECODE_32U_7_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [4:0] in1;
output [31:0] out1;
wire [31:0] asc001;

assign asc001 = 32'B00000000000000000000000000000001 << in1;

assign out1 = asc001;
endmodule

/* CADENCE  ubLwQgA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


