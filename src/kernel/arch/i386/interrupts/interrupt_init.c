#include <pic.h>
#include "IDT.h"
void interrupt_init()
{
	init_idt();
	PIC_remap(0x20, 0x28);
}	
