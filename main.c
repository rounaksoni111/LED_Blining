/*
 * MYfirst27_jan.c
 *
 * Created: 1/27/2021 3:32:07 PM
 * Author : lenovo
 */ 
#define F_CPU 160000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB=0XFF; //all port of B is act as output 
    while (1) 
    {
		PORTB =0XFF;
		_delay_ms(100);
		PORTB =0X00;
		_delay_ms(100);
    }
}

