// C++ code
//
int congtac=2;
void setup()
{
  pinMode(congtac, INPUT);
  Serial.begin(9600); // cổng port 9600
}

void loop()
{
  int trangthai = digitalRead(congtac);
  Serial.println(trangthai);
  delay(1000);
}