var serial;          // variable to hold an instance of the serialport library
var portName = '/dev/cu.usbmodem14201';  // fill in your serial port name here
var outByte = 0;                       // for outgoing data
 
function setup() {
 createCanvas(windowWidth, windowHeight);          // make the canvas
 serial = new p5.SerialPort();    // make a new instance of the serialport library
 serial.on('error', serialError); // callback for errors
 serial.open(portName);           // open a serial port
}

function serialError(err) {
  print('Something went wrong with the serial port. ' + err);
}

function draw() {
 // black background, white text:
 background(0);
 fill(255);
}

function mouseMoved() {
 // map the mouseY to a range from 0 to 255:
 outByte = int(map(mouseY, 0, height, 0, 255));
 // send it out the serial port:
 serial.write(outByte);
}