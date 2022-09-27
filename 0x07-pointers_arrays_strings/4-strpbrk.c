#include "main.h"
/**
 * _strpbrk - matches any character specified
 * @s: string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}

			i++;
		}

		s++;
	}
	return (0);

}
