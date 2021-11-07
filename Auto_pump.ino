int x ;
void setup() {
  pinMode(2,INPUT); // ir sensor out pin
  pinMode(4,OUTPUT); // red wire of pump

}

void loop() {
  x = digitalRead(2);
  if (x == 0) {  // when our hand is in forn of ir sensor
    digitalWrite(4,HIGH); // turn on pump
    delay(10ig00) ;  // give sanetizer for 5 sec
    digitalWrite(4,LOW) ; // turn off pump
  }
  else  // whne hand is not in front of ir sensor
  {
    digitalWrite(4,LOW); //turn off pump
  }
  delay(2000);
}
