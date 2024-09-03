int ledR = 5;
int ledY = 6;
int ledG = 7;
int ledR2 = 4;
int ledG2 = 3;

void setup() {
pinMode(ledR, OUTPUT);
pinMode(ledY, OUTPUT);
pinMode(ledG, OUTPUT);
pinMode(ledR2, OUTPUT);
pinMode(ledG2, OUTPUT);


}

void loop() {
digitalWrite(ledG, HIGH);
digitalWrite(ledR2, HIGH);
delay(3000);
digitalWrite(ledG, LOW);
digitalWrite(ledY, HIGH);
delay(2000);
digitalWrite(ledY, LOW);
digitalWrite(ledR2, LOW);
digitalWrite(ledR, HIGH);
digitalWrite(ledG2, HIGH);
delay(2000);
digitalWrite(ledG2, LOW);
digitalWrite(ledR2, HIGH);
delay(300);
digitalWrite(ledR2, LOW);
delay(300);
digitalWrite(ledR2, HIGH);
delay(300);
digitalWrite(ledR2, LOW);
delay(300);
digitalWrite(ledR2, HIGH);
delay(300);
digitalWrite(ledR2, LOW);
delay(300);
digitalWrite(ledR2, HIGH);
delay(300);
digitalWrite(ledR2, LOW);
delay(300);
digitalWrite(ledR, LOW);


}
