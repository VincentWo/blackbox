#include <inline-ass.h>
#include "PIC/pic-def.h"
#include <stdbool.h>
bool irq0_handler()
{
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq1_handler()
{
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq2_handler()
{
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq3_handler()
{
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq4_handler()
{
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq5_handler()
{
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq6_handler()
{
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq7_handler()
{
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq8_handler()
{
	outb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq9_handler()
{
	outb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq10_handler()
{
	outb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq11_handler()
{
	outb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq12_handler()
{
	outb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq13_handler()
{
	outb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq14_handler()
{
	outb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
bool irq15_handler()
{
	outb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);
	outb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);
	return true;
}
