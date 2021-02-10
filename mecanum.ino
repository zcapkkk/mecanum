#include <Wire.h>


#define in11 2
#define in21 4
#define in31 7
#define in41 8
#define enA1 A7
#define enB1 3

#define in12
#define in22
#define in32
#define in42
#define enA2
#define enB2

#define encoderA11
#define encoderA12
#define encoderB11
#define encoderB12





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(in11, OUTPUT);
  pinMode(in21, OUTPUT);
  pinMode(in31, OUTPUT);
  pinMode(in41, OUTPUT);
  pinMode(enA1, OUTPUT);
  pinMode(enB1, OUTPUT);

}


int encode_value1;
int encode_value2;

void loop() {
  // put your main code here, to run repeatedly:
  frontLeft(230, 1);
  frontRight(230, -1);

  delay(5000);

  frontLeft(230, -1);
  frontRight(230, 1);



}


void frontLeft(int x, int dir)
{
  if (dir == 1)
  {
    digitalWrite(in11, HIGH);
    digitalWrite(in21, LOW);
    analogWrite(enA1, x);
  }
  else if (dir == -1)
  {
    digitalWrite(in11, LOW);
    digitalWrite(in21, HIGH);
    analogWrite(enA1, x);
  }

}

void frontRight(int x, int dir)
{
  if (dir == 1)
  {
    digitalWrite(in31, HIGH);
    digitalWrite(in41, LOW);
    analogWrite(enB1, x);
  }
  else if (dir == -1)
  {
    digitalWrite(in31, LOW);
    digitalWrite(in41, HIGH);
    analogWrite(enB1, x);
  }

}
