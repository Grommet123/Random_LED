/*
Random_LED
Random turn on one of X LED's when a button is pressed.

Designed 28 Feb 2016
by Gary Grotsky
*/

// Set up constants
#define LED1_PIN 2 // The LED output pin numbers
#define LED2_PIN 3
#define LED3_PIN 4
#define LED4_PIN 5
#define LED5_PIN 6
#define LED6_PIN 7
#define LED7_PIN 13
#define SWITCH_IN 8 // The switch input pin number
#define SLEEP 100 // Sleep timer
#define MIN 1 // Min randum mumber
#define MAX 7 // Max random number

void setup() {
// initialize digital pins as an output.
pinMode(LED1_PIN, OUTPUT);
pinMode(LED2_PIN, OUTPUT);
pinMode(LED3_PIN, OUTPUT);
pinMode(LED4_PIN, OUTPUT);
pinMode(LED5_PIN, OUTPUT);
pinMode(LED6_PIN, OUTPUT);
pinMode(LED7_PIN, OUTPUT);

// initialize digital pin as an input.
pinMode(SWITCH_IN, INPUT);
// Turn off the built in LED (L)
digitalWrite(LED7_PIN, LOW);
// Seed random number generator
randomSeed(analogRead(A0));
}

void loop() {
// Define varables
int inputSwitch = 0;
long randNumber;

// Get random number from 1 to 6
randNumber = random(MIN, MAX);

// Get switch input
inputSwitch = digitalRead(SWITCH_IN);

// if switch is not depressed, then turn on a random LED (and turn off the others)
if (inputSwitch == LOW) {

switch (randNumber) {
case 1:
digitalWrite(LED1_PIN, HIGH); // Turn the LED on
digitalWrite(LED2_PIN, LOW); // Turn the LED off
digitalWrite(LED3_PIN, LOW); // Turn the LED off
digitalWrite(LED4_PIN, LOW); // Turn the LED off
digitalWrite(LED5_PIN, LOW); // Turn the LED off
digitalWrite(LED6_PIN, LOW); // Turn the LED off
delay(SLEEP);
break;
case 2:
digitalWrite(LED1_PIN, LOW); // Turn the LED off
digitalWrite(LED2_PIN, HIGH); // Turn the LED on
digitalWrite(LED3_PIN, LOW); // Turn the LED off
digitalWrite(LED4_PIN, LOW); // Turn the LED off
digitalWrite(LED5_PIN, LOW); // Turn the LED off
digitalWrite(LED6_PIN, LOW); // Turn the LED off
delay(SLEEP);
break;
case 3:
digitalWrite(LED1_PIN, LOW); // Turn the LED off
digitalWrite(LED2_PIN, LOW); // Turn the LED off
digitalWrite(LED3_PIN, HIGH); // Turn the LED on
digitalWrite(LED4_PIN, LOW); // Turn the LED off
digitalWrite(LED5_PIN, LOW); // Turn the LED off
digitalWrite(LED6_PIN, LOW); // Turn the LED off
delay(SLEEP);
break;
case 4:
digitalWrite(LED1_PIN, LOW); // Turn the LED off
digitalWrite(LED2_PIN, LOW); // Turn the LED off
digitalWrite(LED3_PIN, LOW); // Turn the LED off
digitalWrite(LED4_PIN, HIGH); // Turn the LED on
digitalWrite(LED5_PIN, LOW); // Turn the LED off
digitalWrite(LED6_PIN, LOW); // Turn the LED off
delay(SLEEP);
break;
case 5:
digitalWrite(LED1_PIN, LOW); // Turn the LED off
digitalWrite(LED2_PIN, LOW); // Turn the LED off
digitalWrite(LED3_PIN, LOW); // Turn the LED off
digitalWrite(LED4_PIN, LOW); // Turn the LED off
digitalWrite(LED5_PIN, HIGH); // Turn the LED on
digitalWrite(LED6_PIN, LOW); // Turn the LED off
delay(SLEEP);
break;
case 6:
digitalWrite(LED1_PIN, LOW); // Turn the LED off
digitalWrite(LED2_PIN, LOW); // Turn the LED off
digitalWrite(LED3_PIN, LOW); // Turn the LED off
digitalWrite(LED4_PIN, LOW); // Turn the LED off
digitalWrite(LED5_PIN, LOW); // Turn the LED off
digitalWrite(LED6_PIN, HIGH); // Turn the LED on
delay(SLEEP);
break;
}
}
}
