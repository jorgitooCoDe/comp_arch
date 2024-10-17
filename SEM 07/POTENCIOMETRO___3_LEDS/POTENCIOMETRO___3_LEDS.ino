//apagar / encender con potenciómetro.

void setup() {
 pinMode(5,OUTPUT);//led 1
 pinMode(8,OUTPUT);//led 2
 pinMode(12,OUTPUT);//led 3
 pinMode(A0,INPUT);//potenciometro
 
}

void loop() {      
  analogWrite(5,(analogRead(A0)/4));
  analogWrite(8,(analogRead(A0)/4));
  analogWrite(12,(analogRead(A0)/4));
  
}
