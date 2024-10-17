/*Permite controlar el
servo de forma básica para
posicionar el servo en los
ángulos 0º, 90º y 180º.*/

#include<Servo.h> //libreria del servo

Servo servo_motor; //tipo de variable

void setup() {
  Serial.begin(9600);
  servo_motor.attach(9); //indica el pin
}

void loop() {
  //desplazamiento de 0°
  servo_motor.write(0);
  Serial.println(0);
  delay(1000);

  //desplazamiento de 90°
  servo_motor.write(90);
  Serial.println(90);
  delay(1000);

  //desplazamiento de 180°
  servo_motor.write(180);
  Serial.println(180);
  delay(1000);
}
