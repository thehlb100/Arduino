// C++ code
//
void setup() {
	pinMode(13, OUTPUT);
  	pinMode(12, OUTPUT);
  	pinMode(8, OUTPUT);
  	pinMode(7, OUTPUT);
  	pinMode(4, OUTPUT);
  
  
}
void loop()
{
  	delay (1000);
  
  	digitalWrite(13,HIGH);
  	delay (1000);
  
   	digitalWrite(12,HIGH);
  	delay (1000);
  
 
  	digitalWrite( 8,HIGH);
  	delay (1000);
  	
 
  	digitalWrite( 7,HIGH);
  	delay (1000);
  
  
  	digitalWrite( 4,HIGH);
  	delay (1000);
  
  	digitalWrite(4,LOW);
 
  	delay (1000);
 	
  	digitalWrite(7, LOW);
  	delay (1000);
  	digitalWrite(8, LOW);
   	delay (1000);
  	digitalWrite(12, LOW);
  	delay(1000);
    digitalWrite(13, LOW);
  	delay(1000);
 
}
