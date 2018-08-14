int ledR=8;
int ledG=9;
int ledB=10;
#define ldr A0

int ldrValue;
int rValue;
int gValue;
int bValue;

void setup() {
  Serial.begin (9600);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  //pinMode(ldr, INPUT);
}

void loop() {
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, HIGH);
  int ldrValue = analogRead(ldr);
  Serial.println(ldrValue);
  delay(500);
}
