// LDR_1 variable is used to denote pin A1 of Arduino.
int LDR_1 = A1;
// Data received from A1 will be stored in LDR_Value_1.
float LDR_Value_1;
String input;
void setup()
{
pinMode(LDR_1,INPUT); // LDR_1 is set as an INPUT pin.
Serial.begin(9600); // Communication baudrate is set at 9600.
}
void loop()
{
if(Serial.available()>0) // if any input is available in the serial monitor then proceed.
{
input=Serial.readString(); // Read the input as a string.
if(input=="DATA")
{
LDR_Value_1=analogRead(LDR_1) * (5.0 / 1023.0); // (5 / 1023 ) is the conversion factor to get value in Volts.
Serial.println(LDR_Value_1); // If input is equal to "DATA", then read input from LDR_1 and print it on the Serial Monitor.
}
else
int i=0; // if input not equal to "DATA" , do nothing !
}
}
