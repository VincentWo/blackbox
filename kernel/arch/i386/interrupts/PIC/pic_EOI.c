#include <inline-assembly.h>
#include <stdint.h>
#include "pic-def.h"

#define PIC_END_OF_INTERRUPT 0x20


/* Signals the PIC that the interrupt specified by "irq" was handled
 * and it can continue to send interrupt
 */

void PIC_sendEOI(uint8_t irq)
{
	if(irq >= 8)
		outb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
}


