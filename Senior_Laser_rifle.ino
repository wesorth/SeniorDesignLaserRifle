int laserPin = 10;
int triggerPin = 9;
int count =0;
int btnlock = 0;
void setup ()
{
  pinMode(laserPin, OUTPUT);
  pinMode(triggerPin, INPUT);
}

void loop () {
  //digitalRead(triggerPin);
  if(btnlock == 1  && digitalRead(triggerPin) ==LOW){
    btnlock = 0;
  }
  if(btnlock == 0 && digitalRead(triggerPin)==HIGH){
    for(int temp = 0; temp <10; temp++){ //500Hz
      digitalWrite(laserPin, HIGH);
      delay(1000);
      digitalWrite(laserPin, LOW);
      delay(1000);
    }
    count++;
    btnlock =1;
  }
  if(count ==30){
    delay(5000); ///5s delay
    count =0;
  }
}
