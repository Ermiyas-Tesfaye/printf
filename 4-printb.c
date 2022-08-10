#include "main.h"
/**
 * print_b - convert to binary and print
 * @num: unsigned int that converted to binary
 * @count: previous count to be increased
 */
void print_b(unsigned int num, int *count)
{
	if (num > 1)
	{
		print_b(num / 2, count);
	}
	(*count) += _putchar(num % 2 + '0');
}
