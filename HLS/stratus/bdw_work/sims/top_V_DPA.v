//
// Top-level Verilog module

// One of these modules is created for each testcase that involves
// co-simulation.  This one is for the 'V_DPA' testcase.
// The top-level module contains:
//	- An instances of a co-simulation wrapper module for each instance
//	  simulating in Verilog.
//	- Hub initialization calls that load the shared library for the
//	  simulation.
//
// You can add any other legal Verilog to this template file, and it appear in
// the verilog module.

`timescale 1 ps / 1 ps

module top;

	// RTL wrapper instances for cosim.
	DFT_compute_cosim DFT_compute0();


	integer n_cur_time;
	initial n_cur_time=0;
	reg [63:0] cur_time;
	initial cur_time=0;

	`include "hub.v"

	// Load library and begin co-simulation.
	initial begin

        // For gate-level simulations we back-annotate the instances with delays
        // from the SDF file
        

		// Open the trace file if that's appropriate.
		if ( hubCurrentProjectDoesTrace( hub_trace_vcd ) )
			$dumpfile( "bdw_work/sims/V_DPA/verilog.vcd" );
		if ( hubCurrentProjectDoesTrace( hub_trace_vcd ) ) begin
		$dumpvars( 0, DFT_compute0.i_clk );
		$dumpvars( 0, DFT_compute0.i_rst );
		$dumpvars( 0, DFT_compute0.i_real_busy );
		$dumpvars( 0, DFT_compute0.i_real_vld );
		$dumpvars( 0, DFT_compute0.i_real_data_man );
		$dumpvars( 0, DFT_compute0.i_real_data_exp );
		$dumpvars( 0, DFT_compute0.i_real_data_sign );
		$dumpvars( 0, DFT_compute0.o_dft_real_busy );
		$dumpvars( 0, DFT_compute0.o_dft_real_vld );
		$dumpvars( 0, DFT_compute0.o_dft_real_data_man );
		$dumpvars( 0, DFT_compute0.o_dft_real_data_exp );
		$dumpvars( 0, DFT_compute0.o_dft_real_data_sign );
		$dumpvars( 0, DFT_compute0.o_dft_imag_busy );
		$dumpvars( 0, DFT_compute0.o_dft_imag_vld );
		$dumpvars( 0, DFT_compute0.o_dft_imag_data_man );
		$dumpvars( 0, DFT_compute0.o_dft_imag_data_exp );
		$dumpvars( 0, DFT_compute0.o_dft_imag_data_sign );
			$dumpvars( 4, DFT_compute0.DFT_compute0 );
		end


		// If the SystemC shared library will be loaded using +qbSetOption+libdef=libname.so
		// from the Verilog simulator's command line, the following line can be left
		// out.  In order to load the shared library directly from Verilog, uncomment
		// the following line using either ther automatically generated SIM_EXEC string,
		// or a hard-coded string giving the path to the shared library.
		//hubLoadLibrary( "bdw_work/sims/V_DPA/sim_V_DPA.so", "" );

		// Begin a co-simulation.
		// This task returns after esc_end_cosim() is called from SystemC.
		hubStartCosim;
		#100 $stop;
	end
endmodule

//
// The following wrapper modules are used only for NCSim cosims.
//

