import processing.serial.*;

Serial myPort;
float r = 0;
int c = 0;

void setup() {
  size(400, 400);
  // change the number below to match your port:
  println(Serial.list());
  String portName = Serial.list()[7];
  myPort = new Serial(this, portName, 9600);
  background(0);
}

void serialEvent (Serial myPort) {
  // get the byte:
  float inByte = myPort.read();
  r = map(inByte, 0, 255, 0, height);
  c = int(inByte);
  // print it:
  println(inByte);
}

void draw() {
  background(0);
  noStroke();
  fill(c, 255, 100);
  ellipse(width/2, height/2, r, r);
}
