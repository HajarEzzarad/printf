#include "main.h"
/**
 * print_str - printes a string
 * @l: list of arguments
 * Return: the amout of string printed
 */
int print_str(va_list l)
{
	int i;
	char *s;

	s = va_arg(l, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
