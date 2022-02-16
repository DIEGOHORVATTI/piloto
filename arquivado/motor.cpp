const int pulPin = 2; 
const int dirPin = 3; 
const int enPin = 4;

int x;

int delayrotacao = 500;

int LED1 = A3;  // Led no pino 6
int LED2 = A4;  // Led no pino 6

int LDR1 = A1;
int LDR2 = A2;

void setup() {
  pinMode(pulPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT);
}


void loop() {
  int valorLDR1 = analogRead(LDR1);
  int valorLDR2 = analogRead(LDR2); 

  Serial.print("valorLDR1: ");
  Serial.println(valorLDR1);

  Serial.print("valorLDR2: ");
  Serial.println(valorLDR2);

    while(valorLDR1 > 80){

      digitalWrite(dirPin,LOW);
      analogWrite(LED1, 160);

      digitalWrite(pulPin,HIGH); 
      delayMicroseconds(delayrotacao); 
      digitalWrite(pulPin,LOW); 
      delayMicroseconds(delayrotacao);

       valorLDR1 = analogRead(LDR1);

       Serial.print("valorLDR1: ");
       Serial.println(valorLDR1);
      }

      digitalWrite(LED1, 0);

    while(valorLDR2 > 80){

      digitalWrite(dirPin,HIGH);
      analogWrite(LED2, 160);

      digitalWrite(pulPin,HIGH); 
      delayMicroseconds(delayrotacao); 
      digitalWrite(pulPin,LOW); 
      delayMicroseconds(delayrotacao);

     valorLDR2 = analogRead(LDR2);

     Serial.print("valorLDR2: ");
     Serial.println(valorLDR2); 

    }

    digitalWrite(LED2, 0);



}
