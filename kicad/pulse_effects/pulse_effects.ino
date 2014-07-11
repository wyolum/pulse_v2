 
/*
Simple police Light
*/

int blue =  PB0;
int red = PB1;
int analog1 = A3;
int analog2 = A2;
int d0 = 30;
int d1 = 70;
int d2 = 200;
int mode = 1;
int mode1 = 0;

void setup(){
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(analog1, INPUT);
  pinMode(analog2, INPUT);
}


void loop(){
if ( analogRead(analog1) > 300 && mode1 == 1 ) {
  mode1 = 0;
    digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    
    delay(500);
    
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
}

if ( analogRead(analog1) > 300 && mode1 == 0 ) {
  mode1 = 1;
    digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    
    delay(500);
    
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
}
  if ( mode1 == 1 ){
    
    ifif:
  
  if ( analogRead(analog2) > 600 && mode == 2){
  
  //american Light
  
  mode = 1;
  
    digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    
    delay(500);
    
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
}
 
 if (analogRead(analog2) > 600 && mode == 1){
   
    //German Lights
    
    mode = 2;
    digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    
    delay(500);
    
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);

 }
  


if ( mode == 1 ) {
  
   //american Light

  digitalWrite(blue, HIGH);
  delay(d0);
  digitalWrite(blue, LOW);
  delay(d1);
  
   if ( analogRead(analog2) > 600){
     
     goto ifif;
     
   }
  
  digitalWrite(blue, HIGH);
  delay(d0);
  digitalWrite(blue, LOW);
  delay(d1);
  
     if ( analogRead(analog2) > 600){
     
     goto ifif;
     
   }
  
  digitalWrite(blue, HIGH);
  delay(d0);
  digitalWrite(blue, LOW);
  delay(d1);
  
     if ( analogRead(analog2) > 600){
     
     goto ifif;
     
   }
  
  
  delay(d2+d2/4);
  
     if ( analogRead(analog2) > 600){
     
     goto ifif;
     
   }
  
  digitalWrite(red, HIGH);
  delay(d0);
  digitalWrite(red, LOW);
  delay(d1);
  
     if ( analogRead(analog2) > 600){
     
     goto ifif;
     
   }
  
  digitalWrite(red, HIGH);
  delay(d0);
  digitalWrite(red, LOW);
  delay(d1);
  
     if ( analogRead(analog2) > 600){
     
     goto ifif;
     
   }
  
  digitalWrite(red, HIGH);
  delay(d0);
  digitalWrite(red, LOW);
  delay(d1);
  
     if ( analogRead(analog2) > 600){
     
     goto ifif;
     
   }
  
  delay(d2);
  
}
  
if ( mode == 2 ) {
  
  
   
 //German Lights
 
  digitalWrite(blue, HIGH);
  delay(d2*3.5);
  digitalWrite(blue, LOW);
  
     if ( analogRead(analog2) > 600){
     
     goto ifif;
     
}

  digitalWrite(red, HIGH);
  delay(d2*3.5);
  digitalWrite(red, LOW);
  
     if ( analogRead(analog2) > 600){
     
     goto ifif;
     
}
}
}
}







/*
  Analog input, analog output, serial output
 
 Reads an analog input pin, maps the result to a range from 0 to 255
 and uses the result to set the pulsewidth modulation (PWM) of an output pin.
 Also prints the results to the serial monitor.
 
 The circuit:
 * potentiometer connected to analog pin 0.
   Center pin of the potentiometer goes to the analog pin.
   side pins of the potentiometer go to +5V and ground
 * LED connected from digital pin 9 to ground
 
 created 29 Dec. 2008
 modified 9 Apr 2012
 by Tom Igoe
 
 This example code is in the public domain.
 */

// These constants won't change.  They're used to give names
// to the pins used:
const int analog2 = A2;  // Analog input pin that the potentiometer is attached to
const int blue = 0; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analog2);            
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);  
  // change the analog out value:
  analogWrite(blue, outputValue);           

  delay(2);                     
}
