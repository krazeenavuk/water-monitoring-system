#include <WiFi.h>
#include <PubSubClient.h>

WiFiClient espClient;
PubSubClient client(espClient);

void publishReading(const char* topic, float value){
  char payload[16];
  dtostrf(value,1,2,payload);
  client.publish(topic,payload);
}
