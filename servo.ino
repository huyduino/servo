/************************************************/
#include <Servo.h>
/************************************************/
Servo myservo;//create servo object to control a servo
/************************************************/
void setup()
{
  myservo.attach(9);//attachs the servo on pin 9 to servo object
  myservo.write(0);//back to 0 degrees 
  delay(1000);//wait for a second
}
/*************************************************/
void default_delay()
{
  delay(100);
}

void loop()
{
  // go from 0 to 180 degree
  for (int i = 0; i <= 180; ) {
    myservo.write(i);
    default_delay();
    i += 5;
  }
  // go back from 180 to 0 degree
  for (int i = 180; i >= 0; ) {
    myservo.write(i);
    default_delay();
    i -= 5;
  }
  // go to 180
  myservo.write(180);
  delay(1000);
  // back to 90
  myservo.write(90);
  delay(1000);
  // then to 0
  myservo.write(0);
  delay(1000);
}
/**************************************************/

