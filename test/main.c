#include "../main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int main(void)
{
	int num = -123;
	char *str = "Hello, world!";
	char ch = 'A';
	int count;
/*	unsigned int u_num = 456; */
/*  unsigned int hex_num = 0xdeadbeef; */
/*	unsigned int hex_upper = 0xDEAFBEEF; */

	count = _printf("%d\n", num);
	_printf("%d\n", count);
	count = _printf("%i\n", num);
	_printf("%d\n", count);
	count = _printf("%c\n", ch);
	_printf("%d\n", count);
	count = _printf("%s\n", str);
	_printf("%d\n", count);
	count = _printf("%%\n");
	_printf("%d\n", count);
	count = _printf("%s\n", "Hello World!");
	_printf("%d\n", count);
	count = _printf("%c\n", 'c');
	_printf("%d\n", count);
	count = _printf("Hello!\n");
	_printf("%d\n", count);
	count = _printf("%\n");
	_printf("%d\n", count);
	count = _printf("Hi %d, how %i, wh %c, hn %s, ij %%\n", num, num, ch, str);
	_printf("%d\n", count);
	
/*	_printf("Integer: %d\nUnsigned: %u\nString: %s\nChar: %c\nHex lower: %x\nHex upper: %X\n", num, str, ch); */
	return (0);
}
