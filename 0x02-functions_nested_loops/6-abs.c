#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @r: parameter to validate
 *
 * Return: 0
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		int b = -1 * r;

		return (b);
	}
}
