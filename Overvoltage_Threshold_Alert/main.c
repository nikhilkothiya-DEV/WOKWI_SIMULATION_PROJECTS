#define INPUT_VOLTAGE  A0
#define LED  11
void setup() {

 pinMode(A0 , INPUT);
 pinMode(11 , OUTPUT);
 Serial.begin(9600);
}

void loop() {
int  voltage = analogRead(INPUT_VOLTAGE);
 Serial.println(voltage);
 
if(voltage >= 800)
{
 delay(1000);
if(analogRead(INPUT_VOLTAGE) >= 800)
{
  digitalWrite(11 , HIGH);
}
}else
{
 digitalWrite(11 , LOW);
}

}
