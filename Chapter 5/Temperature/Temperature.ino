int TEMPERATURE_SENSOR = A0;
int FAN  = 13;

void setup()
{
  pinMode(TEMPERATURE_SENSOR, INPUT);
  pinMode(FAN, OUTPUT);
}
 
void loop() 
{
 int reading = analogRead(TEMPERATURE_SENSOR);  
 
 float temperature = ((reading * 5.0) - 0.5) * 100 ;
                                         
  if (temperature >= 50)
  digitalWrite(FAN,HIGH);
  else
  digitalWrite(FAN,LOW);
 
 delay(1000);             
}

