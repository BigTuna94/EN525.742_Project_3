/*
 * audio_fifo.h
 *
 *  Created on: Sep 10, 2019
 *      Author: Zach
 */

#ifndef SRC_DDS_PHASE_ACCUM_H_
#define SRC_DDS_PHASE_ACCUM_H_

#include <stdint.h>

#define DDS_SAMPLE_RATE 100000000 	// 100MHz
#define DDS_ACCUM_MASK 	0x03FFFFFF 	// DDS Input is only 27 bits, others need to be 0
#define FSL_ID 0 //It's the only FSL so Xilinx didn't generate an ID in xparameters.h

void set_dds_accum(uint32_t freq_hz);

#endif /* SRC_DDS_PHASE_ACCUM_H_ */
