#include <VirtualWire.h>
 
const int dataPin = 9;
 
void setup()
{
    vw_setup(2000);
    vw_set_tx_pin(dataPin);
}
 
void loop()
{
 String str;  
    char buf[VW_MAX_MESSAGE_LEN];
 
 // Ejemplo de envío int
 int dataInt = millis() / 1000;
    str = "i" + String(dataInt); /// Convertir a string
    str.toCharArray(buf,sizeof(buf)); // Convertir a char array
    vw_send((uint8_t *)buf, strlen(buf)); // Enviar array
    vw_wait_tx(); // Esperar envio
    
 // Ejemplo de envío float
 float dataFloat = 3.14;
    str = "f" + String(dataFloat); // Convertir a string
    str.toCharArray(buf,sizeof(buf)); // Convertir a char array
    vw_send((uint8_t *)buf, strlen(buf)); // Enviar array
    vw_wait_tx(); // Esperar envio
    
    delay(200);
}
