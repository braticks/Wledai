#pragma once

#include "wled.h"

class ZalgirisEffects : public Usermod {
  private:
    unsigned long lastTime = 0;
    
  public:
    void setup() {
      // Initialize
    }

    void loop() {
      if (!strip.isUpdating()) return;
      
      unsigned long now = millis();
      if (now - lastTime < 50) return;
      lastTime = now;
    }

    uint16_t getId() {
      return USERMOD_ID_ZALGIRIS;
    }
};
