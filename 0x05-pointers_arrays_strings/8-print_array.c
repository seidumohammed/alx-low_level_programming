#include "main.h"
#include <stdio.h>

/**
 * print_array - elements of an array of given integers
 * @a: param 1
 * @n: param 2
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
