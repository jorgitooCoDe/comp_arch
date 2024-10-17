/*Avisos luminosos S.A. te ha contratado para que realices
un programa que tiene la característica de recibir datos,
porque la idea es que el aviso de luces se ubique en el
piso 20 del Edificio Bulli y tu lo puedas controlar desde el
piso 1, así que por cada letra que le escribas por teclado a
la Consola serial el programa debe hacer determinada
rutina con tres LEDs, si le escribes:
-Letra A: Encendido los tres LED
-Letra B: Apagado los tres LED
-Letra C: Encendido, apagado de secuencia. Esta rutina
genera una sensación de movimiento .
*/

int LED1=2;
int LED2=3;
int LED3=4;
char leer;
int tiempo=200;

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  leer=Serial.read();

  if(leer=='A'){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH); 
    digitalWrite(LED3, HIGH);    
    Serial.println("ENCENDIDO OK"); 
  }
  if(leer=='B'){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW); 
    digitalWrite(LED3, LOW);    
    Serial.println("APAGADO OK");
    }
  if(leer=='C'){
    digitalWrite(LED1,HIGH);
    delay(tiempo);
    digitalWrite(LED1,LOW);
    delay(tiempo);

    digitalWrite(LED2,HIGH);
    delay(tiempo);
    digitalWrite(LED2,LOW);
    delay(tiempo);

    digitalWrite(LED3,HIGH);
    delay(tiempo);
    digitalWrite(LED3,LOW);
    delay(tiempo);
    Serial.println("SECUENCIA OK");
  }
}
