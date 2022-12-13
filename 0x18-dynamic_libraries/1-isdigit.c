#include "main.h"
/**
 *_isdigit - checks for digit through 0 - 9
 *@c: parameter
 *Return: 0 for success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
