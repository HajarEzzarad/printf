#include "main.h"
/**
 * format_receiver - a function that receives the main string
 * @format: a string
 * @list: a list
 * @argl: a list containing all the arguments
 * Return: the number of characters
 */
int format_receiver(const char *format, conver_t list[], va_list argl)
{
	int i, j, val, chars;

	chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; list[j].o != NULL; j++)
			{
				if (format[i + 1] == list[j].o[0])
				{
					val = list[j].f(argl);
					if (val == -1)
						return (-1);
					chars = chars + val;
					break;
				}
			}
			if (list[j].o == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					chars += 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			chars++;
		}
	}
	return (chars);
}
