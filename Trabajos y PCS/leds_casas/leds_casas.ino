00
#include <SoftwareSerial.h>
char rec;
SoftwareSerial blue(4, 3); //(TX, RX)
void setup(){
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  blue.begin(9600);
  for (int i=1;i<50;i++){blue.println("");}
  blue.println("Conectado");
}
void loop() {
  if(blue.available()){
    rec=blue.read();
    switch(rec){
      case 'b':
        digitalWrite(9,HIGH);
        delay(500);
               break;
      case 'a':
        digitalWrite(9,LOW);
        delay(500);
       
        break;
         case 'd':
        digitalWrite(10,HIGH);
        delay(500);
        
        break;
         case 'c':
        digitalWrite(10,LOW);
        delay(500);
               break;
          case 'f':
        digitalWrite(11,HIGH);
        delay(500);
       
        break;
          case 'e':
        digitalWrite(11,LOW);
        delay(500);
              break;
          case 'h':
        digitalWrite(12,HIGH);
        delay(500);
              break;
          case 'g':
        digitalWrite(12,LOW);
        delay(500);
              break;
      default:
        delay(500);
        blue.print(rec);
           }
  }
}
