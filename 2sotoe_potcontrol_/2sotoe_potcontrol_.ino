/*
This sketch was made by Emil Hannes (emilHannes on github)
This sketch allows you to sort of combine the power of two servos by placing them on top and putting something inbetween
so you essentialy combine two servos power

Connect potentiometer output to A0
Connect servo signal wire to digital pin 9 (any pwm pin works just change the variable)
Connect the rest of pot pins to 5V and ground and servo vcc and ground to arduino ground and 5V
*/
#include <Servo.h>
Servo servo1; // the servo on top
Servo servo0;

int const pot = A0;
int potVal;
int angle;

void setup() {
  servo0.attach(9); //attach to digital pin 9 on an arduino uno, mega 2560, nano or any pwm pin
  servo1.attach(10); //attach to digital pin 10 on an arduino uno, mega 2560, nano or any pwm pin
  Serial.begin(9600); 
}

void loop() {
  pot = analogRead(potPin);
  Serial.print("pot Value: ");
  Serial.print(pot);
  angle = map(pot, 0, 1023, 0, 179);
  Serial.print(", angle: ");
  Serial.println(angle);

 servo0.write(angle);
 int othAngle = 180 -  angle;
 servo1.write(othAngle);

delay(15);
}

