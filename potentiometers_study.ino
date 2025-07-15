//reading voltage 
int vPin = A5; 
int vRaw; 
float realVout; 

int timeDelay = 1000; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  vRaw = analogRead(vPin);
  realVout = (5./1023.) * vRaw; 
  Serial.println(realVout);

  //prints new voltage every second 
  delay(timeDelay);
}
