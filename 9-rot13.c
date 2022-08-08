#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * rot13 - print an alphabet encrypted in rot-13
 * @c: the inputted alphabet
 * Return: alway 1;
 */
int rot13(char c)
{
	char *arr = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *arr2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;

	while (arr[i] != '\0')
	{
		if (arr[i] == c)
		{
			_putchar(arr2[i]);
			break;
		}
		i++;
	}
	return (1);
}
/**
 * print_str - print a string
 * @str: given string
 * Return: number of characters
 */
int print_rot13(char *str)
{
	int i = 0;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; )
		{
			if ((str[i] >= 'a'&& str[i] <= 'z') || (str[i] >= 'A'&& str[i] <= 'Z') )
				i += rot13(str[i]);
			else
				i += _putchar(str[i]);
		}
	}
	else
	{
		i += print_rot13("(null)");
	}
	return (i);
}
