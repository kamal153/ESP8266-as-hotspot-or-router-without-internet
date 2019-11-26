#include<ESP8266WiFi.h>
const char* ssid = "India";
const char* password = "87654321";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(3000);
  Serial.println("ESP as an Access Point mode");
  WiFi.mode(WIFI_AP);
  WiFi.disconnect();
  delay(100);
  Serial.println("Configuring AP ...");
  WiFi.softAP(ssid,password);
  IPAddress myIP=WiFi.softAPIP();
  Serial.println("AP IP address: ");
  Serial.println(myIP);
}

void loop() {
  
}
