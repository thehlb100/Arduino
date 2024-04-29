const int leds[] = { 13, 12, 11 };
const int pin_numbers = sizeof(leds) / sizeof(leds[0]);
const int interval = 1000;
const int sequence_interval = 2000;
const int total_rounds = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void led_blink(int led) {
  digitalWrite(led, HIGH);
  delay(interval);
  digitalWrite(led, LOW);
  delay(sequence_interval);
}

void general_state(int state) {
  for (int n = 0; n < pin_numbers; n++) {
    digitalWrite(leds[n], state);
  }
}

void loop() {
  /**
  * RUNS THROUGH THE SEQUENCE IN 'TOTAL_ROUNDS' TIMES
  */

  for ( int rounds = 0; rounds <= total_rounds; rounds++) {

    // Loops through the pins and blinks them.
    for (int n = 0; n < pin_numbers; n++) {
      led_blink(leds[n]);
    }
  };

  general_state(1);
  delay(sequence_interval);
  general_state(0);
  delay(interval);
}
