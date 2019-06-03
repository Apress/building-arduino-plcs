/*
*plc_2.ino
*/

int GROVE_BUTTON = 2; //Grove Button is connected to D2
int GROVE_LED = 3; // Grove LED is connected to D3
int GROVE_SPEAKER = 4; // Grove Speaker is connected to D4

void setup(){
pinMode(GROVE_BUTTON, INPUT); //set button as an INPUT device
pinMode(GROVE_LED, OUTPUT); //set LED as an OUTPUT device
pinMode(GROVE_SPEAKER, OUTPUT); //set Speaker as an OUTPUT device

}

void beep(){
digitalWrite(GROVE_SPEAKER,1); 
delay(10);
digitalWrite(GROVE_SPEAKER,0);
}

void loop(){
int buttonState = digitalRead(GROVE_BUTTON); //read the status of the button
if(buttonState == 1){ //if button is pressed
digitalWrite(GROVE_LED,1); //turn on the LED
beep(); //make audible tone, a beep
}
else{
digitalWrite(GROVE_LED,0); //if button is released
}
}

