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

	if (format == NULL)
		return (-1);
	va_start(mym, format);
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0') /* handle an invalid format specifier */
			{
				va_end(mym);
				return (-1);
			}
			ncp += print_cases(format, mym);
		}
		else /* handle regular character */
		{
			write(STDOUT_FILENO, format, 1);
			ncp++;
		}
	}
	va_end(mym);
	return (ncp);
}
