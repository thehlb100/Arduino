// C++ code

const int pLed = 11;
const int pPotenciometro = 1;
int Lectura_Potenciometro;
int Intensidad;

void setup()
{
  pinMode(pLed, OUTPUT);
}

void loop(){
 Lectura_Potenciometro = analogRead(pPotenciometro);
 Intensidad = map(Lectura_Potenciometro,0,1023,0,255);
  analogWrite(pLed,Intensidad);

  
}