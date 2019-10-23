import processing.serial.*;

Serial myPort;
float y = 0;

void setup() {
  size(400, 400);
  noStroke();
  //println(Serial.list());
  String portName = Serial.list()[2];
  myPort = new Serial(this, portName, 9600);
  background(0);
}

void serialEvent(Serial myport) {
  float inByte = myPort.read();
  inByte = map(inByte, 0, 50, 0, height);
  y = lerp(y, inByte, 0.05);
  println(inByte);
}

void draw() {
  background(0);
  fill(255, 0, 0);
  ellipse(width/2, y, 20, 20);
}
