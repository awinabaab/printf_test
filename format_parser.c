#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * format_parser - Parses a format string and executes the appropriate function
 * @format: Format to be parsed
 *
 * Return: void
 */

int format_parser(const char *format, va_list args)
{
	char ch;
	char *str;
	int num;
	unsigned int number;
	int count = 0;

	switch (*format)
	{
		case '%':
			count = print_char('%');
			break;
		case 'c':
			ch = va_arg(args, int);
			count = print_char(ch);
			break;
		case 's':
			str = va_arg(args, char *);
			count = print_string(str);
			break;
		case 'd':
			num = va_arg(args, int);
			count = print_int(num);
			break;
		case 'i':
			num = va_arg(args, int);
			count = print_int(num);
			break;
		case 'x':
			number = va_arg(args, unsigned int);
			count = print_hex_oct_lower(number, 16);
			break;
		case 'X':
			number = va_arg(args, unsigned int);
			count = print_hex_upper(number);
			break;
		case 'o':
			number = va_arg(args, unsigned int);
			count = print_hex_oct_lower(number, 8);
			break;
		default:
			print_string("Format specifier not found\n");
			break;
	}
	return (count);
}
