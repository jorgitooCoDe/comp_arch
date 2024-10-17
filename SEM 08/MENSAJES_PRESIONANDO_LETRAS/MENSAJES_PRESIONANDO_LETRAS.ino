/*Mostrar en consola lo siguiente:
En caso de enviar:
• “A” emitir un mensaje (bienvenidos a
UTP)
• “B” emitir un mensaje (Arquitectura de
computadora).
• “C” emitir un mensaje (Gracias por tu
visita).*/

int tecla;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
      tecla=Serial.read();
      if(tecla=='A'){
        Serial.println("Bienvenidos a UTP");
        }
      if(tecla=='B'){
        Serial.println("Arquitectura de computadoras");
        }
      if(tecla=='C'){
        Serial.println("Gracias por tu visita");
        }
      }
}
