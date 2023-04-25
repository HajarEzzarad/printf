#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @lis: argument from _printf
 * Return: length of the printed string
 */

int print_rev(va_list lis)
{
	int i = 0, j;
	char *s = va_arg(lis, char *);

	if (!s)
		s = "(null)";

	while (s[i])
		i++;


	for (j = i - 1; j>= 0; j--)
		_putchar(s[j]);


	return (i);
}
