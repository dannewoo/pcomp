import processing.serial.*;

Serial myPort;

void setup() {
  size(255, 255);
  String portName = Serial.list()[7];
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  background(255);
  myPort.write(mouseX);
}
