int laserPin = 10;
int triggerPin = 9;
int count =0;
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
    count++;
  }
  if(count ==30){
    delay(5000); ///5s delay
    count =0;
  }
}
