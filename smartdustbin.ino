#include <Servo.h>
int servopin = 9;
//int ir = 12;
Servo servo;
void setup()
{
//  pinMode(ir, INPUT);
  servo.attach(servopin);
//  delay(100);
  servo.write(0);
  delay(1000);
  servo.detach();
  Serial.begin(9600);

}

void loop()
{

//if (digitalRead(ir)==0)
//{
  servo.attach(servopin);
  delay(1000);
  servo.write(180);
  delay(1000);
//  servo.write(120);
  servo.detach();
  
//}
//if (digitalRead(ir)==1)
//{
  servo.attach(servopin);
  delay(100);
  servo.write(0);
  delay(1000);
  servo.detach();
//}
}
