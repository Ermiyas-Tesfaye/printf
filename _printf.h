#ifndef PRINTF_H
#define PRINTF_H
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
			else if (format[i + skip] == 'R')
				count += print_rot13(va_arg(args, char*));
			else if (format[i + skip] == 'r')
				count += print_rev_str(va_arg(args, char*));
			else if (format[i + skip] == '%')
				count += _putchar('%');
			else if (format[i + skip] == 'd' || format[i + skip] == 'i')
				count += print_d(va_arg(args, int));
			else if (format[i + skip] == 'b')
				print_b(va_arg(args, unsigned int), &count);
			else if (format[i + skip] == '\0')
				count += _putchar('%') + print_space(skip);
			else if (format[i + skip] == 'u')
				print_ascii(va_arg(args, unsigned int), &count);
			else if (format[i + skip] == 'o')
				decimaltoO(va_arg(args, unsigned int), &count);
			else if (format[i + skip] == 'x' || format[i + skip] == 'X')
				decimaltoH(va_arg(args, unsigned int), &count, format[i + skip]);
			else
				count += _putchar('%') + _putchar(format[i + skip]);
			i++;
		}
	}
	va_end(args);
#endif
