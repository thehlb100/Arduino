// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode (8, OUTPUT);
  
  
}

void loop(){

  for (int ronda = 0; ronda <= 3; ronda++){
    delay (1000);
  	digitalWrite (13, HIGH);
  	delay (1000);
  	digitalWrite (13,LOW);
  	delay(2000);
  	digitalWrite(12,HIGH);
  	delay (1000);
  	digitalWrite (12, LOW);
    delay (1000);
  	digitalWrite (8, HIGH);
    delay(2000);
    digitalWrite (8, LOW);
	
	}

	digitalWrite(13, HIGH);
	digitalWrite(12, HIGH);
	digitalWrite(8, HIGH);
	delay(1000);
	digitalWrite(13, LOW);
	digitalWrite(12, LOW);
	digitalWrite(8, LOW);
	delay(2000);
}

