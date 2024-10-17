long distancia;
long tiempo;

#include<Servo.h>
Servo motor;

int ledrojo=6;
int ledverde=7;
int ledazul=8;


void setup() {
 Serial.begin(9600);
 pinMode(10,OUTPUT);//SALIDA TRIG
 pinMode(9,INPUT);//ENTRADA ECHO
 pinMode(ledrojo,OUTPUT);
 pinMode(ledverde,OUTPUT);
 pinMode(ledazul,OUTPUT);
 motor.attach(12);
}

void loop() {
   //TRIG
  digitalWrite(10, LOW);//recibir del pulso del trig
  delayMicroseconds(5);
  digitalWrite(10, HIGH);//envio del pulso del trig
  delayMicroseconds(10);
  

  //ECHO
  tiempo=pulseIn(9, HIGH); //FORMULA PA MEDIR EL PULSO - ENTRADA
  distancia=long(0.017*tiempo);//FORMULA DISTANCIA

  
  if(distancia>20){
    digitalWrite(ledverde,LOW);
    motor.write(90);
    Serial.println("REDUZCA LA VELOCIDAD");
    delay(300);
    digitalWrite(ledrojo,HIGH);
    delay(50);
    digitalWrite(ledrojo,LOW);
    delay(50); 
  }else{
    if(distancia<20 and distancia>10){
      digitalWrite(ledverde,LOW);
      motor.write(45);
      Serial.println("PARE Y PAGUE PEAJE");
      delay(300);
      digitalWrite(ledazul,HIGH);
      delay(50);
      digitalWrite(ledazul,LOW); 
      delay(50);

    }else{
      motor.write(0);
      Serial.println("PASE, MUCHAS GRACIAS");
      delay(300);
      digitalWrite(ledverde,HIGH);
      }
  }
}
