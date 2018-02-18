int ledPin = 9;
int photoCell = 0;
int brightness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  photoCell = analogRead(A0);
//  Serial.println(photoCell);
  brightness = map(photoCell, 0, 1000, 0, 255);
  Serial.println(photoCell);
  analogWrite(ledPin, brightness); 
}
