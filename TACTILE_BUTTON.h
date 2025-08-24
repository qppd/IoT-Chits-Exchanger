#ifndef TACTILE_BUTTON_H
#define TACTILE_BUTTON_H

#include <Arduino.h>

#define LCD_BUTTON_PIN 8
#define COIN_BUTTON_PIN 9

// Inputs and Button Logic
const int numOfInputs = 2;  // number of buttons switches
extern int inputState[numOfInputs];
extern int lastInputState[numOfInputs];
extern bool inputFlags[numOfInputs];
extern long lastDebounceTime[numOfInputs];
extern long debounceDelay;
extern const int inputPins[numOfInputs];

void setInputFlags();
void resolveInputFlags();
void inputAction(int buttonIndex);

#endif // TACTILE_BUTTON_H
