/**
 * Daniel Yeo
 * 2026/9/1
 */
#include <stm32l432xx.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "gpio.h"



int main() {
    gpio_config_output(A2, 0, 0);

    while(1) {
        gpio_write(A2, true);
        for(volatile int i = 0; i < 1000000; i++);
        gpio_write(A2, false);
        for(volatile int i = 0; i < 1000000; i++);
    }
    return 0;
}


int _write(int file, char *data, int len) {
    usart_transmit(USART2, data, len);
    return len;
}