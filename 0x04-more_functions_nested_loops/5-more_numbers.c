#include "holberton.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return:  void
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (j == 1 && k <= 4)
				{
					_putchar(j + '0');
				}
				if (j == 0 || (j == 1 && k <= 4))
				{
					_putchar(k + '0');
				}
			}
		}
		_putchar('\n');
	}
}
