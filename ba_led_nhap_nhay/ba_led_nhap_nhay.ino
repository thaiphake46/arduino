// C++ code
//

int ledRed = 8;
int ledBlue = 9;
int ledGreen = 10;
void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop()
{
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
