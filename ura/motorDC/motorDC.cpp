#include "motorDC.h"

motorDC::motorDC()
{
}

void motorDC::setup(int pinA, int pinB)
{
    pin1motor = pinA;
    pin2motor = pinB;
    mDireito.attach(pinDir);
    mEsquerdo.attach(pinEsq);
}

void ServoMotor::calibra(int pEsq, int pDir)
{
    paradoDireito = pDir;
    paradoEsquerdo = pEsq;
}

void ServoMotor::frente()
{
    setup(pinEsq, pinDir);
    mDireito.writeMicroseconds(paradoDireito + intensidade);
    mEsquerdo.writeMicroseconds(paradoEsquerdo - intensidade);
}

void ServoMotor::viraDireita()
{
    setup(pinEsq, pinDir);
    mDireito.writeMicroseconds(paradoDireito - intensidade);
    mEsquerdo.writeMicroseconds(paradoEsquerdo - intensidade);
}

void ServoMotor::viraEsquerda()
{
    setup(pinEsq, pinDir);
    mDireito.writeMicroseconds(paradoDireito + intensidade);
    mEsquerdo.writeMicroseconds(paradoEsquerdo + intensidade);
}

void ServoMotor::re()
{
    setup(pinEsq, pinDir);
    mDireito.writeMicroseconds(paradoDireito - intensidade);
    mEsquerdo.writeMicroseconds(paradoEsquerdo + intensidade);
}

void ServoMotor::parado()
{
    mDireito.detach();
    mEsquerdo.detach();
}
