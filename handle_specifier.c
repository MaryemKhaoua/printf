#include "main.h"
/*
 * handle_specifier - Entry point for handling a specific character specifier.
 * @spec: The character specifier to handle.
 * @args: The variable argument list.
 * @count: A pointer to the counter of characters printed.
 * Return: The number of characters printed.
 */
int handle_specifier(char spec, va_list args, int *count)
{
	if (spec == 'c')
	{
		char c = va_arg(args, int);

		return (write_char(c, count));
	}
	else if (spec == 's')
	{
		char *str = va_arg(args, char *);

		return (write_str(str, count));
	}
	else if (spec == '%')
	{
		return (write_char('%', count));
	}
	else
	{
		return (write_str(&spec, count));
	}
}
