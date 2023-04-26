#include "main.h"

/**
 * printf_hex - Prints a representation of a decimal
 * number on base 16 lowercase
 * @l: List of the arguments passed to the function
 * Return: Number of caractres printed
 */

int print_hex(va_list l)
{
	unsigned int num;
	int leng, rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(l, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	leng = len(num, 16);
	hex_rep = malloc(sizeof(char) * leng +1);
	if (hex_rep == NULL)
		return (-1);
	for (leng = 0; num > 0; leng++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[leng] = rem_num;
		}
		else
			hex_rep[leng] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[leng] = '\0';
	rev_hex = reverse_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (leng);
}
