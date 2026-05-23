#include <SoftwareSerial.h>

int motor1pin1 = 2;
int motor1pin2 = 3;
int motor2pin1 = 4;
int motor2pin2 = 5;

int enA = 9;
int enB = 10;

int motor3pin1 = 1;
int motor3pin2 = 0;
int enC = 6;

int motor4pin1 = 7;
int motor4pin2 = 8;
int enD = 11;

SoftwareSerial bt(12, 13);

void drive(int sA, int sB, int p11, int p12, int p21, int p22) {
  analogWrite(enA, sA);
  analogWrite(enB, sB);
  digitalWrite(motor1pin1, p11);
  digitalWrite(motor1pin2, p12);
  digitalWrite(motor2pin1, p21);
  digitalWrite(motor2pin2, p22);
}

void stopMotors() {
  drive(0, 0, 0, 0, 0, 0);
}

void conveyer(int state) {
  int sp = state * 120;
  analogWrite(enC, sp);
  analogWrite(enD, sp);
  digitalWrite(motor3pin1, state);
  digitalWrite(motor3pin2, !state);
  digitalWrite(motor4pin1, state);
  digitalWrite(motor4pin2, !state);
}

void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);

  pinMode(motor3pin1, OUTPUT);
  pinMode(motor3pin2, OUTPUT);
  pinMode(enC, OUTPUT);

  pinMode(motor4pin1, OUTPUT);
  pinMode(motor4pin2, OUTPUT);
  pinMode(enD, OUTPUT);

  Serial.begin(9600);
  bt.begin(9600);
}

void loop() {
  if (bt.available()) {
    char c = bt.read();

    if (c == 'w') drive(120, 120, 1, 0, 1, 0);
    else if (c == 's') drive(120, 120, 0, 1, 0, 1);
    else if (c == 'a') drive(90, 120, 0, 1, 1, 0);
    else if (c == 'd') drive(120, 90, 1, 0, 0, 1);
    else if (c == 'x') stopMotors();
    else if (c == 'u') conveyer(1);
    else if (c == 'v') conveyer(0);
  }
}
