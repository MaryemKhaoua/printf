#include "main.h"
#include <stdarg.h>
/**
 * print_percent - prints a percent sign
 * @arg: unused
 *
 * Return: number of characters printed
 */
int print_percent(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
