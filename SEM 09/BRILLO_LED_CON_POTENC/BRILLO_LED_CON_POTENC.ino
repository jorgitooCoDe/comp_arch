/*La Sra. María quiere tener unas
luces de intensidad cambiantes en
la sala de tu casa, quiere poca luz
para los momentos en que la
familia comparte para mantener la
armonía, pero requiere bastante luz
cuando realiza sus tejidos, ella
quiere tener el control de la
intensidad de luz mediante un
potenciómetro y que la bombilla
LED se ilumine de acuerdo a lo
graduado por ella.
*/
int brillo=0;
int variacion=5;
int led=6;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  analogWrite(led,(analogRead(A0)/4));
  delay(100);
  
}
