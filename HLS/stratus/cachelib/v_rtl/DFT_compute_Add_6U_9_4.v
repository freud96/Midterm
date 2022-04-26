`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:25:23 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_Add_6U_9_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [5:0] in1;
output [5:0] out1;
wire [5:0] asc001;

assign asc001 = 
	+(in1)
	+(6'B000000);

assign out1 = asc001;
endmodule

/* CADENCE  urj4Two= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


