// C++ code
#include <LiquidCrystal.h>

const int pLed_Green = 11; // Introduci�n de constante led verde
const int pSensor = 1;  // Introducci�n de constante sensor de temperatura
const int pLed_Red = 10; // Introducci�n de constante led rojo
const int pLed_Yellow = 9; // Introducci�n de constante led amarillo
const int pLed_Orange = 6; // Introducci�n de constante led naranja
const int pLed_Blue = 3;   // Introducci�n de constante led azul
int Lectura_Sensor;
int Grados;
int Voltaje;
const int Tiempo_Retardo= 100; // Introducci�n del tiempo de retardo de encendido y apagado de los led

void setup()
{
  pinMode(pLed_Green, OUTPUT);
  pinMode(pLed_Red, OUTPUT);
  Serial.begin(9600);

}

void loop(){
 Lectura_Sensor = analogRead(pSensor);
 Voltaje = 5.0*Lectura_Sensor/1024;
 Grados = (int(((5.0/1024)*Lectura_Sensor*100)-50));
 
  
  if (Grados>=1){ // Configuraci�n led verde
    analogWrite(pLed_Green,HIGH);
    delay (Tiempo_Retardo);
  }else{
    analogWrite (pLed_Green, LOW);
    delay (	Tiempo_Retardo);}
  
   
  if (Grados >= 30){ // Configuraci�n led amarillo
	analogWrite(pLed_Yellow,HIGH);
    delay (Tiempo_Retardo);
    }else{
    analogWrite (pLed_Yellow, LOW);
    delay (	Tiempo_Retardo);}
  
    
  if (Grados >= 50) { // Configuracion led naranja
	analogWrite(pLed_Orange,HIGH);
    delay (Tiempo_Retardo);
    }else{
    analogWrite (pLed_Orange, LOW);
    delay (	Tiempo_Retardo);}
    
  if (Grados >= 75){ // Configuraci�n led rojo
	analogWrite(pLed_Red,HIGH);
    delay (Tiempo_Retardo);
    }else{
    analogWrite (pLed_Red, LOW);
    delay (	Tiempo_Retardo);}
    
  if (Grados >= 90){ // Configuraci�n led azul
	analogWrite(pLed_Blue,HIGH);
    delay (Tiempo_Retardo);
    }else{
    analogWrite (pLed_Blue, LOW);
    delay (	Tiempo_Retardo);}
  
  
  
 
Serial.print(Grados);
 Serial.println('C');
 delay(500);
}