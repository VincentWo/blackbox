.intel_syntax noprefix
.globl gdt_flush



gdt_flush:
	mov eax, [esp+4]
	lgdt [eax]

	jmp 0x08:.flush

.flush:
	mov ax, 0x10
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	mov ss, ax
	ret
