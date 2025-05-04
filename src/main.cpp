#include <Arduino.h>

void moveForward(int pin_a, int pin_b) {
  digitalWrite(pin_a, HIGH);
  digitalWrite(pin_b, LOW);
}

void moveBackward(int pin_a, int pin_b) {
  moveForward(pin_b,pin_a);
}

void stop(int pin_a, int pin_b) {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, LOW);
}

const int BACK_ENA = 22;
const int BACK_IN1 = 4;
const int BACK_IN2 = 18;
const int BACK_IN3 = 19;
const int BACK_IN4 = 21;
const int BACK_ENB = 23;

const int FRONT_ENA = -1;
const int FRONT_IN1 = 12;// might need to change (flucuating output on boot)
const int FRONT_IN2 = 13;
const int FRONT_IN3 = 27;
const int FRONT_IN4 = 14;
const int FRONT_ENB = -1;

void setup()
{
  // put your setup code here, to run once:
  pinMode(BACK_ENA, OUTPUT);
  pinMode(BACK_IN1, OUTPUT);
  pinMode(BACK_IN2, OUTPUT);
  pinMode(BACK_IN3, OUTPUT);
  pinMode(BACK_IN4, OUTPUT);
  pinMode(BACK_ENB, OUTPUT);

  // pinMode(FRONT_ENA, OUTPUT);
  pinMode(FRONT_IN1, OUTPUT);
  pinMode(FRONT_IN2, OUTPUT);
  pinMode(FRONT_IN3, OUTPUT);
  pinMode(FRONT_IN4, OUTPUT);
  // pinMode(FRONT_ENB, OUTPUT);

  // Extra
  digitalWrite(BACK_ENA, HIGH);
  digitalWrite(BACK_ENB, HIGH);
  // digitalWrite(FRONT_ENA, HIGH);
  // digitalWrite(FRONT_ENB, HIGH);
}

void moveAllForward() {
  // Rotate the Motor A clockwise
  moveForward(BACK_IN1, BACK_IN2);
  // Rotate the Motor B clockwise
  moveForward(BACK_IN3, BACK_IN4);
  // Rotate the Motor C clockwise
  moveForward(FRONT_IN1, FRONT_IN2);
  // Rotate the Motor D clockwise
  moveForward(FRONT_IN3, FRONT_IN4);
}

void moveAllBackward() {
  // Rotates the Motor A counter-clockwise
  moveBackward(BACK_IN1, BACK_IN2);
  // Rotates the Motor B counter-clockwise
  moveBackward(BACK_IN3, BACK_IN4);
  // Rotate the Motor C counter-clockwise
  moveBackward(FRONT_IN1, FRONT_IN2);
  // Rotate the Motor D counter-clockwise
  moveBackward(FRONT_IN3, FRONT_IN4);
}

void stopAll() {
  // stop the Motor A
  stop(BACK_IN1, BACK_IN2);
  // stop the Motor B
  stop(BACK_IN3, BACK_IN4);
  // stop the Motor C
  stop(FRONT_IN1, FRONT_IN2);
  // stop the Motor D
  stop(FRONT_IN3, FRONT_IN4);
}

void moveRight() {
  // Rotate the Motor A clockwise
  moveForward(BACK_IN1, BACK_IN2);
  // Rotate the Motor B counter-clockwise
  moveBackward(BACK_IN3, BACK_IN4);
  // Rotate the Motor C clockwise
  moveForward(FRONT_IN1, FRONT_IN2);
  // Rotate the Motor D counter-clockwise
  moveBackward(FRONT_IN3, FRONT_IN4);
}

void moveLeft() {
  // Rotates the Motor A counter-clockwise
  moveBackward(BACK_IN1, BACK_IN2);
  // Rotate the Motor B clockwise
  moveForward(BACK_IN3, BACK_IN4);
  // Rotate the Motor C counter-clockwise
  moveBackward(FRONT_IN1, FRONT_IN2);
  // Rotate the Motor D clockwise
  moveForward(FRONT_IN3, FRONT_IN4);
}

void loop()
{
  while (true) {
    moveAllForward();
    delay(1000);

    stopAll();
    delay(1000);
    
    moveAllBackward();
    delay(1000);

    stopAll();
    delay(1000);

    moveRight();
    delay(100);

    moveRight();
    delay(150);

    moveRight();
    delay(200);

    moveRight();
    delay(250);
  }
}