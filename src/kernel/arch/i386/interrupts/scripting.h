#ifndef INCLUDE_SCRIPTING_H
#define INCLUDE_SCRIPTING_H
#include <iostream>

namespace scriptpp
{
	class PrintObject
	{
		public:
			PrintObject(size_t indent_level = 0, char indent_char = '\t') : indent_level_(indent_level), indent_char_(indent_char){};
			template<typename T> std::ostream& operator<<(T val)
			{
				for(int i = 0; i < indent_level_; ++i)
				{
					std::cout << indent_char_;
				}
				return std::cout << val;
			};
			void add_indent()
			{
				++indent_level_;
			};
			void sub_indent()
			{
				--indent_level_;
			};
			void indent_char(char c)
			{
				indent_char_ = c;
			};
			char indent_char()
			{
				return indent_char_;
			};
		private:
			size_t indent_level_;
			char   indent_char_;
	};

	PrintObject out;
}
#endif
