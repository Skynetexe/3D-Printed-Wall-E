#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("16 Channel Servo Test!");

  pwm.begin();

  pwm.setPWMFreq(60);

}

void loop() {
  // put your main code here, to run repeatedly:
//   Serial.println("Choose an angle");

//   while(Serial.available() == 0){
//   }
//   int angle = Serial.parseInt();

//   pwm.setPWM(0, 0, angle);
//   delay(50);

//   Serial.println(angle);
//   pwm.setPWM(1, 0, angle);
//   delay(50);
//   pwm.setPWM(2, 0, angle);
//   delay(50);
//   pwm.setPWM(3, 0, angle);
//   delay(50);
//   pwm.setPWM(4, 0, angle);
//   delay(50);
//   pwm.setPWM(5, 0, angle);
//   delay(50);
//   pwm.setPWM(6, 0, angle);
//   delay(50);
//   pwm.setPWM(7, 0, angle);
//   delay(50);
//   pwm.setPWM(8, 0, angle);
//   delay(50);
//   pwm.setPWM(9, 0, angle);
    for(int i = 100; i < 500; i += 1)
    {
        delay(10);
        pwm.setPWM(0, 0, i);
        pwm.setPWM(1, 0, i);
        pwm.setPWM(2, 0, i);
        pwm.setPWM(3, 0, i);
        pwm.setPWM(4, 0, i);
        pwm.setPWM(5, 0, i);
        pwm.setPWM(6, 0, i);
        pwm.setPWM(7, 0, i);
        pwm.setPWM(8, 0, i);
    }
}