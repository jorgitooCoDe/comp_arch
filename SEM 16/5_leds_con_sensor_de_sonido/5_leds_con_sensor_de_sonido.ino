int D0=2;//Sensor
int led1=5;
int led2=6;
int led3=7;
int led4=8;
int led5=9;

int estado=0;

void setup() {
  pinMode(D0,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}

void loop() {
  estado=digitalRead(D0);
  if(estado==1){
    digitalWrite(led1,HIGH);  
    delay(10);
    digitalWrite(led2,HIGH);  
    delay(10);
    digitalWrite(led3,HIGH);  
    delay(10);
    digitalWrite(led4,HIGH);  
    delay(10);
    digitalWrite(led5,HIGH);  
    delay(10);


    digitalWrite(led5,LOW);  
    delay(10);}
    digitalWrite(led4,LOW);  
    delay(10);
    digitalWrite(led3,LOW);  
    delay(10);
    digitalWrite(led2,LOW);  
    delay(10);
    digitalWrite(led1,LOW);  
    delay(10);
  }
