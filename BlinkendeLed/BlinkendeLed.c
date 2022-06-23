

void setup() {
  pinMode(14, OUTPUT);    // sets the digital pin 13 as output
  pinMode(0, INPUT);      // 0 als Input
}

void loop() {
  digitalWrite(14, digitalRead(0)); // Eingabe wird ausgegeben
}
