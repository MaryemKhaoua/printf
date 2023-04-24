#include "main.h"
/*
 * write_char - Entry Function
 * @c: char
 * @count: int
 * Return: the integer value 1 as its output
 */
int write_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
	return (1);
}
