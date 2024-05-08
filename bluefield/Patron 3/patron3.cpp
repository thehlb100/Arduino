const int tempSensor = A0;      // Analog input pin for temperature sensor
const int lowTempSensor = 11;   // Pin for low temperature indicator
const int midTempSensor = 12;   // Pin for medium temperature indicator
const int highTempSensor = 13;  // Pin for high temperature indicator
const int bits = 9600;          // Bitrate


void setup() {
  Serial.begin(bits);
  pinMode(lowTempSensor, OUTPUT);
  pinMode(midTempSensor, OUTPUT);
  pinMode(highTempSensor, OUTPUT);
}

void loop() {
 	int sensedVoltage = analogRead(tempSensor);
	float voltage = sensedVoltage * ( 5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100;
  digitalWrite(lowTempSensor, (temperature <= 0 ? 1 : 0));
  digitalWrite(midTempSensor, (temperature >= 15 && temperature <= 40 ? 1 : 0));
  digitalWrite(highTempSensor, (temperature >=40 ? 1 : 0));
}
