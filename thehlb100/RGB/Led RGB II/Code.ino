// C++ code
//Configuración leds
const int pRojo = 9; //Configuración entrada RGB rojo
const int pAzul = 6; //Configuración entrada RGB azul
const int pVerde = 5; //Configuración entrada RGB verde

//Configuración potenciometros
const int pPotenciometro_1 = A1;
const int pPotenciometro_2 = A2;
const int pPotenciometro_3 = A3;
int valorsensor1 = 0;
int valorsensor2 = 0;
int valorsensor3 = 0;
float divisionR;
float divisionV;
float divisionA;


void color(int rojo, int verde, int azul){
    analogWrite (pRojo, 255-rojo);
    analogWrite (pVerde, 255-verde);
    analogWrite (pAzul, 255-azul);}
   


  
void setup()
{
  pinMode(pRojo, OUTPUT);
  pinMode(pAzul, OUTPUT);
  pinMode(pVerde, OUTPUT);
  pinMode(pPotenciometro_1, INPUT);
  pinMode(pPotenciometro_2, INPUT);
  pinMode(pPotenciometro_3, INPUT);
}

void loop()
{ 
 float Constante =(float)255/1023;
 valorsensor1 = analogRead(pPotenciometro_1);
 valorsensor2 = analogRead(pPotenciometro_2);
 valorsensor3 = analogRead(pPotenciometro_3);
  
 divisionR = Constante*valorsensor1;
 divisionV = Constante*valorsensor2;
 divisionA = Constante*valorsensor3;
  
 color(divisionR,divisionV,divisionA);
  
}