/*Programa que muestra la lectura de
valores de la fotocelda (LDR).
*/

void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  int LDR = analogRead(A0);
  Serial.println(LDR);
  delay(500);
}
