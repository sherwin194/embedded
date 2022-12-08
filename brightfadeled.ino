int bright=0;
int fade = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3, bright);
  bright = bright + fade;
  if (bright <= 0 || bright >= 255) {
    fade = -fade;
  }

  delay(30);
}
