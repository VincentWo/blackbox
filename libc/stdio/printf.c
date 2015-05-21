#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdint-gcc.h>

static char* reverse(char* str)
{
	char buffer;
	size_t length = strlen(str);
	buffer = str[0];
	for(size_t i = 0; i < length; ++i)
	{
		str[0] = str[length - 1 - i];
	}
	str[length-1] = buffer;
	return str;
}

static char* uitoa(unsigned long long value, char* buffer)
{
	int i = 0;
	while(value != 0)
	{
		int rem = value % 10;
		buffer[i] = '0'+rem;
		rem /= 10;
	  ++i;
	}
	buffer[i] = '0';
	reverse(buffer);

	return buffer;
}
static char* itoa(long long value, char* buffer)
{
	if(value < 0)
	{
		buffer[0] = '-';
		uitoa(-value, buffer+1);
		return buffer;
	}
	return uitoa(value, buffer);
}


static void print(const char* data, size_t data_length)
{
	for ( size_t i = 0; i < data_length; i++ )
		putchar((int) ((const unsigned char*) data)[i]);
}

int printf(const char* restrict format, ...)
{
	va_list parameters;
	va_start(parameters, format);

	int written = 0;
	size_t amount;
	bool rejected_bad_specifier = false;
	static char buffer[23];

	while ( *format != '\0' )
	{
		if ( *format != '%' )
		{
		print_c:
			amount = 1;
			while ( format[amount] && format[amount] != '%' )
				amount++;
			print(format, amount);
			format += amount;
			written += amount;
			continue;
		}

		const char* format_begun_at = format;

		if ( *(++format) == '%' )
			goto print_c;

		if ( rejected_bad_specifier )
		{
		incomprehensible_conversion:
			rejected_bad_specifier = true;
			format = format_begun_at;
			goto print_c;
		}

		if ( *format == 'c' )
		{
			format++;
			char c = (char) va_arg(parameters, int /* char promotes to int */);
			print(&c, sizeof(c));
		}
		else if ( *format == 's' )
		{
			format++;
			const char* s = va_arg(parameters, const char*);
			print(s, strlen(s));
		}
		else if ( *format == 'p' )
		{
			++format;
			
			itoa((uintptr_t)va_arg(parameters, void*), buffer);
			print(buffer, strlen(buffer));
		}

		else
		{
			goto incomprehensible_conversion;
		}
	}

	va_end(parameters);

	return written;
}
