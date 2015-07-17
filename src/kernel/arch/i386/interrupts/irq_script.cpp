#include <iostream>

using namespace std;
int main()
{
	cout << "#include <inline-ass.h>\n";
	cout << "#include \"PIC/pic-def.h\"\n";
	cout << "#include <stdbool.h>\n";
	for(int i = 0; i < 16; ++i)
	{
		cout << "bool irq" << i << "_handler()\n";
		cout << "{\n";
		if(i > 7)
			cout << "\toutb(PIC_SLAVE_COMMAND, PIC_END_OF_INTERRUPT);\n";
		cout << "\toutb(PIC_MASTER_COMMAND, PIC_END_OF_INTERRUPT);\n";
		cout << "\treturn true;\n";
		cout << "}\n";
	}
}
