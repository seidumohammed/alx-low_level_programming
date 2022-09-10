#include <stdlib.h>
#include <time.h>
#include <sdtio.h>
/* more headers goes here */

/**
 * main - Entry point
 * Description - Prints if random generated number is positive,zero,negative
 * Return: Always 0 (Success)
 */
int main(void)
{       int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n < 0)
                printf("%d is negative\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is positive\n", n);
        return (0);

