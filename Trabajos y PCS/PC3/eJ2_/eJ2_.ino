#include<Keypad.h>
#include<Servo.h> //libreria del servo
#define PinSERVO 10 //defines el pin del servo
Servo servo_motor; //tipo de variable
int pos;

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

Keypad teclado = Keypad(makeKeymap(teclas),filaspin,columnaspin,filas,columnas);

void setup() {
    Serial.begin(9600);
    servo_motor.attach(PinSERVO);
    servo_motor.write(0); //inicio del servo
}

void loop() {
   char teclapresionada = teclado.getKey();
  if(teclapresionada != NO_KEY){
    //ESTADO DE LA LLAVE PRESS
      Serial.print("Presionaste la tecla: ");
      Serial.println(teclapresionada);   

      //LÓGICA DEL LED 
      switch(teclapresionada){
        case 'A':
          for(pos=0;pos<180;pos++){
          servo_motor.write(pos);
          delay(15);
          }
          break;
        case 'D':
          for(pos=180;pos>0;pos--){
          servo_motor.write(pos);
          delay(15);
          }
          break;
        }
    }
}
