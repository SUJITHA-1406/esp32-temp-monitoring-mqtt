#include <WiFi.h>
#include <PubSubClient.h>
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
const char* mqtt_server = "YOUR_PI_IP_ADDRESS";
WiFiClient espClient;
PubSubClient client(espClient);
void setup() {
 Serial.begin(115200);
 WiFi.begin(ssid, password);
 while (WiFi.status() != WL_CONNECTED) {
 delay(1000);
 Serial.println("Connecting to WiFi...");
 }
 Serial.println("Connected to WiFi");
 client.setServer(mqtt_server, 1883);
}
void reconnect() {
while (!client.connected()) {
 if (client.connect("ESP32Client")) {
 Serial.println("Connected to MQTT");
 } else {
 delay(2000);
 }
 }
}
void loop() {
 if (!client.connected()) {
 reconnect();
 }
 client.loop();
 float temperature = random(20, 40); // Simulated temperature
 char tempString[8];
 dtostrf(temperature, 1, 2, tempString);
 client.publish("temperature", tempString);
 Serial.println(tempString);
 delay(5000);
}
