#include <stdio.h>
#include "main.h"
/**
 * main - entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(void) argv; /*do not print argv*/
	}
	printf("%d\n", i - 1);
	return (0);
}
