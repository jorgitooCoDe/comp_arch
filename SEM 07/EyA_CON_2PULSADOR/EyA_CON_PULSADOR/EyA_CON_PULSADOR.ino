/*Se trata de encender (pulsador 1)
y apagar (pulsador 2) al LED.
*/

const int boton_A=2;
const int boton_B=4;
const int LED=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(boton_A, INPUT);
  pinMode(boton_B, INPUT);
}

void loop() {
  if(digitalRead(boton_A)==LOW){
      digitalWrite(LED, HIGH);
    }
  if(digitalRead(boton_B)==LOW){
      digitalWrite(LED, LOW);
    }
}
