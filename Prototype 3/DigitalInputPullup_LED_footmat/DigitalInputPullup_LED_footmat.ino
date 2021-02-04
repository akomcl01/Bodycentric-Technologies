/*
LED Mat
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
  pinMode(14, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(20, OUTPUT);
  

}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(2);
  //print out the value of the pushbutton
  Serial.println(sensorVal);


  
  if (sensorVal == HIGH) {
    digitalWrite(14, LOW);
     digitalWrite(16, LOW);
      digitalWrite(18, LOW);
       digitalWrite(20, LOW);
    //digitalWrite(3, LOW);
  } else {
    digitalWrite(14, HIGH);
    digitalWrite(16, HIGH);
    digitalWrite(18, HIGH);
    digitalWrite(20, HIGH);
  }

}
