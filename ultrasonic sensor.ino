const int triPin = 10;
const int echoPin = 9;
long duration;
long distance;

void setup() {
  // put your setup code here, to run once:

  pinMode(triPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(10,LOW);
  delayMicroseconds(2);
  digitalWrite(10,HIGH);
  delayMicroseconds(10);
  digitalWrite(10,LOW);

  duration = pulseIn(9,HIGH);
  distance = (duration * 0.034/2);
  Serial.println(distance);
}
