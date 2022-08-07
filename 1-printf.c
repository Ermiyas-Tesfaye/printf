#include "main.h"
#include <stdarg.h>
/**
 * print_str - print a string
 * @str: given string
 * Return: number of characters
 */
int print_str(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; )
		i += _putchar(str[i]);
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

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else if (format[i] == '%')
		{
			for (skip = 1; format[i + skip] == ' ';)
				skip++;
			switch (format[i + skip])
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += print_str(va_arg(args, char*));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
					count += print_d(va_arg(args, int));
					break;
				case 'i':
					count += print_i(va_arg(args, int));
					break;
				case 'b':
					count += print_b(va_arg(args, unsigned int));
					break;
				default:
					count += _putchar('%') + _putchar(format[i + skip]);
					break;
			} i++;
		}
	}
	va_end(args);
	return (count);
}
