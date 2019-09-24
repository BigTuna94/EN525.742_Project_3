/*
 * audio_fifo.c
 *
 *  Created on: Sep 10, 2019
 *      Author: Zach
 */

#include "xgpio_l.h"
#include "fsl.h"


#include "dds_phase_accum.h"

static uint32_t freq_to_accum(uint32_t freq_hz) {
	// phase_accum = (freq_hz * 2^27) / sample_rate
	const uint32_t c2p27 = 134217728;
	return (uint32_t) ((freq_hz * c2p27) / DDS_SAMPLE_RATE);
}

void set_dds_accum(uint32_t freq_hz) {
	uint32_t accum_val = freq_to_accum(freq_hz) >> 5; // only top 27 bits
	putfslx(accum_val, FSL_ID, FSL_DEFAULT);
	xil_printf("Frequency set to %luHz\r\n", freq_hz);
}