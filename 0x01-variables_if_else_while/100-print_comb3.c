#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Return:  - Code runs successfully)
 */

int main(void)
{
	int i;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (k = 48; k < 58; k++)
		{
			if (i != k && i < k)
			{
				putchar(i);
				putchar(k);
				if (k == 57 && i == 56)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
