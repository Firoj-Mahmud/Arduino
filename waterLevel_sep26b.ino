#include<LiquidCrystal.h>

float volt=0;
float sensor=0;
int  i= 0;
LiquidCrystal lcd(2,3,4,5,6,7);

void setup() 
{
  //pinMode(led,OUTPUT);   // put your setup code here, to run once:
  //pinMode(buzz,OUTPUT);// put your setup code here, to run once:
  lcd.begin(16,2);
Serial.begin(9600);
 

}

void loop()
{
  
  sensor=analogRead(A0);
  //Serial.println(sensor);
 volt = (3.3*sensor)/1024;
 i=40/volt;
  Serial.println(volt);
  Serial.println(i);
  lcd.setCursor(0,0);
lcd.print("Water Depth(mm) =");
lcd.setCursor(1,1);
lcd.print("= ");
lcd.print(i); 
  
  
  // put your main code here, to run repeatedly:

}
