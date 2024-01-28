#include <Ultrasonic.h>
#include <Servo.h>

Ultrasonic ultraLeft = Ultrasonic(8, 9);
Ultrasonic ultraRight = Ultrasonic(7, 6);

Servo servoLeft;
Servo servoRight;

int check = 0;
int Brk = 12;
int Rvs = A2;
int buzzer = 13;

void setup() {
  Serial.begin(9600);
  servoLeft.attach(11);
  servoRight.attach(10);
  servoLeft.write(0);
  delay(150);
  servoRight.write(180);
  delay(150);
  for (int pin = 2; pin < 6; pin++)
  {
    pinMode(pin, OUTPUT);
  }
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}

void loop() {
  signalCheck();
  while (check == 1) {
    objectFollwer();
    signalCheck();
  }

  while (check == 2) {
    obstacalAvoiding();
    signalCheck();
  }

  while (check == 3) {
    btControl();
    signalCheck();
  }
}

//OPTION checking
void signalCheck() {
  if (Serial.available())
  { char B = Serial.read();
    if (B == '1' ) {
      Stop();
      delay(1000);
      servoLeft.write(0);
      servoRight.write(180);
      change();
      check = 1;
    }
    if (B == '2' ) {
      Stop();
      delay(1000);
      servoLeft.write(0);
      servoRight.write(180);
      change();
      check = 2;
    }
    if (B == '3' ) {
      Stop();
      delay(1000);
      change();
      digitalWrite(Brk, LOW);// break off
      check = 3;
    }
  }
}
