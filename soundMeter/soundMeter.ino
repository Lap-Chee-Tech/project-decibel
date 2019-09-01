#include <Grove_LED_Bar.h>

Grove_LED_Bar bar(9, 8, 1, LED_BAR_10); // Clock pin, Data pin, Orientation

void setup()
{
  Serial.begin(9600);
  // nothing to initialize
  bar.begin();
}

void loop()
{
  int soundReading;
  soundReading = analogRead(0); 
  Serial.println(soundReading,DEC);
  bar.setLevel(soundReading / 19);
  delay(10);
}
