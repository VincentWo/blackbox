#define PIC_MASTER	       0x20       /* Basic ports for the master and slave PIC */
#define PIC_SLAVE 				 0xA0
#define PIC_MASTER_COMMAND PIC_MASTER /* The command port for the master PIC */
#define PIC_MASTER_DATA    PIC_MASTER + 1 /* The data    port for the master PIC */
#define PIC_SLAVE_COMMAND  PIC_SLAVE
#define PIC_SLAVE_DATA		 PIC_SLAVE  + 1

#define PIC_END_OF_INTERRUPT 0x20 
