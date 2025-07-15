//reading voltage 
int vPin = A5; 
int vRaw; 
float realVout; 

int timeDelay = 1000; 

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
