/*
  keyBoard.cpp - Implementation of the library for reading keys from an analog keyboard
  Author: Jaider Hoyos
  Date: June 14, 2023
  Description: This library allows reading the pressed keys from an analog keyboard
    and returns the corresponding value of the pressed key.
*/
#include "keyBoard.h"

keyBoard::keyBoard() {
  // Constructor: Perform initial configurations if necessary
}

char keyBoard::getKey() {
  char keyVal = '0';
  while (keyVal == '0') {
    keyVal = readKey();
  }
  return keyVal;
}

char keyBoard::readKey() {
  int value = analogRead(A0);
  if (value < 50) {
    Serial.println("Right");
    return '1';
  } else if (value > 70 && value < 180) {
    Serial.println("Up");
    return '2';
  } else if (value > 200 && value < 360) {
    Serial.println("Down");
    return '3';
  } else if (value > 400 && value < 600) {
    Serial.println("Left");
    return '4';
  } else if (value > 650 && value < 820) {
    Serial.println("Select");
    return '5';
  }
  return '0';
}
