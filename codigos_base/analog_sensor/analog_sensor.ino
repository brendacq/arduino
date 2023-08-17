#define analogPin A3

void setup() {
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(analogPin);

  Serial.print("Leitura do sensor: ");
  Serial.println(analogValue);

}
