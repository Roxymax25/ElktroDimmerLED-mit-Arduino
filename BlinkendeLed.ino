void setup() {
  pinMode(14, OUTPUT);    // sets the digital pin 13 as output
}

void loop() {
  digitalWrite(14, HIGH); // sets the digital pin 13 on
  delay(1000);            // waits for a second
  digitalWrite(14, LOW);  // sets the digital pin 13 off
  delay(1000);            // waits for a second
}