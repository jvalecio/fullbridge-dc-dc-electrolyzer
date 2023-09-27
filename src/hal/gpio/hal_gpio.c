/*
 * hal_gpio.c
 *
 *  Created on: 26 de set de 2023
 *      Author: jv_32
 */

#include "hal_gpio.h"
#include "gpio_hw_interface.h"

typedef struct {

    void (*init) (GPIO_Config_t const * const Config);

    void (*write) (GPIO_Port_t const port, GPIO_Pin_t const pin, GPIO_State_t const state);

    GPIO_State_t (*read)  (GPIO_Port_t const port, GPIO_Pin_t const pin);

} hal_gpio_base;


hal_gpio_base hal_gpio = {
      hw_interface_gpio_init,
      hw_interface_gpio_write,
      hw_interface_gpio_read
};
