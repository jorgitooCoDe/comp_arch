/*Leer una entrada análoga y
mostrar por la pantalla del
computador (consola serial)
el valor luego de girar el
potenciómetro.
*/
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  int Pot=analogRead(A0);
  Serial.println(Pot);
  delay(100);

  
}
