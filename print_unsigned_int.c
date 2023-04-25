#include "main.h"
/**
 * print_unsigned_int - prints unsigned int
 * @l: list of args
 * Return: a count of the numbers
 */
int print_unsigned_int(va_list l)
{
	unsigned int n;

	n = va_arg(l, unsigned int);

	if (n == 0)
		return (print_unsigned_number(n));
	if (n < 1)
		return (-1);
	return (print_unsigned_number(n));
}
/**
 * print_unsigned_number - prints an unsigned number
 * @n: unsigned int
 * Return: number
 */
int print_unsigned_number(unsigned int n)
{
	int d, len;
	unsigned int num;

	d = 1;
	len = 0;

	num = n;

	for (; div != 0; )
	{
		len += _putchar('0' + num / d);
		num %= d;
		d /= 10;
	}
	return (len);
}
