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
			if (format[i + skip] == 'c')
				count += _putchar(va_arg(args, int));
			else if (format[i + skip] == 's')
				count += print_str(va_arg(args, char*));
			else if (format[i + skip] == '%')
				count += _putchar('%');
			else if (format[i + skip] == 'd' || format[i + skip] == 'i')
				count += print_d(va_arg(args, int));
			else if (format[i + skip] == 'b')
				count += print_b(va_arg(args, unsigned int));
			else if (format[i + skip] == '\0')
				count += _putchar('%') + print_space(skip);
			else if (format[i +1 ] != ' ')
				skip = 0;
			else if (format[i + skip] != '\0')
				count += _putchar('%') + print_space(1) + _putchar(format[i + skip]);
			i += skip;
		}
	}
	va_end(args);
	return (count);
}
