//C++

int pins[] = {7, 8, 9, 10, 11, 12};

int patterns[][6] = {
  {HIGH, HIGH, HIGH, LOW, LOW, LOW},
  {LOW, HIGH, HIGH, HIGH, LOW, LOW},
  {LOW, LOW, HIGH, HIGH, HIGH, LOW},
  {LOW, LOW, LOW, HIGH, HIGH, HIGH},
  {LOW, LOW, HIGH, HIGH, HIGH, LOW},
  {LOW, HIGH, HIGH, HIGH, LOW, LOW}
};

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  for (int step = 0; step < 6; step++) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(pins[i], patterns[step][i]);
    }
    delay(100);
  }
}