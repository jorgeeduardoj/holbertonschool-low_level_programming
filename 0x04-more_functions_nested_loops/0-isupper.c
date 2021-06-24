#include "holberton.h"
/**
 * _isupper -  checks for uppercase character
 *@c: letter to be evaluated
 * Return:  1 if is upper || 0 if is not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
