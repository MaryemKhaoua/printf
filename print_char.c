#include "main.h"
/**
 * print_char - prints a character to stdout
 * @c: the character to print
 * Return: number of characters printed
 */
int print_char(char c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}
