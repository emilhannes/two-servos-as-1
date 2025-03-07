#include <Servo.h>

// servo0 is the bottom and main one, servo1
// is the top one and it trys to copy the bottom one both need to made objects beforehand

Servo servo0;
Servo servo1;

int number = 90;
const int s0 = 9;
const int s1 = 10;

void setup() {
  // put your setup code here, to run once:
servo0.attach(s0);
servo1.attach(s1);
}

void loop() {

// the number to write here needs to be a variable
servo0.write(number);
int opnumber = 180 - number; // (opnumber = opposite number)
servo1.write(opnumber);
}
