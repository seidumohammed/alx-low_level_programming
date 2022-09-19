#include "main.h"
/**
 * _puts - prints a string followed by newline
 * @str: param
 * Return: for success
 */

void _puts(char *str)
{
	int  a = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
