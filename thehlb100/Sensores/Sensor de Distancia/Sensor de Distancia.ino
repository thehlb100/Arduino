// C++ code
//

const int led_Verde = 13;
const int led_Amarillo = 12;
const int led_Rojo = 8;
const int Trigger = 2;  
const int Echo = 3;
const int Zumbador = 4;

void color_Cerca() { //Definir color distancia cercana
  digitalWrite(led_Verde, LOW);
  digitalWrite(led_Amarillo, LOW);
  digitalWrite(led_Rojo, HIGH);
}
 
void color_Medio(){ //Definir color distancia media
  digitalWrite(led_Verde, LOW);
  digitalWrite(led_Amarillo, HIGH);
  digitalWrite(led_Rojo, LOW);
}
  
void  color_Lejos(){//Definir color distancia lejana
  digitalWrite(led_Verde, HIGH);
  digitalWrite(led_Amarillo, LOW);
  digitalWrite(led_Rojo, LOW);
 }

void zumbador_Encendido(){
  digitalWrite(Zumbador,HIGH);
  delay(100);
}

  void setup(){ //Configuración de pines y serial
  pinMode(led_Verde, OUTPUT);
  pinMode(led_Amarillo, OUTPUT);
  pinMode(led_Rojo, OUTPUT);
  pinMode(Trigger, OUTPUT);
  pinMode(Zumbador, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW);
  Serial.begin(9600);
}

void loop(){
long t;
long d;
digitalWrite(Trigger, HIGH);
delayMicroseconds(10);          
digitalWrite(Trigger, LOW);
t = pulseIn(Echo, HIGH); 
d = t/59;

//Configuración serial
Serial.print(d);
Serial.println();
  
//Configuración funcionamiento leds
if (d <= 200){
    color_Lejos();
  }
if (d <= 100){
    color_Medio();
  }
  
if (d <= 50){
    color_Cerca();
  zumbador_Encendido();
}
  
  else{
    digitalWrite(Zumbador,LOW);
  
  }
      
}