#include "main.h"
/**
 * print_int - prints an integer to stdout
 * @n: the integer to print
 * Return: number of characters printed
 */
int print_int(int n)
{
	int ncp = 0;
	char buffer[20]; /* enough to hold any 32-bit integer */

	if (n == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		ncp++;
	}
	else if (n == INT_MIN) /* handle the case for INT_MIN */
	{
		write(STDOUT_FILENO, "-2147483648", 11);
		ncp += 11;
	}
	else
	{
		int i = 0;
		int is_negative = 0;

		if (n < 0)
		{
			is_negative = 1;
			n = -n;
			ncp++;
		}
		while (n != 0)
		{
			buffer[i] = (n % 10) + '0';
			n /= 10;
			i++; }
		if (is_negative)
		{
			buffer[i] = '-';
			i++; }
		while (i > 0)
		{
			i--;
			write(STDOUT_FILENO, &buffer[i], 1);
			ncp++; } }
	return (ncp); }
