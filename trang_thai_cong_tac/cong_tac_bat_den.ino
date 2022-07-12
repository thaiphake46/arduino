// C++ code
//
int congtac=2;
int led=4;
void setup()
{
  pinMode(congtac, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600); // cổng port 9600
}

void loop()
{
  int trangthai = digitalRead(congtac);
  Serial.println(trangthai);
  delay(200);
  if(trangthai==0){
  	digitalWrite(led, 1);
  } else {
  	digitalWrite(led, 0);
  }
}