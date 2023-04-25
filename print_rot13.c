#include "main.h"
/**
 * print_rot13 - prints a string using rot13
 * @l: list of args
 * Return: length of the string
 */
int print_rot13(va_list l)
{
	int i;
	int j;
	char *s;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWZabcdefghijklmnopqrstuvwxyz";
	char r[]="NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(l, char *);
	if (s == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == s1[j])
			{
				_putchar(r[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(s[i]);
	}
	return (i);
}
