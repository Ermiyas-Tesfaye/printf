#include "main.h"
/**
 * print_space - print space
 * @skip: iteration base
 * Return: number of space
 */
int print_space(int skip)
{
	int i = 0;

	while (i < skip)
	{
		_putchar(' ');
		i++;
	}
	return (i);
}
