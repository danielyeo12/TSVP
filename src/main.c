/**
 * Daniel Yeo
 * 2026/9/1
 */
#include <stm32l432xx.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "gpio.h"

#define IG_SWITCH_ACC   A1
#define IG_SWITCH_RUN   A2
#define IG_SWITCH_START A3

int main() {
    gpio_config_output(IG_SWITCH_RUN, 0, 0);
    gpio_config_output(IG_SWITCH_START, 0, 0);
    gpio_config_output(IG_SWITCH_ACC, 0, 0);

    while(1) {

    }
    return 0;
}


int _write(int file, char *data, int len) {
    usart_transmit(USART2, data, len);
    return len;
}