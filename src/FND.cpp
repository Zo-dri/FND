#include "FND.h"

void FND_Display::N0(boolean dpState)
{
  // 11111100
  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::N1(boolean dpState)
{
  // 01100000
  digitalWrite(a, common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, common);
  digitalWrite(e, common);
  digitalWrite(f, common);
  digitalWrite(g, common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::N2(boolean dpState)
{
  // 11011010
  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::N3(boolean dpState)
{
  // 11110010
  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, common);
  digitalWrite(f, common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::N4(boolean dpState)
{
  // 01100110
  digitalWrite(a, common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, common);
  digitalWrite(e, common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::N5(boolean dpState)
{
  // 10110110
  digitalWrite(a, !common);
  digitalWrite(b, common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::N6(boolean dpState)
{
  // 10111110
  digitalWrite(a, !common);
  digitalWrite(b, common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::N7(boolean dpState)
{
  // 11100000
  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, common);
  digitalWrite(e, common);
  digitalWrite(f, common);
  digitalWrite(g, common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::N8(boolean dpState)
{
  // 11111110
  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::N9(boolean dpState)
{
  // 11110110
  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CA(boolean dpState)
{
  // 11101110
  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CB(boolean dpState)
{
  // 00111110
  digitalWrite(a, common);
  digitalWrite(b, common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CC(boolean dpState)
{
  // 10011100
  digitalWrite(a, !common);
  digitalWrite(b, common);
  digitalWrite(c, common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CD(boolean dpState)
{
  // 01111010
  digitalWrite(a, common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CE(boolean dpState)
{
  // 10011110
  digitalWrite(a, !common);
  digitalWrite(b, common);
  digitalWrite(c, common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CF(boolean dpState)
{
  // 10001110
  digitalWrite(a, !common);
  digitalWrite(b, common);
  digitalWrite(c, common);
  digitalWrite(d, common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CG(boolean dpState)
{
  // 10111100
  digitalWrite(a, !common);
  digitalWrite(b, common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CH(boolean dpState)
{
  // 01101110
  digitalWrite(a, common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CI(boolean dpState)
{
  N1(dpState);
}
void FND_Display::CJ(boolean dpState)
{
  // 01110000
  digitalWrite(a, common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, common);
  digitalWrite(f, common);
  digitalWrite(g, common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CL(boolean dpState)
{
  // 00011100
  digitalWrite(a, common);
  digitalWrite(b, common);
  digitalWrite(c, common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CN(boolean dpState)
{
  // 00101010
  digitalWrite(a, common);
  digitalWrite(b, common);
  digitalWrite(c, !common);
  digitalWrite(d, common);
  digitalWrite(e, !common);
  digitalWrite(f, common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CO(boolean dpState)
{
  N0(dpState);
}
void FND_Display::CP(boolean dpState)
{
  // 11001110
  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, common);
  digitalWrite(d, common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CR(boolean dpState)
{
  // 00001010
  digitalWrite(a, common);
  digitalWrite(b, common);
  digitalWrite(c, common);
  digitalWrite(d, common);
  digitalWrite(e, !common);
  digitalWrite(f, common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CS(boolean dpState)
{
  N5(dpState);
}
void FND_Display::CT(boolean dpState)
{
  // 00011110
  digitalWrite(a, common);
  digitalWrite(b, common);
  digitalWrite(c, common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}
void FND_Display::CU(boolean dpState)
{
  // 01111100
  digitalWrite(a, common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, common);
  if (!noDP)
  {
    if (dpState)
    {
      digitalWrite(dp, !common);
    }
    else
    {
      digitalWrite(dp, common);
    }
  }
}

void FND_Display::noMultiplexWrite(int number, boolean dpState, int index)
{
  number = abs(number);
  switch (number)
  {
  case 0:
    N0(dpState);
    break;
  case 1:
    N1(dpState);
    break;
  case 2:
    N2(dpState);
    break;
  case 3:
    N3(dpState);
    break;
  case 4:
    N4(dpState);
    break;
  case 5:
    N5(dpState);
    break;
  case 6:
    N6(dpState);
    break;
  case 7:
    N7(dpState);
    break;
  case 8:
    N8(dpState);
    break;
  case 9:
    N9(dpState);
    break;
  }
  for (int i = 1; i <= len; i++)
  {
    if (i == index)
    {
      On(i);
    }
    else
    {
      Off(i);
    }
  }
}
void FND_Display::noMultiplexWriteChar(char k, boolean dpState, int index)
{
  k = tolower(k);
  switch (k)
  {
  case '0':
    N0(dpState);
    break;
  case '1':
    N1(dpState);
    break;
  case '2':
    N2(dpState);
    break;
  case '3':
    N3(dpState);
    break;
  case '4':
    N4(dpState);
    break;
  case '5':
    N5(dpState);
    break;
  case '6':
    N6(dpState);
    break;
  case '7':
    N7(dpState);
    break;
  case '8':
    N8(dpState);
    break;
  case '9':
    N9(dpState);
    break;
  case 'a':
    CA(dpState);
    break;
  case 'b':
    CB(dpState);
    break;
  case 'c':
    CC(dpState);
    break;
  case 'd':
    CD(dpState);
    break;
  case 'e':
    CE(dpState);
    break;
  case 'f':
    CF(dpState);
    break;
  case 'g':
    CG(dpState);
    break;
  case 'h':
    CH(dpState);
    break;
  case 'i':
    CI(dpState);
    break;
  case 'j':
    CJ(dpState);
    break;
  case 'l':
    CL(dpState);
    break;
  case 'n':
    CN(dpState);
    break;
  case 'o':
    CO(dpState);
    break;
  case 'p':
    CP(dpState);
    break;
  case 'r':
    CR(dpState);
    break;
  case 's':
    CS(dpState);
    break;
  case 't':
    CT(dpState);
    break;
  case 'u':
    CU(dpState);
    break;
  }
  for (int i = 1; i <= len; i++)
  {
    if (i == index)
    {
      On(i);
    }
    else
    {
      Off(i);
    }
  }
}

FND_Display::FND_Display(byte len, boolean common)
{
  this->len = len;
  this->common = common;
}

void FND_Display::Segment(byte a, byte b, byte c, byte d, byte e, byte f, byte g, byte dp)
{
  SegmentNoDP(a, b, c, d, e, f, g);
  this->dp = dp;
  noDP = false;
}
void FND_Display::SegmentNoDP(byte a, byte b, byte c, byte d, byte e, byte f, byte g)
{
  this->a = a;
  this->b = b;
  this->c = c;
  this->d = d;
  this->e = e;
  this->f = f;
  this->g = g;
  noDP = true;
}

void FND_Display::Commons(byte com1)
{
  this->com1 = com1;
}
void FND_Display::Commons(byte com1, byte com2)
{
  Commons(com1);
  this->com2 = com2;
}
void FND_Display::Commons(byte com1, byte com2, byte com3)
{
  Commons(com1, com2);
  this->com3 = com3;
}
void FND_Display::Commons(byte com1, byte com2, byte com3, byte com4)
{
  Commons(com1, com2, com3);
  this->com4 = com4;
}
void FND_Display::Commons(byte com1, byte com2, byte com3, byte com4, byte com5)
{
  Commons(com1, com2, com3, com4);
  this->com5 = com5;
}
void FND_Display::Commons(byte com1, byte com2, byte com3, byte com4, byte com5, byte com6)
{
  Commons(com1, com2, com3, com4, com5);
  this->com6 = com6;
}
void FND_Display::init()
{

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  if (!noDP)
  {
    pinMode(dp, OUTPUT);
  }
  pinMode(com1, OUTPUT);
  pinMode(com2, OUTPUT);
  pinMode(com3, OUTPUT);
  pinMode(com4, OUTPUT);
  pinMode(com5, OUTPUT);
  pinMode(com6, OUTPUT);
}

void FND_Display::test(int comDelay)
{
  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    digitalWrite(dp, !common);
  }
  On();

  delay(comDelay);

  switch (len)
  {
  case 1:
    Off(1);
    delay(comDelay);
    On(1);
    delay(comDelay);
    break;

  case 2:
    Off(1);
    delay(comDelay);
    Off(2);
    delay(comDelay);
    On(1);
    delay(comDelay);
    On(2);
    delay(comDelay);
    break;

  case 3:
    Off(1);
    delay(comDelay);
    Off(2);
    delay(comDelay);
    Off(3);
    delay(comDelay);
    On(1);
    delay(comDelay);
    On(2);
    delay(comDelay);
    On(3);
    delay(comDelay);
    break;
  case 4:
    Off(1);
    delay(comDelay);
    Off(2);
    delay(comDelay);
    Off(3);
    delay(comDelay);
    Off(4);
    delay(comDelay);
    On(1);
    delay(comDelay);
    On(2);
    delay(comDelay);
    On(3);
    delay(comDelay);
    On(4);
    delay(comDelay);
    break;
  case 5:
    Off(1);
    delay(comDelay);
    Off(2);
    delay(comDelay);
    Off(3);
    delay(comDelay);
    Off(4);
    delay(comDelay);
    Off(5);
    delay(comDelay);
    On(1);
    delay(comDelay);
    On(2);
    delay(comDelay);
    On(3);
    delay(comDelay);
    On(4);
    delay(comDelay);
    On(5);
    delay(comDelay);
    break;
  case 6:
    Off(1);
    delay(comDelay);
    Off(2);
    delay(comDelay);
    Off(3);
    delay(comDelay);
    Off(4);
    delay(comDelay);
    Off(5);
    delay(comDelay);
    Off(6);
    delay(comDelay);
    On(1);
    delay(comDelay);
    On(2);
    delay(comDelay);
    On(3);
    delay(comDelay);
    On(4);
    delay(comDelay);
    On(5);
    delay(comDelay);
    On(6);
    delay(comDelay);
    break;
  }

  Off();

  On();
  digitalWrite(a, !common);
  delay(comDelay);
  digitalWrite(b, !common);
  delay(comDelay);
  digitalWrite(c, !common);
  delay(comDelay);
  if (!noDP)
  {
    digitalWrite(dp, !common);
    delay(comDelay);
  }
  digitalWrite(d, !common);
  delay(comDelay);
  digitalWrite(e, !common);
  delay(comDelay);
  digitalWrite(f, !common);
  delay(comDelay);
  digitalWrite(g, !common);
  delay(comDelay);

  digitalWrite(a, common);
  delay(comDelay);
  digitalWrite(b, common);
  delay(comDelay);
  digitalWrite(c, common);
  delay(comDelay);
  if (!noDP)
  {
    digitalWrite(dp, common);
    delay(comDelay);
  }
  digitalWrite(d, common);
  delay(comDelay);
  digitalWrite(e, common);
  delay(comDelay);
  digitalWrite(f, common);
  delay(comDelay);
  digitalWrite(g, common);
  delay(comDelay);
}
void FND_Display::testNumbers(int comDelay)
{
  On();
  N0(1);
  delay(comDelay);
  N1(1);
  delay(comDelay);
  N2(1);
  delay(comDelay);
  N3(1);
  delay(comDelay);
  N4(1);
  delay(comDelay);
  N5(1);
  delay(comDelay);
  N6(1);
  delay(comDelay);
  N7(1);
  delay(comDelay);
  N8(1);
  delay(comDelay);
  N9(1);
  delay(comDelay);
}
void FND_Display::testChars(int comDelay)
{
  On();
  CA(1);
  delay(comDelay);
  CB(1);
  delay(comDelay);
  CC(1);
  delay(comDelay);
  CD(1);
  delay(comDelay);
  CE(1);
  delay(comDelay);
  CF(1);
  delay(comDelay);
  CG(1);
  delay(comDelay);
  CH(1);
  delay(comDelay);
  CI(1);
  delay(comDelay);
  CJ(1);
  delay(comDelay);
  CL(1);
  delay(comDelay);
  CN(1);
  delay(comDelay);
  CO(1);
  delay(comDelay);
  CP(1);
  delay(comDelay);
  CS(1);
  delay(comDelay);
  CT(1);
  delay(comDelay);
  CU(1);
  delay(comDelay);
}

void FND_Display::Off()
{
  digitalWrite(a, common);
  digitalWrite(b, common);
  digitalWrite(c, common);
  digitalWrite(d, common);
  digitalWrite(e, common);
  digitalWrite(f, common);
  digitalWrite(g, common);
  if (!noDP)
  {
    digitalWrite(dp, common);
  }
  digitalWrite(com1, !common);
  digitalWrite(com2, !common);
  digitalWrite(com3, !common);
  digitalWrite(com4, !common);
  digitalWrite(com5, !common);
  digitalWrite(com6, !common);
}
void FND_Display::Off(int index)
{
  switch (index)
  {
  case 1:
    digitalWrite(com1, !common);
    break;
  case 2:
    digitalWrite(com2, !common);
    break;
  case 3:
    digitalWrite(com3, !common);
    break;
  case 4:
    digitalWrite(com4, !common);
    break;
  case 5:
    digitalWrite(com5, !common);
    break;
  case 6:
    digitalWrite(com6, !common);
    break;
  }
}
void FND_Display::On()
{
  switch (len)
  {
  case 1:
    digitalWrite(com1, common);
    break;
  case 2:
    digitalWrite(com1, common);
    digitalWrite(com2, common);
    break;
  case 3:
    digitalWrite(com1, common);
    digitalWrite(com2, common);
    digitalWrite(com3, common);
    break;
  case 4:
    digitalWrite(com1, common);
    digitalWrite(com2, common);
    digitalWrite(com3, common);
    digitalWrite(com4, common);
    break;
  case 5:
    digitalWrite(com1, common);
    digitalWrite(com2, common);
    digitalWrite(com3, common);
    digitalWrite(com4, common);
    digitalWrite(com5, common);
    break;
  case 6:
    digitalWrite(com1, common);
    digitalWrite(com2, common);
    digitalWrite(com3, common);
    digitalWrite(com4, common);
    digitalWrite(com5, common);
    digitalWrite(com6, common);
    break;
  }
}
void FND_Display::On(int index)
{
  switch (index)
  {
  case 1:
    digitalWrite(com1, common);
    break;
  case 2:
    digitalWrite(com2, common);
    break;
  case 3:
    digitalWrite(com3, common);
    break;
  case 4:
    digitalWrite(com4, common);
    break;
  case 5:
    digitalWrite(com5, common);
    break;
  case 6:
    digitalWrite(com6, common);
    break;
  }
}
void FND_Display::enable()
{
  On();

  digitalWrite(a, !common);
  digitalWrite(b, !common);
  digitalWrite(c, !common);
  digitalWrite(d, !common);
  digitalWrite(e, !common);
  digitalWrite(f, !common);
  digitalWrite(g, !common);
  if (!noDP)
  {
    digitalWrite(dp, !common);
  }
}

void FND_Display::print(int number)
{
  number = abs(number);
  int num = number;
  for (int i = len; i > 0; i--)
  {
    write(num % 10, 0, i);
    num /= 10;
  }
  Off();
}
void FND_Display::print(double number)
{
  number = abs(number);
  int integer;
  unsigned int fraction;
  integer = floor(number);
  fraction = (unsigned int)((number - integer) * 100000) / 10;
  String str = String(integer);
  byte l = (byte)str.length();
  Serial.print(integer);
  Serial.print(" ");
  Serial.print(fraction);
  Serial.print(" ");
  Serial.print(str);
  for (int i = 1; i <= l; i++)
  {
    if ((i) == l)
    {
      Serial.print(" dp");
      writeChar(str.charAt(i - 1), 1, i);
    }
    else
    {
      Serial.print(" No dp");
      writeChar(str.charAt(i - 1), 0, i);
    }
  }
  str = String(fraction);
  Serial.print(" ");
  Serial.print(str);
  for (int i = 0; i < (int)str.length(); i++)
  {
    writeChar(str.charAt(i), 0, i + l + 1);
  }
  Serial.println();
  Off();
}
void FND_Display::print(int number, int printDelay)
{
  number = abs(number);
  unsigned long timePrev = millis();
  for (unsigned long time = millis(); time < timePrev + printDelay; time = millis())
  {
    int num = number;
    for (int i = len; i > 0; i--)
    {
      noMultiplexWrite(num % 10, 0, i);
      delay(2);
      num /= 10;
    }
  }
  Off();
}
void FND_Display::print(String str)
{
  str.trim();
  int l = str.length();
  if (l >= len)
  {
    for (int i = len; i > 0; i--)
    {
      if (str.charAt(i - 1) == ' ')
      {
        Off();
      }
      else
      {
        writeChar(str.charAt(i - 1), 0, i);
      }
    }
  }
  else if (l < len)
  {
    for (int i = l; i > 0; i--)
    {
      writeChar(str.charAt(i - 1), 0, i);
    }
  }
  Off();
}
void FND_Display::print(String str, int printDelay)
{
  unsigned long timePrev = millis();
  for (unsigned long time = millis(); time < timePrev + printDelay; time = millis())
  {
    str.trim();
    int l = str.length();
    if (l >= len)
    {
      for (int i = len; i > 0; i--)
      {
        if (str.charAt(i - 1) == ' ')
        {
          Off(i);
        }
        else
        {
          noMultiplexWriteChar(str.charAt(i - 1), 0, i);
          delay(2);
        }
      }
    }
    else if (l < len)
    {
      for (int i = l; i > 0; i--)
      {
        noMultiplexWriteChar(str.charAt(i - 1), 0, i);
        delay(2);
      }
    }
  }
  Off();
}
void FND_Display::write(int number, boolean dpState, int index)
{
  noMultiplexWrite(number, dpState, index);
  delay(2);
  Off();
}
void FND_Display::write(int number, boolean dpState, int index, int customDelay)
{
  noMultiplexWrite(number, dpState, index);
  delay(customDelay);
  Off();
}
void FND_Display::writeChar(char k, boolean dpState, int index)
{
  noMultiplexWriteChar(k, dpState, index);
  delay(2);
  Off();
}
void FND_Display::writeChar(char k, boolean dpState, int index, int customDelay)
{
  noMultiplexWriteChar(k, dpState, index);
  delay(customDelay);
  Off();
}

byte FND_Display::length()
{
  return len;
}