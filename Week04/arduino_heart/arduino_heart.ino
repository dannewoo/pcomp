int pulseSensor = 0;
int led = 13;

int signal;
int threshold = 550;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  signal = analogRead(pulseSensor);
  Serial.println(signal);
  
}
