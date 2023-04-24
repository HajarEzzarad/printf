#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct convert - a function that defines a structure
 * for symbols and functions
 * @o: operator
 * @f: function
 */
struct convert
{
	char *o;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int format_reciever(const char *format, conver_t list[], va_list argl);
int print_per(va_list);
int print_int(va_list);
int print_char(va_list);
int print_str(va_list);
int print_bin(va_list);
int print_unsigned_int(va_list);
int print_oct(va_list l);
int print_hex(va_list l);
int print_HEX(va_list l);
int print_STR(va_list val);
int print_pointer(va_list val);
int print_rev(va_list lis);
int print_rot13(va_list l);
int _putchar(char c);

#endif
