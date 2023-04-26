#include "main.h"
/**
 * print_cases - function to handle all format specifiers
 * @format: the format specifier
 * @mym: argument
 * Return: ncp
 */
int print_cases(char format, va_list mym)
{
	int ncp = 0;

	switch (format)
	{
	case 'c':
		ncp += print_character(va_arg(mym, int));
		break;
	case 's':
		ncp += print_str(va_arg(mym, char *));
		break;
	case '%':
		ncp += print_char('%');
		break;
	default:
		ncp += print_char('%');
		ncp += print_char(format);
		break;
	}

	return (ncp);
}
