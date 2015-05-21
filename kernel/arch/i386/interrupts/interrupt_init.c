#include <pic.h>
#include "IDT.h"
void interrupt_init()
{
	PIC_remap(0x20, 0x28);
	load_IDT();
}	
