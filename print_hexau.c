#include "main.h"
/**
 * print_hexau - prints an hex
 * @num: arg
 * Return: number of hex
 */
int print_hexau(unsigned long int num)
{
	long int i;
	long int *arr;
	long int count = 0;
	unsigned long int tmp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));

	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 16;
		tmp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] += arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
