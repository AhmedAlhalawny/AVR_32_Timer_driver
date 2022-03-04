/*
 * timer_cnfg.h
 *
 * Created: 3/3/2022 1:55:28 PM
 *  Author: Ahmed ALhalawany
 this file for timer configurations and 
 */ 






#ifndef TIMER_CNFG_H_
#define TIMER_CNFG_H_
#include <avr/io.h>

#define F_CPU 16000000UL

#define timer0prescale  pre_scal_1         //define the prescale 
#define output_C_mode0   timer0_ocm_clear  //define Compare Match Output Mode





#define pre_scal_1     0x01                         //no pre-scaling
#define pre_scal_8     0x02                         //pre-scaling clk-io/8    (From prescaler)
#define pre_scal_64    0x03                         //pre-scaling clk-io/64   (From prescaler)
#define pre_scal_256   0x04                         //pre-scaling clk-io/256  (From prescaler)
#define pre_scal_1024  0x05                         //pre-scaling clk-io/1024 (From prescaler)


#define normal         0x80                          //  (clear_bit(TCCR0,WGM01) &&   clear_bit(TCCR0,WGM00) && set_bit(TCCR0,FOC0)) 
#define PWM            0x40                          //  (set_bit(TCCR0,WGM01)   &&   clear_bit(TCCR0,WGM00))
#define CTC            0x88                          //  (clear_bit(TCCR0,WGM01) &&   set_bit(TCCR0,WGM00) && set_bit(TCCR0,FOC0))
#define fast_PWM       0x48                          //  (set_bit(TCCR0,WGM01)   &&   set_bit(TCCR0,WGM00))
#define disable        0x00                          //timer disable

#define interrupt_OF   0x01                          //set timer over flow interrupt flag enable
#define interrupt_OC   0x02                          //set timer output compare match  interrupt flag enable

//Compare Output Mode, non-PWM Mode , Fast PWM Mode
#define timer0_ocm_normal  0x00                      // Normal port operation, OC0 disconnected.
#define timer0_ocm_toggle  0x10                      // Toggle OC0 on compare match note " toggle is reserved in Fast PWM Mode"
#define timer0_ocm_clear   0x20                      // Clear OC0 on compare match
#define timer0_ocm_set     0x30                      // Set OC0 on compare match








#endif /* TIMER_CNFG_H_ */