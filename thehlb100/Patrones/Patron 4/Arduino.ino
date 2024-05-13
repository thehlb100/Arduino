// C++ code
//
const int delay_led = 1000;
void setup()
{
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode (8, OUTPUT);
  
  
  
}

void loop(){
  for (int ronda = 0; ronda <= 2; ronda++){
    delay (delay_led);
  	digitalWrite (13, HIGH);
  	delay (delay_led);
  	digitalWrite(12,HIGH);
  	delay (delay_led);
  	digitalWrite (8, HIGH);
    delay(delay_led);
  	digitalWrite (13, LOW);
  	delay (delay_led);
  	digitalWrite(12,LOW);
  	delay (delay_led);
  	digitalWrite (8, LOW);
    delay(delay_led);
	}

	digitalWrite(13, HIGH);
	digitalWrite(12, HIGH);
	digitalWrite(8, HIGH);
	delay(delay_led);
	digitalWrite(13, LOW);
	digitalWrite(12, LOW);
	digitalWrite(8, LOW);
	delay(delay_led);
}