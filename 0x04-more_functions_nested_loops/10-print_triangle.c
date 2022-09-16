#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: parameter
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 0, k, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				if (k < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
