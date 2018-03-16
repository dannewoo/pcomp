import processing.serial.*;

Serial myPort;
float xPos = 0;
float yPos = 0;

void setup() {
  size(800, 400);
  // change the number below to match your port:
  println(Serial.list());
  String portName = Serial.list()[13];
  myPort = new Serial(this, portName, 9600);
  background(0);
}

void serialEvent (Serial myPort) {
  // get the byte:
  float inByte = myPort.read();
  float val = map(inByte, 110, 150, 0, height);
  yPos = (height - val);
  // print it:
  println(inByte);
}

void draw() {
  stroke(255);
  line(xPos, height, xPos, yPos);
  if (xPos >= width) {
    xPos = 0;
    background(0);
  } else {
    xPos++;
  }
}