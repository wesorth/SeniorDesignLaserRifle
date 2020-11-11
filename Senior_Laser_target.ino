int receivePin = 10;
int val=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(receivePin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(receivePin);
  if(receivePin==HIGH){
    digitalWrite(
  }
}
