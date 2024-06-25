# ESP32 DHT Temperature and Humidity Sensor Project

### Project Overview
The ESP32 DHT Temperature and Humidity Sensor project demonstrates how to interface a DHT11 or DHT22 sensor with an ESP32 microcontroller to measure temperature and humidity. This project is useful for environmental monitoring applications where precise climate data is necessary.

### Components Needed
- **ESP32 Microcontroller**: Controls and processes sensor data.
- **DHT Sensor (DHT11 or DHT22)**: Measures temperature and humidity.
- **Jumper Wires**: Connects the DHT sensor to the ESP32.
- **Breadboard**: Optional, for organizing circuit connections.

### Block Diagram

### Circuit Setup
1. **Connecting the DHT Sensor to ESP32:**
   - **Data Pin (`dhtPin`)**: Connect the data pin of DHT sensor to GPIO 27 on the ESP32.
   - **Power Supply**: Provide suitable power (3.3V or 5V) to the DHT sensor and connect its ground pin to the ESP32 ground.

### Instructions
1. **Setup:**
   - Initialize Serial communication using `Serial.begin(9600)` for debugging.
   - Initialize the DHT sensor using `dht.begin()`.

2. **Operation:**
   - **Reading Temperature and Humidity:**
     - Use `dht.readTemperature()` to obtain temperature in Celsius.
     - Use `dht.readHumidity()` to obtain humidity percentage.
     - Check for read failures using `isnan()` function.

3. **Considerations:**
   - **Sensor Type:** Modify `DHTTYPE` to `DHT22` if using that sensor.
   - **Timing:** Allow a delay between measurements to prevent sensor inaccuracies.
   - **Calibration:** Ensure the sensor is calibrated for accurate readings in specific environments.

### Applications
- **Indoor Climate Monitoring:** Monitor temperature and humidity levels in homes or offices.
- **Greenhouse Control:** Control environmental conditions for optimal plant growth.
- **HVAC Systems:** Adjust heating, ventilation, and air conditioning based on current climate data.

### Useful Links
🌐 [ProjectsLearner - ESP32 DHT Temperature and Humidity Sensor](https://projectslearner.com/learn/esp32-dht-temperature-humidity-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
