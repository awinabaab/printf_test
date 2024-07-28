#include <unistd.h>
#include <stdarg.h>
#include "main.h"

#define BUF_SIZE 1024

/**
 * print_char - Prints a character to standard output
 * @c: Character to be printed
 *
 * Return: Number of character printed
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Prints a string to standard output
 * @str: Strin to be printed
 *
 * Return: Number of characters printed
 */
int print_string(const char *str)
{
	int count;

	for (count = 0; *str; count++)
		print_char(*str++);
	return (count);
}

/**
 * print_int - Convert an int to a string and write it to standard output
 * @num: Number to be converted and printed
 *
 * Return: Number of characters printed
 */
int print_int(int num)
{
	char buf[BUF_SIZE];
	int index = BUF_SIZE - 1;
	int is_negative = 0;

	if (num < 0)
	{
		num = -num;
		is_negative = 1;
	}

	buf[index--] = '\0';

	do {
		buf[index--] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);

	if (is_negative)
		buf[index--] = '-';

	return (print_string(&buf[index + 1]));
}

/**
 * print_hex_oct_lower - Converts a hex to a string and write it to standard output
 * @num: Number to be converted and printed
 *
 * Return: Number of characters printed
 */
int print_hex_oct_lower(unsigned int num, int base)
{
	char buf[BUF_SIZE];
	int index = BUF_SIZE - 1;
	const char hex_chars[] = "0123456789abcdef";

	buf[index--] = '\0';

	do {
		buf[index--] = hex_chars[num % base];
		num /= base;
	} while (num > 0);

	return (print_string(&buf[index + 1]));
}

/**
 * print_hex_upper - Converts a hex to a string and write it to standard output
 * @num: Number to be converted and printed
 *
 * Return: Number of characters printed
 */
int print_hex_upper(unsigned int num)
{
	char buf[BUF_SIZE];
	int index = BUF_SIZE - 1;
	const char hex_chars[] = "0123456789ABCDEF";

	buf[index--] = '\0';

	do {
		buf[index--] = hex_chars[num % 16];
		num /= 16;
	} while (num > 0);

	return (print_string(&buf[index + 1]));
}
