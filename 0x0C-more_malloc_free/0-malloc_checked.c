#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - entry Point
 * @b: input
 * Return: pointer to new memomry
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
