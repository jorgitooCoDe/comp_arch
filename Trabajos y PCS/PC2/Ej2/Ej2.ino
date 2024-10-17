int LED1=5;
int LED2=6;
int LED3=7;
int puls1=2;
int puls2=4;
int tiempo=200;
int n=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(puls1, INPUT);
  pinMode(puls2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bt1= digitalRead(puls1);
  int bt2= digitalRead(puls2);

  if(bt1==HIGH){
    Serial.println("Luces listas");
    for(n=0;n<20;n++){
    digitalWrite(LED1,HIGH);
    delay(10);
    digitalWrite(LED1,LOW);
    delay(10);
    digitalWrite(LED2,HIGH);
    delay(10);
    digitalWrite(LED2,LOW);
    delay(10);
    digitalWrite(LED3,HIGH);
    delay(10);
    digitalWrite(LED3,LOW);
    delay(10);
    }
  }
  if(bt2==HIGH){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    Serial.println("Luces apagadas");
    delay(tiempo);
    }
  
}
