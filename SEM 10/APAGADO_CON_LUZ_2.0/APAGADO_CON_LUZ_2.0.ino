void setup() {
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int LDR = analogRead(A0);
  Serial.println(LDR);
  delay(500);
  if(LDR<950){
    digitalWrite(5,HIGH);
  }else{
    digitalWrite(5,LOW);
  }
}
