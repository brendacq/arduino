#define inAnalog A0
int inDigital = 7;

void setup() {
  Serial.begin(9600);
  pinMode(inDigital, INPUT);
  pinMode(inAnalog, INPUT);  
}

int analogValue, digitalValue;

void loop() {
  analogValue = analogRead(inAnalog);
  digitalValue = digitalRead(inDigital);

  Serial.print("analog: ");
  Serial.println(analogValue);
  Serial.print("digital: ");
  Serial.println(digitalValue);
}
