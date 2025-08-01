#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD address might be 0x27 or 0x3F. Adjust if needed.
LiquidCrystal_I2C lcd(0x27, 16, 2); 

const int ledPin = 7;
const int buttonPin = 2;

void setup()
 {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("System Ready");
  delay(1000);
  lcd.clear();
}

void loop()
 {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) 
  {
    delay(50);
    lcd.clear();
    digitalWrite(ledPin, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("visitor outside");

  } 
  else 
  {
    lcd.clear();
    digitalWrite(ledPin, LOW);
    lcd.setCursor(0, 0);
    //lcd.print("");
  }
  lcd.clear();
  delay(100);
 }