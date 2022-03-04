void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  
  
}

void loop() {
  delay(1000);
  analogWrite(9, 255);
  delay(1000);
  analogWrite(9, 127);
  delay(1000);
  analogWrite(9, 0);
  
  delay(1000);
  analogWrite(10, 255);
  delay(1000);
  analogWrite(10, 127);
  delay(1000);
  analogWrite(10, 0);
  
  delay(1000);
  analogWrite(11, 255);
  delay(1000);
  analogWrite(11, 127);
  delay(1000);
  analogWrite(11, 0);  
}
