#define buzzer 9
//DO RE MI FA SOL LA SI
int notas[]={524,588,660,698,785,881,989};

void setup() {
  pinMode(buzzer,OUTPUT);
  
}

void loop() {
  for(int i=0;i<7;i++){
      tone(buzzer,notas[i],1000);
      delay(1000); 
   }
   delay(1000); 
}
