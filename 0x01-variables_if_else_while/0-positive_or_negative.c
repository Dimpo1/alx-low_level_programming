#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program assigns a random number to the variable n each time
 * it is executed, and then prints whether the number is positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));  /* Seed rand() with current time */

    n = rand() - RAND_MAX / 2;  /* Generate a random number */

    printf("The number %d ", n);

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}
