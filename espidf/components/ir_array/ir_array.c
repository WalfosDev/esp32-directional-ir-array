#include <stdio.h>
#include "ir_array.h"

void ir_array_init(void)
{
    // Validate if sample_f is less than max_sample_f
    // pin ir_array_sample to CORE1
    // set an ISR on ir_array_sample at the sample_f with GPTimer
    // create a FreeRTOS queue for ir_array_sample_queue
}

void ir_array_device_deinit(void)
{
    // Delete GPTimer
    // Memory managmeent
}

void ir_array_get_latest(void) 
{
    // block on ir_array_sample_queue

    // else return false (no_new_data)
}

// Ensure process cannot be preemted on this core cause critical window
// Using either esp_rom_delay_us() or taskDISABLE_INTERRUPTS()
static void IRAM_ATTR ir_array_sample(void *arg) 
{
	//create ARR[EMM_SIZE * REC_SIZE];
	//i = 0;
	//for-each EMITTER e:
		//turn on EMM
		//busy-wait EMM_RISE_TIME
		//for-each REC r of e:
			//turn on MUX for r
			//busy-wait REC_RISE_TIME + REC_PD
			//ARR[i] = sample REC_SIGNAL GPIO
			//i++;
		//turn off EMM
		//wait EMM_FALL_TIME
	//send ARR to FreeRTOS queue
}