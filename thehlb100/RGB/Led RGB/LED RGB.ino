// C++ code
//
const int pRojo = 9; //Configuración entrada RGB rojo
const int pAzul = 6; //Configuración entrada RGB azul
const int pVerde = 5; //Configuración entrada RGB verde
const int Retraso = 1000; //Configuración delay

void Rojo(){ //Configuracion color rojo
  digitalWrite(pRojo,HIGH);
  digitalWrite(pAzul,LOW);
  digitalWrite(pVerde,LOW);
   delay (Retraso);}

void Verde(){ //Configuracion color verde
  digitalWrite(pRojo,LOW);
  digitalWrite(pAzul,LOW);
  digitalWrite(pVerde,HIGH);
  delay (Retraso);}
 
void Azul(){ //Configuracion color azul
  digitalWrite(pRojo,LOW);
  digitalWrite(pAzul,HIGH);
  digitalWrite (pVerde,LOW);
  delay (Retraso);}

void Blanco(){ //Configuracion color blanco
  digitalWrite(pRojo,HIGH);
  digitalWrite(pAzul,HIGH);
  digitalWrite(pVerde,HIGH);
  delay (Retraso);
}
  
void setup()
{
  pinMode(pRojo, OUTPUT);
  pinMode(pAzul, OUTPUT);
  pinMode(pVerde, OUTPUT);
}

void loop() //Configuracion patron de colores
{  
 Rojo();
 Verde();
 Azul();
 Blanco();
}