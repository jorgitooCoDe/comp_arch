/*Apagar / encender con potenciómetro.
*/

int led1=8;
int led2=9;
int led3=10;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  analogWrite(5,(analogRead(A0)/4));
  analogWrite(8,(analogRead(A0)/4));
  analogWrite(12,(analogRead(A0)/4));
  delay(10);
 }
