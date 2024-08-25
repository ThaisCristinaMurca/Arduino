/**************************
  ESP32 with DHT11 SENSOR
  Basic configuration
 **************************/
 
#include "DHT.h"
#define DHT11PIN 22

DHT dht(DHT11PIN, DHT11);
void setup()
{ 
  Serial.begin(115200);

  dht.begin();
}

void loop()
{
  float umi = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.print("Temperatura: ");
  Serial.print(temp);
  Serial.print("ºC ");
  Serial.print("Umidade: ");
  Serial.println(umi);
  delay(1000);
}
