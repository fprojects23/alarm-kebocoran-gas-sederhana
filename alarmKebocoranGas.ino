#define sensorPin 3
#define buzzer 2

void setup() {
  // put your setup code here, to run once:
pinMode(sensorPin, INPUT);
pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sensorPin)==0)
  {
    digitalWrite(buzzer, HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(buzzer, LOW);
  }
}
