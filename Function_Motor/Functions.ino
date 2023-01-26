void Stop(){
  digitalWrite(RF, HIGH);
  digitalWrite(RR, HIGH);
  digitalWrite(LF, HIGH);
  digitalWrite(LR, HIGH);
}

void Forward(){
  digitalWrite(RF, HIGH);
  digitalWrite(RR, LOW);
  digitalWrite(LF, HIGH);
  digitalWrite(LR, LOW);
}

void Backwards(){
  digitalWrite(RF, LOW);
  digitalWrite(RR, HIGH);
  digitalWrite(LF, LOW);
  digitalWrite(LR, HIGH);
}

void Right(){
  digitalWrite(RF, LOW);
  digitalWrite(RR, HIGH);
  digitalWrite(LF, HIGH);
  digitalWrite(LR, LOW);
}

void Left(){
  digitalWrite(RF, HIGH);
  digitalWrite(RR, LOW);
  digitalWrite(LF, LOW);
  digitalWrite(LR, HIGH);
}

void Stop2(){
  digitalWrite(RF, LOW);
  digitalWrite(RR, LOW);
  digitalWrite(LF, LOW);
  digitalWrite(LR, LOW);
}
