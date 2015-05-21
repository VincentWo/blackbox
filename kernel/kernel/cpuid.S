.intel_syntax noprefix
.text
hasCPUID:
	pushfd
	pushfd
	or word ptr [esp], 0x00200000
	popfd
	pushfd
	pop eax
	xor eax,[esp]
	popfd
	and eax, 0x00200000
	ret
