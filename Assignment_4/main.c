#include <avr/io.h>
#include <util/delay.h>

 
int main (void)
{
 DDRD   |= 0b00000000;
 DDRB   |= ((1 << DDB5));
 int i,p,q,r,w,a,b,output;
  while (1) {

     i = PIND;
   
     r= i & 0b00000100;
     q= i & 0b00001000;
     p= i & 0b00010000;

	output=(a||b)||(!(a&&b));

if(output==1)
PORTB = ((1 <<  PB5));
else
PORTB = ((0 <<  PB5));

  }
  return 0;

}
