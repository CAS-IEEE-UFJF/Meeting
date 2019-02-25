const int button = 12;

void setup() {
  Serial.begin(115200);

  pinMode(2, OUTPUT);
}

void loop() {  
  Serial.println(digitalRead(button));
  
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(2, LOW);
  delay(200);
}
