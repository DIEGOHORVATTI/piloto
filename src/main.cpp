#include <Arduino.h>

//motor
const int pulPin = 2;
const int dirPin = 3;
const int enPin = 4;

int x;

int delayrotacao = 5000;

// sensor LDR
int LED1 = 8;
int LED2 = 9;

// sensor LDR
int LDR2 = A2;
int LDR3 = A3;
int LDR4 = A4;
int LDR5 = A5;

int valorLDR2 = 0;

void setup(){
  
  //motor
  pinMode(pulPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, LOW);

  // debag
  pinMode(LED1, OUTPUT);        
  pinMode(LED2, OUTPUT);
 
  // porta do arduino LDR
  pinMode(LDR2, INPUT);
  pinMode(LDR3, INPUT);
  pinMode(LDR4, INPUT);
  pinMode(LDR5, INPUT);


  //monitor serial
  Serial.begin(115200);
}

void loop(){

  // LDR em loop
  int valorLDR2 = analogRead(LDR2);
  int valorLDR3 = analogRead(LDR3);
  int valorLDR4 = analogRead(LDR4);
  int valorLDR5 = analogRead(LDR5);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);

  // --------debug LDR----------
  Serial.print("valorLDR_2: ");
  Serial.println(valorLDR2);

  Serial.print("valorLDR_3: ");
  Serial.println(valorLDR3);

  Serial.print("valorLDR_4: ");
  Serial.println(valorLDR4);

  Serial.print("valorLDR_5: ");
  Serial.println(valorLDR5);

  digitalWrite(dirPin, HIGH);

  if (x - 1000)
  {
    digitalWrite(pulPin, HIGH);
    delayMicroseconds(delayrotacao);
    digitalWrite(pulPin, LOW);
    delayMicroseconds(delayrotacao);
  }

  /* while (valorLDR2 || valorLDR3 > 80)
  {
    // motor
    digitalWrite(dirPin, LOW);
    digitalWrite(pulPin, LOW);
    delayMicroseconds(delayrotacao);

    analogWrite(LED1, HIGH);

    Serial.print("valorLDR2: ");
    Serial.println(valorLDR2);

    Serial.print("valorLDR3: ");
    Serial.println(valorLDR3);
  };

  while (valorLDR4 || valorLDR5 > 80)
  {
    // motor
    digitalWrite(dirPin, LOW);
    digitalWrite(pulPin, LOW);
    delayMicroseconds(delayrotacao);

    analogWrite(LED2, HIGH);

    Serial.print("valorLDR4: ");
    Serial.println(valorLDR4);

    Serial.print("valorLDR5: ");
    Serial.println(valorLDR5);
  }; */

}