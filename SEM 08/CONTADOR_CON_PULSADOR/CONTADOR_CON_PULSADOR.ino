/*Al pulsar realice un contar
*/

int pulsa=2;
int cont=0;
void setup() {
  Serial.begin(9600);
  pinMode(pulsa,INPUT);
}

void loop() {

  int boton = digitalRead(pulsa);
  
  if(boton==LOW){
    Serial.print("Contador: ");
    Serial.println(cont);
    delay(500);
    cont++;
   }
}
