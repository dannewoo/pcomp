import processing.serial.*;

Serial myPort;
String temp;

void setup() {
  size(400, 400);
  noStroke();
  println(Serial.list());
  String portName = Serial.list()[2];
  myPort = new Serial(this, portName, 9600);
  background(0);
}

void serialEvent(Serial myport) {
  int inByte = myPort.read();
  println(inByte);
  temp = str(inByte);
}

void draw() {
  background(0);
  fill(255, 0, 0);
  textAlign(CENTER, CENTER);
  textSize(30);
  text("Temp: " + temp, width/2, height/2);
}
