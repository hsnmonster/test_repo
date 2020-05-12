#include "App/on_off.h"
#include <util/delay.h>

//Arduino ATmega328 pin Map

int main () {

  Relay relay1 = relay_createRelay(RELAY_1_DDR,REALY_1_PORT,RELAY_1_BIT);
  while (1) {
     relay_relayOn(&relay1);
     _delay_ms(100);
     relay_relayOff(&relay1);
     _delay_ms(100); 
  }
}

