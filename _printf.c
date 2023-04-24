#include "main.h"
/**
 * _printf - Entry Function
 * @format: char
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list mym;
	int count = 0;

	va_start(mym, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				va_end(mym);
				return (-1);
			}
			count += handle_specifier(*format, mym, &count);
		}
		else
		{
			count += write_char(*format, &count);
		}
		format++;
	}
	va_end(mym);
	return (count);
}
