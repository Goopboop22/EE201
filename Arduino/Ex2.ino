
const int ledPin1 = 2;
const int ledPin2 = 3;

int blinkDelay = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, LOW);

delay(blinkDelay);

digitalWrite(ledPin1, LOW;
digitalWrite(ledPin2, HIGH);

delay(blinkDelay);
}
