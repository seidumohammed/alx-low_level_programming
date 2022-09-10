#include <stdio.h>

/**
 * main - Entry point of program
 * Return: Always 0 (Runs successfully)
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
