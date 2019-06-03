#include <plcLib.h>

void setup()
{
setupPLC(); // Setup inputs and outputs
}

void loop()
{
in(X0); // Read Input 0 (Read Switch S1)
out(Y0); // Send to Output 0 (Send to Lamp LS1)
}
