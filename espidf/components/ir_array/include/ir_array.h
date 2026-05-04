#include "driver/gpio.h"

typedef struct {
    // Time constants
    int emitters_num;
    int emitter_rise_time_us;
    int emitter_fall_time_us;
    int receivers_num;
    int receiver_rise_time_us;
    int receiver_propogation_delay_us;
    // Pin Definitions
    gpio_num_t receiver_data_pin;
    gpio_num_t receiver_mux_pin_0;
    gpio_num_t receiver_mux_pin_1;
    gpio_num_t receiver_mux_pin_2;
    gpio_num_t emitter_decoder_pin_0;
    gpio_num_t emitter_decoder_mux_pin_1;
    gpio_num_t emitter_decoder_mux_pin_2;
} ir_array_params_t;