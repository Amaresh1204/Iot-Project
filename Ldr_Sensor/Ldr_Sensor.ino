int ldr=7;
void setup() {
  pinMode(ldr,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int data=digitalRead(ldr);
  Serial.println(data);

}
