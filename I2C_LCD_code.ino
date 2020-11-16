#include<Wire.h>// Library for I2C communication
#include <LiquidCrystal_I2C.h>// Library for LCD 

LiquidCrystal_I2C lcd(0x27,16,2);// if use 16x2 LCD this line is allright, but you use 20x4 LCD you must overwrite on ...(0x27,20,4)

// Wiring: SDA pin is connected to A4 and SCL pin to A5

void setup()
{
  lcd.init();
  lcd.backlight();
}

void loop()
{
  lcd.setCursor(0, 0);// Set the cursor on the first column and first row.
  lcd.print("Hello");// print own text
}
