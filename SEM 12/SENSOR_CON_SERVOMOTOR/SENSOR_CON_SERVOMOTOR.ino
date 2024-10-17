
long distancia;//longitud de distancia
long tiempo;
#include<Servo.h>
Servo motor;

void setup() {  
 Serial.begin(9600);
 pinMode(10, OUTPUT); //SALIDA - TRIG
 pinMode(9, INPUT); // ENTRADA - ECHO 
 pinMode(8,OUTPUT);
 pinMode(6,OUTPUT);
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

  //IMPRIMIR
  Serial.println("La distancia es: ");
  Serial.println(distancia);
  Serial.println("cm");
  delay(500);


  if(distancia>140){
    motor.write(0);
    digitalWrite(8,HIGH);
    digitalWrite(6,LOW);
  }else{
    digitalWrite(8,LOW);
    motor.write(180);
    digitalWrite(6,HIGH); 
    }
  
  
  
  




  
}
