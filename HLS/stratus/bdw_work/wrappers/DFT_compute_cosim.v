//
// Verilog co-simulation wrapper module for the DFT_compute module.

// This module contains the followng items:
//	- An instance of the verilog RTL module created by cynthVLG.
//	- Wires and reg's connected to the ports of the RTL module.
//	- A clock generator using the project's clock frequency and connected to
//    the RTL module's clock port.
//
// The wires and reg's will be connected to sc_signals in the SystemC simulaton
// by esc_link_signals calls in the proxy module found in the DFT_compute_cosim.h 
// file.

`timescale 1 ps / 1 ps

module DFT_compute_cosim;

	reg i_clk;
	reg i_rst;
	wire i_real_busy;
	reg i_real_vld;
	reg[22:0] i_real_data_man;
	reg[7:0] i_real_data_exp;
	reg i_real_data_sign;
	reg o_dft_real_busy;
	wire o_dft_real_vld;
	wire[22:0] o_dft_real_data_man;
	wire[7:0] o_dft_real_data_exp;
	wire o_dft_real_data_sign;
	reg o_dft_imag_busy;
	wire o_dft_imag_vld;
	wire[22:0] o_dft_imag_data_man;
	wire[7:0] o_dft_imag_data_exp;
	wire o_dft_imag_data_sign;


	`include "hub.v"

	DFT_compute DFT_compute0( .i_clk(i_clk),
	 .i_rst(i_rst),
	 .i_real_busy(i_real_busy),
	 .i_real_vld(i_real_vld),
	 .i_real_data_man(i_real_data_man),
	 .i_real_data_exp(i_real_data_exp),
	 .i_real_data_sign(i_real_data_sign),
	 .o_dft_real_busy(o_dft_real_busy),
	 .o_dft_real_vld(o_dft_real_vld),
	 .o_dft_real_data_man(o_dft_real_data_man),
	 .o_dft_real_data_exp(o_dft_real_data_exp),
	 .o_dft_real_data_sign(o_dft_real_data_sign),
	 .o_dft_imag_busy(o_dft_imag_busy),
	 .o_dft_imag_vld(o_dft_imag_vld),
	 .o_dft_imag_data_man(o_dft_imag_data_man),
	 .o_dft_imag_data_exp(o_dft_imag_data_exp),
	 .o_dft_imag_data_sign(o_dft_imag_data_sign) );


	// Variables that can be set externally
	reg i_clk_firstEdge;
	reg i_clk_initialized;
	reg i_clk_started;
	real i_clk_startTime;
	real i_clk_firstHalf;
	real i_clk_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    i_clk_firstEdge = 1'b1;
	    i_clk_startTime = 0.000;		// Offset from time 0 to first edge.
	    i_clk_firstHalf = 5.000;	// Delay for first half of cycle.
	    i_clk_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on i_clk_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( i_clk_initialized !== 1'b1 )
	        @( i_clk_initialized );
	
	    if ( i_clk_startTime > 0.0 ) begin
	        i_clk_started = #i_clk_startTime 1;
	    end
	    else begin
	        i_clk_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( DFT_compute0.i_clk ) begin
	    if ( i_clk_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( i_clk_started !== 1'b1 )
	        @( i_clk_started );
	
	    i_clk <= i_clk_firstEdge;
	    if ( i_clk_firstHalf > 0.0 ) begin
	        #i_clk_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        i_clk = ~i_clk_firstEdge;
	    end
	    else begin
	        i_clk = ~i_clk_firstEdge;
	    end
	    if ( i_clk_secondHalf > 0.0 ) begin
	        #i_clk_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg i_rst_firstEdge;
	reg i_rst_initialized;
	reg i_rst_started;
	real i_rst_startTime;
	real i_rst_firstHalf;
	real i_rst_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    i_rst_firstEdge = 1'b1;
	    i_rst_startTime = 0.000;		// Offset from time 0 to first edge.
	    i_rst_firstHalf = 5.000;	// Delay for first half of cycle.
	    i_rst_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on i_rst_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( i_rst_initialized !== 1'b1 )
	        @( i_rst_initialized );
	
	    if ( i_rst_startTime > 0.0 ) begin
	        i_rst_started = #i_rst_startTime 1;
	    end
	    else begin
	        i_rst_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( DFT_compute0.i_rst ) begin
	    if ( i_rst_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( i_rst_started !== 1'b1 )
	        @( i_rst_started );
	
	    i_rst <= i_rst_firstEdge;
	    if ( i_rst_firstHalf > 0.0 ) begin
	        #i_rst_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        i_rst = ~i_rst_firstEdge;
	    end
	    else begin
	        i_rst = ~i_rst_firstEdge;
	    end
	    if ( i_rst_secondHalf > 0.0 ) begin
	        #i_rst_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg i_real_vld_firstEdge;
	reg i_real_vld_initialized;
	reg i_real_vld_started;
	real i_real_vld_startTime;
	real i_real_vld_firstHalf;
	real i_real_vld_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    i_real_vld_firstEdge = 1'b1;
	    i_real_vld_startTime = 0.000;		// Offset from time 0 to first edge.
	    i_real_vld_firstHalf = 5.000;	// Delay for first half of cycle.
	    i_real_vld_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on i_real_vld_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( i_real_vld_initialized !== 1'b1 )
	        @( i_real_vld_initialized );
	
	    if ( i_real_vld_startTime > 0.0 ) begin
	        i_real_vld_started = #i_real_vld_startTime 1;
	    end
	    else begin
	        i_real_vld_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( DFT_compute0.i_real_vld ) begin
	    if ( i_real_vld_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( i_real_vld_started !== 1'b1 )
	        @( i_real_vld_started );
	
	    i_real_vld <= i_real_vld_firstEdge;
	    if ( i_real_vld_firstHalf > 0.0 ) begin
	        #i_real_vld_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        i_real_vld = ~i_real_vld_firstEdge;
	    end
	    else begin
	        i_real_vld = ~i_real_vld_firstEdge;
	    end
	    if ( i_real_vld_secondHalf > 0.0 ) begin
	        #i_real_vld_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg o_dft_real_busy_firstEdge;
	reg o_dft_real_busy_initialized;
	reg o_dft_real_busy_started;
	real o_dft_real_busy_startTime;
	real o_dft_real_busy_firstHalf;
	real o_dft_real_busy_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    o_dft_real_busy_firstEdge = 1'b1;
	    o_dft_real_busy_startTime = 0.000;		// Offset from time 0 to first edge.
	    o_dft_real_busy_firstHalf = 5.000;	// Delay for first half of cycle.
	    o_dft_real_busy_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on o_dft_real_busy_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( o_dft_real_busy_initialized !== 1'b1 )
	        @( o_dft_real_busy_initialized );
	
	    if ( o_dft_real_busy_startTime > 0.0 ) begin
	        o_dft_real_busy_started = #o_dft_real_busy_startTime 1;
	    end
	    else begin
	        o_dft_real_busy_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( DFT_compute0.o_dft_real_busy ) begin
	    if ( o_dft_real_busy_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( o_dft_real_busy_started !== 1'b1 )
	        @( o_dft_real_busy_started );
	
	    o_dft_real_busy <= o_dft_real_busy_firstEdge;
	    if ( o_dft_real_busy_firstHalf > 0.0 ) begin
	        #o_dft_real_busy_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        o_dft_real_busy = ~o_dft_real_busy_firstEdge;
	    end
	    else begin
	        o_dft_real_busy = ~o_dft_real_busy_firstEdge;
	    end
	    if ( o_dft_real_busy_secondHalf > 0.0 ) begin
	        #o_dft_real_busy_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg o_dft_imag_busy_firstEdge;
	reg o_dft_imag_busy_initialized;
	reg o_dft_imag_busy_started;
	real o_dft_imag_busy_startTime;
	real o_dft_imag_busy_firstHalf;
	real o_dft_imag_busy_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    o_dft_imag_busy_firstEdge = 1'b1;
	    o_dft_imag_busy_startTime = 0.000;		// Offset from time 0 to first edge.
	    o_dft_imag_busy_firstHalf = 5.000;	// Delay for first half of cycle.
	    o_dft_imag_busy_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on o_dft_imag_busy_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( o_dft_imag_busy_initialized !== 1'b1 )
	        @( o_dft_imag_busy_initialized );
	
	    if ( o_dft_imag_busy_startTime > 0.0 ) begin
	        o_dft_imag_busy_started = #o_dft_imag_busy_startTime 1;
	    end
	    else begin
	        o_dft_imag_busy_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( DFT_compute0.o_dft_imag_busy ) begin
	    if ( o_dft_imag_busy_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( o_dft_imag_busy_started !== 1'b1 )
	        @( o_dft_imag_busy_started );
	
	    o_dft_imag_busy <= o_dft_imag_busy_firstEdge;
	    if ( o_dft_imag_busy_firstHalf > 0.0 ) begin
	        #o_dft_imag_busy_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        o_dft_imag_busy = ~o_dft_imag_busy_firstEdge;
	    end
	    else begin
	        o_dft_imag_busy = ~o_dft_imag_busy_firstEdge;
	    end
	    if ( o_dft_imag_busy_secondHalf > 0.0 ) begin
	        #o_dft_imag_busy_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end


endmodule
