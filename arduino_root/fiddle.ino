
const int LED1 = 13;                // LED indicator
const int analog_in = 0;            // Pin A0



void setup()
{
  pinMode(analog_in, INPUT);        // Poti
  pinMode(LED1, OUTPUT);            // Arduino Onboard-Led
}



int value get_midi (void)
{
   value = analogRead(analog_in);   // Read Poti value
}



void loop()
{
  
  get_midi();






  

}
