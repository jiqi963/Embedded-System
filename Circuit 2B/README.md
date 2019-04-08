<h1>Digital Trumpet</h1>
<h3>Reflection </h3>
</br>
Different buttons can make different tons, turning the potentiometer will adjust the volume.
</br>
</br>
<h3>YouTube</h3>
</br>
https://www.youtube.com/watch?v=IQsmmexpn6M
</br>
<h3>Schematic</h3>
</br>
![Schematic](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%202B/Schematic.JPG)
</br>
<h3>PCB</h3>
</br>
![PCB](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%202B/PCB.JPG)
</br>
<h3>Breadboard</h3>
</br>
![Breadboard](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%202B/BreadBoard.JPG?raw=true)
</br>
<h3>CODE</h3>
/*
SparkFun Inventor’s Kit
Circuit 2B-ButtonTrumpet

Use 3 buttons plugged to play musical notes on a buzzer.

This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
This code is completely free for any use.

View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v40
Download drawings and code at: https://github.com/sparkfun/SIK-Guide-Code
*/

//set the pins for the button and buzzer
int firstKeyPin = 2;
int secondKeyPin = 3;
int thirdKeyPin = 4;

int buzzerPin = 10;


void setup() {
  //set the button pins as inputs
  pinMode(firstKeyPin, INPUT_PULLUP);
  pinMode(secondKeyPin, INPUT_PULLUP);
  pinMode(thirdKeyPin, INPUT_PULLUP);

  //set the buzzer pin as an output
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  
  if(digitalRead(firstKeyPin) == LOW){        //if the first key is pressed
    tone(buzzerPin, 262);                     //play the frequency for c
  }
  else if(digitalRead(secondKeyPin) == LOW){  //if the second key is pressed
    tone(buzzerPin, 330);                     //play the frequency for e
  }
  else if(digitalRead(thirdKeyPin) == LOW){   //if the third key is pressed
    tone(buzzerPin, 392);                     //play the frequency for g
  }
  else{
    noTone(buzzerPin);                        //if no key is pressed turn the buzzer off
  }
}

  /*
  note  frequency
  c     262 Hz
  d     294 Hz
  e     330 Hz
  f     349 Hz
  g     392 Hz
  a     440 Hz
  b     494 Hz
  C     523 Hz
  */
