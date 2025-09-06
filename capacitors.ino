const int capPin = 32;  // Analog pin for capacitor

void setup() {
  Serial.begin(115200);  // Start serial communication at 115200 baud
}

void loop() {
  int capValue = analogRead(capPin);  // Read analog value from capacitor pin
  
  Serial.print("Capacitor Voltage Reading: ");
  Serial.println(capValue);           // Print the capacitor voltage value
  
  delay(200);  // Small delay before the next reading
}