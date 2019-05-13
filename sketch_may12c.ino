/*
  SoftPWMSet(LED2, 0);
  SoftPWMSetFadeTime(LED2, 100, 4000);
  #include <SoftPWM.h>
  SoftPWMSet(LED2, 255);
  SoftPWMBegin();
*/

#include <SoftPWM.h>

void setup()
{
  SoftPWMBegin();
  Serial.begin(9600);
  int index = 29;
  int interval;
  for (int i = 1; i < 7; i++)
  {
    Serial.print(i);
    Serial.print(',');
    Serial.println(index);
    SoftPWMSet(index, 255);
    interval=i*500;
    SoftPWMSetFadeTime(index, 100, interval);
    index += 2;
  }

  /*
    for (int i = 29; i < 40; i = i + 2)
    {
    SoftPWMSet(i, 0);
    delay(250);
    }
  */

  delay(1000);
  Serial.println();
  for (int i = 29; i < 40; i = i + 2)
  {
    Serial.println(i);
    SoftPWMSet(i, 0);
  }
}
void loop() {}

