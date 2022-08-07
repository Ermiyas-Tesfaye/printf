#include "main.h"
/**
 * print_b - convert to binary and print
 * @num: unsigned int that converted to binary
 * Return: number of char printed
 */
int print_b(unsigned int num)
{
	int i = 1;
	if (num != 1)
		i += print_b(num / 2);
	_putchar(num % 2);
	return (i);
}
