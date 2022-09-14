#include <stdio.h>

/**
 * main - prints fibonacci sequence
 * Return: 0 for success
 */
int main(void)
{
	long int a, b, c, d;

	b = 1;

	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		} else
		{
			printf("%ld\n", b);
		}
		d = b + c;
		b = c;
		c = d;
	}

	return (0);
}
