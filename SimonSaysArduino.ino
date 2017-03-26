const int buttonYellowPin = 2;
const int buttonBluePin = 4;
const int buttonRedPin = 6;
const int buttonGreenPin = 8;

const int ledYellowPin = 3;
const int ledBluePin = 5;
const int ledRedPin = 7;
const int ledGreenPin = 9;

// Create a global variable to hold the
// state of the switch. This variable is persistent
// throughout the program.
int buttonYellowState = 0;
int buttonBlueState = 0;
int buttonRedState = 0;
int buttonGreenState = 0;

void setup() {
  // declare the LED pins as an output
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledBluePin, OUTPUT);
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
  
  // declare the switch pins as an input
  pinMode(buttonYellowPin, INPUT);
  pinMode(buttonBluePin, INPUT);
  pinMode(buttonRedPin, INPUT);
  pinMode(buttonGreenPin, INPUT);

}

void loop() {

  // read the value of the switches
  // digitalRead() checks to see if there is voltage
  // on the pin or not
  buttonYellowState = digitalRead(buttonYellowPin);

  // if the button is not pressed
  // turn on the green LED and off the red LEDs
  if (buttonYellowState == HIGH) {
    digitalWrite(ledYellowPin, HIGH); // turn the yellow LED on
  } else {
    digitalWrite(ledYellowPin, LOW); // turn the yellow LED off
  }

  // BLUE
  buttonBlueState = digitalRead(buttonBluePin);
  if (buttonBlueState == HIGH) {
    digitalWrite(ledBluePin, HIGH); // turn the yellow LED on
  } else {
    digitalWrite(ledBluePin, LOW); // turn the yellow LED off
  }

  // RED
  buttonRedState = digitalRead(buttonRedPin);
  if (buttonRedState == HIGH) {
    digitalWrite(ledRedPin, HIGH); // turn the yellow LED on
  } else {
    digitalWrite(ledRedPin, LOW); // turn the yellow LED off
  }

  // GREEN
  buttonGreenState = digitalRead(buttonGreenPin);
  if (buttonGreenState == HIGH) {
    digitalWrite(ledGreenPin, HIGH); // turn the yellow LED on
  } else {
    digitalWrite(ledGreenPin, LOW); // turn the yellow LED off
  }
}
