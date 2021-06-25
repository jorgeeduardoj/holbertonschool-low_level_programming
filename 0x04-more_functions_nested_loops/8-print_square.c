#include "holberton.h"
/**
 * print_square - prints a square
 * @size: number of times the character _ should be printed
 * Return:  void
 */
void print_square(int size)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar('$');
			}
			_putchar('\n');
		}
	}
}
