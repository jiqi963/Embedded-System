<h1>Potentiometer</h1>
<h3>Reflection </h3>
</br>
The potentiometer can put diff position from 0 to 1023 that will be effect the flashing frequency of the LED.
</br>
<h3>YouTube</h3>
</br>
[Video](https://www.youtube.com/watch?v=x8Ilyt4yVk0)
</br>
<h3>Schematic</h3>
</br>
![Schematic](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%201B/Schematic.PNG)
</br>
<h3>PCB</h3>
</br>
![PCB](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%201B/PCB.PNG)
</br>
<h3>Breadboard</h3>
</br>
![Breadboard](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%201B/Breadbroad.PNG)
</br>
<h3>CODE</h3>
</br>

int potPosition;       //this variable will hold a value based on the position of the potentiometer

void setup()
{
  Serial.begin(9600);       //start a serial connection with the computer
  
  pinMode(13, OUTPUT);      //set pin 13 as an output that can be set to HIGH or LOW
}

void loop()
{
  //read the position of the pot
  potPosition = analogRead(A0);    //set potPosition to a number between 0 and 1023 based on how far the knob is turned
  Serial.println(potPosition);     //print the value of potPosition in the serial monitor on the computer

  //change the LED blink speed based on the pot value
  digitalWrite(13, HIGH);           // Turn on the LED
  delay(potPosition);              // delay for as many miliseconds as potPosition (0-1023)

  digitalWrite(13, LOW);            // Turn off the LED
  delay(potPosition);              // delay for as many miliseconds as potPosition (0-1023)
}
