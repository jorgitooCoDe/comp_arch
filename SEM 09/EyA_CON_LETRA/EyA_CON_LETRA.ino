/*Consiste en escribir por la pantalla
(consola serial) una letra
predeterminada, la primera vez que
se escriba este LED se enciende, si se
vuelve a escribir por segunda vez el
LED se apaga.*/
int LED=3;
char leer;
boolean prendido=false;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  //guardar la variable para leer la consola serial
  leer=Serial.read();
  //condicion

  if((leer=='A')&&(prendido==false)){
    digitalWrite(LED,HIGH);
    prendido=true;
    Serial.println("ENCENDIDO");
  }else if((leer=='A')&&(prendido==true)){
    digitalWrite(LED,LOW);
    prendido=false;
    Serial.println("APAGADO");
  }
}
