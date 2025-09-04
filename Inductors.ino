const int pwmPin = 23;    
const int pwmChannel = 0;
const int pwmFreq = 20000; 
const int pwmResolution = 8; 

void setup() {
  ledcSetup(pwmChannel, pwmFreq, pwmResolution);
  ledcAttachPin(pwmPin, pwmChannel);
  Serial.begin(115200);
}

void loop() {
  for (int duty = 0; duty <= 255; duty += 5) {
    ledcWrite(pwmChannel, duty);
    delay(50);
  }
  for (int duty = 255; duty >= 0; duty -= 5) {
    ledcWrite(pwmChannel, duty);
    delay(50);
  }
}