int ledR = 13;
int ledG = 12;
int ledY = 11;
int x = 0;
int trigger = 7;
int echo = 8;
int dist = 0;


void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
// for(x = 0; x < 3; x++) {
//   digitalWrite(ledR, HIGH);
//   delay(500);
//   digitalWrite(ledR, LOW);
//   delay(200);
//   }
// for(x = 0; x < 3; x++) {
//   digitalWrite(ledR, HIGH);
//   delay(1000);
//   digitalWrite(ledR, LOW);
//   delay(200);
//   }
  digitalWrite(trigger, LOW);
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  dist = pulseIn(echo, HIGH);

  dist = dist / 58;

  if(dist < 15) {
    digitalWrite(ledR, HIGH);
    digitalWrite(ledG, LOW);
    digitalWrite(ledY, LOW);
  }
  else if(dist < 25) {
    digitalWrite(ledY, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledG, LOW);
  }
  else if(dist < 40) {
    digitalWrite(ledG, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, LOW);

  }
  else {
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, LOW);
    digitalWrite(ledG, LOW);
  }
  Serial.println(dist);
}
