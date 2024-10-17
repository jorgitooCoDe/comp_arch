/*Se trata de tres leds que se
enciendan y apagan de forma
individual en secuencia y termina, el
pulsador permite empezar de nuevo.*/


int pulsador =2;
int led1=5;
int led2=6;
int led3=7;
int tiempo=200;

void setup() {
  pinMode(led1,OUTPUT); 
  pinMode(led2,OUTPUT); 
  pinMode(led3,OUTPUT); 
  pinMode(pulsador, INPUT);
}

void secuencia(){
    
      digitalWrite(led1,HIGH);
      delay(tiempo);
      digitalWrite(led1,LOW);
      delay(tiempo);

      digitalWrite(led2,HIGH);
      delay(tiempo);
      digitalWrite(led2,LOW);
      delay(tiempo);

      digitalWrite(led3,HIGH);
      delay(tiempo);
      digitalWrite(led3,LOW);
      delay(tiempo);
    
  }

void loop() {
  if(digitalRead(pulsador)==HIGH){
      secuencia();
    }
}
