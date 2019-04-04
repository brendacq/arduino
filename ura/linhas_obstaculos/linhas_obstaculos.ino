#include <Servo.h>
#include <NewPing.h>

#define snsE 5
#define snsD 6
#define pTrig 11
#define pEcho 10

int dist;

Servo esquerdo;
Servo direito;
NewPing sonar(pTrig, pEcho);

void frente (){
  esquerdo.write(1);
  direito.write(180);
}

void esquerda(){
  esquerdo.write(180);
  direito.write(180);
}

void direita(){
  esquerdo.write(1);
  direito.write(1);
}

void parar(int tempo){
  esquerdo.detach();
  direito.detach();
  delay(tempo);
}

void setup(){
  esquerdo.attach (7);
  direito.attach (5);
  pinMode (snsE, INPUT);
  pinMode (snsD, INPUT);
}

void loop(){
  int s1=digitalRead(snsE);        //sensor esquerdo
  int s2=digitalRead(snsD);        //sensor direito
  dist=sonar.ping_cm();

  if (dist<10 && dist>2){
    parar(500);
    direita();
      delay(800);
    frente();
      delay(1000);
    esquerda();
      delay(800);
    frente();
      delay(1200);
    esquerda();
      delay(800);
    frente();
      delay(1000);
    direita();
      delay(800);
  } else if (s1==0 && s2==0){                //se os dois sensores virem branco
    frente();
  } else if (s1==1 && s2==0){        //se o sensor esquerdo vir preto
    esquerda();
  } else if (s1==0 && s2==1){       //se o sensor direito vir preto
    direita();
  }
}
