#include <SoftwareSerial.h> 
 

SoftwareSerial BT(2,3); //10 TX, 11 RX.
 
 
void setup()
{
  BT.begin(9600);
  Serial.begin(9600);
}
 
void loop()
{
  //Cuando haya datos disponibles
  if(BT.available())
  {
    String datos=BT.readString(); 
    Serial.print(datos);
    BT.write("redcibido."); 
  }
}
