#include "holberton.h"
#include <stdio.h>
/**
 * times_table - prints the last digit of a number
 *
 *  Return: void
 */
void times_table(void)
{
	int i, j, mul, first, last;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = (i * j);
			if (j == 0)
			{
				_putchar(mul + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (mul <= 9)
				{
					_putchar(' ');
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
			}
		}
	}
}
