#define pin_int 2
#define pin_sig 9

volatile int pulsos;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin_sig, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pin_int), contador_de_pulsos, CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiempo();
  Serial.println("retorno al loop principal");
  delay(4000);
}

void contador_de_pulsos(){
  pulsos++;
}

void tiempo(){
  pulsos = 0;
  Serial.println("inicio interrupción");
  interrupts();
  delay(10000);
  noInterrupts();
  Serial.println(pulsos);
}

