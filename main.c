#include "main.h"


int main(void)
{
	int num = -123;
	char *str = "Hello, world!";
	char ch = 'A';
	unsigned int hex_num = 0xdeadbeef;
	unsigned int hex_upper = 0xdEAdBEEF;
	unsigned int oct = 012;
	int count = 0;


	count = _printf("Integer: %d\nString: [%s]\nChar: %c\nHex lower: %x\nHex upper: %X\nOct: %o\nHtoD: %d\n",
			num, str, ch, hex_num, hex_upper, oct, hex_num);
	_printf("Number of characters printed: %d\n", count);
	return (0);
}
