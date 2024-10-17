 /*Control del motor con el potenciómetro.
*/
#include<Servo.h> //libreria del servo
Servo motor;
Servo motor1;
Servo motor2;
int poten=A0;
int poten1=A1;
int poten2=A2;
int valor;
int valor1;
int valor2;

void setup() {
  motor.attach(9);
  motor1.attach(10);
  motor2.attach(11);
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

  valor2=analogRead(poten2);
  valor2=map(valor2,0,1023,0,180);
  motor2.write(valor2);
  delay(15);
}
