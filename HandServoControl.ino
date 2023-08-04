#include <Servo.h>

Servo thumbServo;
Servo indexServo;
Servo middleServo;
Servo ringServo;
Servo littleServo;

void setup() {
  thumbServo.attach(9);   // Connect the thumb servo to pin 2
  indexServo.attach(10);   // Connect the index finger servo to pin 3
  middleServo.attach(11);  // Connect the middle finger servo to pin 4
  ringServo.attach(12);    // Connect the ring finger servo to pin 5
  littleServo.attach(13);  // Connect the little finger servo to pin 6
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() >= 5) {
    int thumbAngle = Serial.parseInt();
    int indexAngle = Serial.parseInt();
    int middleAngle = Serial.parseInt();
    int ringAngle = Serial.parseInt();
    int littleAngle = Serial.parseInt();

    thumbServo.write(thumbAngle);
    indexServo.write(indexAngle);
    middleServo.write(middleAngle);
    ringServo.write(ringAngle);
    littleServo.write(littleAngle);
  }
}
