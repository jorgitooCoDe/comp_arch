long distancia;//longitud de distancia
long tiempo;

int led1=4;
int led2=5;
int led3=6;
int dely=200;
void setup() {
 Serial.begin(9600);
 pinMode(10, OUTPUT); //SALIDA - TRIG
 pinMode(9, INPUT); // ENTRADA - ECHO 
 pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
}

void loop() {
  

  //TRIG
  digitalWrite(10, LOW);//recibir del pulso del trig
  delayMicroseconds(5);
  digitalWrite(10, HIGH);//envio del pulso del trig
  delayMicroseconds(10);

  
  //ECHO
  tiempo=pulseIn(9, HIGH); //FORMULA PA MEDIR EL PULSO - ENTRADA
  distancia=long(0.017*tiempo);//FORMULA DISTANCIA


    //IMPRIMIR
  Serial.println("La distancia es: ");
  Serial.println(distancia);
  Serial.println("cm");
  delay(500);


 if(distancia>25){
      digitalWrite(led1,HIGH);
      delay(dely);
      digitalWrite(led1,LOW);
      delay(dely);

      digitalWrite(led2,HIGH);
      delay(dely);
      digitalWrite(led2,LOW);
      delay(dely);

      digitalWrite(led3,HIGH);
      delay(dely);
      digitalWrite(led3,LOW);
      delay(dely);
  }else{
    digitalWrite(8,LOW);
    digitalWrite(8,LOW);
    digitalWrite(8,LOW);
    
    }
  
  
}
