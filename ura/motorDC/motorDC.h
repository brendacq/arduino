#ifndef SERVOMOTOR_H
#define SERVOMOTOR_H
#include <Arduino.h>
#include <Servo.h>

class motorDC
{
  public:
    motorDC();
    void setup(int pinA, int pinB);
    void frente();
    void direita();
    void esquerda();
    void re();
    void parado();

  private:
    int paradoDireito = 1500;
    int paradoEsquerdo = 1500;
    int pin1motor, pin2motor;

    Servo mEsquerdo;
    Servo mDireito;
};

#endif
