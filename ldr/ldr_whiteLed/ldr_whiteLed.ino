#define ldr A0
#define led 8

int ldrValue;

void setup(){
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    digitalWrite(led, HIGH);
    ldrValue = analogRead(ldr);
    Serial.println(ldrValue);
    delay(300);
}