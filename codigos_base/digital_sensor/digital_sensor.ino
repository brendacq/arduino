#define sensorPin 8

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  Serial.print("Leitura do sensor: ");
  Serial.println(sensorValue);
  delay(1000);

}
