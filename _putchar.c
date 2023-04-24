#include "main.h"
/**
 * _putchar - writes a character c
 * @c: character
 * Return: 1 (success), -1 (error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
