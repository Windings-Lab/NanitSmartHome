#include <Arduino.h>
#include <NanitLib.h>

byte ledPin = P3_2;

void setup()
{
	Nanit_Base_Start();
}

void loop()
{
	GET_NANIT.BuildinRGB(random(255), random(255), random(255));
	delay(1000);
}
