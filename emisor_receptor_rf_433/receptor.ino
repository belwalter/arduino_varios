#include <VirtualWire.h>

class Receptor{
  private:
  int pin;

  public:
  Receptor(int p){
    pin=p;
    vw_setup(2000);
    vw_set_rx_pin(pin);
    vw_rx_start();
    }
  Receptor(){}
  String recibir_msg(){
    String msj ="";

    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;
    
    if (vw_get_message(buf, &buflen)) 
    {
      for (int i = 0; i < buflen; i++){
        msj += (char)buf[i];
      }
    return msj;
    }
  }
  }; 

Receptor r;

void setup()
{
    Serial.begin(9600);
    r = Receptor(11);
}
 
void loop()
{
 String msj = r.recibir_msg();
 if(msj.length()>0){
  Serial.println("Mensaje: "+ msj);
 }
 delay(500);   
}
