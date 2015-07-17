#include <stdint.h>
#include <inline-ass.h>
#include "pic-def.h"
/* reinitialize the PIC controllers, given them specified vector offsets
 * so that they don't conflict with CPU Exceptions 
 */

#define ICW1_ICW4      0x01 /* ICW4 (not) needed */
#define ICW1_SINGLE    0x02 /* Single (cascade) mode */
#define ICW1_INTERVAL4 0x04 /* Call address interval 4 (8) */
#define ICW1_LEVEL     0x08	/* Level triggered (edge) mode */
#define ICW1_INIT      0x10 /* Initialization - required */

#define ICW4_8086       0x01 /* 8086/88 (MCS-80/85) mode */
#define ICW4_AUTO       0x02 /* autor (normal) EOI */
#define ICW4_BUF_SLAVE  0x08 /* Buffered mode/slave */
#define ICW4_BUF_MASTER 0x0C /* Buffered mode/master */
#define ICW4_SFNM       0x10 /* Special fully nested (not) */


/*
 * arguments:
 * 				offset1 - vector offset for master PIC
 * 									vectors on the master become offset1...offset1+7
 * 				offset2 - same for slave PIC: offset2...offset2+7
 */
void PIC_remap(uint8_t master_offset, uint8_t slave_offset)
{
	uint8_t master_mask;
	uint8_t slave_mask;

	master_mask = inb(PIC_MASTER_DATA);/* If no command was send the Data Port can be use to get the interrupt masks */
	slave_mask  = inb(PIC_SLAVE_DATA);

	outb(PIC_MASTER_COMMAND, ICW1_INIT+ICW1_ICW4); /* starts the initialization sequence (in cascade mode) */
	io_wait();
	outb(PIC_SLAVE_COMMAND,  ICW1_INIT+ICW1_ICW4);
	io_wait();
	outb(PIC_MASTER_DATA, master_offset); /* Set the offset of the master PIC */
	io_wait();
	outb(PIC_SLAVE_DATA,  slave_offset);  /* The same for the slave */
	io_wait();
	outb(PIC_MASTER_DATA, 4);             /* Tell master PIC that there is a slave PIC at IQ2 (0000 0100) */
	io_wait();
	outb(PIC_SLAVE_DATA, 2);              /* Tell slave  PIC it's cascade identity (0000 0010) */
	io_wait();
	outb(PIC_MASTER_DATA, ICW4_8086);
	io_wait();
	outb(PIC_SLAVE_DATA,  ICW4_8086);
	io_wait();

	outb(PIC_MASTER_DATA, master_mask); /* Restore the saved masks */
	outb(PIC_SLAVE_DATA,  slave_mask );
}
