//reading voltage 
int vPin = A5; 
int vRaw; 
float realVout; 

//LED management 
int timeDelay = 1000; 
int outputPin = 6; 

void setup() {
  Serial.begin(9600);
  pinMode(outputPin, OUTPUT);
}

void loop() {

  digitalWrite(outputPin, HIGH);

  vRaw = analogRead(vPin);
  realVout = (5./1023.) * vRaw; 
  Serial.println(realVout);
  delay(timeDelay);
}
