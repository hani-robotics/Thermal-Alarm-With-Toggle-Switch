#include<DHT.h>

DHT dht(2,DHT11);
float temperature;
int currentbuttonstate;
int alarmknowledged=LOW;
int lastbuttonstate=HIGH;

void setup() {
  dht.begin();
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,INPUT_PULLUP);
  delay(2000);
}

void alarm(){
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  tone(8,1500);
}

void toggle(){
  alarmknowledged=!alarmknowledged;
  digitalWrite(3,LOW);
  digitalWrite(4,alarmknowledged);
  noTone(8);
}

void loop() {
  temperature=dht.readTemperature();
  currentbuttonstate=digitalRead(7);
  Serial.println(temperature);

  if(temperature<=31){
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    noTone(8);
    alarmknowledged=LOW;
  }

  if(temperature>31 && alarmknowledged==LOW){
    alarm();
    delay(50);
  }
  if(currentbuttonstate==0 && lastbuttonstate==1 && temperature>31){
    toggle();
  }
  lastbuttonstate=currentbuttonstate;
}
