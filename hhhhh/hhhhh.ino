
const int E1 = 5;
const int E2 = 6;
const int M1 = 4;
const int M2 = 7;

void setup()
{

  pinMode(9, INPUT);
  for (int i = 4; i <= 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  forward(150, 150);
    while (!digitalRead (9)) {}
  stop();
  delay(500);
  turn_l(100, 100, 90);
    stop();
    delay(500);
}

void forward(int pwrl, int pwrR)
{
  analogWrite(E1, pwrl);
  digitalWrite(M1, LOW);
  analogWrite(E2, pwrR);
  digitalWrite(M2, LOW);
}
void stop()
{ 
  analogWrite(E1, 0);
  digitalWrite(M1, LOW);
  analogWrite(E2, 0);
  digitalWrite(M2, LOW);
}
void back(int pwrl, int pwrR)
{
  analogWrite(E1, pwrl);
  digitalWrite(M1, HIGH);
  analogWrite(E2, pwrR);
  digitalWrite(M2, HIGH);
}
void turn_l(int pwrl, int pwrR, int Degrees)
{
  int turn = ((500 / 90)*Degrees);
  analogWrite(E1, pwrl);
  digitalWrite(M1, HIGH);
  analogWrite(E2, pwrR);
  digitalWrite(M2, LOW);
  delay(turn);
}


