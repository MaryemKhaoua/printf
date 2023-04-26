#include "main.h"
/**
 * print_str - prints a string to stdout
 * @str: the string to print
 * Return: number of characters printed
 */
int print_str(char *str)
{
	int ncp = 0;

	if (str == NULL) /* handle NULL string argument */
	{
		write(STDOUT_FILENO, "(null)", 6);
		ncp += 6;
	}
	else
	{
		while (*str != '\0')
		{
			write(STDOUT_FILENO, str, 1);
			str++;
			ncp++;
		}
	}
	return (ncp);
}
