#include <Wire.h>
#include <Servo.h>
//ver 0513.1610

Servo servo1;
Servo servo2;


byte buff[2];
byte b1;             
int id_servo=1;
               
byte motor_stop=0x64;
               
void setup()
{
  Serial.begin(9600);
  servo1.attach(8);  
  servo2.attach(9);    
  servo1.write(motor_stop);
  servo2.write(motor_stop);
}
               
void loop()
{
  
  if(Serial.available())
  {
    b1=Serial.read();    
    if (b1 == 1)
    {
      id_servo=1;
    } else if (b1 == 2)
    {
      id_servo=2; 
    } else if (b1 == 3)
    {
      servo1.write(buff[0]);
      servo2.write(buff[1]);
    } else {
      if (id_servo==1)
      {
        buff[0]=b1;
      } else if (id_servo==2)
      {
        buff[1]=b1;
      } 
    }
  }  
}

