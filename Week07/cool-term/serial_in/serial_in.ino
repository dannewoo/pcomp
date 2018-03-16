void setup() {
 Serial.begin(9600);
}
 
void loop() {
 int analogValue = analogRead(A0)/4; // read the sensor value
 Serial.write(analogValue);        // send the value serially as a binary value
// Serial.print(analogValue);          // print() or println() sends the value as ASCII text
// Serial.print(",");
// Serial.println(analogValue);
 delay(2);
}
