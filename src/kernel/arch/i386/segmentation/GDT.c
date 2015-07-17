#include "GDT.h"
#define SEGMENT_TYPE_CODE_P0 0x9A
#define SEGMENT_TYPE_CODE_P3 0xFA
#define SEGMENT_TYPE_DATA_P0 0x92
#define SEGMENT_TYPE_DATA_P3 0xF2
extern void gdt_flush(uint32_t);

// Internal function prototypes
struct gdt_entry gdt_entries[5];
struct gdt_ptr gdt_ptr;

static void gdt_set_gate(int32_t num, uint32_t base, uint32_t limit, uint8_t access, uint8_t gran)
{
	gdt_entries[num].base_low = (base & 0xFFFF);
	gdt_entries[num].base_middle = (base >> 16) & 0xFF;
	gdt_entries[num].base_high   = (base >> 24) & 0xFF;

	gdt_entries[num].limit_low   = (limit  & 0xFFFF);
	gdt_entries[num].granularity = (limit >> 16) & 0x0F;
	
	gdt_entries[num].granularity |= gran & 0xF0;
	gdt_entries[num].access      = access;
}

void init_gdt()
{
	gdt_ptr.length = (sizeof(struct gdt_entry) * 5) -1;
	gdt_ptr.address   = (uint32_t) &gdt_entries;

	gdt_set_gate(0, 0, 0, 0, 0);   // Null segment
	gdt_set_gate(1, 0, 0xFFFFFFFF, SEGMENT_TYPE_CODE_P0, 0xCF); // Code segment
	gdt_set_gate(2, 0, 0xFFFFFFFF, SEGMENT_TYPE_DATA_P0, 0xCF); // Data segment
	gdt_set_gate(3, 0, 0xFFFFFFFF, SEGMENT_TYPE_CODE_P3, 0xCF); // User mode code segment
	gdt_set_gate(4, 0, 0xFFFFFFFF, SEGMENT_TYPE_DATA_P3, 0xCF); // User mode data segement

	gdt_flush((uint32_t)&gdt_ptr);
}

