.intel_syntax noprefix


.globl isr_common_stub
isr_common_stub:
	pusha             /*Pushes edi, esi, ebp, esp, ebx, edx, ecx, eax*/
	call isr_handler
	popa
	add esp, 8				/*Cleans up the pushed error code and pushed ISR number*/
	sti								
	iret
