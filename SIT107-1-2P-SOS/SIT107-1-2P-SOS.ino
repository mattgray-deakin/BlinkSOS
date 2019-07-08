/*
SIT107 - P1.2 - Morse Code SOS

This sketch conducts a simple SOS signal
*/

// the setup function initialises the LED Pin - Pin 13
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

  /**
  For information on Morse - 
  - A dot(.) is one time unit
  - A dash (-) is three time units
  - A space between symbols (dot or dash) is three time units
  - The space between letters is three time units
  - Although not used, the time between words is seven time units

  The time unit in this project will be 0.25 seconds

  The next following two functions conduct an S and an O in Morse Code
  */

void morseS() {
  // The letter S is dot dot dot
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(250); // One Time unit on
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(250); // One Time unit off
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(250); // One Time unit on
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(250); // One Time unit off
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(250); // One Time unit on
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(750); // Three Time units at off (end of letter)
}

void morseO() {
  // The letter O is dash dash dash
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(750); // Three Time units on
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(250); // One Time unit off
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(750); // Three Time units on
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(250); // One Time unit off
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(750); // Three Time units on
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(750); // Three Time units at off (end of letter)
}
// the following loop function conducts the SOS task
void loop() {

  morseS();           // The letter S in morse (. . .)
  morseO();           // The letter O in morse (- - -)
  morseS();           // The letter S in morse (. . .)
    
}
