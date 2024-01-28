int signal_Light_pin;

void rightSignal() {
  signal_Light_pin = A0;
  displaySignal();
}

void leftSignal() {
  signal_Light_pin = A1;
  displaySignal();
}

void headLight() {
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);
}

void headOff() {
  digitalWrite(A3, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(A5, LOW);
}

void displaySignal() {
  for (int y = 0; y < 5; y++) {
    digitalWrite(signal_Light_pin, HIGH);
    delay(300);
    digitalWrite(signal_Light_pin, LOW);
    delay(300);
  }
}

void parking() {
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
}

void parkingOff() {

  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
}
