/*
LED Gloves
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
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(2);
  int sensorVal1 = digitalRead(3);
  //print out the value of the pushbutton
  Serial.println(sensorVal);


  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  }

    if (sensorVal1 == HIGH) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  }
}
