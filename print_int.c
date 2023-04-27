#include "main.h"
/**
 * print_integer - a function that prints an integer similar to printf
 * @n: the integer to be printed
 * Return: the number of characters printed
 */
int print_integer(int n)
{
	char buffer[20];
	int len = snprintf(buffer, 20, "%d", n);

	write(STDOUT_FILENO, buffer, len);
	return (len);
}
