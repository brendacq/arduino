#include <math.h>

#define fsr_PIN A0

int leituraSensor;
int tensao_fsr; // A leitura analógica convertida para tensão (miliVolts)
unsigned long resistencia_fsr; // A tensão convertida para resistência.
unsigned long condutancia = 1000000; // O inverso da resistência (em microMhos).
long forca_newton; // A resistência convertida para Força em Newton.
long pressao_pascal; // A pressão exercida em Pascal.
// long massa_kg; // A Força (N) convertida para massa(Kg).
float diametro_fsr = 12.7; // Diâmetro da parte ativa do FSR em milímetro quadrado.
float area_fsr;

void setup(){
  Serial.begin(9600);
}

void loop(){
  // Leitura do sensor
  leituraSensor = analogRead(fsr_PIN);

  // Convertendo o sinal analógico (0 ~ 1023) para miliVolts (0V ~ 5V: 0mV ~ 5000mV)
  tensao_fsr = map(leituraSensor, 0, 1023, 0, 5000);

  // De acordo com a fórmula Rfsr = [(V - Vfsr) * R] / Vfsr:
  int V = 5000; // Alimentação fornecida pelo Arduino.
  int R = 10000; // Valor em ohm do resistor pull-down.
  resistencia_fsr = ((5000 - tensao_fsr)*10000) / tensao_fsr;

  // A condutância deve ser em microMhos, portanto fica: G = (1/R) * 1.000.000, ou G = 1000000/R
  condutancia = condutancia / resistencia_fsr;

  // Seguindo gráficos e referências [3] e [4], usamos a condutância para aproximar a força em Newton:
  if (condutancia <= 1000){
    forca_newton = condutancia / 80;
  } else {
    forca_newton = (condutancia - 1000) / 30;
  }

  // Conversão para Pascal. Pa = força / área.
  // A área da parte ativa do sensor, que é um círculo, pode ser encontrada por A = pi * raio².
  float raio = diametro_fsr/2;
  area_fsr = M_PI * pow(raio, 2);
  pressao_pascal = forca_newton / area_fsr;

  Serial.print('Força em Newton: ' + forca_newton + 'N\n');
  Serial.print('Pressão em Pascal: ' + pressao_pascal + 'Pa\n');
}