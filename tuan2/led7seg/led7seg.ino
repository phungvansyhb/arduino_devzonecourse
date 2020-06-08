int number[10][7] = {
  {1, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 0, 0, 1, 0, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {0, 0, 1, 1, 0, 0, 1},
  {0, 0, 1, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 1, 0},
  {1, 1, 1, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0, 0}
};

void numberShow(int i) {
  for (int pin = 3; pin <= 9 ; pin++) {
    digitalWrite(pin, number[i][pin - 3]);
  }
}

void setup() {
  for (int pin = 3 ; pin <= 9 ; pin++) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, HIGH);
  }
}

void loop() {

  int j = 0;
  while (j < 9) {
    numberShow(j);
    delay(1000);
    j++;
  }
  while (j > 0) {
    numberShow(j);
    delay(1000);
    j--;
  }
}
