#include <Servo.h>

#define snsE 7
#define snsD 5

Servo esquerdo;
Servo direito;

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

void setup(){
  esquerdo.attach (12);
  direito.attach (11);
  pinMode (snsE, INPUT);
  pinMode (snsD, INPUT);
}

void loop(){
  int s1=digitalRead(snsE);        //sensor externo esquerdo
  int s2=digitalRead(snsD);        //sensor interno esquerdo 


  if (s1==0 && s2==0){                //se os dois sensores externos virem branco
    frente();
  } else if (s1==1 && s2==0){        //se o sensor externo esquerdo vir preto
    esquerda();
  } else if (s1==0 && s2==1){       //se o sensor externo direito vir preto
    direita();
  }    
}
