from influxdb_client import InfluxDBClient, Point

client = InfluxDBClient(url='http://localhost:8086', token='token', org='wellplant')
write_api = client.write_api()

def write_reading(tank_id, ph, temperature):
    point = Point('water_quality') \
        .tag('tank_id', tank_id) \
        .field('ph', ph) \
        .field('temperature', temperature)

    write_api.write(bucket='water-monitoring', record=point)
