/*
De eerste code
*/
int led1_eigennaam = 1;
// De setup functie gaat 1x wanneer je reset of spanning op de arduino zet.
void setup() {
  // initialize digital pin led1_eigennaam as an output.
  pinMode(led1_eigennaam, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1_eigennaam, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(led1_eigennaam, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
