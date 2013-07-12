/*
  Blink
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
  digitalWrite(led, LOW);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() 
{
  String content = "";
  char character;

  while (Serial.available())
  {
    character = Serial.read();
    content.concat(character);
  }

  if (content != "")
  {
    morse(content);
  }

  delay(10);
}

void morse(String theWord)
{
  for (int i = 0; i <= theWord.length(); i++)
  {
    morseLetter(theWord.substring(i,i+1));
    delay(500);
  }
}

void morseLetter(String letter)
{
  if (letter == "a")
  {
    ShortLight();
    LongLight();
  }
  else if (letter == "b")
  {
    LongLight();
    ShortLight();
    ShortLight();
    ShortLight();
  }
  else if (letter == "c")
  {
    LongLight();
    ShortLight();
    LongLight();
    ShortLight();
  }
  else if (letter == "d")
  {
    LongLight();
    ShortLight();
    ShortLight();
  }
  else if (letter == "e")
  {
    ShortLight();
  }
  else if (letter == "f")
  {
    ShortLight();
    ShortLight();
    LongLight();
    ShortLight();
  }
  else if (letter == "g")
  {
    LongLight();
    LongLight();
    ShortLight();
  }
  else if (letter == "h")
  {
    ShortLight();
    ShortLight();
    ShortLight();
    ShortLight();
  }
  else if (letter == "i")
  {
    ShortLight();
    ShortLight();
  }
  else if (letter == "j")
  {

    ShortLight();
    LongLight();
    LongLight();
    LongLight();
  }
  else if (letter == "k")
  {
    LongLight();
    ShortLight();
    LongLight();
  }
  else if (letter == "l")
  {
    ShortLight();
    LongLight();
    ShortLight();
    ShortLight();
  }
  else if (letter == "m")
  {
    LongLight();
    LongLight();
  }
  else if (letter == "n")
  {
    LongLight();
    ShortLight();
  }
  else if (letter == "o")
  {
    LongLight();
    LongLight();
    LongLight();
  }
  else if (letter == "p")
  {
    ShortLight();
    LongLight();
    LongLight();    
    ShortLight();
  }
  else if (letter == "q")
  {
    LongLight();
    LongLight();
    ShortLight();
    LongLight();
  }
  else if (letter == "r")
  {
    ShortLight();
    LongLight();
    ShortLight();
  }
  else if (letter == "s")
  {
    ShortLight();
    ShortLight();
    ShortLight();
  }
  else if (letter == "t")
  {
    LongLight();
  }
  else if (letter == "u")
  {

    ShortLight();
    ShortLight();
    LongLight();
  }
  else if (letter == "v")
  {
    ShortLight();
    ShortLight();
    ShortLight();
    LongLight();
  }
  else if (letter == "w")
  {

    ShortLight();
    LongLight();
    LongLight();
  }
  else if (letter == "x")
  {
    LongLight();
    ShortLight();
    ShortLight();
    LongLight();
  }
  else if (letter == "z")
  {
    LongLight();
    ShortLight();
    LongLight();
    LongLight();
  }
  else if (letter == " ")
  {
    delay(1000);
  }
}

void ShortLight()
{
  int longDelay = 500;
  int shortDelay = 100;

  digitalWrite(led, HIGH);
  delay(shortDelay);
  digitalWrite(led, LOW);
  delay(shortDelay);
}

void LongLight()
{
  int longDelay = 500;
  int shortDelay = 100;

  digitalWrite(led, HIGH);
  delay(longDelay);
  digitalWrite(led, LOW);
  delay(shortDelay);
}






