#include "Relay.h"
#include "Photographer.h"

const byte focusRelayPin{ 5 };
const byte shotRelayPin{ 6 };

Relay focusRelay(focusRelayPin);
Relay shotRelay(shotRelayPin);

Photographer photographer(focusRelay, shotRelay);

void setup() {
  photographer.begin();
  delay(1000);
}

void loop() {
  photographer.makeShot(2000, 3000);
  photographer.makeShot(2000, 5000);
  delay(2000);
}