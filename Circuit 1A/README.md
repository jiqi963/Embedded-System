<h1>LED</h1>
<h3>Reflection</h3>
</br>
The LED turn on and turn off every two second.
</br>
<h3>YouTube</h3>
</br>
https://youtu.be/fZQULNiPadY
</br>
<h3>Breadboard</h3>
</br>
![Breadboard](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%201A/week1-01.png)
</br>
<h3>Schematic</h3>
</br>
![Schematic](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%201A/week1-02.png)
</br>
<h3>PCB</h3>
</br>
![PCB](https://github.com/jiqi963/Embedded-System/blob/master/Circuit%201A/week1-03.png)
</br>
<h3>Code</h3>
</br>
void setup() {
  
  pinMode(13, OUTPUT);      // Set pin 13 to output
  
}


void loop() {
  
  digitalWrite(13, HIGH);   // Turn on the LED
  
  delay(2000);              // Wait for two seconds

  digitalWrite(13, LOW);    // Turn off the LED
  
  delay(2000);              // Wait for two seconds
}

</br>
