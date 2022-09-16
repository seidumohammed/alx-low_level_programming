#include "main.h"

/**
 * more_numbers - prints from 0 - 14 ten times
 * Return: 0 for success
 */

void more_numbers(void)
{
	int k, i;

	k = 0;

	while (k < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');

		k++;
	}
}
