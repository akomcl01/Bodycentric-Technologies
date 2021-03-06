/*
LED Biker Jacket
Clinton Akomea-Agyin
Bodycentric Technologies
OCAD University 
Created on 01/02/21
Based on:
  http://www.arduino.cc/en/Tutorial/InputPullupSerial
*/

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(15, OUTPUT);

}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(2);
  //print out the value of the pushbutton
  Serial.println(sensorVal);

  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
    digitalWrite(16, LOW);
    digitalWrite(15, LOW);
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(16, HIGH);
    digitalWrite(15, HIGH);
  }
}
