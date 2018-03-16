void setup() {
 Serial.begin(9600);   // initialize serial communications
 pinMode(9, OUTPUT);  // set digital pin 11 to be an output, to control the LED
}
 
void loop() {
 if (Serial.available() > 0) {
   char input = Serial.read();  // read first available byte into a variable
   if (input == 'H') {          // if the variable equals H, or ASCII 72
    digitalWrite(9, HIGH);     // turn on the LED
   }
   if (input == 'L') {          // if the variable equals L, or ASCII 76
    digitalWrite(9, LOW);      // turn off the LED
   }
 }
}
