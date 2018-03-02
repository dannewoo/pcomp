// Lip is 1, 2, 3 side

int digiSwitch = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(digiSwitch, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(digiSwitch, HIGH);
  delay(15);
  digitalWrite(digiSwitch, LOW);
  delay(200);
}
