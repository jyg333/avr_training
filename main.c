/*
 * CTC_Timer2.c
 *
 * Created: 2020-10-16 오후 3:21:29
 * Author : 윤기
 */ 

#include <avr/io.h>


int main(void)
{	DDRB = 0b10000000;
	TCCR2 =0b00011100;
	OCR2 = 124;
    /* Replace with your application code */
    while (1) 
    {
		while(TIFR&0x08);
		
		OCR2 = 124;
		TIFR = 0x08;
    }
}

