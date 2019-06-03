#include <plcLib.h>

unsigned long TIMER0 = 0;  // Define variable used to hold timer 0 elapsed time

void setup() {
  setupPLC();              // Setup inputs and outputs
}

void loop() {
  in(X0);                  // Read Input 0
  timerOn(TIMER0, 10);     // 10 ms delay
  out(Y0);                 // Output to Output 0
}

