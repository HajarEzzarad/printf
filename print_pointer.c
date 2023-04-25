#include "main.h"

/**
 * print_pointer - prints an hexdecimal number
 * @val: arguments
 * Return: Counter.
 */

int print_pointer(va_list val)
{
	void *p;
	char *c = "(nil)";
	long int l;
	int n, i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			_putchar(c[i]);
		}
		return (i);
	}
	 l = (unsigned long int)p;
	 _putchar('0');
	 _putchar('x');
	 n = print_hexau(l);
	 return (n + 2);

}
