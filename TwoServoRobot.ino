/* 
 Two legged robot
 @Author Valerio Cietto
*/

#include <Servo.h>

Servo front;  // create servo object to control a servo
Servo rear;


void setup()
{
  front.attach(3);  // attaches the servo on pin 3 to the servo object
  rear.attach(6);  // attaches the servo on pin 6 to the servo object
}

void loop() 
{ 
  front.write(180);
  delay(1000);
  rear.write(180);
  delay(1000);
  front.write(0);
  delay(1000);
  rear.write(0);
  delay(1000);
} 
