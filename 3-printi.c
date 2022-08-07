#include "main.h"
/**
 * _printi - convert the base and print
 * @num: the given number in different radiux
 * Return: number of character
 */
int _printi(int num)
{
	int decimal_d = 0;
	int base = 1;

	while (num != 0)
	{
		decimal_d += (num % 10) * base;
		num /= 10;
		base *= 8;
	}
	return (decimal_d);
}
int _printi(int num)
{
	
}
