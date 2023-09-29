/*
 * pwm.h
 *
 *  Created on: 24 de set de 2023
 *      Author: jv_32
 */

#ifndef SRC_HAL_PWM_H_
#define SRC_HAL_PWM_H_


void pwm_phase_set(int phase);
void pwm_phase_step(int dph, bool dir);
void pwm_enable(int arg);

#endif /* SRC_HAL_PWM_H_ */
