// Include the LiquidCrystal library which provides functions to control LCDs
#include <LiquidCrystal.h>

// Initialize the LiquidCrystal library with the pin numbers to which the LCD is connected
// RS pin is connected to Arduino digital pin 12
// E pin is connected to Arduino digital pin 11
// Data pins D4, D5, D6, and D7 are connected to Arduino pins 5, 4, 3, and 2 respectively
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // This function runs once when the Arduino is powered on or reset
  
  // Set up the LCD's number of columns (16) and rows (2)
  lcd.begin(16, 2);
}

void loop() {
  // This function runs repeatedly after the setup() function completes
  
  // Clear any existing content on the LCD screen
  lcd.clear();
  
  // Wait for half a second (500 milliseconds)
  delay(500);

  // Set the cursor position to the beginning (0, 0) of the first line on the LCD
  lcd.setCursor(0, 0);
  
  // Display the message "Hello, World!" on the first line
  lcd.print("Hello, World!");
  
  // Wait for 1 second (1000 milliseconds)
  delay(1000);

  // Set the cursor position to the beginning (0, 1) of the second line on the LCD
  lcd.setCursor(0, 1);
  
  // Display the message "LCD1602 Test!" on the second line
  lcd.print("LCD1602 Test!");
  
  // Wait for another second
  delay(1000);

  // Loop to scroll the content on the LCD to the left 13 times
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    lcd.scrollDisplayLeft();
    
    // Wait for a quarter of a second between each scroll
    delay(250);
  }

  // Loop to scroll the content on the LCD to the right 13 times, effectively returning it to the original position
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    lcd.scrollDisplayRight();
    delay(250);
  }

  // Turn off the display without losing the text content
  lcd.noDisplay();
  
  // Wait for 1 second
  delay(1000);
  
  // Turn the display back on
  lcd.display();

  // Activate the cursor so it's visible as a line on the LCD
  lcd.cursor();
  delay(1000);

  // Make the cursor blink (toggle on and off)
  lcd.blink();
  delay(1000);

  // Turn off the cursor so it's no longer visible
  lcd.noCursor();
  delay(1000);

  // Stop the cursor blinking
  lcd.noBlink();
  delay(1000);
}
