
// Define debug macros
#define DEBUG 1 // Set to 0 to disable debug output

#if DEBUG
  #define DEBUG_PRINT(x) Serial.print(x)
  #define DEBUG_PRINTLN(x) Serial.println(x)
  #define DEBUG_BEGIN(x) Serial.begin(x)
#else
  #define DEBUG_PRINT(x)
  #define DEBUG_PRINTLN(x)
  #define DEBUG_BEGIN(x)
#endif

const int ledPin = 13; // Pin connected to the LED
int ledState = LOW;    // Initial state of the LED

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
  DEBUG_BEGIN(9600);        // Initialize Serial at 9600 baud rate
  DEBUG_PRINTLN("Setup complete");
}

void loop() {
  // Toggle the LED state
  ledState = !ledState;
  digitalWrite(ledPin, ledState);  // Set the LED to the new state

  // Output the LED state to the Serial Monitor
  DEBUG_PRINT("LED is ");
  if (ledState == HIGH) {
    DEBUG_PRINTLN("ON");
  } else {
    DEBUG_PRINTLN("OFF");
  }

  delay(1000); // Wait for 1 second
}
