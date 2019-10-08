// teste com LDR & LED RGB

#define ldr A0
#define ledR 4
#define ledG 5
#define ledB 6

int redValue;
int greenValue;
int blueValue;

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);

  // isso aqui eh ate meio redundante mas blz
  desligar(ledR);
  desligar(ledG);
  desligar(ledB);

  Serial.begin(9600); // pra debug & imprimir valores na tela
}

void loop() {
  
  ligar(ledR);
  redValue = analogRead(ldr);
  desligar(ledR);
  delay(100);
  ligar(ledG);
  greenValue = analogRead(ldr);
  desligar(ledG);
  delay(100);
  ligar(ledB);
  blueValue = analogRead(ldr);
  desligar(ledB);
  delay(100);

  Serial.print('R: ' + redValue);
  Serial.print('G: ' + greenValue);
  Serial.println('B: ' + blueValue);
  delay(300); // pra dar tempo ver umas coisas

}

// to com preguiça hehe
void ligar(int porta){
  digitalWrite(porta, HIGH);
}

void desligar(int porta){
  digitalWrite(porta, LOW);
}
