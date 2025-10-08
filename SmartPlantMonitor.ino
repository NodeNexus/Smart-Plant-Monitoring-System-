#include <WiFi.h>
#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11
#define SOIL_PIN 34
#define RELAY_PIN 25

DHT dht(DHTPIN, DHTTYPE);

const char* ssid = "YourWiFi";
const char* password = "YourPassword";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) delay(500);
  Serial.println("WiFi Connected!");
  
  dht.begin();
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  int soil = analogRead(SOIL_PIN);

  Serial.printf("Temp: %.1f°C, Hum: %.1f%%, Soil: %d\n", temp, hum, soil);

  if (soil < 2000) {
    digitalWrite(RELAY_PIN, HIGH);
    Serial.println("Pump ON");
  } else {
    digitalWrite(RELAY_PIN, LOW);
    Serial.println("Pump OFF");
  }

  delay(5000);
}
