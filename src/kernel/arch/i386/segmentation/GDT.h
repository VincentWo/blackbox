#include <stdint.h>
struct gdt_entry
{
	uint16_t limit_low; // The loer 16 bit of the limit.
	uint16_t base_low;  // The lower 16 bits of the base
	uint8_t  base_middle; // The next 8 bits of the base.
	uint8_t  access;      // Access flags, determine what ring this segment can be used in.
	uint8_t  granularity;
	uint8_t  base_high;    // The last 8 bits of the base.
}__attribute__((packed));

struct gdt_ptr
{
	uint16_t length;
	uint32_t address;
}__attribute__((packed));

void init_gdt();
