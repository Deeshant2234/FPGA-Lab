#include <Arduino.h>

int A=2;
int B=3;


void setup() {

   pinMode(A,INPUT);
   pinMode(B,INPUT);
   pinMode(LED_BUILTIN,OUTPUT);

}


void loop()
{
      int a=digitalRead(A);
      int b=digitalRead(B);

      int Y=(!(a||b))||(a||b);

       if(Y==1)
	   {
         digitalWrite(LED_BUILTIN,HIGH);
         Serial.begin(9600);
         Serial.print("HIGH ");
         delay(500);

        }
      else
	  {
         digitalWrite(LED_BUILTIN,LOW);
         Serial.begin(9600);
         Serial.print("LOW ");
         delay(500);
      }

}
