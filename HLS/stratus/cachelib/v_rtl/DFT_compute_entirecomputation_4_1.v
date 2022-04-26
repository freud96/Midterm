`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:21:57 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_entirecomputation_4_1 (
	in1,
	in2,
	in3,
	out1
	); /* architecture "behavioural" */ 
input [22:0] in1;
input [7:0] in2;
input  in3;
output [31:0] out1;
wire [31:0] asc004;

assign asc004 = {in3,in2,in1};

assign out1 = asc004;
endmodule

/* CADENCE  ubP2TwE= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


