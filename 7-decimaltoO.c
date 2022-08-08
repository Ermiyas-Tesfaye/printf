#include "main.h"
/**
 * decimaltoO - decimal to octal
 * @num: int value
 * @count: pointer to an int
 */
void decimaltoO(unsigned int num, int *count)
{
	if (num > 7)
	{
		decimaltoO(num / 8, count);
		count++;
	}
	_putchar((num % 8) + '0');
}
