
const int LDR_PIN = 34;
const int LED_PIN = 23;
const int LIGHT_THRESHOLD = 2000;

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int lightValue = analogRead(LDR_PIN);

  Serial.print("Light value: ");
  Serial.println(lightValue);

  if (lightValue > LIGHT_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);  // Dark: light ON
  } else {
    digitalWrite(LED_PIN, LOW);   // Bright: light OFF
  }

  delay(500);
}
