const int touchPin = 7; // Pin connected to the touch sensor
const int ledPin = 42;  // Pin connected to the LED
const int buzzle=6;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(touchPin, INPUT);
  pinMode(buzzle,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int touchValue = digitalRead(touchPin);

  if (touchValue == HIGH) {
    digitalWrite(ledPin, HIGH);  // Turn on the LED
                    
    digitalWrite(ledPin, LOW);   // Turn off the LED
   
  }
    if (touchValue == HIGH)
{
  digitalWrite(buzzle,HIGH);

}
else{
   digitalWrite(buzzle,LOW);


  }

}
