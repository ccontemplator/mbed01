#include "mbed.h"

DigitalOut myled3(LED3);
DigitalOut myled1(LED1);

int main()
{
   while (1)
   {
      myled1 = 1;  // set LED1 pin to high
      myled3 = 0; // set LED3 pin to low
      short light=0;

      for(int i=0;i<5;i++){
         ThisThread::sleep_for(500ms);
         myled1.write(light);
         light=!light;
      }
      ThisThread::sleep_for(500ms);
      myled3.write(1);
      ThisThread::sleep_for(500ms);
      myled3.write(0);
      ThisThread::sleep_for(500ms);
      myled3.write(1);
      ThisThread::sleep_for(500ms);
   }
}