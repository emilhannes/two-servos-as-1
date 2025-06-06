/*
This sketch was made by Emil Hannes (emilhannes on github)
This sketch allows you to sort of combine the power of two servos by placing them on top and putting something inbetween
so you essentialy combine two servos power

Connect servo signal wire to digital pin 9 (any pwm pin works just change the variable)
servo vcc and ground to arduino ground and 5V
*/

#include <Servo.h>

// servo0 is the bottom and main one, servo1
// is the top one and it trys to copy the bottom one both need to made objects beforehand

Servo servo0;
Servo servo1;

// assign variables
int number = 90;
const int s0 = 9;
const int s1 = 10;

void setup() {
  // attach servos
servo0.attach(s0);
servo1.attach(s1);
}

void loop() {

// for ease of control the number to write here needs to be a variable, this is the main part here
servo0.write(number);
int opnumber = 180 - number; // (opnumber = opposite number)
servo1.write(opnumber);
}
