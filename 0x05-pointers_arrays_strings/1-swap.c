#include "main.h"
/**
 *swap_int - swap values of two variables a,b
 *@a: - param 1
 *@b: - param 2
 *Return: 0 for success
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
