int led1=7;

void setup() {
  // put your setup code here, to run once:
// pinMode(pin,Mode);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1,HIGH);
delay(100);
digitalWrite(led1,LOW);
delay(100);
}
