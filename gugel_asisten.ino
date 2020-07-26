#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "m83VxP3_dBYSdNF5ihyCBlmzLhBpQTY4";
char ssid[] = "Mauli intan";
char pass[] = "ilhameko";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
