#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: contains value to be compared
 * Return:  0 for success
 */
int _islower(int c)

{

	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
