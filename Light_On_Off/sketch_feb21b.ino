//Declaration

int led=BUILTIN_LED;
//Setup
void setup() {
pinMode(led,OUTPUT);

}
//Loop
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
Serial.println("Led ON");
delay(2000);
digitalWrite(led,LOW);
Serial.println("Led OFF");
delay(2000);
}
