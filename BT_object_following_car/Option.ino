int cmLeft;
int cmRight;

//Object following system code
void objectFollwer() {
  cmLeft = ultraLeft.read();
  cmRight = ultraRight.read();
  
  if (cmLeft >= 20 and cmRight >= 20) {
    parkingOff();
    headLight();
    forward();
  }
  else if (cmLeft < 15 and cmRight < 15) {
    parkingOff();
    headOff();
    Stop();
  }

  else if (  cmRight - cmLeft > 10) {
    headOff();
    parkingOff();
    digitalWrite(A1, HIGH);
    rotateLeft();
  }
  else if (cmLeft - cmRight > 10) {
    headOff();
    parkingOff();
    digitalWrite(A0, HIGH);
    rotateRight();
  }
}

//Obstacle avoiding system code
void obstacalAvoiding() {
  cmLeft = ultraLeft.read();
  cmRight = ultraRight.read();

  if (cmLeft, cmRight >= 15) {
    parkingOff();
    headLight();
    forward();
  }
  else if (cmLeft < 15 || cmRight < 15) {
    parkingOff();
    headOff();
    Stop();
    servoRight.write(90);
    servoLeft.write(90);
    delay(1000);
    cmLeft = ultraLeft.read();
    cmRight = ultraRight.read();
    headOff();
    parkingOff();

    if (cmLeft > cmRight) {
      digitalWrite(A1, HIGH);
      rotateLeft();
    }
    else {
      digitalWrite(A0, HIGH);
      rotateRight();
    }
    delay(500);
    Stop();
    parkingOff();
    servoLeft.write(0);
    servoRight.write(180);
  }
}

//Bluetooth controlling system code 
void btControl() {
  if (Serial.available())
  { char B = Serial.read();
    if (B == 'a' ) {
      rightSignal();
    }
    else if (B == 'b' ) {
      leftSignal();
    }
    else if (B == 'h' ) {
      headLight();
    }
    else if (B == 's' ) {
      Stop();
    }
    else if (B == 'R' ) {
      reverse();
    }
    else if (B == 'l' ) {
      rotateLeft();
    }
    else if (B == 'r' ) {
      rotateRight();
    }
    else if (B == 'f' ) {
      forward();
    }
    else if (B == 'F') {
      headOff();
    }
    else if (B == 'p') {
      parking();
    }
    else if (B == 'P') {
      parkingOff();
    }
    else if (B == 'c' ) {
      hone1();
    }
    else if (B == 'C' ) {
      hone2();
    }
    else if (B == 'd' ) {
      hone3();
    }
  }
}

void change() {
  tone(buzzer, 1912, 200);
  delay(200);
  tone(buzzer, 1912, 200);
}
