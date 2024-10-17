#include<Servo.h>
Servo servo_motor;
int servo=9;

#define Pinsensor A0

#define led1 6
#define led2 7


void setup() {
  Serial.begin(9600);
  pinMode(Pinsensor, INPUT);
  pinMode(led1,LOW);
  pinMode(led2,LOW);
  servo_motor.attach(servo);
  servo_motor.write(0);
}

void loop() {

  int sensor_valor=analogRead(Pinsensor);

  if(sensor_valor<500){
    int motor=map(sensor_valor,0,1023,0,180);
    servo_motor.write(motor);
    Serial.println(sensor_valor);
    Serial.println(motor);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    delay(1000); 
  }else{
    int motor=map(sensor_valor,1023,0,180,0);
    servo_motor.write(motor);
    Serial.println(sensor_valor);
    Serial.println(motor);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);  
  }
  
  
  

}
