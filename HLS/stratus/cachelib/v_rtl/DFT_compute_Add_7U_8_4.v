`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 12:13:18 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_Add_7U_8_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [6:0] in1;
output [6:0] out1;
wire [6:0] asc001;

assign asc001 = 
	+(in1)
	+(7'B0000000);

assign out1 = asc001;
endmodule

/* CADENCE  urjxTAk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


