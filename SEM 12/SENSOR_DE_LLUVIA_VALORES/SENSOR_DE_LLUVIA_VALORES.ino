/*Modulo sensor FC-37 YL-83*/
const int sensorPin=9;//DO

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int valor=0;
  valor=digitalRead(sensorPin);
  if(valor==LOW){
    Serial.println("TA LLOVIENDO");
  }
  delay(1000);
  


  
}
