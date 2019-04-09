//valor analógico do sensor
#define analogLeft A0
#define analogRight A1
//valor digital lido do sensor
int digitalLeft = 4;
int digitalRight = 5;

#include <Servo.h>
Servo servoLeft, servoRight;

void setup() {
  servoLeft.attach(6);
  servoRight.attach(7);
  pinMode(analogLeft, INPUT);
  pinMode(analogRight, INPUT);
  pinMode(digitalLeft, INPUT);
  pinMode(digitalRight, INPUT);
}

int analogValueLeft, analogValueRight, digitalValueRight, digitalValueLeft;

void loop() {
  analogValueLeft = analogRead(analogLeft);
  analogValueRight = analogRead(analogRight);
  digitalValueLeft = digitalRead(digitalLeft);
  digitalValueRight = digitalRead(digitalRight);

  //andar pra frente
  if (digitalValueLeft == 0 && digitalValueRight == 0) {
    frente();
  } else if (digitalValueLeft == 1 && digitalValueRight == 0) {
    if (analogValueLeft >= 950 && analogValueRight <= 150) {
      esquerda();
    } else if (analogValueLeft >= 300 && analogValueLeft < 950 && analogValueRight <= 150) {
      delay(700);
      esquerda();
    }
  }
}

void frente () {
  servoLeft.write(1);
  servoRight.write(180);
}

void esquerda() {
  servoLeft.write(180);
  servoRight.write(180);
}

void direita() {
  servoLeft.write(1);
  servoRight.write(1);
}