`ifdef BDW_NCSC

module DFT_compute_nc_cosim(i_clk,
 i_rst,
 i_real_busy,
 i_real_vld,
 i_real_data_man,
 i_real_data_exp,
 i_real_data_sign,
 o_dft_real_busy,
 o_dft_real_vld,
 o_dft_real_data_man,
 o_dft_real_data_exp,
 o_dft_real_data_sign,
 o_dft_imag_busy,
 o_dft_imag_vld,
 o_dft_imag_data_man,
 o_dft_imag_data_exp,
 o_dft_imag_data_sign
);

input i_clk;
wire i_clk;
input i_rst;
wire i_rst;
output i_real_busy;
wire i_real_busy;
input i_real_vld;
wire i_real_vld;
input [22:0] i_real_data_man;
input [7:0] i_real_data_exp;
input i_real_data_sign;
wire[22:0] i_real_data_man;
wire[7:0] i_real_data_exp;
wire i_real_data_sign;
input o_dft_real_busy;
wire o_dft_real_busy;
output o_dft_real_vld;
wire o_dft_real_vld;
output [22:0] o_dft_real_data_man;
output [7:0] o_dft_real_data_exp;
output o_dft_real_data_sign;
wire[22:0] o_dft_real_data_man;
wire[7:0] o_dft_real_data_exp;
wire o_dft_real_data_sign;
input o_dft_imag_busy;
wire o_dft_imag_busy;
output o_dft_imag_vld;
wire o_dft_imag_vld;
output [22:0] o_dft_imag_data_man;
output [7:0] o_dft_imag_data_exp;
output o_dft_imag_data_sign;
wire[22:0] o_dft_imag_data_man;
wire[7:0] o_dft_imag_data_exp;
wire o_dft_imag_data_sign;

	reg i_real_vld_delayed;
	always @ (i_real_vld) i_real_vld_delayed <= i_real_vld;
	reg [22:0]i_real_data_man_delayed;
	always @ (i_real_data_man) i_real_data_man_delayed <= i_real_data_man;
	reg [7:0]i_real_data_exp_delayed;
	always @ (i_real_data_exp) i_real_data_exp_delayed <= i_real_data_exp;
	reg i_real_data_sign_delayed;
	always @ (i_real_data_sign) i_real_data_sign_delayed <= i_real_data_sign;
	reg o_dft_real_busy_delayed;
	always @ (o_dft_real_busy) o_dft_real_busy_delayed <= o_dft_real_busy;
	reg o_dft_imag_busy_delayed;
	always @ (o_dft_imag_busy) o_dft_imag_busy_delayed <= o_dft_imag_busy;
DFT_compute DFT_compute0( 	.i_clk(i_clk),
	.i_rst(i_rst),
	.i_real_busy(i_real_busy),
	.i_real_vld(i_real_vld_delayed),
	.i_real_data_man(i_real_data_man_delayed),
	.i_real_data_exp(i_real_data_exp_delayed),
	.i_real_data_sign(i_real_data_sign_delayed),
	.o_dft_real_busy(o_dft_real_busy_delayed),
	.o_dft_real_vld(o_dft_real_vld),
	.o_dft_real_data_man(o_dft_real_data_man),
	.o_dft_real_data_exp(o_dft_real_data_exp),
	.o_dft_real_data_sign(o_dft_real_data_sign),
	.o_dft_imag_busy(o_dft_imag_busy_delayed),
	.o_dft_imag_vld(o_dft_imag_vld),
	.o_dft_imag_data_man(o_dft_imag_data_man),
	.o_dft_imag_data_exp(o_dft_imag_data_exp),
	.o_dft_imag_data_sign(o_dft_imag_data_sign)
);

   `include "hub.v"

   initial begin

if ( hubCurrentProjectDoesTrace( hub_trace_vcd ) )
	$dumpfile( "bdw_work/sims/V_DPA/verilog.vcd" );
if ( hubCurrentProjectDoesTrace( hub_trace_vcd ) ) begin
$dumpvars( 0, DFT_compute0.i_clk );
$dumpvars( 0, DFT_compute0.i_rst );
$dumpvars( 0, DFT_compute0.i_real_busy );
$dumpvars( 0, DFT_compute0.i_real_vld );
$dumpvars( 0, DFT_compute0.i_real_data_man );
$dumpvars( 0, DFT_compute0.i_real_data_exp );
$dumpvars( 0, DFT_compute0.i_real_data_sign );
$dumpvars( 0, DFT_compute0.o_dft_real_busy );
$dumpvars( 0, DFT_compute0.o_dft_real_vld );
$dumpvars( 0, DFT_compute0.o_dft_real_data_man );
$dumpvars( 0, DFT_compute0.o_dft_real_data_exp );
$dumpvars( 0, DFT_compute0.o_dft_real_data_sign );
$dumpvars( 0, DFT_compute0.o_dft_imag_busy );
$dumpvars( 0, DFT_compute0.o_dft_imag_vld );
$dumpvars( 0, DFT_compute0.o_dft_imag_data_man );
$dumpvars( 0, DFT_compute0.o_dft_imag_data_exp );
$dumpvars( 0, DFT_compute0.o_dft_imag_data_sign );
	$dumpvars( 4, DFT_compute0 );
end
   end

endmodule


`endif


