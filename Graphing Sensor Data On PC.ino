// 1- Miran Member
// 2- Graphing sensor data on a PC 
// 3- Description - There are two analog inputs which depending on the value will be updated on the processing software
// 5- References - https://www.arduino.cc/en/Tutorial/BuiltInExamples/Graph

void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
}

void loop() {
  // send the value of analog input A0
  Serial.print(analogRead(A0));
  // separing the value that is to be sent using a + since there are two diffrent values
  Serial.print('+');
  // send the value of analog input A0
  Serial.println(analogRead(A1));
  // wait a bit for the analog-to-digital converter to stabilize after the last
  // reading:
  delay(2);
}
