int ldr = A0;  //Set A0(Analog Input) for LDR
int value = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  value = analogRead(ldr);  //Read the value of LDR(light)
  Serial.println("LDR value is : ");  //Prints the value of LDR to Serial Monitor
  Serial.println(value);

  if(value < 200)
  {
    digitalWrite(3,HIGH);  //makes the LED glow in Dark
  }
  else
  {
    digitalWrite(3,LOW);  //Turns the LED OFF in Light
  }
}
