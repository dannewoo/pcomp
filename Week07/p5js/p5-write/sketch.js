var serial;          // variable to hold an instance of the serialport library
var portName = '/dev/cu.usbmodem1411';  // fill in your serial port name here
var outByte = 0;                       // for outgoing data
 
function setup() {
	createCanvas(400, 300);          // make the canvas
	serial = new p5.SerialPort();    // make a new instance of the serialport library
	serial.on('error', serialError); // callback for errors
	serial.open(portName);           // open a serial port
}

function serialError(err) {
	print('Something went wrong with the serial port. ' + err);
}

function draw() {
	background(0);
	fill(255);
	text("Press H or L to turn on and off the LED", 30, 30);
}

function keyPressed() {
	if (key ==='H' || key ==='L') { // if the user presses H or L
		serial.write(key);              // send it out the serial port
	}
}