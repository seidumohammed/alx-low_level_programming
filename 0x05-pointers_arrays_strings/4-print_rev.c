#include "main.h"

/**
 *print_rev - prints a string in reverse order followed by newline
 *@s: param
 *Return: 0 for success
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
