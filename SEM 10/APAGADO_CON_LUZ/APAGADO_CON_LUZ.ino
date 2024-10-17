/*Programa con el sensor LDR, apagar el
encendido de LED del cuando acerca
una luz al sensor.

*/

void setup() {
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int LDR = analogRead(A0);
  if(LDR<600){
    digitalWrite(5,HIGH);
    Serial.println("Aviso oscuridad");
    delay(1000);
  }

  if(LDR>800){
    digitalWrite(5,LOW);
    Serial.println("Detectando luz");
    delay(1000);
  }
}
