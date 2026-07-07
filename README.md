**Custom Software I²C LCD Interface for Arduino Pro Mini**

This project demonstrates how to operate a 16x2 I²C LCD display using an Arduino Pro Mini when the standard hardware I²C pins (A4 and A5) are unavailable. A custom software-based I²C library was developed using digital pins 6 (SDA) and 7 (SCL), allowing the LCD to communicate through a virtual I²C bus.

The custom library provides essential LCD functions including text display, cursor positioning, screen clearing, home positioning, display scrolling, and backlight control. A test application was created to display messages, count values, scroll text across the screen, and control the LCD backlight.

This project demonstrates software communication techniques, custom library development, and efficient resource management on the ATmega168-based Arduino Pro Mini. The solution offers flexibility for projects where the dedicated I²C pins are already in use, enabling additional peripherals to be connected without hardware modifications.

**Features:**

* Software I²C communication on digital pins 6 and 7
* 16x2 LCD display support via I²C backpack
* Custom lightweight LCD library
* Text display and cursor control
* Screen clear and home functions
* Left and right text scrolling
* LCD backlight on/off control
* Compatible with Arduino Pro Mini ATmega168/328P

This project provides a practical workaround for hardware limitations while maintaining the simplicity and reduced wiring benefits of an I²C LCD interface.
