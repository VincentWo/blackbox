#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <kernel/tty.h>

struct multiboot
{
	// TODO: Fill this with the data 
  // @ https://www.gnu.org/software/grub/manual/multiboot/multiboot.html#Boot-information-format
};
int kernel_main(struct multiboot *mboot_ptr)
{
	printf("Hello, kernel World!\n");
  printf("%p\n", stdin);
	printf("%p\n", stdout);
	printf("%p\n", stderr);
	for(;;)
	{
	};
	return 0xDEADBABA;
}

