</br>
Reflection
</br>
Use the photoresistor to controller the LED turn on and off.
</br>
YouTube
</br>
https://youtu.be/PvYNSSltkb0
</br>
Source file
</br>
https://github.com/jiqi963/Embedded-System/blob/master/Circuit%201C/Circuit1C.fzz
</br>
Breadboard
</br>
[Breadboard](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%201C/Breadboard.PNG)
</br>
Schematic
</br>
[Schematic(]https://github.com/jiqi963/Embedded-System/blob/master/Circuit%201C/Schematic.PNG)
</br>
CODE
</br>
int photoresistor = 0;              //this variable will hold a value based on the position of the knob
int threshold = 750;                //if the photoresistor reading is below this value the the light will turn on

void setup()
{
  Serial.begin(9600);               //start a serial connection with the computer
  
  pinMode(13, OUTPUT);              //set pin 13 as an output that can be set to HIGH or LOW
}

void loop()
{
  //read the position of the knob
  photoresistor = analogRead(A0);   //set photoresistor to a number between 0 and 1023 based on how far the knob is turned
  Serial.println(photoresistor);    //print the value of photoresistor in the serial monitor on the computer

  //if the photoresistor value is below the threshold turn the light on, otherwise turn it off
  if (photoresistor < threshold){
    digitalWrite(13, HIGH);         // Turn on the LED  
  } else{
    digitalWrite(13, LOW);          // Turn off the LED
  }

  delay(100);                       //short delay to make the printout easier to read
}
