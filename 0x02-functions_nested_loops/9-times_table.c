#include "holberton.h"
#include <stdio.h>
/**
 * times_table - prints the last digit of a number
 *
 *  Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int mul;
	int first;
	int last;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = (i * j);
			if (mul <= 9)
			{
				_putchar(mul + '0');
			}
			else
			{
				first = (mul / 10) + '0';
				last = (mul % 10) + '0';
				_putchar(first);
				_putchar(last);
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
