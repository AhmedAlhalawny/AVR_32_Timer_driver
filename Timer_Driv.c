/*
 * Timer_Driv.c
 *
 * Created: 3/3/2022 1:40:20 PM
 *  Author: Ahmed ALhalawany
*/

#define F_CPU 16000000UL
#include <avr/io.h>
#include "timer.h"
#include <util/delay.h>

int main(void)
{
	
	
    while(1)
    {
       
	  _delay_ms(100);
	  timer0_inti(PWM);
	  timer0_PWM(80) ;
	  _delay_ms(100);
	  timer0_dis();
	
    }
}