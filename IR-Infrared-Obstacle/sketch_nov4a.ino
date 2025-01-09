const int sensorPin = 2; // Connect OUT to pin 2
const int ledPin = 13;    // Built-in LED on pin 13

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn LED on when an obstacle is detected
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED off when no obstacle is detected
  }
}
