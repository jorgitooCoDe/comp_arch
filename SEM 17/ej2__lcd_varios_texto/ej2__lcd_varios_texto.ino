#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);//pines de arduino


void setup() {
 lcd.begin(16,2);
}

void loop() {
  lcd.print("Bienvenidos");
  delay(2000);

  lcd.setCursor(0,1);//POSICION DEL CARACTER
  lcd.print("Universidad UTP");
  delay(3000);
  
  lcd.clear();//limpiar pantalla
  delay(1500);

  lcd.blink();//blinkear
  delay(2000);
  lcd.noBlink();//apagamos blink

  lcd.print("Electronica!!");
  delay(2000);

  lcd.clear();//limpiar pantalla
  delay(1500);
}
