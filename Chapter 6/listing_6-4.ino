#include <plcLib.h>

void setup()
{
setupPLC();
}

void loop()
{
in(X0); //read input from switch S1
outNot(Y0); // send inverted output to lamp LS1
}

