#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)

{
	int k = 0;
	int sum = 0;

	while (k < 1024)
	{
		if (k % 3 == 0 || k % 5 == 0)
		{
			sum += k;
		}
		k++;
	}
	printf("%i\n", sum);
	return (0);
}
