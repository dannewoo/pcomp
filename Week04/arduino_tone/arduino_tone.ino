void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensor = analogRead(A0);
  Serial.println(sensor);
  float frequency = map(sensor, 450, 900, 100, 880);
//  analogWrite(9, frequency);
  tone(9, frequency);
}
