/*
* plc_1.ino
*/

int GROVE_BUTTON = 2; //Grove Button connected to D2
int GROVE_LED = 3; //Grove LED connected to D3

void setup(){
pinMode(GROVE_BUTTON, INPUT); //set button as an INPUT device
pinMode(GROVE_LED, OUTPUT); //set LED as an OUTPUT device
}

void loop(){
int buttonState = digitalRead(GROVE_BUTTON); //read the status of the button
if(buttonState == 1) //if button is pressed
digitalWrite(GROVE_LED,1); //turn on the LED
else
digitalWrite(GROVE_LED,0); //if button is released
}

