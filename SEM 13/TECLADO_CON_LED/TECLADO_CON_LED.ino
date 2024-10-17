#include<Keypad.h>

const byte filas = 4;
const byte columnas=4;


char teclas[filas][columnas]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}  
};


byte filaspin[filas] = {9,8,7,6};//pin filas
byte columnaspin[columnas] = {5,4,3,2};//pin columnas
byte led1=10;

Keypad teclado = Keypad(makeKeymap(teclas),filaspin,columnaspin,filas,columnas);

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
}

void loop() {

  char teclapresionada = teclado.getKey();
  if(teclapresionada != NO_KEY){
    //ESTADO DE LA LLAVE PRESS
      Serial.print("Presionaste la tecla: ");
      Serial.println(teclapresionada);   

      //LÓGICA DEL LED 
      switch(teclapresionada){
        case 'B':
          digitalWrite(led1,HIGH);
          break;
        case 'C':
          digitalWrite(led1,LOW);
          break;
        }
    }
}
