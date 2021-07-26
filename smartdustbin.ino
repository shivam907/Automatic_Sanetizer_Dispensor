#include <Servo.h>
int servopin = 7;
int ir = 8;
Servo servo;
void setup()
{
  pinMode(ir, INPUT);
  servo.attach(servopin);
  servo.write(0);
  delay(1000);
  servo.detach();
  Serial.begin(9600);

}

void loop()
{
Serial.print(digitalRead(ir));
if (digitalRead(ir)==0)
{
  servo.attach(servopin);
  delay(1000);
  servo.write(90);
  delay(1000);

  
}
if (digitalRead(ir)==1)
{
  delay(100);
  servo.write(0);
  delay(1000);
  servo.detach();
}
}
