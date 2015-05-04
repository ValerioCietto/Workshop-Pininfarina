/*
  Traffic Lights
  use a switch statement to simulate a traffic light.
 */
int red = 11;
int yellow = 10;
int green = 9;

int state = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  switch(state) {
    case 0:
      digitalWrite(red,HIGH);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);
      delay(2000);
      state++;
      break;
    case 1:
      digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,HIGH);
      delay(1500);
      state++;
      break;
    case 2:
      digitalWrite(red,LOW);
      digitalWrite(yellow,HIGH);
      digitalWrite(green,HIGH);
      delay(500);
      state = 0;
      break;  
  }  
}
