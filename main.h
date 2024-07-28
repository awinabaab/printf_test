#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(const char *s);
int print_int(int num);
int print_hex_oct_lower(unsigned int, int);
int print_hex_upper(unsigned int);
int format_parser(const char *format, va_list args);

#endif /* ifndef MAIN_H */
