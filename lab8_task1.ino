const int probePin = 12;
const int ledPin = 8;

void setup() {
  pinMode(probePin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  bool continuity = (digitalRead(probePin) == LOW);
  digitalWrite(ledPin, continuity ? HIGH : LOW);
}
