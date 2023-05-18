#include "Arduino.h"
#include "Photographer.h"

Photographer::Photographer(Relay &focusRelay, Relay &shotRelay) {
  this->focusRelay = focusRelay;
  this->shotRelay = shotRelay;
}

void Photographer::begin() {
  focusRelay.init();
  shotRelay.init();
}

void Photographer::focus() {
  focusRelay.on();
}

void Photographer::shot()
{
  shotRelay.on();
}

void Photographer::turnOffFocusRelay() {
  focusRelay.off();
}

void Photographer::turnOffShotRelay() {
  shotRelay.off();
}

void Photographer::makeShot(unsigned long focusDuration, unsigned long shotDuration) {
  focus();
  delay(focusDuration);
  shot();
  delay(shotDuration);
  turnOffFocusRelay();
  delay(500);
  turnOffShotRelay();
  delay(500);
}
