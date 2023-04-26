#include "main.h"
/**
 * print_char - print caracter
 *
 * @c: char
 *
 * Return: an integer value of 1 after writing the character passed
 */
int print_char(char c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}
