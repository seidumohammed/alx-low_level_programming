#include <stdio.h>

/**
 * main - prints fibonacci sequence
 * Return: 0
 */
int main(void)
{

	int i;
	unsigned long int a, b, c, d;

	a = 1;
	b = 2;
	d = 0;

	for (i = 1; i <= 33; ++i)
<<<<<<< HEAD
	{	
=======
	{
>>>>>>> 6f3e9d7450e609ddf89183b43272e6fc4129fc05
		if (a < 4000000 && (a % 2) == 0)
		{
			d = d + a;
		}

		c = a + b;
		a = b;
		b = c;
	}

	printf("%lu\n", d);

	return (0);
}
