
int receivePin = 10;
int outPin = 9;
int val=0;
int high=0;
int timeTotal = 0;
int count = 0;
int T = 0;
int frequency = 0, start=0, stopTime =0;
void setup() {
  // put your setup code here, to run once:
  pinMode(receivePin, INPUT);
  pinMode(outPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(receivePin);
  if(receivePin==HIGH){
    digitalWrite(outPin, HIGH); // turn on LED signal
    // start timer
    start = micros();
    high =1;
  }
  if(receivePin == LOW && high==1){
    high = 0;
    //end timer
    stopTime = micros();
    timeTotal = timeTotal + (stopTime - start);
    count++;
  }
  if(count==20){
    T = timeTotal / count; // average period time
    frequency = 1/T;// frequency calculation
    count = 0;//reset count and timeTotal to 0
    timeTotal = 0;  
    Serial.print("frequency is ");
    Serial.print(frequency);
    Serial.prinln();
  }
}
