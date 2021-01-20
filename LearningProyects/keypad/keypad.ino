#include <Keypad.h>

///////////////////////////////
//  Description

/* Code that shows the pressed key. '#' is space and '*' is new line. */

///////////////////////////////
//  Hardware used

/*  Arduino Uno
 *  Jumpers
 *  4x4 matrix keyad
 */

///////////////////////////////
//  Definitions
const byte numRows = 4; // number of rows in keypad
const byte numCols = 4; // number of columns in keypad

char keymap[numRows][numCols] =
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'},
};

byte rowPins[numRows] = {9, 8, 7, 6}; // Pins to which the rows are connected
byte colPins[numCols] = {5, 4, 3, 2}; // Pins to which the columns are connected

Keypad pad = Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

///////////////////////////////
//  Code

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char pressedKey = pad.getKey();
  if(pressedKey == '*') Serial.println();
  else if(pressedKey == '#') Serial.print(' ');
  else Serial.print(pressedKey);
}
