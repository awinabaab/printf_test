#include "../main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int main(void)
{
	int num = 9;
	int neg = -7;
	char *str = "{Hello, world]!";
	char ch = 'X';
	int count;
/*	unsigned int u_num = 456; */
/*  unsigned int hex_num = 0xdeadbeef; */
/*	unsigned int hex_upper = 0xDEAFBEEF; */

	count = _printf("%d", num);
	_printf("%d\n\n", count);
	count = _printf("hey [[[]]]fit[%d]\n\n", neg);
	_printf("%d\n\n", count);
	count = _printf("%i\n", num);
	_printf("%d\n\n", count);
	count = _printf("%c", ch);
	_printf("%d\n\n", count);
	count = _printf("%s\n", str);
	_printf("%d\n\n", count);
	count = _printf("%%\n");
	_printf("%d\n\n", count);
	count = _printf("(Hello)");
	_printf("%d\n\n", count);
	count = _printf("Hi we are testing %c Hi we are testing %d Hi we are testing %d Hi we are testing %d Hi we are testing %d Hi we are testing %c Hi we are testing\n", ch, neg, num, neg, num, ch);
	_printf("Number of characters %d\n", count);

/*	_printf("Integer: %d\nUnsigned: %u\nString: %s\nChar: %c\nHex lower: %x\nHex upper: %X\n", num, str, ch); */
	return (0);
}
