#include "main.h"

/**
 * _puts_recursion - function that prints string followed new line
 * @s: input
 * Return: 0 for success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
