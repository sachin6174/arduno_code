// Define the pin for the buzzer
const int buzzerPin = 8;

void setup() {
  // Initialize the buzzer pin as an output
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Generate a tone at 1000 Hz (1 kHz) for 1 second
  tone(buzzerPin, 1000);
  delay(1000); // Wait for 1 second
  
  // Stop the tone
  noTone(buzzerPin);
  delay(1000); // Wait for 1 second
}
