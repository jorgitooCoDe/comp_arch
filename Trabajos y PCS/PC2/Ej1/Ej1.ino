int pulsa=2;
int cadenaleds[]={8,9,10};
int tiempo=200;
int n =0;

void setup() {
  // put your setup code here, to run once:
  for(n=0;n<3;n++){
      pinMode(cadenaleds[n],OUTPUT); 
    }
  pinMode(pulsa, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(pulsa)==LOW){
    for(n=0;n<3;n++){
      digitalWrite(cadenaleds[n],HIGH);
      delay (tiempo);
      digitalWrite(cadenaleds[n],LOW);
      delay (tiempo);
    }
   }


}
