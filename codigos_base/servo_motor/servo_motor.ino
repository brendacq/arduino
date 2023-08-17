#include <Servo.h>

#define motorPin 8
#define motorStep 1
#define angle 0

Servo motor;

void setup() {
  Serial.begin(9600);
  motor.attach(motorPin);
}

void loop() {
  motor.write(angle);
  delay(500);

  motor.write(angle + motorStep);

  if(angle == 0 || angle == 180){
    step *= -1;
  }

  delay(50);

}
