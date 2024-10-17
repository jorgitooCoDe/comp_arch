/*Programa que enciende
proporcionalmente un LED
cuando llega a su máximo punto
de brillo comienza a apagarse
proporcionalmente.
*/
int led=3;
int brillo=0;
int variacion=5;//incremento de 5 en 5

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  //Escritura analogica en el led valor del brillo
  analogWrite(led,brillo);
  //incremento de variacion brillo 5 en 5
  brillo = brillo+variacion;

  if(brillo==0||brillo==255)
    variacion = -variacion;
  delay(30);

}
