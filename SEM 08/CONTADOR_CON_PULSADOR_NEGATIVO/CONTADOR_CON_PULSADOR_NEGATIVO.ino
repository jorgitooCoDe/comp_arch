int cont=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Contador: ");
  Serial.println(cont);
  cont--;
  delay(1000);
}
