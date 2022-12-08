//note : connect the buzzer without a resistor
//note : connect the LED with resistor

const int LED = 4;
const int buzzer = 7;
const int trigPin = 10;
const int echoPin = 9;
long duration;
long distance;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //generate a pulse modulation
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  //calculate the distance
  duration = pulseIn(echoPin,HIGH);
  distance = (duration * 0.034/2);
  Serial.println(distance);

  //workcase
  if(distance > 15)
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(LED,LOW);
  }
}
