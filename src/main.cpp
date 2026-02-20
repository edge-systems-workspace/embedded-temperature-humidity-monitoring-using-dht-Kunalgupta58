#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author Kunal Gupta
 * @date 2026-02-20
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 */


#include <DHT.h>


#define DHTPIN 2

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


void setup() {

    // TODO 4: Initialize Serial communication
    Serial.begin(9600);

    // TODO 5: Initialize the DHT sensor
    dht.begin();

    // TODO 6: Print system initialization message
    Serial.println("======================================");
    Serial.println("  DHT11 Temperature & Humidity System");
    Serial.println("  System Initialized Successfully");
    Serial.println("======================================");
}

void loop() {
       // TODO 7: Read humidity
    float humidity = dht.readHumidity();

    // TODO 8: Read temperature (Celsius)
    float temperature = dht.readTemperature();

    // TODO 9: Check if reading failed
    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("ERROR: Failed to read from DHT sensor!");
        return;
    }
   
}
