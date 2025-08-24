// ChitExchanger.ino

#include "COIN_SLOT.h"
#include "SERVO_DISPENSER.h"
#include "BILL_ACCEPTOR.h"
#include "I2C_LCD.h"
#include "TACTILE_BUTTON.h"

const int buttonPin = 2;    // Pin for button input
const int ledPin = 13;      // Pin for LED output

int buttonState = 0;        // Variable for reading the button status

void setup() {
  pinMode(ledPin, OUTPUT);      // Initialize the LED pin as an output
  pinMode(buttonPin, INPUT);    // Initialize the button pin as an input
  Serial.begin(9600);           // Start serial communication
  initALLANCOIN(); // Initialize coin slot interrupt
  initSERVO(); // Initialize servo dispenser
  initBILLACCEPTOR(); // Initialize bill acceptor interrupt
  initLCD(); // Initialize the LCD
  displayMessage("Welcome!", 0); // Display a welcome message on the first row

  for (int i = 0; i < numOfInputs; i++) {
    pinMode(inputPins[i], INPUT_PULLUP); // Initialize button pins as input with pull-up
  }
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);   // Turn LED on
    Serial.println("Chit exchanged!");
    delay(500);                   // Debounce delay
  } else {
    digitalWrite(ledPin, LOW);    // Turn LED off
  }

  if (coinInserted) {
    coinInserted = false; // Reset the flag
    Serial.println("Coin inserted!");
    // Add any additional logic for coin insertion here
  }

  if (billAccepted) {
    billAccepted = false; // Reset the flag
    Serial.println("Bill accepted!");
    // Add any additional logic for bill acceptance here
  }

  setInputFlags(); // Check button states
  resolveInputFlags(); // Handle button actions

  // Example usage of the servo dispenser
  operateSERVO(0, 0, 90, 10); // Operate servo on channel 0 from 0 to 90 degrees
  delay(1000); // Wait for 1 second

  // Example usage of the LCD
  displayMessage("Waiting for input...", 1); // Display a message on the second row
  delay(2000); // Wait for 2 seconds
}