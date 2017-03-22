/****************************************************************
 * MicroOLED_Clock.ino
 * Analog Clock demo using SFE_MicroOLED Library
 * Jim Lindblom @ SparkFun Electronics
 * Original Creation Date: October 27, 2014
 * 
 * This sketch uses the MicroOLED library to draw a 3-D projected
 * cube, and rotate it along all three axes.
 * 
 * Development environment specifics:
 *  Arduino 1.0.5
 *  Arduino Pro 3.3V
 *  Micro OLED Breakout v1.0
 * 
 * This code is beerware; if you see me (or any other SparkFun employee) at the
 * local, and you've found our code helpful, please buy us a round!
 * 
 * Distributed as-is; no warranty is given.
 ***************************************************************/
#include <TinyWireM.h>  // Include Wire if you're using I2C
  // Include SPI if you're using SPI
#include <SFE_MicroOLED.h>  // Include the SFE_MicroOLED library

//////////////////////////
// MicroOLED Definition //
//////////////////////////
#define PIN_RESET 9  // Connect RST to pin 9 (SPI & I2C)
#define PIN_DC    8  // Connect DC to pin 8 (SPI only)
#define PIN_CS    10 // Connect CS to pin 10 (SPI only)
#define DC_JUMPER 0  // DC jumper setting(I2C only)

//////////////////////////////////
// MicroOLED Object Declaration //
//////////////////////////////////
//MicroOLED oled(PIN_RESET, PIN_DC, PIN_CS);  // SPI Example
MicroOLED oled(PIN_RESET, DC_JUMPER);  // I2C Example

// Use these variables to set the initial time
void initClockVariables()
{
  // Calculate constants for clock face component positions:
  oled.setFontType(0);
}

void setup()
{
  oled.begin();     // Initialize the OLED
  oled.clear(PAGE); // Clear the display's internal memory
  oled.clear(ALL);  // Clear the library's display buffer
  oled.display();   // Display what's in the buffer (splashscreen)
  oled.clear(ALL);
  oled.display(); // display the memory buffer drawn
}

void loop()
{
}

