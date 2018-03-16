void setup() {
 Serial.begin(9600);   // initialize serial communications
}
 
void loop() {
 if (Serial.available() > 0) {
    int input = Serial.read();  // read first available byte into a variable
    analogWrite(9, input);     // turn on the LED
 }
}
