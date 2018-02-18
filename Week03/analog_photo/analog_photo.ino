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
  brightness = map(photoCell, 220, 750, 0, 255);
  Serial.print(photoCell);
  Serial.print("\t");
  Serial.println(brightness);
//  analogWrite(ledPin, brightness);
  if (brightness > 150) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
}
