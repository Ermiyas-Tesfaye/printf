#include "main.h"
/**
 * decimaltoH - decimal to hexa;
 * @num: int value:
 */
void decimaltoH(unsigned int num, int *count)
{
	if (num > 16)
		decimaltoH((num / 16), count);
	if ((num % 16) < 10)
		count += _putchar((num % 16) + 48);
	else
		count += _putchar((num % 16) + 87);
}
