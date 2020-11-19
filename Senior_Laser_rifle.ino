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
    for(int temp = 0; temp <250; temp++){ //500Hz
      digitalWrite(laserPin, HIGH);
      delay(1);
      digitalWrite(laserPin, LOW);
      delay(1);
    }
    count++;
  }
  if(count ==30){
    delay(5000); ///5s delay
    count =0;
  }
}
