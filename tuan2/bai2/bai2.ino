int pinBtn = 1;
int pinLed = 12;

void setup() {
  pinMode(pinBtn, INPUT_PULLUP);
  pinMode(pinLed,OUTPUT);
}

void loop() {
  int state = digitalRead(pinBtn);
  digitalWrite(pinLed,state);
}
