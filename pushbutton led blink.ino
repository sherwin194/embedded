int b = 7;
int x;
int led = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = digitalRead(b);
  Serial.println(x);
  if (x == 0) {
    digitalWrite(8, LOW);
  } else {
    digitalWrite(8, HIGH);
  }
}