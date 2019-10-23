int signal = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  signal = analogRead(A0);
  Serial.println(signal);
}
