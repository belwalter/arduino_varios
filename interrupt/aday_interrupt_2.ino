#define pin_int 2
#define pin_sig 9


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin_sig, OUTPUT);
  digitalWrite(pin_sig, LOW);
  pinMode(LED_BUILTIN, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pin_int), subida, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin_sig, HIGH);
  delay(5000);
  digitalWrite(pin_sig, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(3000);
}

void subida(){
  Serial.println("Interrupcion de subida activada");
  digitalWrite(LED_BUILTIN, HIGH);
  detachInterrupt(0);
  attachInterrupt(digitalPinToInterrupt(pin_int), bajada, FALLING);
  }

void bajada(){
  Serial.println("Interrupcion de bajada activada");
  digitalWrite(LED_BUILTIN, LOW);
  detachInterrupt(0);
  attachInterrupt(digitalPinToInterrupt(pin_int), subida, RISING);
  }
