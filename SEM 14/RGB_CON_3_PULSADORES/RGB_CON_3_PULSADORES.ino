int pulsador_rojo=9;
int pulsador_verde=10;
int pulsador_azul=11;

int rojopin=3;
int verdepin=5;
int azulpin=6;

int rojo=0;
int verde=0;
int azul=0;

void setup() {
  pinMode(rojopin,OUTPUT);
  pinMode(verdepin,OUTPUT);
  pinMode(azulpin,OUTPUT);

  pinMode(pulsador_rojo,INPUT);
  pinMode(pulsador_verde,INPUT);
  pinMode(pulsador_azul,INPUT);
}

void color(int rojo, int verde, int azul){
  //ESCRITURA PWM(positivo)
  analogWrite(rojopin,255-rojo);    
  analogWrite(verdepin,255-verde); 
  analogWrite(azulpin,255-azul); 
}

void loop() {
  //PULSADOR ROJO
  if(digitalRead(pulsador_rojo)==HIGH){
    color(255,0,255);
    delay(10);
  }

  //PULSADOR VERDE  
  if(digitalRead(pulsador_verde)==HIGH){
    color(0,0,255);
    delay(10);
  }
  
  //PULSADOR AZUL
  if(digitalRead(pulsador_azul)==HIGH){
    color(175,175,175);
    delay(10);
  }

}
