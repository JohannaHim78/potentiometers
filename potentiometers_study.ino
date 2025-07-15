int readVoltage = A5; 
int vout; 
float realVout; 
int timeDelay = 1000; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  vout = analogRead(readVoltage);
  realVout = (5./1023.) * vout; 
  Serial.println(realVout);
  delay(timeDelay);
}
