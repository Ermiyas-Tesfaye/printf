#include "main.h"
/**
 * decimaltoH - decimal to hexa;
 * @num: int value:
 * @count: pointer to an int
 * @hex: hexadecimal character
 */
void decimaltoH(unsigned int num, int *count, char hex)
{
	if (num > 16)
		decimaltoH((num / 16), count, hex);
	if ((num % 16) < 10)
		count += _putchar((num % 16) + 48);
	else
	{
		if (hex == 'x')
			count += _putchar((num % 16) + 87);
		else
			count += _putchar((num % 16) + 55);
	}
}
