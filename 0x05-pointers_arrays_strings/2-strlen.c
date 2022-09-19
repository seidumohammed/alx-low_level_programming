#include "main.h"
/**
*_strlen - return length of a given string
*@s: param
*Return: 0 for success
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
