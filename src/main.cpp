#include <Arduino.h>
#define EXTERNAL_LED_PIN 26

void setup() {
  pinMode(EXTERNAL_LED_PIN, OUTPUT);
}

void loop() {

  digitalWrite(EXTERNAL_LED_PIN, HIGH);
  delay(1000); 

  
  digitalWrite(EXTERNAL_LED_PIN, LOW);
  delay(1000); 
}