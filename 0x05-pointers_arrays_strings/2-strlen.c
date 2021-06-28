#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; i <= 100000; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}
	return (i);
}
