#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints a character
 * @arg: va_list containing the character to print
 *
 * Return: number of characters printed
 */
int print_char(va_list arg)
{
        _putchar(va_arg(arg, int));
        return (1);
}
