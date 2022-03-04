/*
 * timer.c
 *
 * Created: 3/3/2022 1:56:09 PM
 *  Author: Ahmed ALhalawany
 */
 
#include "timer.h"
#include "timer_cnfg.h"
#include <avr/io.h>
#include "STD_types.h"
#include "bit_math.h"
#include <avr/interrupt.h>

void timer0_inti(uint8 mode)

{
	TCCR0|=mode;
	TCCR0|=timer0prescale;
	
}

void timer0_interrupt_EN(uint8 type)
{
	TIMSK|=type;	                   //set timer interrupt enable timer interrupt mask register
	sei();                             //enable global interrupt
	
}

void timer0_CTC()
{
	
	
}

void timer0_PWM(uint8 duty)  // duty with percentage
{
	float temp;
	temp=(2.55*duty);
	TCCR0|=output_C_mode0;
	set_bit(DDRB,3);
	OCR0=temp;	
}


void timer0_dis()

{
	TCCR0&=disable;
}

ISR(TIMER0_COMP_vect)
{
	
}



///////////////////////////////////////////////////timer1

void timer1_inti(uint8 mode)

{
	TCCR0|=mode;
	TCCR0|=timer0prescale;
	
}
	
