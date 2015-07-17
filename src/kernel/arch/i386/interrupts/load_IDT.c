#include <stdint.h>
#define IDT_ADRESS 0
struct IDT
{
	uint16_t length;
	uint32_t address;
};
void load_IDT()
{ 
 struct IDT* idt = (struct IDT*)0;
 idt->length = ;
 idt->address = 0 + sizeof(struct IDT);
}
