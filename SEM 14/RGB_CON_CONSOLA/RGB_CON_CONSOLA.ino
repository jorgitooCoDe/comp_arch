int ledrojo=9;
int ledverde=10;
int ledazul=11;

void setup() {
  pinMode(ledrojo,OUTPUT);
  pinMode(ledverde,OUTPUT);
  pinMode(ledazul,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //si conectamos el puerto en serie
  
  while(Serial.available()>0){
      //buscar el valor entero correcto de cadena de datos
      int rojo=Serial.parseInt();
      int verde=Serial.parseInt();
      int azul=Serial.parseInt();
      //buscar los valores en línea(adaptarse valores de 0 a 255)
      if(Serial.read()=='\n'){
         rojo=constrain(rojo,0,255);
         verde=constrain(verde,0,255);
         azul=constrain(azul,0,255);
         //encendido de pines de colores led
         analogWrite(ledrojo,255-rojo);
         analogWrite(ledverde,255-verde);
         analogWrite(ledazul,255-azul);
         //Imprimir en consola
         Serial.print(rojo,HEX);
         Serial.print(" ");
         Serial.print(verde,HEX);
         Serial.print(" ");
         Serial.print(azul,HEX);
         Serial.print(" ");
      }   
      
  }
}
