#include "holberton.h"
#include <stdio.h>
/**
 * jack_bauer - prints the last digit of a number
 *
 *  Return: void
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(':');
					putchar(k);
					putchar(l);
					if (i == '2' && j == '3' && k == '5' && l == '9')
					{
						putchar('\n');
						return;
					}
					putchar('\n');
				}
			}
		}
	}
}
