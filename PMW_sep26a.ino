int led=10;
int i;

void setup() 
{
pinMode(led, OUTPUT);
}


void loop() 
{
 for(i;i<=255;i=i+5)
 {
  analogWrite(led,i);
  delay(60);
 }
 for(i=255;0<i;i=i-5)     


 {
  analogWrite(led,i);
  delay(60);
 }
}
