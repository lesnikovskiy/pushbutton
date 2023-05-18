#include "Relay.h"

const byte relay_1_pin{ 6 };
const byte relay_2_pin{ 5 };

Relay relay1(relay_1_pin);
Relay relay2(relay_2_pin);

void setup() {
  relay1.init();
  relay2.init();
}

void loop() {
  relay1.toggle();
  relay2.toggle();
  delay(2000);
}