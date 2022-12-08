const int echoPin = 9;
const int triPin = 10;
const int LED = 7;
long duration;
long distance;

void setup() {
  // put your setup code here, to run once:

  pinMode(triPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(LED,OUTPUT);
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

  if(distance < 15)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}
