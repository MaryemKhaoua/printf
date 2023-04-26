#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(char *str);
int print_char(char c);
int print_cases(const char *format, va_list mym);
int print_int(int n);

#endif
