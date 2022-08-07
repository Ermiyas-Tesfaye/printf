#include "main.h"
/**
 * print_d - print integer value
 * @num: intiger value
 * Return: number of characters
 */
int print_d(int num)
{
	int i = 0;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num / 10)
		i = print_d(num / 10);
	_putchar(num % 10 + '0');
	return (i);
}
