#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_percent(va_list arg __attribute__((unused)));
int print_str(va_list arg);
int print_char(va_list arg);

#endif
