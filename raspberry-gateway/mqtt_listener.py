import paho.mqtt.client as mqtt

BROKER='localhost'
TOPIC='watermonitor/#'

def on_message(client, userdata, msg):
    print(msg.topic, msg.payload.decode())

client = mqtt.Client()
client.on_message = on_message
client.connect(BROKER,1883,60)
client.subscribe(TOPIC)
client.loop_forever()
