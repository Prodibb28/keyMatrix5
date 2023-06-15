# keyBoard Library

The keyBoard library provides simple functionality to read keys from an analog sensor in Arduino. It allows detecting key presses in specific directions (up, down, left, right, and select).

Author: Jaider Hoyos
Date: 14th June 2023
Version: 1.0

## Description

The keyBoard library allows you to interact with an analog matrix keypad using a single analog pin on Arduino. It provides functions to read the pressed keys and detect the corresponding direction. It is useful for creating simple user interfaces and controlling navigation or menu selection in applications.

## Usage

1. Include the keyBoard library in your Arduino project.
2. Create an instance of the keyBoard class, specifying the analog pin used.
3. Use the `getKey()` function to read the pressed keys and obtain the corresponding direction.

Enjoy using the keyBoard library in your Arduino projects!

Note: Make sure you have the LiquidCrystal_I2C library installed if you want to use the LCD display in conjunction with the keyBoard library.
