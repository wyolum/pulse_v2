/*
 p.u.l.s.e. Fader for Motorcycle Lamp
 
When NeutralDetect is LOW, Lamp fades via PWM,
When NeutralDetect is HIGH, Lamp is 100% ON
 
 The circuit:
 * LED attached from digital pin 3 (ATMega) 0r pin 0 (ATtiny45) to ground.
 * NeutralDetect Switch to digital pin 4.
 
 Created 23 Jun 2012
 By Anool J Mahidharia
 modified 
 By 
 
 CC By SA License. 
 */

int NeutralDetect = 4;    // NeutralDetect signal to digital pin 4 (ATMega or ATtiny45)
//comment out below line depending on use of ATMega or ATtiny45
//int ledPin = 3;    // LED connected to digital pin 3 (ATMega)

// #define ATMEGA
#define DELAY 1

#ifdef ATMEGA
int ledPin = 3;    // LED connected to digital pin 3 (ATMega)
#else
int ledPin = 0;    // LED connected to digital pin 0 (ATtiny45)
#endif
int brightness = 0;    // how bright the LED is
int fadeAmount1 = 1;    // how many points to fade the LED by
int fadeAmount2 = 4;    // how many points to fade the LED by

void setup()
{ 
    pinMode(NeutralDetect, INPUT);
    pinMode(ledPin, OUTPUT);
}
int count = 0;

void loop(){
  digitalWrite(NeutralDetect, LOW);
  int NDValue = digitalRead(NeutralDetect);
  float val = cos(count++ / 300.) * 127 + 255 - 127;
  if (NDValue == LOW){
    analogWrite(ledPin, (int)val);
  }
  else{
    count = 0;
    digitalWrite(ledPin,HIGH);
  }
  delay(DELAY);
}

void anools_loop()
{
   // read the value of the NeutralDetect pin:
  int NDValue = digitalRead(NeutralDetect);
  
    // if the digital value is low , PWM the LED:
  if (NDValue == LOW)
{ 
  // set the brightness of LED:
  analogWrite(ledPin, brightness);    

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount1;

  if (brightness == 224 || brightness == 255) {
  brightness = brightness + fadeAmount2;
  }


  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 255 || brightness == 224) {
    fadeAmount2 = -fadeAmount2 ; 
  }     

  if (brightness == 223 || brightness == 0) {
    fadeAmount1 = -fadeAmount1 ; 
  }     


  // wait for milliseconds to see the dimming effect    
  delay(10);  
}  
   else
    {
    digitalWrite(ledPin,HIGH);
    }
}
