#include <NewPing.h>

#define triggerPin 4
#define echoPin 5

NewPing sonar (triggerPin, echoPin);

void setup() {
  Serial.begin(9600);

}

void loop() {
  int distance = sonar.ping_cm();

  Serial.print("Distancia: ");
  Serial.println(distance);

  delay(1000);

}
