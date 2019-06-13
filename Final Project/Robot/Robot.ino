#include <Servo.h>

//Declear the servo
Servo myservo1;   // Right Foot
Servo myservo2;   // Right Leg
Servo myservo3;   // Left Foot
Servo myservo4;   // Left Leg
Servo myservo5;   // Left Arm
Servo myservo6;   // Right Arm
Servo myservo7;   // Head

//Setup the default position of the servo
int angle1 =110;    
int angle2 =35;     
int angle3 =95;     
int angle4 =110;    
int angle5 =90;     
int angle6 =90;
int angle7 =90;

#define TurnLeft 3   // pin 3 is connected to button - TurnLeft
#define MOVE 4       // pin 4 is connected to button - MOVE
#define TurnRight 5  // pin 5 is connected to button - TurnRight
#define ARM 6        // pin 6 is connected to button - ARM


const byte ledPin = 0;
const byte interruptPin = 2;
volatile byte state = LOW;

void setup() {
  Serial.begin(9600);

  pinMode(TurnLeft,INPUT_PULLUP); 
  pinMode(MOVE,INPUT_PULLUP); 
  pinMode(TurnRight,INPUT_PULLUP); 
  pinMode(ARM,INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
  
  //attaches the servo on different pin to the servo object
  myservo1.attach(8);
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11); 
  myservo5.attach(12);
  myservo6.attach(13);
  myservo7.attach(7);

  // send servo to the default degrees
  myservo1.write(angle1);
  myservo2.write(angle2);
  myservo3.write(angle3);
  myservo4.write(angle4);
  myservo5.write(angle5);
  myservo6.write(angle6);
  myservo7.write(angle7);
}

void loop() {
    digitalWrite(ledPin,state); // Led light state
    stand(); // Return to the standing position after any action

  
  while(digitalRead(MOVE) == LOW){

      Serial.println("MOVE button pressed");

      angle1 = 130; //Lift left foot
      myservo1.write(angle1); // move the servo to desired angle   
         
      delay(500); //wait for robot keep balance
    
      angle2 = 10; //right leg front
      angle4 = 80; //left leg rear

      myservo2.write(angle2); // move the servo to desired angle  
      myservo4.write(angle4); // move the servo to desired angle 
       
      delay(500); 
 
      angle1 = 105;  //Put down left foot   
      myservo1.write(angle1); // move the servo to desired angle

      delay(1500); //moved one step, then wait for robot keep balance

      angle3 = 75; //Lift right foot
      myservo3.write(angle3); // move the servo to desired angle  
          
      delay(500); //wait for robot keep balance
    
      angle4 = 135; //right leg front
      angle2 = 60; //left leg rear
      
      myservo4.write(angle4); // move the servo to desired angle    
      myservo2.write(angle2); // move the servo to desired angle  
       
      delay(500);
    
      angle3 = 90; //Put down right foot
      myservo3.write(angle3); // move the servo to desired angle      

      delay(1500); ////moved two step, then wait for robot keep balance
  }

  while(digitalRead(ARM) == LOW){

    Serial.println("ARM button pressed");

    angle5 = 70;
    myservo5.write(angle5);
    
    angle6 = 70;
    myservo6.write(angle6);
    delay(200);

    angle5 = 130;
    myservo5.write(angle5);
    
    angle6 = 130;
    myservo6.write(angle6);
    
    delay(500);
  }
  
  while(digitalRead(TurnRight) == LOW){
    
    Serial.println("TurnRight button pressed");
    //turn one
    angle1 = 130; //Lift left foot
    myservo1.write(angle1);
    delay(500);
    
    angle4 = 135; //right leg move front
    myservo4.write(angle4); // move the servo to desired angle  
    delay(500);
    
    angle1 = 110; //Put down left foot
    myservo1.write(angle1);
    delay(500);  
    //stand
    
    //turn two
    angle3 = 75; //Lift right foot
    myservo3.write(angle3);
    delay(500);
    
    angle4 = 80; //Move right leg backwards
    myservo4.write(angle4); // move the servo to desired angle  
    delay(500);
    
    angle3 = 95; //Put down right foot
    myservo3.write(angle3);
    delay(500);   
    //stand
    
    //turn three
    angle1 = 130; //Lift left foot
    myservo1.write(angle1);
    delay(500);
    
    angle4 = 135; //right leg move front
    myservo4.write(angle4); // move the servo to desired angle
    delay(500);
    
    angle1 = 110; //Put down left foot
    myservo1.write(angle1);
    delay(500);   
    //stand
    
    //turn four
    angle3 = 75; //Lift right foot
    myservo3.write(angle3);
    delay(500);
    
    angle4 = 80; //Move right leg backwards
    myservo4.write(angle4); // move the servo to desired angle  
    delay(500);
    
    angle3 = 95; //Put down right foot
    myservo3.write(angle3);
    delay(500);   
    //stand
    
    //turn five
    angle1 = 130; //Lift left foot
    myservo1.write(angle1);
    delay(500);
    
    angle4 = 135; //right leg move front
    myservo4.write(angle4); // move the servo to desired angle
    delay(500);
    
    angle1 = 110; //Put down left foot
    myservo1.write(angle1);
    delay(500);   
    //stand

  }
  
   while(digitalRead(TurnLeft) == LOW){
    
    Serial.println("TurnLeft button pressed");
    //turn one
    angle3 = 75; //Lift left foot
    myservo3.write(angle3);
    delay(500);
    
    angle2 = 20; //right leg move front
    myservo2.write(angle2); // move the servo to desired angle  
    delay(500);
    
    angle3 = 95; //Put down left foot
    myservo3.write(angle3);
    delay(500);  
    //stand
    
    //turn two
    angle1 = 130; //Lift left foot
    myservo1.write(angle1);
    delay(500);
    
    angle2 = 55; //right leg move front
    myservo2.write(angle2); // move the servo to desired angle
    delay(500);
    
    angle1 = 110; //Put down left foot
    myservo1.write(angle1);
    delay(500);   
    //stand
    
    //turn three
    angle3 = 75; //Lift left foot
    myservo3.write(angle3);
    delay(500);
    
    angle2 = 20; //right leg move front
    myservo2.write(angle2); // move the servo to desired angle  
    delay(500);
    
    angle3 = 95; //Put down left foot
    myservo3.write(angle3);
    delay(500);     
    //stand
    
    //turn four
    angle1 = 130; //Lift left foot
    myservo1.write(angle1);
    delay(500);
    
    angle2 = 55; //right leg move front
    myservo2.write(angle2); // move the servo to desired angle
    delay(500);
    
    angle1 = 110; //Put down left foot
    myservo1.write(angle1);
    delay(500);   
    //stand
    
    //turn five
    angle3 = 75; //Lift left foot
    myservo3.write(angle3);
    delay(500);
    
    angle2 = 20; //right leg move front
    myservo2.write(angle2); // move the servo to desired angle  
    delay(500);
    
    angle3 = 95; //Put down left foot
    myservo3.write(angle3);
    delay(500);
    //stand
    
  }
  
  

}

//change the led state on or off
void blink() {
  
state = !state;

}

//stand is default position
void stand(){

angle1 =110;    
angle2 =35;     
angle3 =95;     
angle4 =110;    
angle5 =90;     
angle6 =90;
angle7 =90;


  myservo1.write(angle1);
  myservo2.write(angle2);
  myservo3.write(angle3);
  myservo4.write(angle4);
  myservo5.write(angle5);
  myservo6.write(angle6);
  myservo7.write(angle7);
}
