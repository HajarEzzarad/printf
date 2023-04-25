#include "main.h"
/**
 * print_oct - prints the num in octal base
 * @l: list of args
 * Return: number of num in oct
 */
int print_oct(va_list l)
{
	unsigned int n;
	int leng;
	char *oc;
	char *rev_str;

	n = va_arg(l, unsigned int);

	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);
	leng = len(n, 8);

	oc = malloc(sizeof(char) * leng + 1);
	if (oc == NULL)
		return (-1);
	for (leng = 0; n > 0; leng++)
	{
		oc[leng] = (n % 8) + 48;
		n = n / 8;
	}
	oc[leng] = '\0';
	rev_str = rev_string(oc);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(oc);
	free(rev_str);
	return (leng);
}
