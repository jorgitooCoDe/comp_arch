/*En este ejemplo empleamos el puerto
serie para encender o apagar el LED o
integrado en la placa Arduino. Para ello
enviamos un carácter a la placa Arduino,
empleando el monitor serial. En caso de
enviar “a” la placa Arduino apaga el LED,
y en caso de enviar “b” lo enciende.
*/

int led=12;
int tecla;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    //leer la tecla enviada
    tecla = Serial.read();
    if(tecla=='A'){
        digitalWrite(led,LOW);
        Serial.println("OFF");
    }
    if(tecla=='B'){
        digitalWrite(led,HIGH);
        Serial.println("ON");
    }
    }
}
