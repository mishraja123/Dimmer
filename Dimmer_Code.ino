#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define triacPulse 2

char auth[] = "mhDHPpJYZv0N4za8e1NOv2XhoRUH1Z08";
char ssid[] = "tecno";
char pass[] = "kingmishra";

BLYNK_WRITE(V1)
{
  int dimming = param.asInt();
  if (dimming == 0)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(00);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 1)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(50);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 2)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(100);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 3)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(150);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 4)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(200);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 5)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(250);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 6)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(300);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 7)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(350);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 8)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(400);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 9)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(450);
    virtualWrite(triacPulse, LOW);
  }

  if (dimming == 10)
  {
    virtualWrite(triacPulse, HIGH);
    delayMicroseconds(500);
    virtualWrite(triacPulse, LOW);
  }
  Serial.println(digitalRead(triacPulse));
}
void setup() 
{
  Serial.begin(115200);
  pinMode(triacPulse, OUTPUT);
  virtualWrite(triacPulse, LOW);

  Blynk.begin(auth, ssid, pass);
}

void loop() 
{
  Blynk.run();
  
}
