#include "main.h"
/**
 * print_cases - handles different format specifiers for printf
 * @format: the format string
 * @mym: va_list object containing the variable arguments
 * Return: number of characters printed
 */
int print_cases(const char *format, va_list mym)
{
	int ncp = 0;

	switch (*format)
	{
		case '%': /* handle escaped % character */
			write(STDOUT_FILENO, "%", 1);
			ncp++;
			break;
		case 'c': /* handle char format specifier */
			ncp += print_char(va_arg(mym, int));
			break;
		case 's': /* handle string format specifier */
			ncp += print_str(va_arg(mym, char *));
			break;
		case 'd': /* handle decimal format specifier */
		case 'i':
			ncp += print_int(va_arg(mym, int));
			break;
		default: /* handle an invalid format specifier */
			write(STDOUT_FILENO, "%", 1);
			write(STDOUT_FILENO, format, 1);
			ncp += 2;
			break;
	}
	return (ncp);
}
