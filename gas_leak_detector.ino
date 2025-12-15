/*
-------------------------------------------------------
LPG Gas Leakage Detection System using Arduino UNO
-------------------------------------------------------
Description:
Uses an MQ-5 gas sensor (digital output) to detect the
presence of combustible gases. When gas is detected,
a visual (LED) and audible (buzzer) alert are triggered.
-------------------------------------------------------
*/

// Pin Definitions
const int gasSensorPin = A2;   // MQ-5 digital output
const int ledPin = A1;         // LED (via 220Ω resistor)
const int buzzerPin = A0;      // Buzzer (via resistor)

void setup() {
  pinMode(gasSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Gas Detection System Initialized");
}

void loop() {
  int gasDetected = digitalRead(gasSensorPin); // LOW = gas detected

  if (gasDetected == LOW) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("!! Gas Leak Detected !!");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    Serial.println("Environment Normal");
  }

  delay(800);
}
