#ifndef PHOTOGRAPHER_H
#define PHOTOGRAPHER_H

#include <Arduino.h>
#include "Relay.h"

class Photographer {
private:
  Relay focusRelay;
  Relay shotRelay;

  void focus();
  void shot();
  void turnOffFocusRelay();
  void turnOffShotRelay();
public:
  Photographer() {}
  Photographer(Relay &focusRelay, Relay &shotRelay);

  void begin();

  void makeShot(unsigned long focusDuration, unsigned long shotDuration);
};

#endif