#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k != 'q' && k != 'e')
			putchar(k);
	}
	putchar('\n');
	return (0);
}
