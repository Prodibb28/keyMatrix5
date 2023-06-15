/*
  keyBoard.h - Library for reading keys from an analog keyboard
  Author: Jaider Hoyos
  Date: June 14, 2023
  Description: This library allows reading the pressed keys from an analog keyboard
    and returns the corresponding value of the pressed key.
*/
#ifndef keyBoard_h
#define keyBoard_h

#include <Arduino.h>

class keyBoard {
  public:
    keyBoard();  // Constructor

    char getKey();

  private:
    char readKey();
};

#endif
