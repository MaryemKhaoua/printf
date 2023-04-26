#include "main.h"
/**
 * _printf - prints a formatted string to the console
 * @format: the format string
 * @...: optional arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list mym;
	int ncp = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(mym, format);
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			ncp += print_cases(*format, mym);
		}
		else
		{
			ncp += print_char(*format);
		}
	}
	va_end(mym);
	return (ncp);
}
