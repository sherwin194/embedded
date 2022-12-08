void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(2, LOW);

  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);

  digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(7, LOW);

  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);

  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(12, LOW);

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
}
