#ifndef FND_H
#define FND_H

#include <Arduino.h>

class FND_Display
{
private:
  byte len;
  int a, b, c, d, e, f, g, dp;
  int com1, com2, com3, com4, com5, com6;
  boolean noDP, common;

  void N0(boolean dpState);
  void N1(boolean dpState);
  void N2(boolean dpState);
  void N3(boolean dpState);
  void N4(boolean dpState);
  void N5(boolean dpState);
  void N6(boolean dpState);
  void N7(boolean dpState);
  void N8(boolean dpState);
  void N9(boolean dpState);
  void CA(boolean dpState);
  void CB(boolean dpState);
  void CC(boolean dpState);
  void CD(boolean dpState);
  void CE(boolean dpState);
  void CF(boolean dpState);
  void CG(boolean dpState);
  void CH(boolean dpState);
  void CI(boolean dpState);
  void CJ(boolean dpState);
  void CL(boolean dpState);
  void CN(boolean dpState);
  void CO(boolean dpState);
  void CP(boolean dpState);
  void CR(boolean dpState);
  void CS(boolean dpState);
  void CT(boolean dpState);
  void CU(boolean dpState);

  void noMultiplexWrite(int number, boolean dpState, int index);
  void noMultiplexWriteChar(char k, boolean dpState, int index);

public:
  FND_Display() {} // Not for use
  FND_Display(byte len, boolean common);

  void Segment(byte a, byte b, byte c, byte d, byte e, byte f, byte g, byte dp);
  void SegmentNoDP(byte a, byte b, byte c, byte d, byte e, byte f, byte g);

  void Commons(byte com1);
  void Commons(byte com1, byte com2);
  void Commons(byte com1, byte com2, byte com3);
  void Commons(byte com1, byte com2, byte com3, byte com4);
  void Commons(byte com1, byte com2, byte com3, byte com4, byte com5);
  void Commons(byte com1, byte com2, byte com3, byte com4, byte com5, byte com6);
  void init();

  void test(int comDelay);
  void testNumbers(int comDelay);
  void testChars(int comDelay);

  void Off();
  void Off(int index);
  void On();
  void On(int index);
  void enable();

  void print(int number);
  void print(int number, int printDelay);
  void print(double number);
  void print(String str);
  void print(String str, int printDelay);
  void write(int number, boolean dpState, int index);
  void write(int number, boolean dpState, int index, int customDelay);
  void writeChar(char k, boolean dpState, int index);
  void writeChar(char k, boolean dpState, int index, int customDelay);

  byte length();
};
#endif
