#include <plcLib.h>

unsigned long TIMER0 = 0;     // Variable to hold elapsed time for Timer 0

void setup() {
  setupPLC();                 // Setup inputs and outputs
}

void loop() {
  in(X0);                     // Read Input 0
  timerPulse(TIMER0, 2000);   // 2 second pulse
  out(Y0);                    // Output to Output 0

}

