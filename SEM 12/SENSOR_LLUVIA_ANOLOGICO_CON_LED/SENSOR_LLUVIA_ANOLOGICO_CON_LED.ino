#define ledPin 6
#define sensorPin A0

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  digitalWrite(ledPin,LOW);//para que el led este apagado al iniciar
}

int readSensor(){
  int sensorValor=analogRead(sensorPin);
  int salidaValor=map(sensorValor,0,1023,255,0);
  analogWrite(ledPin,salidaValor);//PWM
  return salidaValor;
}


void loop() {
  Serial.println("SALIDA ANALÓGICA: ");
  Serial.println(readSensor());
  delay(500);

   
}
