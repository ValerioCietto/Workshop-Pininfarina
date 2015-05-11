/* 
 Two legged robot
 @Author Valerio Cietto
*/

#include <Servo.h>

Servo front;  // create servo object to control a servo
Servo rear;

int del=10;
int stride= 60;
int delayBetweenSteps = 500;
void setup()
{
  front.attach(3);  // attaches the servo on pin 3 to the servo object
  rear.attach(6);  // attaches the servo on pin 6 to the servo object
  front.write(90);
  rear.write(90);
  
  delay(2000);
}

void loop() 
{ 
  forward(10);
  
  //delay(1000);
  
  //backward(5);
} 

void forward(int steps){
  for(int i =0;i<steps;i++){
      front.write(90-stride);
      delay(del);
      rear.write(90-stride);
      delay(del);
      delay(delayBetweenSteps);
      front.write(90+stride);
      delay(del);
      rear.write(90+stride);
      delay(del);
      delay(delayBetweenSteps);
  }
}

void backward(int steps){
  for(int i =0;i<steps;i++){
      front.write(120);
      delay(del);
      rear.write(120);
      delay(del);
      front.write(60);
      delay(del);
      rear.write(60);
      delay(del);
  }
}
