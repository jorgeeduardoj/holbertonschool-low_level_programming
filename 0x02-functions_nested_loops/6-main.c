#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(45);
    printf("%d\n", r);
    r = _abs(-121);
    printf("%d\n", r);
    r = _abs(9);
    printf("%d\n", r);
    return (0);
}
