/*Permite controlar el
servo de forma deslizando.(de 0° a 180°)
*/

#include<Servo.h> //libreria del servo
#define PinSERVO 9 //defines el pin del servo

Servo servo_motor; //tipo de variable
int pos;

void setup() {
  servo_motor.attach(PinSERVO);
  servo_motor.write(0); //inicio del servo
}

void loop() {
  for(pos=0;pos<180;pos++){
    servo_motor.write(pos);
    delay(15);
  }
  delay(1000);
  for(pos=180;pos>0;pos--){
    servo_motor.write(pos);
    delay(15);
  }
  delay(1000);
}
