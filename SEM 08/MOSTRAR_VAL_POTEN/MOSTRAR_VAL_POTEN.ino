/*Enviar información del potenciómetro*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  int poten = analogRead(A0);//potenciometro
  //imprimir el valor al mover el potencionmetro
  Serial.println(poten);
  delay(100);

}
