//note : connect the buzzer wihtout a resistor

const int buzzer = 7;
const int trigPin = 9;
const int echoPin = 10;
long duration;
long distance;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(9,LOW);
  delayMicroseconds(2);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  
  duration = pulseIn(10,HIGH);
  distance = (duration * 0.034/2);
  Serial.println(distance);

  if(distance < 15)
  {
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }
}
