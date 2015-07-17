#ifndef PAGING_H
#define PAGING_H

struct page
{
	uint32_t present   : 1;   //Page present?
	uint32_t rw        : 1;  // Read-only if clear, read-write if set
	uint32_t user      : 1;  // Supervisor level only if clear
	uint32_t accessed  : 1;  // Has the page been accessed since last refresh?
	uint32_t dirty     : 1;  // Has the page been written to since last refresh?
	uint32_t unused    : 1;  // Amalgamation of unused and reserved bits
	uint32_t frame     : 20; // Frame address (shifted right 12 bytes)
};

struct page_table
{
	struct page pages[1024];
}

struct page_directory
{
	struct page_table *tables[1024];

	/**
	 * Array of pointers to the pagestables aboce, but gives their *physical*
	 * location, for loading into the CR3 register.
	 */
	uint32_t tablesPhysical[1024];
	/**
	 * The *physical* address of tablesPhysical. This comes into play
	 * when we get our kernel heap allocated and the directory
	 * may be in a different location in virtual memory.
	 */
	uint32_t physicalAddr;
};

void initialise_paging();

void load_page_directory(struct page_directory *new);

page_t *get_page(uint32_t address, bool make, struct page_directory *dir);
