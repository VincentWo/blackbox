.intel_syntax noprefix

.globl irq0
irq0:
	cli
	pusha
	call irq0_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq0:
	popa
	sti
	iret
.globl irq1
irq1:
	cli
	pusha
	call irq1_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq1:
	popa
	sti
	iret
.globl irq2
irq2:
	cli
	pusha
	call irq2_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq2:
	popa
	sti
	iret
.globl irq3
irq3:
	cli
	pusha
	call irq3_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq3:
	popa
	sti
	iret
.globl irq4
irq4:
	cli
	pusha
	call irq4_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq4:
	popa
	sti
	iret
.globl irq5
irq5:
	cli
	pusha
	call irq5_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq5:
	popa
	sti
	iret
.globl irq6
irq6:
	cli
	pusha
	call irq6_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq6:
	popa
	sti
	iret
.globl irq7
irq7:
	cli
	pusha
	call irq7_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq7:
	popa
	sti
	iret
.globl irq8
irq8:
	cli
	pusha
	call irq8_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq8:
	popa
	sti
	iret
.globl irq9
irq9:
	cli
	pusha
	call irq9_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq9:
	popa
	sti
	iret
.globl irq10
irq10:
	cli
	pusha
	call irq10_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq10:
	popa
	sti
	iret
.globl irq11
irq11:
	cli
	pusha
	call irq11_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq11:
	popa
	sti
	iret
.globl irq12
irq12:
	cli
	pusha
	call irq12_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq12:
	popa
	sti
	iret
.globl irq13
irq13:
	cli
	pusha
	call irq13_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq13:
	popa
	sti
	iret
.globl irq14
irq14:
	cli
	pusha
	call irq14_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq14:
	popa
	sti
	iret
.globl irq15
irq15:
	cli
	pusha
	call irq15_handler
	test eax, eax
	jne no_hlt_irq0
	hlt
no_hlt_irq15:
	popa
	sti
	iret
