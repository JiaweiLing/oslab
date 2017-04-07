#ifndef __X86_IO_H__
#define __X86_IO_H__

#include "../game.h"

static inline uint8_t in_byte(uint16_t port)
{
	uint8_t data;
	asm volatile("in %1, %0" : "=a"(data) : "d"(port));
	return data;
}

static inline void out_byte(uint16_t port, int8_t data)
{
	asm volatile("out %%al, %%dx" : : "a"(data), "d"(port));
}

#endif
