#include "main.h"
/**
 * _puts - prints a string followed by newline
 * @str: param
 * Return: for success
 */

void _puts(char *str)
{
	int  j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}
