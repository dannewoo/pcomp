int knob = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  knob = analogRead(A0);
  float knobVolts = knob * (5.0/1024.0);
  Serial.print(knobVolts);
  Serial.print("\t");
  Serial.println(knob);
}
