#define WAIT_TIME 500
#define NUM_PINS (sizeof(pines) / sizeof(pines[0]))
const int pines[] = {13, 12, 11, 10, 9};

volatile unsigned char *port = portOutputRegister(DIGITAL_PIN_TO_PORT(pines[0])); // Pointer to port for direct writes

void setup() {
  *port |= (1 << pines[0]) | (1 << pines[1]) | (1 << pines[2]) | (1 << pines[3]) | (1 << pines[4]); // Set all pins as output (direct port manipulation)
}

void loop() {
  // Forward loop (optimized with bit manipulation)
  for (int i = 0; i < NUM_PINS; i++) {
    *port ^= (1 << pines[i]); // Toggle current LED
    delayMicroseconds(WAIT_TIME * 1000); // Use delayMicroseconds for shorter delays
  }

  // Reverse loop (optimized with bit manipulation)
  for (int i = NUM_PINS - 1; i >= 0; i--) {
    *port ^= (1 << pines[i]); // Toggle current LED
    delayMicroseconds(WAIT_TIME * 1000);
  }

  // All LEDs on (direct port write)
  *port |= 0b00011111; // Set all bits for all LEDs in the port
  delayMicroseconds(WAIT_TIME * 1000);

  // All LEDs off (direct port write)
  *port &= ~0b00011111; // Clear all bits for all LEDs in the port
  delayMicroseconds(WAIT_TIME * 1000);
}
