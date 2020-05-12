#include "../MCAL/GPIO.h"

#define RELAY_1_DDR &DDRB
#define REALY_1_PORT &PORTB
#define RELAY_1_BIT 5

typedef struct {
    volatile char* ddr; //Members
	volatile char* port; 
	char pin;
} Relay;

Relay relay_createRelay(volatile char* paramDdr, volatile char* paramPort, char paramPin) {
    
    Relay relayVariable;
	
    relayVariable.ddr=paramDdr;
	relayVariable.port=paramPort;
	relayVariable.pin=paramPin;
	
    io_setBit(*(relayVariable.ddr),relayVariable.pin);

	return relayVariable;
}

//on
void relay_relayOn (Relay* relayInstance) { //passing by reference
	
	io_setBit(*(relayInstance->port),relayInstance->pin);
}
//off
void relay_relayOff (Relay* relayInstance) {
	
	io_resetBit(*(relayInstance->port),relayInstance->pin);
}