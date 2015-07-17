#include <iostream>
#include "scripting.h"
using namespace std;
using namespace scriptpp;
int main()
{
  const char* messages[] = {"Divide Overflow",
		                        "Debug",
														"Non-maskable Interrupt",
														"Breakpoint",
														"Overflow",
                            "Bound Range Exceeded",
                            "Invalid Opcode",
														"Device Not Avaible",
														"Double Fault",
														"Coprocessor Segment Overrun",
														"Invalid TSS",
														"Segment Not Present",
														"Stack-Segment Fault",
														"General Protection Fault",
														"Page Fault",
														"Reserved",
														"x87 Floating-Point Exception",
														"Alignment Check",
														"Machine Check",
														"SIMD Floating-Point Exception",
														"Virualization Exception",
														"Reserved",
														"Reserved",
														"Reserved",
														"Reserved",
														"Reserved",
														"Reserved",
														"Reserved",
														"Reserved",
														"Reserved",
														"Security Exception",
														"Reserved"};	
	out << ".intel_syntax noprefix\n";
	out << ".section .rodata\n";
	out << "exception_msg:\n";
	out.add_indent();
	out << ".asciz \"!!PROCESSOR EXCEPTION!!\\n\"\n";
	out.sub_indent();
	out << "errorcode_msg:\n";
	out.add_indent();
	out << ".asciz \"With Errorcode: %d\\n\"\n";
	out.sub_indent();

	for(int i = 0; i < 32; ++i)
	{
		out << "isr" << i << "_msg:\n";
		out.add_indent();
		out << ".asciz \"" << messages[i] << "\\n\"\n";
		out.sub_indent();
	}
	out << ".text\n";
	for(int i = 0; i < 32; ++i)
	{
		out << ".globl isr" << i << '\n';
		out << "isr" << i << ":\n";
		out.add_indent();
		out << "cli\n";
		out << "pusha\n";
		out << "\n";
		out << "mov ax, ds\n";
		out << "push eax\n";
		out << "\n";
		out << "mov ax, 0x10\n";
		out << "mov ds, ax\n";
		out << "mov es, ax\n";
		out << "mov fs, ax\n";
		out << "mov gs, ax\n";

		out << "push OFFSET exception_msg\n";
		out << "call terminal_writestring\n";
		out << "push OFFSET isr" << i << "_msg\n";
		out << "call terminal_writestring\n";
		if((i == 8 || (i >= 10 && i <= 14)))
		{
			out << "push [esp+44]\n";
			out << "push OFFSET errorcode_msg\n";
			out << "call printf\n";
			out << "add esp, 8\n";
		}
		out << "add esp, 4\n";
		out << "call terminal_writestring\n";
		out << "add esp, 4\n";

		out << "pop eax\n";
		out << "mov ds, ax\n";
		out << "mov es, ax\n";
		out << "mov fs, ax\n";
		out << "mov gs, ax\n";

		out << "popa\n";
		if((i == 8 || (i >= 10 && i <= 14)))
		{
			out << "add esp, 4\n";
		}
		out << "sti\n";
		out << "iret\n";
		out.sub_indent();
	}
}
