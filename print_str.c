#include "main.h"
#include <stdarg.h>

/**
 * print_str - prints a string
 * @arg: va_list containing the string to print
 *
 * Return: number of characters printed
 */
int print_str(va_list arg)
{
        char *str = va_arg(arg, char *);
        int i = 0;

        if (str == NULL)
                str = "(null)";
        while (str[i])
        {
                _putchar(str[i]);
                i++;
        }
        return (i);
}
