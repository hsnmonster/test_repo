#include <stdio.h>









//Macro Function
#define add(a,b) (a+b)
#define io_setBit(port,pin) (port |= (1<<pin))


typedef struct {
	char* port; //Members
	char pin;
} Relay;

int main () {
	
	int z = (3+4);
	io_setBit(PORTB,5);
	
	Relay relay1 = createRelay(&PORTB,0);
	
	Relay relay2 = createRelay(&PORTB,1);
	
	Relay relay3 = createRelay(&PORTC,3);
	
	Relay relay4 = createRelay(&PORTC,4);
	
	
	relayOn(&relay1);
	relayOff(&relay4);
	
	
}

int add(int a, int b) {
	
	int c = a + b;
	
	return c;
}


//create
Relay createRelay(char* paramPort, char paramPin) {
	
	Relay relayVariable;
	
	relayVariable.port=paramPort;
	relayVariable.pin=paramPin;
	
	return relayVariable;
}
//on
void relayOn (Relay* relayInstance) { //passing by reference
	
	*(relayInstance->port) |= (1<<relayInstance->pin);
}
//off
void relayOff (Relay* relayInstance) {
	
	*(relayInstance->port) &= ~(1<<relayInstance->pin);
	io_resetBit(*(relayInstance->port),relayInstance->pin);
}

//I/O
//UART 
//MCAL Drivers [I/O (SET-RESET-TOGGLE-READ) - UART (init-sendChar-receiveChar)]
//Presentation
