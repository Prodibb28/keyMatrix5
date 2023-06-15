#include <keyBoard.h>

keyBoard myKeyboard;

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = myKeyboard.getKey();
  Serial.println(key);
  delay(100);
}
