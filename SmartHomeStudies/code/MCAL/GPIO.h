#include <avr/io.h>

#define io_setBit(port,pin) (port |= (1<<pin))
#define io_resetBit(port,pin) (port &= ~(1<<pin))
#define io_toggleBit(port,pin) (port ^= (1<<pin))
#define io_readBit(port,pin) (port & (1<<pin))