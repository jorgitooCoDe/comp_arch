void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int LDR = analogRead(A0);
  Serial.println(LDR);
  if(LDR<600){
    Serial.println("AVISO OSCURIDAD");  
    digitalWrite(5,HIGH);
    delay(500);
  }else{
    Serial.println("DETECTANDO LUZ");  
    digitalWrite(5,LOW); 
    delay(500);
  }
  

}
