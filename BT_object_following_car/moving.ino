int in1 = 2;
int in2 = 3;
int in3 = 4;
int in4 = 5;

void Stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  digitalWrite(Brk, HIGH);  //Breack Light
  digitalWrite(Rvs, LOW); //Reverse Light Off
}

void reverse() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); //reverse
  digitalWrite(Brk, LOW);// break off
  digitalWrite(A2, HIGH); // Reverse Light On
}

void rotateLeft() {
  digitalWrite(Brk, LOW);// break off
  digitalWrite(Rvs, LOW); //Reverse Light Off
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void rotateRight() {

  digitalWrite(Brk, LOW);// break off
  digitalWrite(Rvs, LOW); //Reverse Light Off
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void forward() {

  digitalWrite(Brk, LOW);// break off
  digitalWrite(Rvs, LOW); //Reverse Light Off
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);//forward
}
