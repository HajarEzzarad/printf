#include "main.h"
/**
 * len - calculates the length
 * @n: the number
 * @b: base
 * Return: the length of number
 */
unsigned int len(unsigned int n, int b)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		n /= b;
	}
	return (i);
}
/**
 * reverse_string - reverses a string
 * @str: string
 * Return: a pointer
 */
char *reverse_string(char *str)
{
	int len, j;
	char tmp, *dest;

	for (len = 0; str[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, str, len);
	for (j = 0; j < len; j++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[j];
		dest[j] = tmp;
	}
	return (dest);
}
/**
 * write_base - writes a base
 * @s: string
 */
void write_base(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: the number
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int  n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * hex_check - checks hex function is calling it
 * @n: number
 * @x: hex function is calling it or no
 * Return: ascii
 */
int hex_check(int n, char x)
{
	char *hex = "abcdef";
	char *HEX = "ABCDEF";

	n = n - 10;
	if (x == 'x')
		return (hex[n]);
	else
		return (HEX[n]);
	return (0);
}
