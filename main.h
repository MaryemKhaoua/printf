#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int write_char(char c, int *count);
int write_str(char *str, int *count);
int handle_specifier(char spec, va_list args, int *count);

#endif
