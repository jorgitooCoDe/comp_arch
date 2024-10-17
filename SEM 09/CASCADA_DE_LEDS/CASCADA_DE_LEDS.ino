/*Volumen de Leds con potenciómetro (cascada).
*/

int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(A0,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(A0)>0 && analogRead(A0)<304){
    digitalWrite(led1,HIGH);
    delay(10);
    digitalWrite(led1,LOW);
  }
  if(analogRead(A0)>304 && analogRead(A0)<504){
    digitalWrite(led2,HIGH);
    delay(10);
    digitalWrite(led2,LOW);
  }
  if(analogRead(A0)>504 && analogRead(A0)<704){
    digitalWrite(led3,HIGH);
    delay(10);
    digitalWrite(led3,LOW);
  }
  if(analogRead(A0)>704 && analogRead(A0)<904){
    digitalWrite(led4,HIGH);
    delay(10);
    digitalWrite(led4,LOW);
  }
  if(analogRead(A0)>904 && analogRead(A0)<1024){
    digitalWrite(led5,HIGH);
    delay(10);
    digitalWrite(led5,LOW);
  }

  
}
