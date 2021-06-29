#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string
 * Return: length of a string
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char inv[500];

	while (s[i] != '\0')
	{
		inv[i] = s[i];
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		s[j] = inv[i];
		j++;
		i--;
	}
}
