#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_str - print a string
 * @str: given string
 * Return: number of characters
 */
int print_str(char *str)
{
	int i = 0;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; ++i)
			_putchar(str[i]);
	}
	else
		i += print_str("(null)");
	return (i);
}
/**
 * _printf - function work like a standard printf function
 * @format: format to dermine function variable
 * Return: number of character
 */
int _printf(const char *format, ...)
{
	int count = 0, i, skip;
	va_list args;

	if (!format)
		return (-1);
#include "_printf.h"
	return (count);
}
/**
 * Description - a copy of the _printf.h code
*	va_start(args, format);
*	for (i = 0; format[i] != '\0'; i++)
*	{
*		if (format[i] != '%')
*			count += _putchar(format[i]);
*		else if (format[i] == '%')
*		{
*			for (skip = 1; format[i + skip] == ' ';)
*				skip++;
*			if (format[i + skip] == 'c')
*				count += _putchar(va_arg(args, int));
*			else if (format[i + skip] == 's')
*				count += print_str(va_arg(args, char*));
*			else if (format[i + skip] == 'R')
*				count += print_rot13(va_arg(args, char*));
*			else if (format[i + skip] == 'r')
*				count += print_rev_str(va_arg(args, char*));
*			else if (format[i + skip] == '%')
*				count += _putchar('%');
*			else if (format[i + skip] == 'd' || format[i + skip] == 'i')
*				count += print_d(va_arg(args, int));
*			else if (format[i + skip] == 'b')
*				print_b(va_arg(args, unsigned int), &count);
*			else if (format[i + skip] == '\0')
*				count += _putchar('%') + print_space(skip);
*			else if (format[i + skip] == 'u')
*				print_ascii(va_arg(args, unsigned int), &count);
*			else if (format[i + skip] == 'o')
*				decimaltoO(va_arg(args, unsigned int), &count);
*			else if (format[i + skip] == 'x' || format[i + skip] == 'X')
*				decimaltoH(va_arg(args, unsigned int), &count, format[i + skip]);
*			else
*				count += _putchar('%') + _putchar(format[i + skip]);
*			i++;
*		}
*	}
*	va_end(args);
*/
