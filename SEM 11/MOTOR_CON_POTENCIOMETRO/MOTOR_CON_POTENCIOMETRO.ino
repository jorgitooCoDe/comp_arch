/*Control del motor con el potenciómetro.
*/
#include<Servo.h> //libreria del servo
Servo motor;
int poten=A0;
int valor;

void setup() {
  motor.attach(9);
}

void loop() {
  valor=analogRead(poten);
  valor=map(valor,0,1023,0,180);
  motor.write(valor);
  delay(15);
  
}
