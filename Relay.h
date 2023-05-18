#ifndef RELAY_H
#define RELAY_H

#include <Arduino.h>

class Relay {
private:
  byte pin;
  byte state;
public:
  Relay() {}
  Relay(byte pin);

  void init();
  void on();
  void off();
  void toggle();
};

#endif