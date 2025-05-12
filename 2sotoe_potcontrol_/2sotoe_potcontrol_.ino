/*
This sketch was made by Emil Hannes (ratew on github)
This sketch allows you to sort of combine the power of two servos by placing them on top and putting something inbetween
so you essentialy combine two servos power

Connect potentiometer output to A0
Connect main servo signal wire to digital pin 9 and secondary servo signal wire to digital pin 10 (any pwm pin works just change the variable)
Connect the rest of pot pins to 5V and ground and servo vcc and ground to arduino ground and 5V
*/
#include <Servo.h>
Servo servo1; // the servo on top
Servo servo0;

const int mainservo = 9; // assign digital pin 9 to var "mainservo"
const int secondaryservo = 10; // assign digital pin 10 to var "secondaryservo"
int const pot = A0;
int potVal;
int angle;

void setup() {
  //attach servos to correct pins
  servo0.attach(mainservo);
  servo1.attach(secondaryservo);
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

