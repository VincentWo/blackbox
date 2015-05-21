#include <stdint.h>
struct IDTEntry {
	uint16_t offset_1;  // offset bits 0...15
	uint16_t selector;  // a code segment selector in GDT or LDT
	uint8_t  zero;      // Unused set to 0
	uint8_t  type_attr; // type and attributes, see below
	uint16_t offset_2;   // offset bits 16...31
};

inline struct IDTEntry* make32bitInterruptGate(uint32_t address, struct IDTEntry* entry)
{
	entry->zero = 0;
	entry->offset_2 = (uint16_t) address;
	entry->offset_1 = address >> 16;
	entry->type_attr = 0x8E;
	entry->selector = 0;
}
