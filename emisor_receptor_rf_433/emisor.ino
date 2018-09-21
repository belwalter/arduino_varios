#include <VirtualWire.h>

class Emisor{
  private:
    int pin;

  public:
    Emisor(int p){
      pin = p;
      vw_setup(2000);
      vw_set_tx_pin(pin);
      }
    Emisor(){}

    void enviar_msg(String msj){
      char *msg = const_cast<char*>(msj.c_str());
      vw_send((uint8_t *)msg, strlen(msg));
      vw_wait_tx();
      }
  
  };

Emisor e;

void setup()
{   
  e = Emisor(9);
}
 
void loop()
{
    e.enviar_msg("Hola Arduino");
    delay(1000);
}












