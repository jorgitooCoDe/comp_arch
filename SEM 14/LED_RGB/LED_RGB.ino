
int ledrojo=9;
int ledverde=10;
int ledazul=11;


void setup() {
  pinMode(ledrojo,OUTPUT);
  pinMode(ledverde,OUTPUT);
  pinMode(ledazul,OUTPUT);
}

//funcion color
void color(int rojo, int verde, int azul){
  //ESCRITURA PWM(positivo)
  analogWrite(ledrojo,255-rojo);    
  analogWrite(ledverde,255-verde); 
  analogWrite(ledazul,255-azul); 
}

void loop() {
  color(255,0,255);
  delay(1000);
  color(0,255,255);
  delay(1000);
  color(255,255,0);
  delay(1000);
  color(255,255,255);
  delay(1000);
}
