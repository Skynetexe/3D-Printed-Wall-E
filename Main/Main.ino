#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("16 Channel Servo Test!");

  pwm.begin();

  pwm.setPWMFreq(60);
}

void loop()
{

  for (int i = 100; i < 500; i += 1)
  {
    delay(10);
    
    // Left Eyebrow
    // pwm.setPWM(0, 0, i);
    pwm.setPWM(1, 0, i);

    //
    // pwm.setPWM(2, 0, i);
    // pwm.setPWM(3, 0, i);
    //

    // pwm.setPWM(4, 0, i);
    // pwm.setPWM(5, 0, i);

    //
    // pwm.setPWM(6, 0, i);
    // pwm.setPWM(7, 0, i);
    //

    // pwm.setPWM(8, 0, i);

    //
    // pwm.setPWM(9, 0, i);
    //

    // pwm.setPWM(10, 0, i);
    // pwm.setPWM(11, 0, i);

    //
    // pwm.setPWM(12, 0, i);
    // pwm.setPWM(13, 0, i);
    //

    // pwm.setPWM(14, 0, i);
    // pwm.setPWM(15, 0, i);
  }
}