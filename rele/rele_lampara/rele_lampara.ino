#define rele 8

void setup() {
  // put your setup code here, to run once:
  pinMode(rele, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    String msj = Serial.readStringUntil('.');
    if(msj == "P" ){
      digitalWrite(rele, HIGH);
      Serial.println("Encender luz");
      }
    else if(msj == "A" ){
      digitalWrite(rele, LOW);
      Serial.println("Apagar luz");
      }
    }
}
