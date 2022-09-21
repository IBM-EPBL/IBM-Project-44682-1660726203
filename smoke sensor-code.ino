//AE CODE
int V_GasSen = 0;
int V_TempSens = 0;
int V_LEDlight=2;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(A1,INPUT);
  pinMode(2,OUTPUT);
 
}
void loop()
{
  //smoke Alarm
  V_GasSen=analogRead(A0);
  if (V_GasSen >= 250) 
  {
    tone(7,523,1000);
    digitalWrite(9,HIGH);
  }
  
  V_TempSens = -40 + 0.488155 * (analogRead(A1) - 20);
  if (V_TempSens >= 70) 
  {
    tone(7,523,1000);
    digitalWrite(12,HIGH);
  }  
  delay(10);
}