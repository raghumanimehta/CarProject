#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(1, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(1, HIGH);
  delay(1000);
}

// put function definitions here:

