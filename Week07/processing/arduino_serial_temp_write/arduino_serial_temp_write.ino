const int sensorPin = A0;
long c, f;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(sensorPin);
  float volts = (float(sensorVal)/1024.0) * 5.0;
  c = (volts - .5) * 100;
  f = (c * 9/5) + 32;
//  Serial.print("Volts: ");
//  Serial.print(volts);
//  Serial.print("\t");
//  Serial.print("Celsius: ");
//  Serial.print(c);
//  Serial.print("\t");
//  Serial.print("Fahrenheit: ");
//  Serial.println(f);

  Serial.write(f);
  delay(30);
}
