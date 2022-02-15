#include <Arduino.h>

// sensor LDR
int LED2 = 2;
int LED3 = 3;

// sensor LDR
int LDR2 = A2;
int LDR3 = A3;
int LDR4 = A4;
int LDR5 = A5;

void setup()
{
  // debag
  pinMode(LED2, OUTPUT);        
  pinMode(LED3, OUTPUT);
 

  // porta do arduino para debugar
  pinMode(LDR2, INPUT);
  pinMode(LDR3, INPUT);
  pinMode(LDR4, INPUT);
  pinMode(LDR5, INPUT);


  Serial.begin(115200);
}

void loop()
{
  // LDR em loop
  int valorLDR2 = analogRead(LDR2);
  int valorLDR3 = analogRead(LDR3);
  int valorLDR4 = analogRead(LDR4);
  int valorLDR5 = analogRead(LDR5);

  while (valorLDR2 > 80)
  {

    digitalWrite(LED2, HIGH);
  }

  // --------debug LDR----------
  Serial.print("valorLDR_2: ");
  Serial.println(valorLDR2);

  Serial.print("valorLDR_3: ");
  Serial.println(valorLDR3);

  Serial.print("valorLDR_4: ");
  Serial.println(valorLDR4);

  Serial.print("valorLDR_5: ");
  Serial.println(valorLDR5);
}