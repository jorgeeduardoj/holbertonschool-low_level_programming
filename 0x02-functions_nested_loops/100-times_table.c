#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 *
 * @n: input of number of tables
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, mul;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j == 0)
				{
					printf("%d", mul);
				}
				else if (mul <= 9)
				{
					printf(",   %d", mul);
				}
				else if (mul <= 99)
				{
					printf(",  %d", mul);
				}
				else if (mul <= 999)
				{
					printf(", %d", mul);
				}
				if (j == n)
				{
					printf("\n");
				}
					
				if (mul == n * n)
				{
					printf("\n");
				}
			}
		}
	}
}
