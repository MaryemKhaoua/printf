#include "main.h"
/**
 * _printf - Entry Function
 * @format: char
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list mym; /* used to access each arg passed to the ft after format str */
	int ncp = 0; /* ncp is the number of characters printed */

	va_start(mym, format);
	while (*format != '\0') /* loop until end of format string is reached */
	{
		if (*format == '%') /* found a format specifier */
		{
			format++; /* move past the '%' character */
			if (*format == 'c') /* char format specifier */
			{
				char c = va_arg(mym, int); /* get next arg as int and cast it to char */

				write(STDOUT_FILENO, &c, 1);
				ncp++;
			}
			else if (*format == 's') /* string format specifier */
			{
				char *str = va_arg(mym, char *);

				while (*str != '\0')
				{
					write(STDOUT_FILENO, str, 1);
					str++;
					ncp++;
				}
			}
			else if (*format == '%') /* escaped '%' character */
			{
				write(STDOUT_FILENO, "%", 1);
				ncp++;
			}
		}
		else /* regular character */
		{
			write(STDOUT_FILENO, format, 1);
			ncp++; }
		format++; } /* move on to the next character in the format string */
	va_end(mym);
	return (ncp); }
