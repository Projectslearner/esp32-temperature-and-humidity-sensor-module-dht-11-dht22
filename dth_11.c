/*
   Project name: ESP32 DHT Temperature and Humidity Sensor
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-dht-temperature-humidity-sensor
*/

#include <DHT.h>

// Define the type of DHT sensor (DHT11 or DHT22)
#define DHTTYPE DHT11 // Change this to DHT22 if you're using that sensor

// Pin connected to the DHT sensor
const int dhtPin = 27; // GPIO 27 on ESP32

// Initialize DHT sensor object
DHT dht(dhtPin, DHTTYPE);

void setup() {
  Serial.begin(9600); // Initialize serial communication
  dht.begin(); // Initialize DHT sensor
}

void loop() {
  // Wait a few seconds between measurements
  delay(2000);

  // Read temperature as Celsius (default)
  float temperature = dht.readTemperature();

  // Read humidity (%)
  float humidity = dht.readHumidity();

  // Check if any reads failed
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print temperature and humidity values to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}
