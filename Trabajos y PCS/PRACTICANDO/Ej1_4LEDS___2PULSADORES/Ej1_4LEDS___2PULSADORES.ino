/*Carlos ha contratado un Dj para colocar en casa 4 luces de diferentes colores, 
para ello él tiene a disposicion un boton 1 que al oprimir se E/A las luces con una rutina de 
tiempos diferente cada una. Se utiliza otro boton 2. para E/A las luces todas al mismo tiempo.*/

int LED1=10;
int LED2=11;
int LED3=12;
int LED4=13;
int puls1=2;
int puls2=4;
int tiempo=200;
int estado=0;
int estadosec=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(puls1, INPUT);
  pinMode(puls2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

    int boton1= digitalRead(puls1);
    int boton2= digitalRead(puls2);

    if(boton1==LOW && estadosec==0){
      digitalWrite(LED1,HIGH);
      estadosec=1;
    }else if(boton1==LOW && estadosec==1){
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,HIGH);
      estadosec=2;
    } else if(boton1==LOW && estadosec==2){
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,HIGH);
      estadosec=3;
    } else if(boton1==LOW && estadosec==3){
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,HIGH);
      estadosec=0;
    }


    
    if(boton2==LOW){
    if(estado==0){
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
      estado=1;
    }else{
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,LOW);
      estado=0;
    }
    }
}
