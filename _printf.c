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

/**
 * _printf - prints a formatted string to the console
 * @format: the format string
 * @...: optional arguments
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
        va_list arg;
        int i = 0, count = 0;
        int (*print_fn)(va_list);

        va_start(arg, format);

        while (format && format[i])
        {
                if (format[i] == '%'){
                        i++;
                        print_fn = NULL;
                        switch (format[i])
                        {
                                case 's':
                                        print_fn = print_str;
                                        break;
                                case 'c':
                                        print_fn = print_char;
                                        break;
                                case '%':
                                        print_fn = print_percent;
                                        break;
                                default:
                                        _putchar('%');
                                        if (format[i])
                                                _putchar(format[i]);
                                        else
                                                i--;
                                        count += 2;
                                        break;
                        }

                        if (print_fn != NULL)
                                count += print_fn(arg);
                }
                else
                {
                        _putchar(format[i]);
                        count++;
                }
                i++;
        }

        va_end(arg);
        return (count);
}

