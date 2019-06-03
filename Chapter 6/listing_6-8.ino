#include <plcLib.h>

void setup() {
  setupPLC();  // Setup inputs and outputs
}

void loop() {
  
  in(X0);      // Read Input 0 (Grove button on port A0)
  orBit(X1);   // OR with Input 1 (Grove button on port A1)
  out(Y0);     // Send result to Output 1
  
}

