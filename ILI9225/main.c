/*
 * ILI225.c
 *
 * Created: 11.08.2016 17:37:21
 * Author : Jan
 */ 

#include <avr/io.h>
#include <util/delay.h>

#include "ILI9225.h"

int main(void)
{
	ILI9225_init();
    /* Replace with your application code */
    while (1) 
    {
	
	ILI9225_drawRectangle(0, 0, ILI9225_maxX()/2, ILI9225_maxY()/2, COLOR_BLUE);
	_delay_ms(1000);
	ILI9225_drawRectangle(ILI9225_maxX(), ILI9225_maxY(), ILI9225_maxX()/2, ILI9225_maxY()/2, COLOR_RED);
	_delay_ms(1000);
	  ILI9225_drawRectangle(10, 10, 110, 110, COLOR_BLUE);
	  _delay_ms(1000);
	 ILI9225_fillRectangle(20, 20, 120, 120, COLOR_RED);
	 _delay_ms(1000);
	 ILI9225_drawCircle(80, 80, 50, COLOR_YELLOW);
      _delay_ms(1000);
	 ILI9225_fillCircle(90, 90, 30, COLOR_GREEN);
	 _delay_ms(1000);
	 ILI9225_drawLine(0, 0, ILI9225_maxX() - 1, ILI9225_maxY() - 1, COLOR_CYAN);
	 _delay_ms(1000);
	ILI9225_clear();
    }
}

