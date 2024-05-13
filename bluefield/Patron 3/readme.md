# Temperature Sensor with Arduino
Senses the temperature of the room and changes the LEDs accordingly.

To conver the raw voltage analog value from the sensor to the actual temperature we use the following formulae:
```
 	int sensedVoltage = analogRead(tempSensor);
	float voltage = sensedVoltage * ( 5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100;
```
![image](https://github.com/thehlb100/Arduino/assets/59333909/2b347cce-1eba-4f2b-9afe-46b02dffb226)

