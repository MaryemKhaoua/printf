#include "main.h"
/*
 * write_str - Entry Function
 * @str: char
 * @count: int
 * Return: len
 */
int write_str(char *str, int *count)
{
	int len = 0;

	if (str == NULL)
	{
		len = write(1, "(null)", 6);
	}
	else
	{
		while (*str)
		{
			len += write(1, str++, 1);
			(*count)++;
		}
	}
	return (len);
}
