#include "main.h"
/**
 * print_char - a function that prints the character
 * @l: list of arguments
 * Return: the characters printed
 */
int print_char(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
