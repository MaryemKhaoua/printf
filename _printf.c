#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints a formatted string to the console
 * @format: the format string
 * @...: optional arguments
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, count = 0;
	int (*print_fn)(va_list);

	va_start(arg, format);
	while (format && format[i])
	{
		if (format[i] == '%')
			i++;
		print_fn = NULL;
		switch (format[i])
		{
			case 's':
				print_fn = print_str;
				break;
			case 'c':
				print_fn = print_char;
				break;
			case '%':
				print_fn = print_percent;
				break;
			default:
				_putchar('%');
				if (format[i])
					_putchar(format[i]);
				else
					i--;
				count += 2;
				break;
		}
		if (print_fn != NULL)
			count += print_fn(arg);
	}
	else
	{
		_putchar(format[i]);
		count++;
	}
	i++;
}
va_end(arg);
return (count);
}
