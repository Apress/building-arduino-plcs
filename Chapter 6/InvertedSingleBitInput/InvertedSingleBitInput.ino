#include <plcLib.h>

void setup()
{
setupPLC(); // Setup inputs and outputs
}

void loop()
{
inNot(X0); // // Read Input 0 (inverted) - read input Switch S1 (inverted)
out(Y0); // // Send to Output 0 (Send to Lamp LS1)
}
