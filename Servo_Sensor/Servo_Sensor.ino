int servoPin=16;



void setup() {
    Serial.begin(115200);
  // Use the appropriate pin for your servo
}

void loop() {
  for (int i = 0; i <= 180; i += 1) {
    analogWrite(servoPin,map(i,0,180,0,255));
    delay(15);
  }

  for (int i = 180; i >= 0; i -= 1) {
    analogWrite(servoPin,map(i,0,180,0,255));
    delay(15);
  }
}
