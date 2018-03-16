import processing.serial.*;

Serial myPort;
int val;

void setup() {
  size(255, 255);
  String portName = Serial.list()[13];
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  background(255);
  myPort.write(mouseX);
}