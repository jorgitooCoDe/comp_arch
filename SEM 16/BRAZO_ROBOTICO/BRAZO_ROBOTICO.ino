#include<Servo.h>
Servo motor;
Servo motor1;

int poten=A0;
int poten1=A1;

int valor=0;
int valor1=0;

void setup() {
  Serial.begin(9600);
  motor.attach(9);
  motor1.attach(10);
}

void loop() {
  valor=analogRead(poten);
  valor=map(valor,0,1023,0,180);
  motor.write(valor);
  delay(15);

  valor1=analogRead(poten1);
  valor1=map(valor1,0,1023,0,180);
  motor1.write(valor1);
  delay(15);
  
}
