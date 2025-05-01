#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

const int backENA = 14;
const int backIN1 = 27;
const int backIN2 = 26;

// const int backENB = 25;
// const int backIN3 = 22;
// const int backIN4 = 23;

const int sEN = 1;
const int sIN3 = 3;
const int sIN4 = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(backENA, OUTPUT);
  pinMode(backIN1, OUTPUT);
  pinMode(backIN2, OUTPUT);
  // pinMode(backENB, OUTPUT);
  // pinMode(backIN3, OUTPUT);
  // pinMode(backIN4, OUTPUT);
  pinMode(sEN, OUTPUT);
  pinMode(sIN3, OUTPUT);
  pinMode(sIN4, OUTPUT);

  // test 

}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(backENA, HIGH);
  digitalWrite(backIN1, LOW);
  digitalWrite(backIN2, HIGH);
  digitalWrite(sEN, HIGH);
  digitalWrite(sIN3, LOW);
  digitalWrite(sIN4, HIGH);
  delay(1000);
}

// put function definitions here:

