#include "main.h"
/**
 * _strpbrk - matches any character specified
 * @s: string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 * Return: 0 for success
 **/

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (0);
}
