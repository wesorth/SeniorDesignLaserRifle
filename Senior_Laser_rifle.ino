int laserPin = 10;
int triggerPin = 9;

void setup ()
{
  pinMode(laserPin, OUTPUT);
  pinMode(triggerPin, INPUT);
}

void loop () {
  if(triggerPin){
    digitalWrite(laserPin, HIGH);
    delay(100);
    digitalWrite(laserPin, LOW);
    delay(100);
  }
}
