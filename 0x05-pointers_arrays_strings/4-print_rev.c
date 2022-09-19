#include "main.h"

/**
 *print_rev - prints a string in reverse order followed by newline
 *@s: param
 *Return: 0 for success
 */

void print_rev(char *s)
{
	int count = 0, i;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (i = count - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
