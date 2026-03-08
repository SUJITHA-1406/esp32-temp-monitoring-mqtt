Sujitha B 
IoT Temperature Monitoring using ESP32 and Raspberry Pi (MQTT)


 Project Overview
This project demonstrates IoT-based temperature monitoring using ESP32 and Raspberry Pi with the MQTT communication protocol.

ESP32 acts as a publisher that sends simulated temperature data. Raspberry Pi runs the Mosquitto MQTT broker and also acts as a subscriber using Python.

 Objective
To establish wireless MQTT communication between ESP32 and Raspberry Pi and monitor temperature data.

 Hardware Used
- ESP32 Development Board
- Raspberry Pi
- USB Cable
- Laptop
- WiFi Connection

Software Used
- Arduino IDE
- Mosquitto MQTT Broker
- Python 3
- Paho MQTT Library

Working
1. ESP32 publishes temperature data.
2. MQTT broker running on Raspberry Pi receives the data.
3. Python subscriber reads the data.
4. Temperature is displayed on Raspberry Pi terminal.

 Output
The system successfully demonstrated wireless communication between ESP32 and Raspberry Pi using MQTT protocol.

## Web Access (ngrok)
https://semiyearly-anglea-unburdensome.ngrok-free.dev/
