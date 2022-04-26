`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:28:44 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_entirecomputation_alt4_4_1 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in1;
output [32:0] out1;
wire [32:0] asc010;

assign asc010 = {in1,1'B0};

assign out1 = asc010;
endmodule

/* CADENCE  urf4SAg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


