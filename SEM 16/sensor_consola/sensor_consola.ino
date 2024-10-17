int sensor=A0;
int led=3;
int valor;
int estado;


void setup() {
  Serial.begin(9600);
}

void loop() {
  valor=analogRead(sensor);
  Serial.println(valor);
  delay(500);
}
