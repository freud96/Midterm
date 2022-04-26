`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:16:29 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_Equal_1U_10_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in1;
output  out1;
wire  asc001;

assign asc001 = (13'B0000000000000==in1);

assign out1 = asc001;
endmodule

/* CADENCE  urjySwg= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


