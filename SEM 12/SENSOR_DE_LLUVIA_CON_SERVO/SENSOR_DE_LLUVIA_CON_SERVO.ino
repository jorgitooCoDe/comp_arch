#include<Servo.h>
Servo servo_motor;
int pinSensor=A0;
int servo=8;

void setup() {
  Serial.begin(9600);
  servo_motor.attach(servo);
  servo_motor.write(0);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor_valor=analogRead(pinSensor);
  int motor=map(sensor_valor,220,1023,180,0);
  servo_motor.write(motor);
  Serial.println("Detecta lluvia");
  Serial.println(sensor_valor);
  Serial.println("Servo rota");
  Serial.println(motor);
  delay(1000);

}
