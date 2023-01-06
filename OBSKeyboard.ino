#include <Keyboard.h>
void setup() {
  pinMode(7, INPUT);
  pinMode(8, INPUT);
}

void loop() {
  if (digitalRead(7) == HIGH){
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F24);
    delay(100);
    Keyboard.releaseAll();
  }
  if (digitalRead(8) == HIGH){
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F23);
    delay(100);
    Keyboard.releaseAll();
  }
}
