#include <stdarg.h>
#include "main.h"

/**
 * _printf - Format and print data
 * @format: Format string to be printed
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += format_parser(format, args);
		}
		else
			count += print_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}
