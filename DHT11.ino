#include <DHT.h>



#define DHT11_PIN 7
DHT dht = DHT(DHT11_PIN, DHT11);

void setup(){
  Serial.begin(9600);
}

void loop(){

  Serial.print("Temperature = ");
  Serial.println(dht.readTemperature());
  Serial.print("Humidity = ");
  Serial.println(dht.readHumidity());
  delay(1000);
}
