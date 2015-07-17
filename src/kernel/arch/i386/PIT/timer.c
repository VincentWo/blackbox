#include "timer.h"
#include <inline-ass.h>
void init_timer(uint32_t frequency)
{
	uint32_t divisor = 1193180 / frequency;

	outb(0x43, 0x36);

	uint8_t l = (uint8_t) divisor & 0xFF;
	uint8_t h = (uint8_t) divisor>>8;

	outb(0x40, l);
	outb(0x40, h);
}
