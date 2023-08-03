#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = iter_sqrt(1);
    printf("%d\n", r);
    r = iter_sqrt(1024);
    printf("%d\n", r);
    r = iter_sqrt(16);
    printf("%d\n", r);
    r = iter_sqrt(17);
    printf("%d\n", r);
    r = iter_sqrt(25);
    printf("%d\n", r);
    r = iter_sqrt(-1);
    printf("%d\n", r);
    return (0);
}
