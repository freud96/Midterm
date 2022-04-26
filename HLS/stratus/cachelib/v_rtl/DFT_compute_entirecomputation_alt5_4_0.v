`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:13:30 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_entirecomputation_alt5_4_0 (
	in1,
	in2,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in1,
	in2;
output [7:0] out1;
wire [7:0] asc001;

assign asc001 = 
	+(in1)
	+(in2);

assign out1 = asc001;
endmodule

/* CADENCE  ubDyTgw= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


