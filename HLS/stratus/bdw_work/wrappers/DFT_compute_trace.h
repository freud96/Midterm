	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( DFT_compute0 != NULL ) {
			esc_trace_signal( &DFT_compute0->i_clk, ( std::string(name()) + std::string( ".DFT_compute.i_clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->i_rst, ( std::string(name()) + std::string( ".DFT_compute.i_rst" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->i_real.busy, ( std::string(name()) + std::string( ".DFT_compute.i_real.busy" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->i_real.vld, ( std::string(name()) + std::string( ".DFT_compute.i_real.vld" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->i_real.data, ( std::string(name()) + std::string( ".DFT_compute.i_real.data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->o_dft_real.busy, ( std::string(name()) + std::string( ".DFT_compute.o_dft_real.busy" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->o_dft_real.vld, ( std::string(name()) + std::string( ".DFT_compute.o_dft_real.vld" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->o_dft_real.data, ( std::string(name()) + std::string( ".DFT_compute.o_dft_real.data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->o_dft_imag.busy, ( std::string(name()) + std::string( ".DFT_compute.o_dft_imag.busy" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->o_dft_imag.vld, ( std::string(name()) + std::string( ".DFT_compute.o_dft_imag.vld" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &DFT_compute0->o_dft_imag.data, ( std::string(name()) + std::string( ".DFT_compute.o_dft_imag.data" ) ).c_str(), esc_trace_vcd );
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( DFT_compute0 != NULL ) {
			esc_trace_signal( &DFT_compute0->i_clk, ( std::string(name()) + std::string( ".DFT_compute.i_clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->i_rst, ( std::string(name()) + std::string( ".DFT_compute.i_rst" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->i_real.busy, ( std::string(name()) + std::string( ".DFT_compute.i_real.busy" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->i_real.vld, ( std::string(name()) + std::string( ".DFT_compute.i_real.vld" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->i_real.data, ( std::string(name()) + std::string( ".DFT_compute.i_real.data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->o_dft_real.busy, ( std::string(name()) + std::string( ".DFT_compute.o_dft_real.busy" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->o_dft_real.vld, ( std::string(name()) + std::string( ".DFT_compute.o_dft_real.vld" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->o_dft_real.data, ( std::string(name()) + std::string( ".DFT_compute.o_dft_real.data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->o_dft_imag.busy, ( std::string(name()) + std::string( ".DFT_compute.o_dft_imag.busy" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->o_dft_imag.vld, ( std::string(name()) + std::string( ".DFT_compute.o_dft_imag.vld" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &DFT_compute0->o_dft_imag.data, ( std::string(name()) + std::string( ".DFT_compute.o_dft_imag.data" ) ).c_str(), esc_trace_fsdb );
		}
	}
