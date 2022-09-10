#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char i;
	char k;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
