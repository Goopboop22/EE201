// Pin configuration
const int segmentPins[7] = {2, 3, 4, 5, 6, 7, 8};  // Pins for segments a, b, c, d, e, f, g
const int digitPins[4] = {9, 10, 11, 12};        // Pins for digits 1, 2, 3, 4

const byte digitPatterns[10] = {
  B11111100,  // 0
  B01100000,  // 1
  B11011010,  // 2
  B11110010,  // 3
  B01100110,  // 4
  B10110110,  // 5
  B10111110,  // 6
  B11100000,  // 7
  B11111110,  // 8
  B11110110   // 9
};

void setup() {
  
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  for (int i = 0; i < 4; i++) {
    pinMode(digitPins[i], OUTPUT);
  }
}

void loop() {
  
  for (int i = 9; i >= 0; i--) {
    displayNumber(i);
    delay(1500);  
  }
}

void displayNumber(int number) {
  
  for (int i = 0; i < 7; i++) {
    if (bitRead(digitPatterns[number], i)) {
      digitalWrite(segmentPins[i], HIGH);
    } else {
      digitalWrite(segmentPins[i], LOW);
    }
  }
  
  
  for (int i = 0; i < 4; i++) {
    digitalWrite(digitPins[i], HIGH);
  }
  digitalWrite(digitPins[number], LOW);
}
