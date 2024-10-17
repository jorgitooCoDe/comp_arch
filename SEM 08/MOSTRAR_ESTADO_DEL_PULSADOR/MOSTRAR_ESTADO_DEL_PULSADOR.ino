/*Leer una entrada digital y
mostrar por la pantalla del
computador (CONSOLA
SERIAL) el estado del pulsador
cuando es oprimido.
*/

int boton = 2;
void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT);
}

void loop(){
  int pulsador = digitalRead(boton);
  
   if(pulsador==0){
      Serial.println("Pulsado");
   }else{
      Serial.println("No pulsado");
    }
    delay(200);
}
