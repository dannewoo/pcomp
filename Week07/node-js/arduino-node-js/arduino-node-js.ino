void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial.available()) { // until the server responds,
    Serial.println("hello");    // send a hello message
    delay(500);                 // every half second
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    int input = Serial.read();
    // read the input on analog pin 0:
    int sensorValue = analogRead(A0);
    // print out the value you read:
    Serial.println(sensorValue);
    delay(1); // delay in between reads for stability
 }
}
