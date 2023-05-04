
const int switchPin = 7;
void setup() {

  // put your setup code here, to run once:
pinMode(switchPin, INPUT_PULLUP);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

int switchState = digitalRead(switchPin);

if(switchState  == HIGH) {
  Serial.println("Hello World!");
} else {

  Serial.println("It's 2023");
}
delay(100);
}
