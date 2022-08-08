#include "main.h"
/**
 * print_ascii - function for 'u' specifier
 * @num: character
 * @count: pointer
 */
void print_ascii(unsigned int num, int *count)
{
	if (num / 10)
		print_ascii(num / 10, count);
	count += _putchar(num % 10 + '0');
}

