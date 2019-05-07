<h1>Servo</h1>
<h3>Reflection </h3>
</br>
Use the potentiometer to change the servo position
</br>
</br>
<h3>YouTube</h3>
</br>
https://youtu.be/LjdtXHf4yyg
</br>
<h3>Schematic</h3>
</br>
![Schematic](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%203A/Schematic.JPG?raw=true)
</br>
<h3>PCB</h3>
</br>
![PCB](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%203A/PCB.JPG)
</br>
<h3>Breadboard</h3>
</br>
![Breadboard](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%203A/Breadboard.JPG)
</br>
<h3>CODE</h3>
/*
SparkFun Inventor’s Kit
Circuit 3A-Servo

Move a servo attached to pin 9 so that it's angle matches a potentitometer attached to A0.

This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
This code is completely free for any use.

View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v40
Download drawings and code at: https://github.com/sparkfun/SIK-Guide-Code
 */

#include <Servo.h>          //include the servo library

int potPosition;           //this variable will store the position of the potentiometer
int servoPosition;         //the servo will move to this position

Servo myservo;              //create a servo object

void setup() {

  myservo.attach(9);        //tell the servo object that its servo is plugged into pin 9
  
}

void loop() {

  
  
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad for the servo.
  
  myservo.write(servoPosition);                      //move the servo to the 10 degree position
}