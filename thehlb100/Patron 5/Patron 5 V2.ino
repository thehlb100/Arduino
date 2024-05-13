// C++ code

const int pLed = 11;
const int pPotenciometro = 1;
int Lectura_Potenciometro;
int Voltaje;

void setup()
{
  pinMode(pLed, OUTPUT);
  Serial.begin(9600);
}

void loop(){
 Lectura_Potenciometro = analogRead(pPotenciometro);
 Voltaje = 5.0*Lectura_Potenciometro/1024;
  analogWrite(pLed,Voltaje);
Serial.print(Voltaje);
 Serial.println('V');
 delay(500);
  
}