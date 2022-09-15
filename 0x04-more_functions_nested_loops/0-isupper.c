#include "main.h"

/**
 * _isupper - checks for uppercase and print 1 otherwise prints 0
 * @c: parameter
 * Return: 0 for success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
