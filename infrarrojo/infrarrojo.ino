#include "IRremote.h"
 
 
const long KEY_UP = 0xFF18E7;
const long KEY_LEFT =0xFF10EF; 
const long KEY_OK = 0xFF38C7;
const long KEY_RIGHT = 0xFF5AA5;
const long KEY_DOWN = 0xFF4AB5;
const long KEY_1 =0xFFA25D;
const long KEY_2 = 0xFF629D;
const long KEY_3 = 0xFFE21D;
const long KEY_4 = 0xFF22DD;
const long KEY_5 = 0xFF02FD;
const long KEY_6 = 0xFFC23D;
const long KEY_7 = 0xFFE01F;
const long KEY_8 = 0xFFA857;
const long KEY_9 = 0xFF906F;
const long KEY_0 = 0xFF9867;
const long KEY_ASTERISK = 0xFF6897;
const long KEY_POUND = 0xFFB04F;
//const long KEY_REPEAT = 0xFFFFFFFF;
 
const int RECV_PIN = 9;
 
IRrecv irrecv(RECV_PIN);
decode_results results;
 
void setup()
{
   Serial.begin(9600);
   irrecv.enableIRIn();
}
 
void loop()
{
   if (irrecv.decode(&results))
   { Serial.println(results.value);
      switch (results.value)
      {
      case KEY_UP:
         Serial.println("KEY_UP");
         break;
      case KEY_LEFT:
         Serial.println("KEY_LEFT");
         break;
      case KEY_OK:
         Serial.println("KEY_OK");
         break;
      case KEY_RIGHT:
         Serial.println("KEY_RIGHT");
         break;
      case KEY_DOWN:
         Serial.println("KEY_DOWN");
         break;
      case KEY_1:
         Serial.println("KEY_1");
         break;
      case KEY_2:
         Serial.println("KEY_2");
         break;
      case KEY_3:
         Serial.println("KEY_3");
         break;
      case KEY_4:
         Serial.println("KEY_4");
         break;
      case KEY_5:
         Serial.println("KEY_5");
         break;
      case KEY_6:
         Serial.println("KEY_6");
         break;
      case KEY_7:
         Serial.println("KEY_7");
         break;
      case KEY_8:
         Serial.println("KEY_8");
         break;
      case KEY_9:
         Serial.println("KEY_9");
         break;
      case KEY_0:
         Serial.println("KEY_0");
         break;
      case KEY_ASTERISK:
         Serial.println("KEY_ASTERISK");
         break;
      case KEY_POUND:
         Serial.println("KEY_POUND");
         break;
      }
      irrecv.resume();
   }
}
