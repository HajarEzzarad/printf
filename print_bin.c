#include "main.h"

/**
 * print_bin - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */

int print_bin(va_list list)
{
	unsigned int num;
	int i, leng;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	leng = len(num, 2);
	str = malloc(sizeof(char) * leng + 1);
	if (str == NULL)
		return (-1);
	
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = reverse_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (leng);
}
