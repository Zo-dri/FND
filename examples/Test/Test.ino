#include <FND.h>
/**
 * This example uses a multiplexing 4 digit FND Display
 */
int a = 2, b = 3, c = 4, d = 5, e = 6, f = 7, g = 8, dp = 9;
int com1 = 10, com2 = 11, com3 = 12, com4 = 13;

//(Number of digits, Common pin)
//1 for Common Anode || 0 for Common Cathode
FND_Display display(4, 1);    //4 digit common Anode display

void setup() {
  display.Segment(a, b, c, d, e, f, g, dp);
  //display.SegmentNoDP(a, b, c, d, e, f, g);
  display.Commons(com1, com2, com3, com4);
  display.init();

  display.test(500);
}

void loop() {
  // nothing to run here

}
