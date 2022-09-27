#include "main.h"
/**
 *_memset -   a function taht fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b; /*add 1 position s*/

	}

	return (s);
}
