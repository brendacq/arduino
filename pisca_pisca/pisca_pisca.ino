//Programando um pisca-pisca

#define redOne 3
#define yellowOne 4
#define blueOne 5
#define greenOne 6
#define whiteOne 7
#define redTwo 8
#define yellowTwo 9
#define blueTwo 10
#define greenTwo 11
#define whiteTwo 12
//#define orangeOne
//#define orangeTwo

int fadingIn, fadingOut;
int leds[10] = {redOne, yellowOne, blueOne, greenOne, whiteOne, redTwo, yellowTwo, blueTwo, greenTwo, whiteTwo};

void setup(){
}


void mode1(){
  digitalWrite(redOne, HIGH);
  delay(1500);
  digitalWrite(redOne, LOW);
  digitalWrite(yellowOne, HIGH);
  delay(1500);
  digitalWrite(yellowOne, LOW);
  digitalWrite(blueOne, HIGH);
  delay(1500);
  digitalWrite(blueOne, LOW);
  digitalWrite(greenOne, HIGH);
  delay(1500);
  digitalWrite(greenOne, LOW);
  digitalWrite(whiteOne, HIGH);
  delay(1500);
  digitalWrite(whiteOne, LOW);
  digitalWrite(redTwo, HIGH);
  delay(1500);
  digitalWrite(redTwo, LOW);
  digitalWrite(yellowTwo, HIGH);
  delay(1500);
  digitalWrite(yellowTwo, LOW);
  digitalWrite(blueTwo, HIGH);
  delay(1500);
  digitalWrite(blueTwo, LOW);
  digitalWrite(greenTwo, HIGH);
  delay(1500);
  digitalWrite(greenTwo, LOW);
  digitalWrite(whiteTwo, HIGH);
  delay(1500);
  digitalWrite(whiteTwo, LOW);
}


void mode2(){
  for(int i=0; i<10; i++){
    for(fadingIn=0;fadingIn<=255; fadingIn+=5){  
      analogWrite(leds[i], fadingIn);
      delay(1000);
    }
  }  
  for(int i=0; i<10; i++){
    for(fadingOut=255; fadingOut>=0; fadingOut-=5){
      analogWrite(leds[i], fadingOut);
      delay(1000);
    }
  }
}
void loop(){
  
}
