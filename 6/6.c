#include<avr/io.h>
int main(void)
{

  DDRB=DDRB & ~(1<<5);  //bit 5 as input
  PINB=(1<<PB5);
  DDRC=DDRC |(1<<7);
 
 while(1)
 {
    if(PINB & (1<<5))
	{
	 PORTC=PORTC | (1<<7);
	 }
else
{ 
  PORTC=PORTC & ~(1<<7);
  }
  }
  return 0;
  }
