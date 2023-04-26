#include "main.h"
/**
 * print_int - prints an int
 * @l: list of arguments
 * Return: the amount of characters
 */
int print_int(va_list l)
{
	int len;

	len = print_number(l);
	return (len);
}
/**
 * print_number - prints a number
 * @ar: list of arguments
 * Return: number of arg
 */
int print_number(va_list ar)
{
	int n, d, len;
	unsigned int num;

	n = va_arg(ar, int);
	d = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / d > 9; )
		d *= 10;
	for (; d != 0; )
	{
		len += _putchar('0' + num / d);
		num %= d;
		d /= 10;
	}
	return (len);
}
