/*Una empresa de gaseosas tiene un sistema con dos sensores, uno de ellos indica si la botella se ha llenado con el líquido y el otro sensor indica 
 * si la botella ya tiene la tapa. Para este caso simularemos los dos sensores por medio de dos pulsadores.

La rutina se describe de esta manera: si la botella se llena de manera adecuada (se debe activar S1 y mostrar por consola "Gaseosa llena") 
luego de ello si tiene la tapa colocada (se debe activar S2 y mostrar por consola "Gaseosa tapada"), al finalizar el proceso se debe encender 
un LED que indica que el proceso terminó bien y además se debe mostrar un mensaje por la consola "Gaseosa bien empacada". Recuerda que primero
se debe activar S1 y luego S2 para que el proceso sea válido*/


int pulsa1=2;
int pulsa2=4;
int led=8;

void setup() {
  Serial.begin(9600);
  pinMode(pulsa1, INPUT);
  pinMode(pulsa2, INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  int boton1= digitalRead(pulsa1);
  int boton2= digitalRead(pulsa2);

  if(boton1==LOW){
      Serial.println("Gaseosa llena");
      delay(1000);
     }
  if(boton2==LOW){
      Serial.println("Gaseosa tapada");
      delay(1000);
      digitalWrite(led,HIGH);
      delay(1200);
      Serial.println("Gaseosa bien empacada");
  }

}
