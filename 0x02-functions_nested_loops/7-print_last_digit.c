#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: parameter to validate
 *
 * Return: 0
 */

int print_last_digit(int r)
{
	int last = r % 10;

	if (last >= 0)
	{
		_putchar(last + '0');
	}
	else
	{
		last = -1 * last;
		_putchar(last + '0');
	}
	return (last);
}
