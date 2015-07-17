.intel_syntax noprefix
.section .rodata
exception_msg:
	.asciz "!!PROCESSOR EXCEPTION!!\n"
errorcode_msg:
	.asciz "With Errorcode: %d\n"
isr0_msg:
	.asciz "Divide Overflow\n"
isr1_msg:
	.asciz "Debug\n"
isr2_msg:
	.asciz "Non-maskable Interrupt\n"
isr3_msg:
	.asciz "Breakpoint\n"
isr4_msg:
	.asciz "Overflow\n"
isr5_msg:
	.asciz "Bound Range Exceeded\n"
isr6_msg:
	.asciz "Invalid Opcode\n"
isr7_msg:
	.asciz "Device Not Avaible\n"
isr8_msg:
	.asciz "Double Fault\n"
isr9_msg:
	.asciz "Coprocessor Segment Overrun\n"
isr10_msg:
	.asciz "Invalid TSS\n"
isr11_msg:
	.asciz "Segment Not Present\n"
isr12_msg:
	.asciz "Stack-Segment Fault\n"
isr13_msg:
	.asciz "General Protection Fault\n"
isr14_msg:
	.asciz "Page Fault\n"
isr15_msg:
	.asciz "Reserved\n"
isr16_msg:
	.asciz "x87 Floating-Point Exception\n"
isr17_msg:
	.asciz "Alignment Check\n"
isr18_msg:
	.asciz "Machine Check\n"
isr19_msg:
	.asciz "SIMD Floating-Point Exception\n"
isr20_msg:
	.asciz "Virtualization Exception\n"
isr21_msg:
	.asciz "Reserved\n"
isr22_msg:
	.asciz "Reserved\n"
isr23_msg:
	.asciz "Reserved\n"
isr24_msg:
	.asciz "Reserved\n"
isr25_msg:
	.asciz "Reserved\n"
isr26_msg:
	.asciz "Reserved\n"
isr27_msg:
	.asciz "Reserved\n"
isr28_msg:
	.asciz "Reserved\n"
isr29_msg:
	.asciz "Reserved\n"
isr30_msg:
	.asciz "Security Exception\n"
isr31_msg:
	.asciz "Reserved\n"
.text
.globl isr0
isr0:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr0_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr1
isr1:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr1_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr2
isr2:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr2_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr3
isr3:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr3_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr4
isr4:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr4_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr5
isr5:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr5_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr6
isr6:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr6_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr7
isr7:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr7_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr8
isr8:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr8_msg
	call terminal_writestring
	push [esp+44]
	push OFFSET errorcode_msg
	call printf
	add esp, 8
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	add esp, 4
	sti
	iret
.globl isr9
isr9:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr9_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr10
isr10:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr10_msg
	call terminal_writestring
	push [esp+44]
	push OFFSET errorcode_msg
	call printf
	add esp, 8
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	add esp, 4
	sti
	iret
.globl isr11
isr11:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr11_msg
	call terminal_writestring
	push [esp+44]
	push OFFSET errorcode_msg
	call printf
	add esp, 8
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	add esp, 4
	sti
	iret
.globl isr12
isr12:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr12_msg
	call terminal_writestring
	push [esp+44]
	push OFFSET errorcode_msg
	call printf
	add esp, 8
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	add esp, 4
	sti
	iret
.globl isr13
isr13:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr13_msg
	call terminal_writestring
	push [esp+44]
	push OFFSET errorcode_msg
	call printf
	add esp, 8
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	add esp, 4
	hlt
	sti
	iret
.globl isr14
isr14:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr14_msg
	call terminal_writestring
	push [esp+44]
	push OFFSET errorcode_msg
	call printf
	add esp, 8
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	add esp, 4
	sti
	iret
.globl isr15
isr15:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr15_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr16
isr16:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr16_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr17
isr17:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr17_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr18
isr18:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr18_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr19
isr19:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr19_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr20
isr20:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr20_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr21
isr21:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr21_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr22
isr22:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr22_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr23
isr23:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr23_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr24
isr24:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr24_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr25
isr25:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr25_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr26
isr26:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr26_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr27
isr27:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr27_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr28
isr28:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr28_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr29
isr29:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr29_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr30
isr30:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr30_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
.globl isr31
isr31:
	cli
	pusha
	
	mov ax, ds
	push eax
	
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	push OFFSET exception_msg
	call terminal_writestring
	push OFFSET isr31_msg
	call terminal_writestring
	add esp, 4
	call terminal_writestring
	add esp, 4
	pop eax
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	popa
	sti
	iret
