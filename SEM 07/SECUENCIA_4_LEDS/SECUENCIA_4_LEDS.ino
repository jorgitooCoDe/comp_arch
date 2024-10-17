//Mostrará la salida de encendido de los LEDs en secuencia, al
//presionar el pulsador se detiene la acción.


int cadenaleds[]={5,6,7,8};
int pulsador=2;
int tiempo=200;
int n=0;

void setup() {
  // put your setup code here, to run once:
  for(n=0;n<4;n++){
      pinMode(cadenaleds[n],OUTPUT); 
      
    }
  pinMode(pulsador,INPUT);
}

void secuencia(){
   for(n=0;n<4;n++){
      digitalWrite(cadenaleds[n],HIGH);
      delay (tiempo);
      digitalWrite(cadenaleds[n],LOW);
      delay (tiempo);
    }
  
  }

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(pulsador==HIGH)){
    
    secuencia();
    
    }

}
