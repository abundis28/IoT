#include <TM1637Display.h>
#include <TimeLib.h>

///////////////////////////////
//  Constant definition

int CLK = 2;
int DIO = 3;
int cont = 0;

TM1637Display display(CLK, DIO);

///////////////////////////////
//  Code

void setup() {
  // put your setup code here, to run once:
  display.setBrightness(5);
  //Set time in (hour, minute, seconds, day, month, year) format.
  setTime(20, 21, 0, 19, 1, 2021);
}

void loop() {
  // Second parameter of DecEx version of showNumber activates the
  // two points in between of hours and minutes.
  display.showNumberDecEx(hour(), 0b01000000, false, 2, 0);
  display.showNumberDec(minute(), false, 2, 2);
  delay(60000);
}
