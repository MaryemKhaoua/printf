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
	va_list mym;
	int ncp = 0;

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
			else if (*format == '%') /* handle escaped % character */
			{
				write(STDOUT_FILENO, "%", 1);
				ncp++;
			}
			else if (*format == 'c') /* handle char format specifier */
			{
				char c = va_arg(mym, int);

				write(STDOUT_FILENO, &c, 1);
				ncp++;
			}
			else if (*format == 's') /* handle string format specifier */
			{
				char *str = va_arg(mym, char *);

				if (str == NULL) /* handle NULL string argument */
				{
					write(STDOUT_FILENO, "(null)", 6);
					ncp += 6;
				}
				else
				{
					while (*str != '\0')
					{
						write(STDOUT_FILENO, str, 1);
						str++;
						ncp++;
					}
				}
			}
			else /* handle an invalid format specifier */
			{
				write(STDOUT_FILENO, "%", 1);
				write(STDOUT_FILENO, format, 1);
				ncp += 2;
			}
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
