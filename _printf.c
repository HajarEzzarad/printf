#include "main.h"
/**
 * _printf - a function that receives the main string
 * @format: a string containing all the characters
 * Return: a total of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t list[] = {
		{"%", print_per},
		{"i", print_int},
		{"d", print_int},
		{"s", print_str},
		{"c", print_char},
		{"o", print_oct},
		{"p", print_pointer},
		{"X", print_HEX},
		{"u", print_unsigned_int},
		{"S", print_STR},
		{"b", print_bin},
		{"r", print_rev},
		{"R", print_rot13},
		{"x", print_hex},
		{NULL, NULL},
	};
	va_list argl;

	if (format == NULL)
		return (-1);

	va_start(argl, format);
	printed_chars = format_receiver(format, list, argl);
	va_end(argl);
	return (printed_chars);
}
