#include "main.h"

/**
 * print_most_numbers - print from 0 - 9 followed by a newline except 2 and 4
 * Return: 0 for success
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
