# System Architecture

ESP32 sensor nodes publish water quality data to an MQTT broker.
A Raspberry Pi gateway processes alerts and stores historical readings in InfluxDB.
Grafana provides dashboard visualisation and trend analysis.
