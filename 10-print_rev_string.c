#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_rev_str - print a string in reverse
 * @str: given string
 * Return: number of characters
 */
int print_rev_str(char *str)
{
	int i = 0;
	int len;

	if (str != NULL)
	{
		len = strlen(str);
		while (len != 0)
		{
			i += _putchar(str[len - 1]);
			len--;
		}
	}
	else
	{
		i += print_str("(null)");
	}
	return (i);
}
