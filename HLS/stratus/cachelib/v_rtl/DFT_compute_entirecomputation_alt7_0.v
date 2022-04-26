`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:13:44 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_entirecomputation_alt7_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in1;
output [31:0] out1;
wire  asc007;
wire [31:0] asc008;

assign asc007 = 
	((~in1[31]));

assign asc008 = {in1[30:0],asc007};

assign out1 = asc008;
endmodule

/* CADENCE  ubLyQgs= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


