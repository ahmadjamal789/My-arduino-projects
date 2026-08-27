#include <Arduino.h>

// put function declarations here:
int pin = A4;
int redLED = 9;
int readings = 0;
float volts;
String lowVoltage = "you have a low voltage of";
String highVoltage = "you have a high voltage of";


/* int j = 1;
String jString = "j = 1"; */



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, INPUT);
  pinMode(redLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

   readings = analogRead(pin);
   volts = readings * (5.0 / 1023.5);



   if (volts < 2.50) {

    Serial.println(lowVoltage + " " + volts);

    digitalWrite(redLED, LOW);
   }   else if (volts > 2.50) {
    Serial.println(highVoltage + " " + volts);

    digitalWrite(redLED, HIGH);

   };
   delay(1200);



  /* Serial.println(jString + j);
  j = j + 1;
  delay(750); */
}

