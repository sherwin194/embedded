int ledred = 7;
int ledyellow = 8;
int ledgreen = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);   //red LED output
  pinMode(8, OUTPUT);   //yellow LED output
  pinMode(12, OUTPUT);  //green LED output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledred, HIGH);  //blink red for 4 sec
  delay(4000);

  digitalWrite(ledyellow, HIGH);  //blink yellow for 1.5 sec
  delay(1500);

  //red and yellow off
  digitalWrite(ledred, LOW);
  digitalWrite(ledyellow, LOW);

  //green on for 5 sec
  digitalWrite(ledgreen, HIGH);
  delay(5000);
  digitalWrite(ledgreen, LOW);
  delay(500);

  //green blink 0.5 sec and delay for 0.5 sec
  digitalWrite(ledgreen, HIGH);
  delay(500);
  digitalWrite(ledgreen, LOW);
  delay(500);

  digitalWrite(ledgreen, HIGH);
  delay(500);
  digitalWrite(ledgreen, LOW);
  delay(500);

  digitalWrite(ledgreen, HIGH);
  delay(500);
  digitalWrite(ledgreen, LOW);
  delay(500);
}