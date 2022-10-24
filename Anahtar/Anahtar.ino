// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(2, LOW);
  delay(1500); // Wait for 1500 millisecond(s)



  
  digitalWrite(2, HIGH);
  delay(2500); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(1500); // Wait for 8000 millisecond(s)
  digitalWrite(3, HIGH);
  delay(1500); // Wait for 2000 millisecond(s)
}
