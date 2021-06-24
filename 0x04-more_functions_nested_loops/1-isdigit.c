#include "holberton.h"
/**
 * _isdigit -  checks for uppercase character
 * @c: letter to be evaluated
 * Return:  1 if is upper || 0 if is not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
