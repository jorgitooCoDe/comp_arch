int pulsa1=2;
int pulsa2=4;
int led=8;
int estado=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pulsa1,INPUT);
  pinMode(pulsa2,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bt1= digitalRead(pulsa1);
  int bt2= digitalRead(pulsa2);

  if(bt1==LOW){
    if(estado==0){
    Serial.println("Llenado de frutas");
    estado=1;
    delay(500);
    }else{
      digitalWrite(led,HIGH);
      Serial.println("Conserva embazada");
      estado=0;
      delay(500);
      }
  }

  if(bt2==LOW){
     Serial.println("Conserva llena");
     delay(1000);}
  
  
}
