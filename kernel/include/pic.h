#include <stdint.h>


/* Sends the signal that the Interrupt specified by "irq" was handled" */
void PIC_sendEOI(uint8_t irq);

/* Initialize and remap the PIC so that the CPU exceptions and interrupts dont overlap */
void PIC_remap(uint8_t, uint8_t);
