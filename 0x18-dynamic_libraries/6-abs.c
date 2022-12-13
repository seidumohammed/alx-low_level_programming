#include "main.h"
#include <stdio.h>

/**
 * _abs - value absolute
 *
 * @n: The integer to print
 * Return: 0 for success
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}

}
