#include "Relay.h"

Relay::Relay(byte pin) {
  this->pin = pin;
}

void Relay::init() {
  pinMode(pin, OUTPUT);
  off();
}

void Relay::on() {
  state = LOW;
  digitalWrite(pin, state);
}

void Relay::off() {
  state = HIGH;
  digitalWrite(pin, state);
}

void Relay::toggle() {
  state = state == HIGH ? LOW : HIGH;
  digitalWrite(pin, state);
}