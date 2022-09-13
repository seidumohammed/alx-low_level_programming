#include "main.h"

/**
 * _isalpha - checks if c is a letter,lowercase or uppercase
 *
 * @c: arg for the function _isalpha
 * Return:  0 for success
 */

int _isalpha(int c)

{

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
