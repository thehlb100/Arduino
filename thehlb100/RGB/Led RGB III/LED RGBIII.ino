// C++ code
//Configuración leds
const int pRojo = 9; //Configuración entrada RGB rojo
const int pAzul = 6; //Configuración entrada RGB azul
const int pVerde = 5; //Configuración entrada RGB verde
const int Duracion_Color = 300;


void setup()
{
  pinMode(pRojo, OUTPUT);
  pinMode(pAzul, OUTPUT);
  pinMode(pVerde, OUTPUT);
 
}

void loop()
{ 	const int rojo = random (0,255);
  	const int verde = random (0,255);
  	const int azul = random (0,255);
  	delay(Duracion_Color);
    analogWrite (pRojo, 255-rojo);
    analogWrite (pVerde, 255-verde);
    analogWrite (pAzul, 255-azul);
}