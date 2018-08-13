#define LDR A0

void setup() {
  Serial.begin (9600);
}

void loop() {
  int ldrValue = analogRead(LDR);
  Serial.println(ldrValue);
  delay(500);
}
