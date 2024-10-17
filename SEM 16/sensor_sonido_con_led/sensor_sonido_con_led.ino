int sensor=2;
int led=3;
int valor;
int estado;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  valor= digitalRead(sensor);
  
  if(valor==HIGH){
    estado=digitalRead(led);
    digitalWrite(led,!estado);//0-1 (apago-encendido)
    delay(500);
  }

}
