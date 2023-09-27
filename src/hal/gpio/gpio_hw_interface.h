/*
 * gpio_hw_interface.h
 *
 *  Created on: 26 de set de 2023
 *      Author: jv_32
 */

#ifndef SRC_HAL_GPIO_HW_INTERFACE_H_
#define SRC_HAL_GPIO_HW_INTERFACE_H_

#ifdef C2000
#include "c2000_gpio_hw_interface.h"
#else
#error "MCU NOT DEFINED"
#endif

void hw_interface_gpio_init (GPIO_Config_t const * const Config);
void hw_interface_gpio_write (GPIO_Port_t const port, GPIO_Pin_t const pin, GPIO_State_t const state);
GPIO_State_t hw_interface_gpio_read  (GPIO_Port_t const port, GPIO_Pin_t const pin);


#endif /* SRC_HAL_GPIO_HW_INTERFACE_H_ */
