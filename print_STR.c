#include "main.h"

/**
 * print_STR - print exclusuives string.
 * @val: argument
 * Return: the lent$gth of the string
 */

int print_STR(va_list val)
{
	register short len = 0;
	char *res, *s = va_arg(val, char *);
	int count;

	if (!s)
		return (_puts(NULL_STRING));
	for (; *s; s++)
	{
		if(is_non_alpha_num(*s))
		{
			count += _puts("\\x");
			res = convert(*s, 16, 0);
			if (!res[1])
				len += _putchar('0');
			len += _puts(res);
		}
		else
			len += _putchar(*s);
	}
	return (len);
}

/**
 * is_non_alpha_num - determines if char is non-
 * alphanumeric char on ASCII table
 * @c: input char
 * Return: true or false
 */

int is_non_alpha_num(char c)
{
	return ((c > 0 && c < 32) || c >= 127);
}

/**
 * convert - convert number and base into string
 * @n: input number
 * @b: input base
 * @lc: flag if hexa values need to be lowercase
 * Return: result string
 */

char *convert(unsigned long int n, int b, int lc)
{
	static char *rep;
	static char buffer[50];
	char *p;

	rep = (lc)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buffer[49];
	*p = NUL;
	do {
		*--p = rep[n % b];
		n /= b;
	}while (n);

	return (p);
}
