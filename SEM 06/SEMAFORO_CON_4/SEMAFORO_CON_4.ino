/*Se trata de encender y apagar 4 leds secuencialmente. Los leds deben estar
conectados a los pines 9, 10, 11 y 12. Se deben encender y posteriormente apagar los leds
desde el pin 9 al 12, con un tiempo de duración de encendido y apagado de 200
milisegundos.*/


void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  digitalWrite(9,HIGH);//ENCENDIDO
  delay(200);
  digitalWrite(9,LOW);//APAGADO
  delay(200);
  digitalWrite(10,HIGH);//ENCENDIDO
  delay(200);
  digitalWrite(10,LOW);//APAGADO
  delay(200);
  digitalWrite(11,HIGH);//ENCENDIDO
  delay(200);
  digitalWrite(11,LOW);//APAGADO
  delay(200);
  digitalWrite(12,HIGH);//ENCENDIDO
  delay(200);
  digitalWrite(12,LOW);//APAGADO
  delay(200);
}
