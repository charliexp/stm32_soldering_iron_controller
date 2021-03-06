/*
 * pid.h
 *
 *  Created on: Sep 11, 2017
 *      Author: jose
 */

#ifndef PID_H_
#define PID_H_

#include "stm32f1xx_hal.h"
typedef struct pid_values {
	double max;
	double min;
	double Kp;
	double Ki;
	double Kd;
	int16_t maxI;
	int16_t minI;
} pid_values_t;

void setupPIDFromStruct(void);
void setupPID(double max, double min, double Kp, double Kd, double Ki, int16_t _minI, int16_t _maxI );
double calculatePID( double setpoint, double pv );
void resetPID(void);
double getError(void);
double getIntegral(void);
double getPID_D(void);
double getPID_P(void);
double getPID_I(void);
double getOutput(void);
double getPID_SetPoint(void);
double getPID_PresentValue(void);
#endif /* PID_H_ */
