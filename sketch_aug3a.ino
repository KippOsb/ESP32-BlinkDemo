
void setup() {
  // put your setup code here, to run once:
  pinMode(18, OUTPUT); //set the pin we want to use as the 18th one
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(18, HIGH); // turns on the light
  delay(1000); // delay to make it blink slowly
  digitalWrite(18, LOW); // turns light off
  delay(1000); // delay before it runs the on again

}
