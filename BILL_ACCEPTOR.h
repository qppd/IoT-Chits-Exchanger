#ifndef BILL_ACCEPTOR_H
#define BILL_ACCEPTOR_H

#include <Arduino.h>

#define billPin 26

extern volatile bool billAccepted;
extern volatile unsigned long billLastDebounceTime;
extern const unsigned long billDebounceDelay;

void IRAM_ATTR ITRBILL();
void initBILLACCEPTOR();

#endif // BILL_ACCEPTOR_H
