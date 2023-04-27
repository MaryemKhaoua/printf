#include "main.h"
/**
 * print_int - Entry Point
 * @n: integer
 * @count: pointer to count variable
 * Return: 0 (Success)
 */
int print_int(int n, int *count)
{
	unsigned int c;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		*count += 2;
		print_int(147483648, count);
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		*count += 1;
		print_int(n, count);
	}
	else if (n < 10)
	{
		c = n + 48;
		_putchar(c);
		*count += 1;
	}
	else
	{
		print_int(n / 10, count);
		print_int(n % 10, count);
	}
	return (0);
}
