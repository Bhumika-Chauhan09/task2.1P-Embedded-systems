/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board


String name="";

char ch;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1200);                                  //Dash for letter B
  digitalWrite(LED_BUILTIN, LOW);   
  delay(300); 
}
void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(400);                                  //Dash for letter B
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500); 
}


void morse_print(String bhumika)
{
  for(int i=0; i<bhumika.length();i++)
  {
    ch=bhumika[i];
    
  if(ch='A')
  {
    dot();
    dash();
    delay(900);
  }

    if(ch='B')
  {
   
    dash();
    dot();
    dot();
    dot();
    delay(900);
  }
   if(ch='C')
  {
   
    dash();
    dot();
    dash();
    dot();
    delay(900);
  }
   if(ch='D')
  {
   
    dash();
    dot();
    dot();
    delay(900);
  }
   if(ch='E')
  {
    dot();
    delay(900);
  }
   if(ch='F')
  {
    dot();
    dot();
    dash();
    dot();
    delay(900);
  }
    if(ch='G')
  {
   
    dash();
    dash();
    dot();
    delay(900);
  }
    if(ch='H')
  {
    dot();
    dot();
    dot();
    dot();
    delay(900);
  }
    if(ch='I')
  {
    dot();
    dot();
    delay(900);
  }
    if(ch='J')
  {
    dot();
    dash();
    dash();
    dash();
    delay(900);
  }
    if(ch='K')
  {
    dash();
    dot();
    dash();
    delay(900);
  }
    if(ch='L')
  {
    dot();
    dash();
    dot();
    dot();
    delay(900);
  }
    if(ch='M')
  {

    dash();
    dash();
    delay(900);
  }
    if(ch='N')
  {
    dash();
    dot();
    delay(900);
  }
    if(ch='O')
  {
    dash();
    dash();
    dash();
    delay(900);
  }
    if(ch='P')
  {
    dot();
    dash();
    dash();
    dot();
    delay(900);
  }
    if(ch='Q')
  {
    dash();
    dash();
    dot();
    dash();
    delay(900);
  }

    if(ch='R')
  {
    dot();
    dash();
    dot();
    delay(900);
  }
    if(ch='S')
  {
    dot();
    dot();
    dot();
    delay(900);
  }
    if(ch='T')
  {
    dash();
    delay(900);
  }
    if(ch='U')
  {
    dot();
    dot();
    dash();
    delay(900);
  }
    if(ch='V')
  {
    dot();
    dot();
    dot();
    dash();
    delay(900);
  }
      if(ch='W')
  {
    dot();
    dash();
    dash();
    delay(900);
  }
     if(ch='X')
  {
    dash();
    dot();
    dot();
    dash();
    delay(900);
  }
     if(ch='Y')
  {
    dash();
    dot();
    dash();
    dash();
    delay(900);
  }
     if(ch='Z')
  {
   
    dash();
    dash();
    dot();
    dot();
    delay(900);
  }
  else
  {
    Serial.println("Enter a valid name");
  }
}
}

// the loop function runs over and over again forever
void loop() {
  while(Serial.available())
  {
    char user_input=(char)Serial.read();
    name=+user_input;
    }
  morse_print(name);
  }
