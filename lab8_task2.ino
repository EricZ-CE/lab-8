#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int LED = 8;

LiquidCrystal_I2C lcd(0x27, 16, 2);
int voltageP = A0;
int voltageN = A1;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(voltageP, INPUT);
  pinMode(voltageN, INPUT);
  digitalWrite(LED, HIGH);
  lcd.init();
  lcd.backlight();
}

void loop() {
  int VoltageMsmt = analogRead(voltageP) - analogRead(voltageN);
  float Vcalc = (5.0/1023) * VoltageMsmt;
  lcd.setCursor(0,0);
  lcd.print("BATT ");
  lcd.print(Vcalc);
  lcd.print(" V");
  delay(500);
}
