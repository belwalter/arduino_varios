#include <VirtualWire.h>
 
const int dataPin = 9;
const int ledPin = 13;
 
void setup()
{
    vw_setup(2000);
    vw_set_tx_pin(dataPin);
}
 
void loop()
{
    const char *msg = "Hola mundo";
 
    digitalWrite(ledPin, true);
    vw_send((uint8_t *)msg, strlen(msg));
    vw_wait_tx();
    digitalWrite(ledPin, false);
    delay(200);
}
