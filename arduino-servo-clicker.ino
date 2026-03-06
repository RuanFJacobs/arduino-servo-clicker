#include <Servo.h>

Servo myServo;

const int servoPin = 3;

const int baseAngle = 75;
const int moveAngle = 35;

const unsigned long minDelay = 5000;
const unsigned long maxDelay = 15000;  // Increase range so randomness is obvious

void setup() {
  myServo.attach(servoPin);
  myServo.write(baseAngle);

  randomSeed(micros());   // Better randomness
}

void loop() {

  unsigned long waitTime = random(minDelay, maxDelay);
  delay(waitTime);

  myServo.write(baseAngle - moveAngle);
  delay(500);

  myServo.write(baseAngle);
}