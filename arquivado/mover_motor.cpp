#include <Arduino.h>

const int pulPin = 2; 
const int dirPin = 3; 
const int enPin = 4;

int x;

int delayrotacao = 500;

void setup() {
  pinMode(pulPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);
}

void loop() {
  digitalWrite(dirPin,HIGH);

  if(x - 1000){
    digitalWrite(pulPin,HIGH); 
    delayMicroseconds(delayrotacao); 
    digitalWrite(pulPin,LOW); 
    delayMicroseconds(delayrotacao);
  }
}

