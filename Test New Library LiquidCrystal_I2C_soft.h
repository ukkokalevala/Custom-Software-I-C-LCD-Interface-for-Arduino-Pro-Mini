#include <SoftwareWire.h>
#include "LiquidCrystal_I2C_soft.h"

SoftwareWire myWire(6, 7);      // SDA, SCL
LiquidCrystal_I2C lcd(&myWire, 0x27);

int counter = 0;

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Hello World");

  lcd.setCursor(0, 1);
  lcd.print("Software I2C");

  delay(3000);

  lcd.clear();
}

void loop() {

  lcd.home();
  lcd.print("Count:");
  lcd.print(counter++);

  delay(1000);

  lcd.scrollDisplayLeft();
  delay(200);

  lcd.scrollDisplayRight();
  delay(200);

  if (counter % 10 == 0) {
    lcd.noBacklight();
    delay(500);
    lcd.backlight();
  }
}
