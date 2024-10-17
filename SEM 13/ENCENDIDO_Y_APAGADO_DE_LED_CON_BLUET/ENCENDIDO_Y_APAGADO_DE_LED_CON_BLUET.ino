#include <SoftwareSerial.h>//LIBRERIA DEL BLUETOOTH

char estado;
SoftwareSerial blue(4,3);//TX-RX


void setup() {
  pinMode(12,OUTPUT);
  blue.begin(9600);
  for(int i=1;i<50;i++){blue.println("");}
  blue.println("Conectado");
}

void loop() {
  if(blue.available()){
      estado=blue.read();
      switch(estado){
          case '1':
            digitalWrite(12,LOW);
            delay(500);
            break;
          case '2':
            digitalWrite(12,HIGH);
            delay(500);
            break;
          default:
            delay(500);
            blue.print(estado);
        }
    }
}
