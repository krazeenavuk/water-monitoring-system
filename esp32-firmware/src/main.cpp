#include <WiFi.h>
#include <PubSubClient.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  // TODO: Read pH, DO, EC, ORP and temperature sensors
  // TODO: Publish values to MQTT broker
  delay(5000);
}
