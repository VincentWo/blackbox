#include <iostream>
#include "scripting.h"

using namespace std;
using namespace scriptpp;
int main()
{
	out << ".intel_syntax noprefix\n";
	out << "\n";
	for(int i = 0; i < 16; ++i)
	{
		out << ".globl irq" << i << "\n";
		out << "irq" << i <<  ":\n";
		out.add_indent();
		out << "cli\n";
		out << "pusha\n";
		out << "call irq" << i << "_handler\n";
		out << "test eax, eax\n";
		out << "jne no_hlt_irq0\n";
		out << "hlt\n";
		out.sub_indent();
		out << "no_hlt_irq" << i << ":\n";
		out.add_indent();
		out << "popa\n";
		out << "sti\n";
		out << "iret\n";
		out.sub_indent();
	}
}
