/*
 * My_hello_world.c
 *
 * Created: 04/13/2022 5:50:12 am
 * Author : poochie
 */ 

#include <avr/io.h>
#define F_CPU 16000000L		// Clock at 16MHz
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	
	DDRB = 0xff;	// all the values is 1111 1111 all pins are output
	
	
    while (1) 
    {
		// this code will repeat infinitely
		PORTB = 0x55;
		_delay_ms(1000);
		PORTB = 0xAA;
		_delay_ms(1000);
    }
}

