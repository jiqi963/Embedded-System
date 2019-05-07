<h1>HelloWorld</h1>
<h3>Reflection </h3>
</br>
The screen shows the sentence 'hello world' and count the number on the next line.</br>
The counting speed depend on the code.
</br>
</br>
<h3>YouTube</h3>
</br>
https://youtu.be/WMNJFf42Njo
</br>
<h3>Schematic</h3>
</br>
![Schematic](Circuit%204A/Schematic.JPG)
</br>
<h3>PCB</h3>
</br>
![PCB](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%204A/PCB.JPG)
</br>
<h3>Breadboard</h3>
</br>
![Breadboard](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%204A/Breadboard.JPG)
</br>
<h3>CODE</h3>
/*
SparkFun Inventor’s Kit
Circuit 4A-HelloWorld

The LCD will display the words "Hello World" and show how many seconds have passed since
the RedBoard was last reset.

This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
This code is completely free for any use.

View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v40
Download drawings and code at: https://github.com/sparkfun/SIK-Guide-Code
*/

#include <LiquidCrystal.h>          //the liquid crystal libarry contains commands for printing to the display

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);   // tell the RedBoard what pins are connected to the display

void setup() {                     

  lcd.begin(16, 2);                 //tell the lcd library that we are using a display that is 16 characters wide and 2 characters high
  lcd.clear();                      //clear the display
}

void loop() {

  lcd.setCursor(0,0);               //set the cursor to the 0,0 position (top left corner)
  lcd.print("Hello, world!");       //print hello, world! starting at that position

  lcd.setCursor(0,1);               //mvoe the cursor to the first space of the bottom row
  lcd.print(millis()/10);         //print the number of seconds that have passed since the last reset
}  

