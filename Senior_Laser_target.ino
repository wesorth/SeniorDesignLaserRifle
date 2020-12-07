int sensorPin = A0;
int sensorValue = 0;
int high=0;
long timeTotal = 0;
float count = 0;
float T = 0;
float frequency = 0;
unsigned long start=0, stopTime =0;

void setup(void) {
   Serial.begin(9600);
   pinMode(sensorPin, INPUT); 
}
 
void loop(void) {
   sensorValue = analogRead(sensorPin);
   //Serial.println(sensorValue);
    if(sensorValue>30 && high ==0){
      //digitalWrite(outPin, HIGH); // turn on LED signal
      // start timer
      start = millis();
      //Serial.println(start);
      high =1;
      }
    if(sensorValue<30 && high==1){
      high = 0;
      //end timer
      stopTime = millis();
      //Serial.println(stopTime);
      timeTotal = timeTotal + (stopTime - start);
      count++;
    }
    if(count==2){
      T = (timeTotal / count)/1000; // average period time
      //Serial.print("period");
      //Serial.println(T);
      frequency = 1/T;// frequency calculation
      count = 0;//reset count and timeTotal to 0
      timeTotal = 0;  
      Serial.print("frequency is ");
      Serial.println(frequency);
      Serial.print(" ");
  }
}
