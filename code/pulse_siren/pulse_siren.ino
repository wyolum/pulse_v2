 
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
