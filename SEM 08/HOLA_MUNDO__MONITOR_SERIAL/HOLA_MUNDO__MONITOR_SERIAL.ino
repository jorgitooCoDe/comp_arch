/*Monitor serial “Hola Mundo”.
*/

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12,HIGH);
  Serial.println("HOLA MUNDO");
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
  

}
