#define pin_int 2
#define pin_sig 9


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin_sig, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pin_int), subida, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin_sig, HIGH);
  digitalWrite(pin_sig, LOW);
  delay(5000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void subida(){
  Serial.println("Interrupcion de subida activada");
  digitalWrite(LED_BUILTIN, HIGH);
  }

