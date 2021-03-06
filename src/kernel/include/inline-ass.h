#include <stdint.h>
inline void outb(uint16_t port, uint8_t val)
{
	asm volatile("outb %0, %1" : : "a"(val), "Nd"(port) );
}

inline void outw(uint16_t port, uint16_t val)
{
	asm volatile("outw %0, %1" : : "a"(val), "Nd"(port) );
}

inline void outl(uint16_t port, uint8_t val)
{
	asm volatile("outl %0, %1" : : "a"(val), "Nd"(port) );
}

inline uint8_t inb(uint16_t port)
{
	uint8_t ret;
	asm volatile("inb %1, %0" : "=a"(ret) : "Nd"(port) );
	return ret;
}

inline uint16_t inw(uint16_t port)
{
	uint16_t ret;
	asm volatile("inw %1, %0" : "=a"(ret) : "Nd"(port) );
	return ret;
}

inline uint32_t inl(uint32_t port)
{
	uint32_t ret;
	asm volatile("inl %1, %0" : "=a"(ret) : "Nd"(port) );
	return ret;
}

inline void io_wait(void)
{
	asm volatile("outb %%al, $0x80" : : "a"(0) );
}
