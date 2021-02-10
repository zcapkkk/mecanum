
typedef struct MOTOR
{
  int in1;
  int in2;
  int en;
} MOTOR;


spin(int s, int i, MOTOR m)
{
  if (i = 1)
  {
    //forward
    digitalWrite(m.in1, HIGH);
    digitalWrite(m.in2, LOW);
    analogWrite(m.en, s);
  }
  if (i = -1)
  {
    //backward
    digitalWrite(m.in1, LOW);
    digitalWrite(m.in2, HIGH);
    analogWrite(m.en, s);
  }
  else
  {
    digitalWrite(m.in1, LOW);
    digitalWrite(m.in2, LOW);
  }
}
