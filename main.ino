//                                             MORSE CODE READER
//Have you ever wanted to proyect Morse signals but you can't 'cause it's pretty hard to learn this code?
//Don't worry any more! Arduino is here for you!

//VERSION        : 1.0
//INPUT          : The length of the string (input_size) and your string as an array of characters (input).
//OUTPUT         : Your string in Morse Code (Arduino pin 13 LED).
//BINARY SPACE   : 1452 bytes.

//--------------------------------------------------INPUT--------------------------------------------------

const int input_size = 3;
char input [input_size + 1] = "sos";

//--------------------------------------------------CODE---------------------------------------------------

int led = 13;
int speed = 500;

void setup()                                      //Setup the pin 13 LED.
{
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
}

void dot()                                        //Give info. about dots in Morse code.
{
  digitalWrite(led, HIGH);
  delay (speed);
  digitalWrite(led, LOW);
  delay (speed);
}

void dash()                                      //Give info. about dashes in Morse code.
{
  digitalWrite(led, HIGH);
  delay (speed*3);
  digitalWrite(led, LOW);
  delay (speed);
}

void loop()
{
  digitalWrite(led, LOW);
  delay(1000);
  for (int i = 0; i < input_size; i++)         //Read the string and translate it.
  {
    if (input[i] == 'a') {dot(); dash();}
    else if (input[i] == 'b') {dash(); dot(); dot(); dot();}
    else if (input[i] == 'c') {dash(); dot(); dash(); dot();}
    else if (input[i] == 'd') {dash(); dot(); dot();}
    else if (input[i] == 'e') {dot();}
    else if (input[i] == 'f') {dot(); dot(); dash(); dot();}
    else if (input[i] == 'g') {dash(); dash(); dot();}
    else if (input[i] == 'h') {dot(); dot(); dot(); dot();}
    else if (input[i] == 'i') {dot(); dot();}
    else if (input[i] == 'j') {dot(); dash(); dash(); dash();}
    else if (input[i] == 'k') {dash(); dot(); dash();}
    else if (input[i] == 'l') {dot(); dash(); dot(); dot();}
    else if (input[i] == 'm') {dash(); dash();}
    else if (input[i] == 'n') {dash(); dot();}
    else if (input[i] == 'o') {dash(); dash(); dash();}
    else if (input[i] == 'p') {dot(); dash(); dash(); dot();}
    else if (input[i] == 'q') {dash(); dash(); dot(); dash();}
    else if (input[i] == 'r') {dot(); dash(); dot();}
    else if (input[i] == 's') {dot(); dot(); dot();}
    else if (input[i] == 't') {dash();}
    else if (input[i] == 'u') {dot(); dot(); dash();}
    else if (input[i] == 'v') {dot(); dot(); dot(); dash();}
    else if (input[i] == 'w') {dot(); dash(); dash();}
    else if (input[i] == 'x') {dash(); dot(); dot(); dash();}
    else if (input[i] == 'y') {dash(); dot(); dash(); dash();}
    else if (input[i] == 'z') {dash(); dash(); dot(); dot();}
    else if (input[i] == '1') {dot(); dash(); dash(); dash(); dash();}
    else if (input[i] == '2') {dot(); dot(); dash(); dash(); dash();}
    else if (input[i] == '3') {dot(); dot(); dot(); dash(); dash();}
    else if (input[i] == '4') {dot(); dot(); dot(); dot(); dash();}
    else if (input[i] == '5') {dot(); dot(); dot(); dot(); dot();}
    else if (input[i] == '6') {dash(); dot(); dot(); dot(); dot();}
    else if (input[i] == '7') {dash(); dash(); dot(); dot(); dot();}
    else if (input[i] == '8') {dash(); dash(); dash(); dot(); dot();}
    else if (input[i] == '9') {dash(); dash(); dash(); dash(); dot();}
    else if (input[i] == '7') {dash(); dash(); dash(); dash(); dash();}
    else if (input[i] == ' ') {delay(speed*3);}
    delay(speed);
  }
}

//---------------------------------------------------------------------------------------------------------
