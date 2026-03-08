Install pip and paho-mqtt:
sudo apt install python3-pip -y
pip3 install paho-mqtt
Create subscriber file:
nano subscriber.py
import paho.mqtt.client as mqtt
def on_connect(client, userdata, flags, rc):
 print("Connected with result code", rc)
 client.subscribe("temperature")
def on_message(client, userdata, msg):
 print("Temperature Received:", msg.payload.decode())
client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.connect("localhost", 1883, 60)
client.loop_forever()
Run the subscriber:
python3 subscriber.py