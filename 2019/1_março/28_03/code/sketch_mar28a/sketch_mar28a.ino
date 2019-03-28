const int set1 = 16;
const int set2 = 5;
const int set3 = 4;
const int set4 = 0;

void setup()
{
  pinMode(set1, OUTPUT);
  pinMode(set2, OUTPUT);
  pinMode(set3, OUTPUT);
  pinMode(set4, OUTPUT);
}

void loop()
{
  digitalWrite(set1, HIGH);
  digitalWrite(set2, LOW);
  
  digitalWrite(set3, HIGH);
  digitalWrite(set4, LOW);

  delay(100);
  
  digitalWrite(set1, LOW);
  digitalWrite(set2, HIGH);
  
  digitalWrite(set3, LOW);
  digitalWrite(set4, HIGH);

  delay(100);
}
