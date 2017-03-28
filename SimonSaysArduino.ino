const int buttonBluePin = 2;
const int buttonRedPin = 4;
const int buttonYellowPin = 6;
const int buttonGreenPin = 8;

const int ledBluePin = 3;
const int ledRedPin = 5;
const int ledYellowPin = 7;
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

  // Demo sequence
  digitalWrite(ledBluePin, HIGH); // turn the yellow LED on
  delay(1000);
  digitalWrite(ledBluePin, LOW); // turn the yellow LED on
  digitalWrite(ledYellowPin, HIGH); // turn the yellow LED on
  delay(1000);
  digitalWrite(ledYellowPin, LOW); // turn the yellow LED on
  digitalWrite(ledRedPin, HIGH); // turn the yellow LED on
  delay(1000);
  digitalWrite(ledRedPin, LOW); // turn the yellow LED on
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
    digitalWrite(ledBluePin, HIGH); 
  } else {
    digitalWrite(ledBluePin, LOW); 
  }

  // RED
  buttonRedState = digitalRead(buttonRedPin);
  if (buttonRedState == HIGH) {
    digitalWrite(ledRedPin, HIGH); 
    delay(500);
    victory();
  } else {
    digitalWrite(ledRedPin, LOW); 
  }

  // GREEN
  buttonGreenState = digitalRead(buttonGreenPin);
  if (buttonGreenState == HIGH) {
    digitalWrite(ledGreenPin, HIGH);
    delay(500);
    loser();
  } else {
    digitalWrite(ledGreenPin, LOW); 
  }
}

void victory() {
  for (int i=0;i<2;i++) {
    digitalWrite(ledYellowPin, HIGH);
    digitalWrite(ledBluePin, LOW);
    digitalWrite(ledRedPin, LOW); 
    digitalWrite(ledGreenPin, LOW);
    delay(250);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledBluePin, HIGH); 
    digitalWrite(ledRedPin, LOW); 
    digitalWrite(ledGreenPin, LOW);
    delay(250);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledBluePin, LOW); 
    digitalWrite(ledRedPin, HIGH); 
    digitalWrite(ledGreenPin, LOW);
    delay(250);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledBluePin, LOW); 
    digitalWrite(ledRedPin, LOW); 
    digitalWrite(ledGreenPin, HIGH);
    delay(250);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledBluePin, LOW); 
    digitalWrite(ledRedPin, LOW); 
    digitalWrite(ledGreenPin, LOW); 
    delay(250);
  }
}

void loser() {
  for (int i=0;i<3;i++) {
    digitalWrite(ledYellowPin, HIGH); 
    digitalWrite(ledBluePin, HIGH); 
    digitalWrite(ledRedPin, HIGH); 
    digitalWrite(ledGreenPin, HIGH); 
    delay(250);
    digitalWrite(ledYellowPin, LOW); 
    digitalWrite(ledBluePin, LOW); 
    digitalWrite(ledRedPin, LOW); 
    digitalWrite(ledGreenPin, LOW); 
    delay(250);
  }
}

