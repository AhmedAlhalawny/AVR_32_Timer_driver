/*
 * timer.h
 *
 * Created: 3/3/2022 1:55:47 PM
 *  Author: Ahmed ALhalawany
 this file includes initializations and modes of operations of timer 1,2,3 which is normal mode,CTC,PWM, ICU mode and interrupts
 functions prototypes 
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "STD_types.h"
#include "timer_cnfg.h"

void timer0_inti(uint8 mode);
void timer0_interrupt_EN(uint8 type);
void timer0_PWM(uint8 duty) ;
void timer0_dis();



#endif /* TIMER_H_ */