#include <Servo.h>

Servo myServo;

const int servoPin = 3;

const int baseAngle = 100;
const int moveAngle = 57;

// Long delay (15–35 sec)
const unsigned long minDelay = 40000;
const unsigned long maxDelay = 65000;

// Short delay (1–3 sec)
const unsigned long minShortDelay = 1000;
const unsigned long maxShortDelay = 3000;

void setup() {
  myServo.attach(servoPin);
  myServo.write(baseAngle);

  randomSeed(micros());
}

void loop() {

  // 1. Long random wait
  unsigned long waitTime = random(minDelay, maxDelay);
  delay(waitTime);

  // 2. First click
  myServo.write(baseAngle - moveAngle);
  delay(500);
  myServo.write(baseAngle);

  // 3. Short random wait
  unsigned long shortWait = random(minShortDelay, maxShortDelay);
  delay(shortWait);

  // 4. Second click
  myServo.write(baseAngle - moveAngle);
  delay(500);

  // 5. Return to top
  myServo.write(baseAngle);
}