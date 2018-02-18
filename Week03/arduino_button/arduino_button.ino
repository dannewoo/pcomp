int button = 2;
int redLED = 3;
int greenLED = 4;

void setup() {
  pinMode(button, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  if (digitalRead(button) == HIGH) {
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  } else {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
}
