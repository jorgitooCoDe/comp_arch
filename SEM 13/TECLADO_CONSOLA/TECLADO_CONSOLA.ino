#include <Keypad.h>
const byte FILAS=4;
const byte COLUM=4;
char teclas[FILAS][COLUM]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
  };
 byte FILASPIN[FILAS]={9,8,7,6};//PINES FILAS
 byte COLUMPIN[COLUM]={5,4,3,2};//PINES COLUMNAS
 Keypad teclado=Keypad(makeKeymap(teclas),FILASPIN,COLUMPIN,FILAS,COLUM);
 
void setup() {
  Serial.begin(9600);
}

void loop() {
  char tecla=teclado.getKey();
  switch(tecla)
  {
    case'A':
    Serial.println("Oprimiste el boton A");
    break;
    case'B':
    Serial.println("Oprimiste el boton B");
    break;

  }
 }
