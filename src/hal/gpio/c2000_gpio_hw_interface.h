/*
 * c2000_gpio_hw_interface.h
 *
 *  Created on: 26 de set de 2023
 *      Author: jv_32
 */

#ifndef SRC_HAL_C2000_GPIO_HW_INTERFACE_H_
#define SRC_HAL_C2000_GPIO_HW_INTERFACE_H_

#include "F28x_Project.h"

// Defina os tipos de dados para os pinos, estado e configuração.

typedef enum {
    GPIO_PIN_0 = 2,
    GPIO_PIN_1 = 1,
    GPIO_PIN_2 = 5,
} GPIO_Pin_t;

typedef enum {
    GPIO_LOW,
    GPIO_HIGH,
} GPIO_State_t;

typedef enum {
    PA1,
    PA2,
} GPIO_Port_t;

typedef struct {
    GPIO_Pin_t pin;
    GPIO_State_t state;
} GPIO_Config_t;


#endif /* SRC_HAL_C2000_GPIO_HW_INTERFACE_H_ */
