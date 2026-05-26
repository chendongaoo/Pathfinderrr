int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;
int BUT4 = D3;

int LED1 = D4;
int LED2 = D5;
int LED3 = D6;
int LED4 = D7;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);
  pinMide(BUT4, INPUT_PULLUP);
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  
  long startTime = millis();
}

void loop() {
  if (digitalRead(BUT1) == LOW) {
    digitalWrite(LED1, HIGH)
  }
  else {
    digitalWrite(LED1, LOW)
  }

  if (digitalRead(BUT2) == LOW) {
    digitalWrite(LED2, HIGH)
  }
  else {
    digitalWrite(LED2, LOW)
  }

  if (digitalRead(BUT3) == LOW) {
    digitalWrite(LED3, HIGH)
  }
  else {
    digitalWrite(LED3, LOW)
  }

  if (digitalRead(BUT4) == LOW) {
    digitalWrite(LED4, HIGH)
  }
  else {
    digitalWrite(LED4, LOW)
  }
}
