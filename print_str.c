#include "main.h"
/**
 * print_str - function to print a string
 * @str: the string to print
 * Return: i
 */
int print_str(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		putchar(*(str + i));
		i++;
	}
	return (i);
}
