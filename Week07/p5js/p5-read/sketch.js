var serial;          // variable to hold an instance of the serialport library
var portName = '/dev/cu.usbmodem1411';  // fill in your serial port name here
var r;                             // for incoming serial data

function serialEvent() {
	r = Number(serial.read());
}

function setup() {
	createCanvas(400, 300);
	serial = new p5.SerialPort();       // make a new instance of the serialport library
	serial.on('data', serialEvent);     // callback for when new data arrives
}

function draw() {
	background(0);
	fill(255);
	ellipse(width/2, height/2, r, r);
}