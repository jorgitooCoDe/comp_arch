/*Programa que enciende un LED de
manera de acuerdo a la cantidad de luz
que incida en una fotocelda, con un valor
menor de 500.
pins.digital_write_pin(DigitalPin.P0,1)
*/

void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int LDR = analogRead(A0);
  Serial.println(LDR);
    delay(500);
  if(LDR<500){
    digitalWrite(3,HIGH);
  }

  if(LDR>500){
    digitalWrite(3,LOW);
  }
}


































//Ejercicio de microbit, EyA con 3 leds
