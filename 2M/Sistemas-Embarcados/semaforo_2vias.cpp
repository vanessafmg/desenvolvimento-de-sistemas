// C++ code
//
int i = 0;

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
}