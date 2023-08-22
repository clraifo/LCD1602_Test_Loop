/*
Perfectly suitable for ARduino and ARM boards. Just paste into your IDE, compile, and flash it. 

Originally written becasue all three of of my LCD modules couldn't have failed at once. Turns out it was the crappy 
potentiometer used to adjust the backlight; it was way too touchy and would white out the LCD if breathed on too hard.

1. Clears the screen.
2. Writes text to both the first and second line.
3. Scrolls the text.
4. Turns the display on/off.
5. Turns the cursor on/off.
6. Blinks the cursor.

There's also a heavily commented version here in the same repo.

*/

#include <LiquidCrystal.h>

// Define the pins for the LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  // Clear the screen
  lcd.clear();
  delay(500);

  // Print a message to the LCD
  lcd.setCursor(0, 0); // First line
  lcd.print("Hello, World!");
  delay(1000);

  lcd.setCursor(0, 1); // Second line
  lcd.print("LCD1602 Test!");
  delay(1000);

  // Scroll the text
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(250);
  }
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    lcd.scrollDisplayRight();
    delay(250);
  }

  // Turn off the display
  lcd.noDisplay();
  delay(1000);
  lcd.display();

  // Turn on the cursor
  lcd.cursor();
  delay(1000);

  // Blink the cursor
  lcd.blink();
  delay(1000);

  // Turn off the cursor
  lcd.noCursor();
  delay(1000);

  // Turn off the blinking cursor
  lcd.noBlink();
  delay(1000);
}
