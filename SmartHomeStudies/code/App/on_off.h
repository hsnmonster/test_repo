#include "../HWAL/Relay.h"


Relay relay1;

void onOff_init() {
    relay1= relay_createRelay(RELAY_1_DDR,RELAY_1_PORT,RELAY_1_BIT);
}


void onOff_connectLoad(char loadIndex) {

    switch (loadIndes) {

        case 1: relay_relayOn(relay1); 
    }
}

void onOff_disconnectLoad() {

}

void onOff_disconnectAll() {
    
}