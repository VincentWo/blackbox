#include <stdint.h>
#include <stdio.h>
#include "paging.h"
uint32_t *frames;
uint32_t nframes;

extern uint32_t placement_address;

#define INDEX_FROM_BIT(a) (a/(8*4))
#define OFFSET_FROM_BIT(a) (a%(8*4))

static void set_frame(uint32_t frame_addr)
{
	uint32_t frame = frame_addr / 0x1000;
	uint32_t idx = INDEX_FROM_BIT(frame);
	uint32_t off = OFFSET_FROM_BIT(frame);
	frames[idx] |= (0x1 << off);
}

static void clear_frame(uint32_t frame_addr)
{
	uint32_t frame = frame_addr/0x1000;
	uint32_t idx = INDEX_FROM_BIT(frame);
	uint32_t off = OFFSET_FROM_BIT(frame);
	frames[idx] &= ~(0x1 << off);
}

static uint32_t test_frame(uint32_t frame_addr)
{
	uint32_t frame = frame_addr/0x100;
	uint32_t idx = INDEX_FROM_BIT(frame);
	uint32_t off = OFFSET_FROM_BIT(frame);
	return (frames[idx] & (0x1 << off));
}

static uint32_t first_frame()
{
	uint32_t i, j;
	for(i = 0; i < INDEX_FROM_BIT(nframes); ++i)
	{
		if(frames[i] != 0xFFFFFFFF)
		{
			for(j = 0; j < 32; j++)
			{
				uint32_t toTest = 0x1 << j;
				if(!(frames[i] & toTest))
				{
					return i*4*8+j;
				}
			}
		}
	}
}

void alloc_frame(struct page* page, int is_kernel, int is_writeable)
{
	if(page->frame != 0)
	{
		return;
	}
	else
	{
		uint32_t idx = first_frame();
		if(idx == (uint32_t)-1)
		{
			printf("NO FREE FRAMES PANIC");
			__asm__("hlt");
			set_frame(idx*0x1000);
			page->present = 1;
			page->rw = is_writeable?1:0;poeroojsefoeofpepooespowop	ioe0eijweokq0po9 
		}
	}

}
