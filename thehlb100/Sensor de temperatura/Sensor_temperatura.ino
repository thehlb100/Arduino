// C++ code

const int pLed_Green = 11;
const int pSensor = 1;
const int pLed_Red = 10;
int Lectura_Sensor;
int Voltaje;

void setup()
{
  pinMode(pLed_Green, OUTPUT);
  pinMode(pLed_Red, OUTPUT);
  Serial.begin(9600);
}

void loop(){
 Lectura_Sensor = analogRead(pSensor);
 Voltaje = 5.0*Lectura_Sensor/1024;
  
  if (Voltaje ==1){
    analogWrite(pLed_Green,HIGH);
    analogWrite(pLed_Red,LOW);
    delay (200);}
  
   
  if (Voltaje == 0){
    analogWrite(pLed_Green,LOW);
	analogWrite(pLed_Red,HIGH);
    delay (200);}
  
 
Serial.print(Voltaje);
 Serial.println('V');
 delay(500);