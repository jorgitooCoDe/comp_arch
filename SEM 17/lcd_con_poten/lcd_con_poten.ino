#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);//pines de arduino

void setup() {
  lcd.begin(16,2);//columnas, filas
  lcd.print("Bienvenidos");
}

void loop() {
  // En este no se desarrolla
}
