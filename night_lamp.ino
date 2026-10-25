// Automatic night lamp using an LDR and an LED
// LDR + 10k resistor form a voltage divider read on A0.
// LED on pin 13 turns on when the light level is low.

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(A0);   // 0 to 1023
  Serial.println(light);
  if (light < 300) {            // dark
    digitalWrite(13, HIGH);
  } else {                      // bright
    digitalWrite(13, LOW);
  }
  delay(100);
}
