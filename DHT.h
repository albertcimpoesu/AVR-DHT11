#ifndef _DHT_h
#define _DHT_h


#if !defined(F_CPU)
  #error "Please define F_CPU for your project"
#endif

#define DHT_DDR       DDRB
#define DHT_PORT_OUT  PORTB
#define DHT_PORT_IN   PINB
#define DHT_PIN       PB3

#define LED PB4

#define SET_BIT(byte, bit) ((byte) |= (1UL << (bit)))

#define CLEAR_BIT(byte,bit) ((byte) &= ~(1UL << (bit)))

#define IS_SET(byte,bit) (((byte) & (1UL << (bit))) >> (bit))

#include <stdint.h>

void initDHT(void);

uint8_t fetchData(uint8_t* arr);

#endif
