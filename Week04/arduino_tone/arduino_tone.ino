void setup() {
  
}

void loop() {
  int sensor = analogRead(A0);
  int frequency = map(sensor, 0, 1023, 100, 380);
  tone(9, frequency);
}
